#include <filesystem>
#include <optional>
#include <iostream>
#include <stdio.h>

#include "Vtb.h"
#include "Vtb__Dpi.h"
#include "Vtb__Syms.h"
#include "svdpi.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include "dap/io.h"
#include "dap/optional.h"
#include "dap/protocol.h"
#include "dap/session.h"
#include "dap/typeinfo.h"
#include "dap/typeof.h"
#include "dap/variant.h"

#include "base64.h"
#include "dapDefines.h"
#include "hasMember.h"
#include "mem.h"
#include "pcToLine.h"

class sim_t {
public:
  // Verilator model
  VerilatedContext *g_ctx = NULL;
  VerilatedVcdC *g_vcd = NULL;
  Vtb *g_top = NULL;
  // Required things for getting the file and line number
  PcToLine pcToLine;
  std::string file;
  // Running state
  bool running = false;
  // Breakpoints
  std::unordered_map<std::string, std::unordered_map<int, bool>> breakpoints;
  // logging
  bool log = false;
  

  // outputs
  dap::ledArray ledArray;
  dap::sevenSegment sevenSegment;
  // inputs
  dap::JoyStick joyStick;
  dap::Buttons buttons;
  dap::optional<dap::integer> dipSwitches;

  enum class Event { BreakpointHit, Stepped, Paused, BoardUpdate, Output };
  using EventHandler = std::function<void(Event, std::optional<std::string>)>;

  sim_t(bool debug = false) {
    g_ctx = new VerilatedContext();
    g_vcd = new VerilatedVcdC();
    g_top = new Vtb(g_ctx);

    g_ctx->commandArgs(0, (const char **)NULL);
    g_ctx->assertOn(false);
    g_ctx->randReset(2);
    g_ctx->traceEverOn(true);

    // for dpi functions
    log = debug;
  }

  void registerEventHandlers(const EventHandler &handler) {
    this->onEvent = handler;
  }

  ~sim_t() {
    g_top->final();
    g_vcd->close();

    delete g_top;
    delete g_vcd;
    delete g_ctx;
  }

  void clearBreakpoints() { breakpoints.clear(); }

  bool addBreakpoint(std::string file, int line) {
    if (pc() == 0) {
      return false;
    }
    if (breakpoints.find(file) == breakpoints.end()) {
      breakpoints[file] = std::unordered_map<int, bool>();
    }
    breakpoints[file][line] = true;
    return true;
  }

  bool breakpointHit() {
    if (pc() == 0) {
      return false;
    }
    auto file = getFile();
    auto line = getLine();
    if (breakpoints.contains(file) && breakpoints[file].contains(line)) {
      return true;
    } else {
      return false;
    }
  }

  void setState(dap::SetStateRequest req) {
    // board output state
    if (req.ledArray.r) {
      VlWide<4> r = convertToVlWide(req.ledArray.r.value());
      get_led_wr (*g_top)(0, r.m_storage);
    }
    if (req.ledArray.g) {
      VlWide<4> g = convertToVlWide(req.ledArray.g.value());
      get_led_wr (*g_top)(1, g.m_storage);
    }
    if (req.ledArray.b) {
      VlWide<4> b = convertToVlWide(req.ledArray.b.value());
      get_led_wr (*g_top)(2, b.m_storage);
    }
    if (req.sevenSegment.zero)
      get_lcd_wr (*g_top)(0, req.sevenSegment.zero.value(0));
    if (req.sevenSegment.one)
      get_lcd_wr (*g_top)(1, req.sevenSegment.one.value(0));
    if (req.sevenSegment.two)
      get_lcd_wr (*g_top)(2, req.sevenSegment.two.value(0));
    if (req.sevenSegment.three)
      get_lcd_wr (*g_top)(3, req.sevenSegment.three.value(0));
    // board input state
    if (req.joystick.up)
      set_joystick_up_i(*g_top, req.joystick.up.value(0));
    if (req.joystick.down)
      set_joystick_down_i(*g_top, req.joystick.down.value(0));
    if (req.joystick.left)
      set_joystick_left_i(*g_top, req.joystick.left.value(0));
    if (req.joystick.right)
      set_joystick_right_i(*g_top, req.joystick.right.value(0));
    if (req.joystick.pressed)
      set_joystick_pressed_i(*g_top, req.joystick.pressed.value(0));
    if (req.buttons.top)
      set_button_top_i(*g_top, req.buttons.top.value(0));
    if (req.buttons.bottom)
      set_button_bottom_i(*g_top, req.buttons.bottom.value(0));
    if (req.buttons.left)
      set_button_left_i(*g_top, req.buttons.left.value(0));
    if (req.buttons.right)
      set_button_right_i(*g_top, req.buttons.right.value(0));
    if (req.buttons.center)
      set_button_center_i(*g_top, req.buttons.center.value(0));
    if (req.dip_switches)
      set_dip_switches_i(*g_top, req.dip_switches.value(0));
    // memory states
    for (auto &mem : req.memory) {
      for (auto i = 0; i < mem.size; i++) {
#ifdef __MEM_H__
        mem_wr(mem.address + 4 * i, mem.value[i], 0xF);
#else
        get_mem_wr (*g_top)(mem.address + 4 * i, mem.value[i], 0xF);
#endif
      }
    }
    // cpu states
    if (req.pc)
      get_cpu_set_pc (*g_top)(req.pc.value(0));
    for (auto i = 0; i < 32; i++) {
      if (req.registers[i])
        get_cpu_set_gpr (*g_top)(i, req.registers[i].value());
    }
  }

  dap::GetStateResponse getState(dap::GetStateRequest req) {
    dap::GetStateResponse res;
    // board output state
    auto led_r_o = get_led_r_o(*g_top);
    res.ledArray.r = convertToDapArray(led_r_o);
    auto led_g_o = get_led_g_o(*g_top);
    res.ledArray.g = convertToDapArray(led_g_o);
    auto led_b_o = get_led_b_o(*g_top);
    res.ledArray.b = convertToDapArray(led_b_o);
    res.sevenSegment.zero = get_sevensegment_1_o(*g_top);
    res.sevenSegment.one = get_sevensegment_2_o(*g_top);
    res.sevenSegment.two = get_sevensegment_3_o(*g_top);
    res.sevenSegment.three = get_sevensegment_4_o(*g_top);
    // board input state
    res.joystick.up = get_joystick_up_i(*g_top);
    res.joystick.down = get_joystick_down_i(*g_top);
    res.joystick.left = get_joystick_left_i(*g_top);
    res.joystick.right = get_joystick_right_i(*g_top);
    res.joystick.pressed = get_joystick_pressed_i(*g_top);
    res.buttons.top = get_button_top_i(*g_top);
    res.buttons.bottom = get_button_bottom_i(*g_top);
    res.buttons.left = get_button_left_i(*g_top);
    res.buttons.right = get_button_right_i(*g_top);
    res.buttons.center = get_button_center_i(*g_top);
    res.dip_switches = get_dip_switches_i(*g_top);
    // memory states
    dap::array<dap::SetMemory> memory;
    for (auto &mem : req.memory) {
      dap::SetMemory m;
      m.address = mem.address;
      m.size = mem.size;
      for (auto i = 0; i < mem.size; i++) {
#ifdef __MEM_H__
        m.value.push_back(mem_rd(mem.address + 4 * i));
#else
        m.value.push_back(get_mem_rd(*g_top)(mem.address + 4 * i));
#endif
      }
      memory.push_back(m);
    }
    res.memory = memory;
    // cpu states
    res.pc = get_cpu_get_pc(*g_top)();
    for (auto i = 0; i < 32; i++) {
      res.registers.push_back(get_cpu_get_gpr(*g_top)(i));
    }
    return res;
  }

  void load(std::string file, std::string bin, std::string exe) {
    this->file = file;
    if (log) {
      std::filesystem::path dump = file;
      dump.replace_filename("dump.vcd");
      g_top->trace(g_vcd, 99);
      g_vcd->open(dump.c_str());
    }
#ifdef __MEM_H__
    mem_init(bin.c_str());
    pcToLine.registerFile(exe.c_str());
#else
    if (isValid_mem_init(*g_top)) {
      get_mem_init (*g_top)(bin.c_str());
      pcToLine.registerFile(exe.c_str());
    }
#endif
    // init
    set_clk_i(*g_top, 1);
    set_rst_ni(*g_top, 0);
    set_irq_e_i(*g_top, 0);
    set_irq_t_i(*g_top, 0);
    g_top->eval();
  }

  std::tuple<uint32_t, std::string> readMemory(uint32_t address,
                                               uint32_t count) {
    assert(count % 4 == 0);
    uint32_t addr;
    std::vector<BYTE> data;
    for (addr = address; addr < address + count; addr += 4) {
      uint32_t mem;
#ifdef __MEM_H__
      mem = mem_rd(addr);
#else
      mem = get_mem_rd(*g_top)(addr);
#endif
      if (mem == 0xdeadbeef)
        break;
      std::vector<BYTE> bytes = uint32_to_bytes(mem);
      data.insert(data.end(), bytes.begin(), bytes.end());
    }
    return std::make_tuple((address + count - addr),
                           base64_encode(&data[0], data.size()));
  }

  uint32_t writeMemory(uint32_t address, bool allowPartial, std::string data) {
    std::vector<BYTE> bytes = base64_decode(data);
    uint32_t addr;
    uint32_t strb = 0xF;
    uint32_t end = bytes.size() - bytes.size() % 4;
    // assert(bytes.size() % 4 == 0);
    for (uint32_t idx = 0; idx < end; idx += 4) {
      uint32_t mem = bytes_to_uint32(
          std::vector<BYTE>(bytes.begin() + idx, bytes.begin() + idx + 4));
#ifdef __MEM_H__
      mem_wr(address + idx, mem, strb);
#else
      get_mem_wr (*g_top)(address + idx, mem, strb);
#endif
    }
    strb = (bytes.size() % 4 == 1)   ? 0x1
           : (bytes.size() % 4 == 2) ? 0x3
           : (bytes.size() % 4 == 3) ? 0x7
                                     : 0xF;
    uint32_t mem =
        bytes_to_uint32(std::vector<BYTE>(bytes.begin() + end, bytes.end()));
#ifdef __MEM_H__
    mem_wr(address + end, mem, strb);
#else
    get_mem_wr (*g_top)(address + end, mem, strb);
#endif
    return 0;
  }

  std::string getFile() {
    if (pc() == 0)
      return file;
#ifdef __MEM_H__
    auto fileName = pcToLine.getFileName(pc());
    return fileName ? fileName : file;
#else
    if (isValid_mem_init(*g_top)) {
      auto fileName = pcToLine.getFileName(pc());
      return fileName ? fileName : file;
    } else {
      return file;
    }
#endif
  }

  int getLine() {
    if (pc() == 0)
      return 0;
#ifdef __MEM_H__
    return pcToLine.getLine(pc());
#else
    if (isValid_mem_init(*g_top)) {
      return pcToLine.getLine(pc());
    } else {
      return 0;
    }
#endif
  }

  void runclk() {
    // First 2 cycles are for reset
    set_rst_ni(*g_top, g_ctx->time() >= 3);

    for (int i = 1; i >= 0; i--) {
      set_clk_i(*g_top, i);
      g_top->eval();
      if (log)
      g_vcd->dump(g_ctx->time());
      g_ctx->timeInc(1);
    }
  }

  void runinsn() {
    if (isValid_cpu_get_pc(*g_top)) {
      if (pc() == 0) {
        // Gracefully stop and do nothing
        onEvent(Event::Stepped, std::nullopt);
        return;
      }
      auto prev_line = getLine();
      auto prev_file = getFile();
      auto counter = 0;
      while (prev_line == getLine() && prev_file == getFile() &&
             counter < 100) {
        runclk();
        counter++;
      }
    } else {
      runclk();
    }

    // send stepped event
    onEvent(Event::Stepped, std::nullopt);

    // Check board state
    checkBoard();
  }

  void updateInputs(dap::JoyStick joyStick, dap::Buttons buttons,
                    dap::optional<dap::integer> dipSwitches) {
    if (joyStick.up)
      set_joystick_up_i(*g_top, joyStick.up.value(0));
    if (joyStick.down)
      set_joystick_down_i(*g_top, joyStick.down.value(0));
    if (joyStick.left)
      set_joystick_left_i(*g_top, joyStick.left.value(0));
    if (joyStick.right)
      set_joystick_right_i(*g_top, joyStick.right.value(0));
    if (joyStick.pressed)
      set_joystick_pressed_i(*g_top, joyStick.pressed.value(0));
    if (buttons.top)
      set_button_top_i(*g_top, buttons.top.value(0));
    if (buttons.bottom)
      set_button_bottom_i(*g_top, buttons.bottom.value(0));
    if (buttons.left)
      set_button_left_i(*g_top, buttons.left.value(0));
    if (buttons.right)
      set_button_right_i(*g_top, buttons.right.value(0));
    if (buttons.center)
      set_button_center_i(*g_top, buttons.center.value(0));
    if (dipSwitches)
      set_dip_switches_i(*g_top, dipSwitches.value(0));
  }

  void checkBoard() {
    bool changed = false;
    // Check leds
    auto led_r_o = get_led_r_o(*g_top);
    auto dap_led_r_o = convertToDapArray(led_r_o);
    if (!ledArray.r || ledArray.r.value() != dap_led_r_o) {
      changed = true;
      ledArray.r = dap_led_r_o;
    }
    auto led_g_o = get_led_g_o(*g_top);
    auto dap_led_g_o = convertToDapArray(led_g_o);
    if (!ledArray.g || ledArray.g.value() != dap_led_g_o) {
      changed = true;
      ledArray.g = dap_led_g_o;
    }
    auto led_b_o = get_led_b_o(*g_top);
    auto dap_led_b_o = convertToDapArray(led_b_o);
    if (!ledArray.b || ledArray.b.value() != dap_led_b_o) {
      changed = true;
      ledArray.b = dap_led_b_o;
    }
    // Check seven segment
    if (sevenSegment.zero.value(0) != get_sevensegment_1_o(*g_top)) {
      changed = true;
      sevenSegment.zero = get_sevensegment_1_o(*g_top);
    }
    if (sevenSegment.one.value(0) != get_sevensegment_2_o(*g_top)) {
      changed = true;
      sevenSegment.one = get_sevensegment_2_o(*g_top);
    }
    if (sevenSegment.two.value(0) != get_sevensegment_3_o(*g_top)) {
      changed = true;
      sevenSegment.two = get_sevensegment_3_o(*g_top);
    }
    if (sevenSegment.three.value(0) != get_sevensegment_4_o(*g_top)) {
      changed = true;
      sevenSegment.three = get_sevensegment_4_o(*g_top);
    }
    // send board update event
    if (changed)
      onEvent(Event::BoardUpdate, std::nullopt);
  }

  // Convert 120 bit wide array to 12 bit wide DAP array
  // Used to convert 120-bit led array into 12-bit row arrays
  dap::array<dap::integer> convertToDapArray(VlWide<4> &arr) {
    dap::array<dap::integer> dapArr;
    // each array element is 12-bit
    // input is 120 bit wide divided into 32 bit entries
    dapArr.push_back((arr[0] >> 0) & 0xFFF);
    dapArr.push_back((arr[0] >> 12) & 0xFFF);
    dapArr.push_back(((arr[0] >> 24) & 0xFFF) | ((arr[1] << 8) & 0xFFF));
    dapArr.push_back((arr[1] >> 4) & 0xFFF);
    dapArr.push_back((arr[1] >> 16) & 0xFFF);
    dapArr.push_back(((arr[1] >> 28) & 0xFFF) | ((arr[2] << 4) & 0xFFF));
    dapArr.push_back((arr[2] >> 8) & 0xFFF);
    dapArr.push_back((arr[2] >> 20) & 0xFFF);
    dapArr.push_back((arr[3] << 0) & 0xFFF);
    dapArr.push_back((arr[3] >> 12) & 0xFFF);
    return dapArr;
  }

  // Convert 12 bit wide DAP array to 120 bit wide array
  // Used to convert 12-bit row arrays into 120-bit led array
  VlWide<4> convertToVlWide(dap::array<dap::integer> &arr) {
    VlWide<4> dapArr;
    // each array element is 12-bit
    // input is 120 bit wide divided into 32 bit entries
    dapArr[0] = (arr[0] << 0) | (arr[1] << 12) | (arr[2] << 24);
    dapArr[1] = (arr[2] >> 8) | (arr[3] << 4) | (arr[4] << 16) | (arr[5] << 28);
    dapArr[2] = (arr[5] >> 4) | (arr[6] << 8) | (arr[7] << 20);
    dapArr[3] = (arr[8] << 0) | (arr[9] << 12);
    return dapArr;
  }

  void run() {
    running = true;
    std::chrono::time_point<std::chrono::system_clock> start =
        std::chrono::system_clock::now();
    bool starting = true;
    int counter = 0;
    while (running) {
      if (isValid_cpu_get_pc(*g_top)) {
        if (pc() == 0) {
          // Gracefully stop
          onEvent(Event::BreakpointHit, std::nullopt);
          checkBoard();
          return;
        }
      }
      if (breakpointHit()) {
        if (starting) {
          // run one instruction and ignore breakpoint
          // this is to avoid breakpoint hit on the same instruction
          auto prev_line = getLine();
          auto prev_file = getFile();
          auto counter = 0;
          while (prev_line == getLine() && prev_file == getFile() &&
                 counter < 100) {
            runclk();
            counter++;
          }
          starting = false;
          continue;
        } else {
          // send breakpoint hit event
          onEvent(Event::BreakpointHit, std::nullopt);
          break;
        }
      }
      // fix the speed to 10KHz cycle => 1.3k instructions per second
      std::this_thread::sleep_until(start +
                                    std::chrono::microseconds(100 * counter));
      runclk();
      counter = counter + 1;

      starting = false;
      // With 30 fps check board state
      if (std::chrono::duration_cast<std::chrono::milliseconds>(
              std::chrono::system_clock::now() - start)
              .count() > (1000 / 30)) {
        // check board state
        start = std::chrono::system_clock::now();
        counter = 1;
        checkBoard();
      }
    }
    checkBoard();
  }

  void pause() {
    // send paused event
    running = false;
    onEvent(Event::Paused, std::nullopt);
  }

  // returns 0 if PC function exists
  unsigned int pc() { return get_cpu_get_pc(*g_top)(); }

  // returns 0 if ST function exists
  unsigned int st() { return get_cpu_get_st(*g_top)(); }

  inline static const char *regNames[] = {
      "zero", "ra", "sp", "gp", "tp",  "t0",  "t1", "t2", "s0", "s1", "a0",
      "a1",   "a2", "a3", "a4", "a5",  "a6",  "a7", "s2", "s3", "s4", "s5",
      "s6",   "s7", "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"};

  int32_t getRegIDFromName(const std::string &name) {
    for (int i = 0; i < sizeof(regNames) / sizeof(regNames[0]); i++) {
      if (name == regNames[i])
        return i;
    }
    return -1;
  }

  int32_t getSysRegIDFromName(const std::string &name) {
    for (int i = 0; i < sizeof(sysRegNames) / sizeof(sysRegNames[0]); i++) {
      if (name == sysRegNames[i])
        return sysRegNo[i];
    }
    return -1;
  }

  dap::array<dap::Variable> regs() {
    dap::array<dap::Variable> regs;
    if (!isValid_cpu_get_gpr(*g_top))
      return regs;
    for (int i = 0; i < 32; i++) {
      dap::Variable var;
      var.name = regNames[i];
      std::stringstream sstream;
      sstream << "0x" << std::hex << get_cpu_get_gpr(*g_top)(i);
      var.value = sstream.str();
      var.type = "int";

      regs.push_back(var);
    }
    return regs;
  }

  inline static const char *sysRegNames[] = {
      "mstatus", "mie", "mip", "mtvec", "mepc",  "mcause"};

  inline static const uint32_t sysRegNo[] = {
      0x300, 0x304, 0x344, 0x305, 0x341,  0x342};

  dap::array<dap::Variable> sysRegs() {
    dap::array<dap::Variable> regs;
    if (!isValid_cpu_get_csr(*g_top))
      return regs;
    for (int i = 0; i < sizeof(sysRegNo)/sizeof(uint32_t); i++) {
      dap::Variable var;
      var.name = sysRegNames[i];
      std::stringstream sstream;
      sstream << "0x" << std::hex << get_cpu_get_csr(*g_top)(sysRegNo[i]);
      var.value = sstream.str();
      var.type = "int";

      regs.push_back(var);
    }
    return regs;
  }

  void setReg(int unsigned idx, int unsigned val) {
    get_cpu_set_gpr (*g_top)(idx, val);
    return;
  }

  /**
   * Expects the id of sys reg, e.x. 0x300 for mstatus
   */
  void setSysReg(int unsigned idx, int unsigned val) {
    get_cpu_set_csr (*g_top)(idx, val);
    return;
  }

  void setPC(int unsigned val) { get_cpu_set_pc (*g_top)(val); }

  bool is_number(const std::string &s) {
    return !s.empty() && std::find_if(s.begin(), s.end(), [](unsigned char c) {
                           return !std::isdigit(c);
                         }) == s.end();
  }

  EventHandler onEvent;
};