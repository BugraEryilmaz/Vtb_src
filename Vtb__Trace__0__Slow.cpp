// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


VL_ATTR_COLD void Vtb___024root__trace_init_sub__TOP__0(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_init_sub__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+640,3,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,3,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+642,3,"led_r_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 119,0);
    tracep->declArray(c+646,3,"led_g_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 119,0);
    tracep->declArray(c+650,3,"led_b_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 119,0);
    tracep->declBus(c+654,3,"sevensegment_1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+655,3,"sevensegment_2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+656,3,"sevensegment_3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+657,3,"sevensegment_4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+658,3,"button_top_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+659,3,"button_bottom_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+660,3,"button_left_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+661,3,"button_right_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+662,3,"button_center_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+663,3,"joystick_up_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+664,3,"joystick_down_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+665,3,"joystick_left_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+666,3,"joystick_right_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+667,3,"joystick_pressed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+668,3,"dip_switches_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+640,3,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,3,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+642,3,"led_r_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 119,0);
    tracep->declArray(c+646,3,"led_g_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 119,0);
    tracep->declArray(c+650,3,"led_b_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 119,0);
    tracep->declBus(c+654,3,"sevensegment_1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+655,3,"sevensegment_2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+656,3,"sevensegment_3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+657,3,"sevensegment_4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+658,3,"button_top_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+659,3,"button_bottom_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+660,3,"button_left_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+661,3,"button_right_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+662,3,"button_center_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+663,3,"joystick_up_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+664,3,"joystick_down_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+665,3,"joystick_left_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+666,3,"joystick_right_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+667,3,"joystick_pressed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+668,3,"dip_switches_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+411,2,"bus_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"bus_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+412,2,"bus_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"bus_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+413,2,"bus_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+669,3,"bus_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+670,3,"bus_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+414,2,"sub_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+415,2,"mem_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,2,"rng_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,2,"led_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,2,"lcd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,2,"but_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+571,3,"mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+580,3,"rng_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+744,0,"led_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+671,3,"lcd_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+672,3,"but_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+487,2,"mem_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,2,"rng_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,2,"led_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,2,"lcd_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+491,2,"but_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"irq_e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+671,3,"disp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+673,3,"push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+668,3,"switch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("u_bus", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+640,3,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,3,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,2,"bus_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+412,2,"bus_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+669,3,"bus_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+670,3,"bus_err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,2,"mem_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,2,"rng_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,2,"led_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,2,"lcd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,2,"but_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+571,3,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+580,3,"rng_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+744,0,"led_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+671,3,"lcd_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+672,3,"but_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+487,2,"mem_err",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,2,"rng_err",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,2,"led_err",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,2,"lcd_err",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+491,2,"but_err",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,2,"tmp_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,2,"mem_en_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,2,"rng_en_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,2,"led_en_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+504,2,"lcd_en_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,2,"but_en_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,2,"tmp_en_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_but", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+640,3,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,3,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,2,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+414,2,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+145,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+413,2,"wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+672,3,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+491,2,"err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+673,3,"push",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+668,3,"switch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+167,0,"irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+674,3,"ext_vld_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+675,3,"ext_val_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+676,3,"ext_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+677,3,"ext_switch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+168,0,"src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+517,2,"ptm_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+581,3,"stm_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+421,2,"wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,2,"wstrb_incomp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+678,3,"wdata_nonzero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,2,"sel_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,2,"sel_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,2,"sel_ptm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,2,"sel_stm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,2,"wen_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,2,"wen_ptm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,2,"wen_stm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,2,"clr_ptm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,2,"clr_stm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+492,2,"sel_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+679,3,"rdata_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+680,3,"rdata_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+518,2,"rdata_ptm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,3,"rdata_stm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_ptm", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+745,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+640,3,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,3,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,2,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+517,2,"xtm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+676,3,"val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+33,0,"src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+519,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+520,2,"sel_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,2,"sel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+522,2,"sel_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+523,2,"sel_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"src_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+524,2,"vld_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,2,"val_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+525,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+526,2,"sel_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,2,"sel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,2,"sel_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+529,2,"sel_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"src_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,2,"vld_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,2,"val_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+531,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+532,2,"sel_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,2,"sel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+534,2,"sel_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,2,"sel_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"src_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+632,3,"vld_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,2,"val_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+537,2,"sel_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+538,2,"sel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,2,"sel_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,2,"sel_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"src_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+633,3,"vld_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,2,"val_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+542,2,"sel_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+543,2,"sel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+544,2,"sel_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+545,2,"sel_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"src_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,3,"vld_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,2,"val_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+546,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+547,2,"sel_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+548,2,"sel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,2,"sel_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+550,2,"sel_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"src_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,3,"vld_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,2,"val_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+551,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+552,2,"sel_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+553,2,"sel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+554,2,"sel_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,2,"sel_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"src_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+636,3,"vld_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,2,"val_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+556,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+557,2,"sel_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+558,2,"sel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+559,3,"sel_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,3,"sel_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"src_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+637,3,"vld_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,2,"val_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+561,3,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+562,3,"sel_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+563,3,"sel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+564,3,"sel_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,3,"sel_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"src_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,3,"vld_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,2,"val_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+566,3,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+567,3,"sel_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,3,"sel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+569,3,"sel_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,3,"sel_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"src_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+639,3,"vld_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,2,"val_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_stm", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+746,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+640,3,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,3,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,2,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+581,3,"xtm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+677,3,"val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+681,3,"src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+583,3,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+584,3,"sel_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+585,3,"sel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+586,3,"sel_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+587,3,"sel_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"src_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+588,3,"vld_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+572,3,"val_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,3,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+590,3,"sel_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,3,"sel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+592,3,"sel_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,3,"sel_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"src_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,3,"vld_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,3,"val_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+595,3,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+596,3,"sel_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+597,3,"sel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+598,3,"sel_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+599,3,"sel_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"src_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,3,"vld_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+574,3,"val_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+601,3,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+602,3,"sel_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,3,"sel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+604,3,"sel_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+605,3,"sel_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"src_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+606,3,"vld_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+575,3,"val_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+607,3,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+608,3,"sel_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+609,3,"sel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+610,3,"sel_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+611,3,"sel_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"src_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+612,3,"vld_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,3,"val_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+613,3,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+614,3,"sel_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+615,3,"sel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,3,"sel_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+617,3,"sel_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"src_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+618,3,"vld_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+577,3,"val_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+619,3,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+620,3,"sel_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+621,3,"sel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+622,3,"sel_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+623,3,"sel_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"src_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+624,3,"vld_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,3,"val_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+625,3,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+626,3,"sel_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+627,3,"sel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+628,3,"sel_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,3,"sel_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"src_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+630,3,"vld_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+579,3,"val_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+747,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+640,3,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,3,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+748,0,"irq_t",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"irq_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,2,"bus_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"bus_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+412,2,"bus_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"bus_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+413,2,"bus_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+669,3,"bus_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+670,3,"bus_err",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+749,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+750,0,"IF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+751,0,"DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+752,0,"EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+753,0,"WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+754,0,"IE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+493,2,"ie_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+682,3,"st_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+430,2,"st_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+683,3,"pc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+684,3,"pc_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+169,0,"if_expt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"de_expt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,2,"ex_expt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"wb_expt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+685,3,"at_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+686,3,"at_de",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+687,3,"at_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+688,3,"at_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+689,3,"at_ie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"if_irq_e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+748,0,"if_irq_t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+690,3,"if_unalign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"if_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+494,2,"bus_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"de_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"de_ins_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"de_ins_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+47,0,"de_ins_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+48,0,"de_ins_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+49,0,"de_ins_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+50,0,"de_ins_funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+51,0,"de_ins_imm_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"de_ins_imm_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"de_ins_imm_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"de_ins_imm_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"de_ins_imm_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+56,0,"de_ins_funct3_eq_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"de_ins_funct3_eq_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"de_ins_funct3_eq_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"de_ins_funct3_eq_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"de_ins_funct3_eq_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"de_ins_funct3_eq_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"de_ins_funct3_eq_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"de_ins_funct3_eq_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"de_ins_funct7_eq_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"de_ins_funct7_eq_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"de_ins_funct7_eq_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"de_ins_funct7_eq_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"de_ins_rs1_eq_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"de_ins_rs2_eq_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"de_ins_rs2_eq_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"de_ins_rs2_eq_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"de_ins_rd_eq_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"de_ins_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+73,0,"de_ins_slt_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"de_ins_blt_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"de_ins_srx_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"de_ins_csr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"de_ins_is_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"de_ins_is_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"de_ins_is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"de_ins_is_jx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"de_ins_is_bx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"de_ins_is_lx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"de_ins_is_sx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"de_ins_is_ix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"de_ins_is_ax",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"de_ins_is_fx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"de_ins_is_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"de_ins_is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"de_ins_is_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"de_ins_is_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"de_ins_is_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"de_ins_is_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"de_ins_is_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"de_ins_is_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"de_ins_is_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"de_ins_is_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"de_ins_is_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"de_ins_is_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"de_ins_is_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"de_ins_is_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"de_ins_is_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"de_ins_is_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"de_ins_is_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"de_ins_is_slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"de_ins_is_sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"de_ins_is_xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"de_ins_is_ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"de_ins_is_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"de_ins_is_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"de_ins_is_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"de_ins_is_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"de_ins_is_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"de_ins_is_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"de_ins_is_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"de_ins_is_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"de_ins_is_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"de_ins_is_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"de_ins_is_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"de_ins_is_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"de_ins_is_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"de_ins_is_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"de_ins_is_fence",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"de_ins_is_ev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"de_ins_is_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"de_ins_is_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"de_ins_is_mret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,1,"de_ins_is_csrrw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,1,"de_ins_is_csrrs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,1,"de_ins_is_csrrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,1,"de_ins_is_csrrwi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,1,"de_ins_is_csrrsi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,1,"de_ins_is_csrrci",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"de_ins_is_csr_mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"de_ins_is_csr_mie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"de_ins_is_csr_mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"de_ins_is_csr_mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"de_ins_is_csr_mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"de_ins_is_csr_mip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"de_ins_is_inv_jx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"de_ins_is_inv_bx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+691,3,"de_ins_is_inv_lx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+692,3,"de_ins_is_inv_sx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"de_ins_is_inv_ix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+693,3,"de_ins_is_inv_ax",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"de_ins_is_inv_fx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+694,3,"de_ins_is_inv_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"de_ins_is_inv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+695,3,"de_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+495,2,"ex_rs1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+496,2,"ex_rs2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("gpr_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+112,0,"ex_ins_is_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"ex_ins_is_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"ex_rs1_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"ex_rs2_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+135,0,"ex_alu_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"ex_alu_add_op0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"ex_alu_add_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"ex_alu_add_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+696,3,"ex_alu_add_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+697,3,"ex_alu_add_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+175,0,"ex_alu_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+177,0,"ex_alu_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+698,3,"ex_alu_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+699,3,"ex_alu_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+178,0,"ex_alu_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"ex_alu_ltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"ex_alu_lts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+700,3,"ex_alu_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+206,1,"ex_alu_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"ex_alu_srs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+182,0,"ex_alu_sl0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"ex_alu_sl1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"ex_alu_sl2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"ex_alu_sl3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"ex_alu_sl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,1,"ex_alu_sr0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,1,"ex_alu_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,1,"ex_alu_sr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,1,"ex_alu_sr3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,1,"ex_alu_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+207,1,"ex_bru_cmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+701,3,"ex_bru_add_op0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+702,3,"ex_bru_add_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+703,3,"ex_bru_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+159,0,"ex_ins_is_ls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+192,1,"ex_lsu_sb_strb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+193,1,"ex_lsu_sh_strb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+160,0,"ex_lsu_sz_mask_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+704,3,"ex_lsu_sz_mask_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"ex_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+705,3,"csr_mie_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+706,3,"csr_mtie_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+707,3,"csr_meie_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+708,3,"csr_mpie_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+709,3,"csr_mcause_i_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+710,3,"csr_mcause_c_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+711,3,"csr_mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+712,3,"csr_mie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+713,3,"csr_mtvec_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+714,3,"csr_mepc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+715,3,"csr_mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,1,"csr_mip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,1,"ex_csr_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,1,"ex_csr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"wb_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+196,1,"wb_lsu_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+197,1,"wb_lsu_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+716,3,"wb_lsu_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+124,0,"wb_alu_is_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"wb_alu_is_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"wb_alu_is_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+717,3,"wb_gpr_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+718,3,"wb_gpr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,1,"wb_csr_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+210,1,"wb_csr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+211,1,"wb_csr_we_mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,1,"wb_csr_we_mie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+719,3,"wb_csr_we_mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,1,"wb_csr_we_mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,1,"wb_csr_we_mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,2,"ie_from_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,2,"ie_from_de",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,2,"ie_from_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,2,"ie_from_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,1,"ie_expt_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,1,"ie_expt_ret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,1,"wi_csr_we_mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,3,"wi_csr_we_mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,1,"wi_csr_we_mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+721,3,"wi_csr_wdata_mie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+722,3,"wi_csr_wdata_mpie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+723,3,"wi_csr_wdata_mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+724,3,"wi_csr_wdata_mcause_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+725,3,"wi_csr_wdata_mcause_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_lcd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+640,3,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,3,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,2,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+414,2,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+145,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+413,2,"wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+671,3,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+490,2,"err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+671,3,"disp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+432,2,"wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,2,"sel_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("disp_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+726+i*1,3,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+490,2,"err_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_led", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+640,3,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,3,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,2,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+414,2,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+145,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+413,2,"wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+744,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+489,2,"err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+642,3,"led_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 119,0);
    tracep->declArray(c+646,3,"led_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 119,0);
    tracep->declArray(c+650,3,"led_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 119,0);
    tracep->declBit(c+434,2,"wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,2,"wstrb_incomp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,2,"sel_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+730,3,"led_r_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 119,0);
    tracep->declArray(c+734,3,"led_g_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 119,0);
    tracep->declArray(c+738,3,"led_b_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 119,0);
    tracep->declBus(c+161,0,"col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+162,0,"row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+163,0,"col_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"row_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+165,0,"col_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+166,0,"row_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+303,1,"val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+460,2,"r_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+461,2,"g_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,2,"b_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,2,"err_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk3[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+437,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+745,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+217,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+756,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+218,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+757,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+439,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+758,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+440,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+759,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+441,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+760,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+219,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+761,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+762,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+221,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+763,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+222,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+746,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+223,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+764,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+224,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk3[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+765,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+225,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+766,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+226,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+767,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+227,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+768,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+228,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+769,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+229,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+347,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+770,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+230,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+771,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+231,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+772,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+232,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+773,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+233,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+774,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+234,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+352,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+775,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+235,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+776,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+236,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk3[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+777,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+237,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+778,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+238,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+379,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+779,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+239,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+780,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+240,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+367,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+781,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+241,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+782,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+242,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+783,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+243,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+784,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+244,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+785,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+245,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+786,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+246,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+787,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+247,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+788,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+248,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk3[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+789,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+249,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+385,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+790,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+250,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+791,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+251,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+792,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+252,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+793,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+253,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+396,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+794,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+254,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+795,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+255,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+397,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+796,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+256,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+398,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+797,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+257,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+399,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+798,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+258,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+400,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+799,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+259,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+800,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+260,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk3[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+801,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+261,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+802,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+271,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+803,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+272,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+804,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+262,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+465,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+805,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+263,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+806,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+264,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+807,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+265,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+808,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+273,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+809,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+274,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+810,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+275,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+811,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+276,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+812,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+277,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk3[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+813,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+266,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+814,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+278,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+815,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+279,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+816,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+267,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+356,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+817,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+268,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+818,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+269,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+819,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+270,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+820,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+280,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+821,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+281,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+822,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+282,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+823,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+283,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+374,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+824,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+284,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk3[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+825,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+285,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+826,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+467,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+827,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+468,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+828,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+286,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+829,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+287,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+404,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+830,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+288,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+831,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+289,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+406,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+832,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+290,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+833,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+291,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+834,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+292,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+470,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+835,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+836,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+471,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk3[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+837,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+294,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+838,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+472,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+839,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+473,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+840,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+295,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+841,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+296,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+842,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+297,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+843,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+298,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+844,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+299,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+845,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+300,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+846,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+301,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+847,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+302,1,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+848,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+474,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk3[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+849,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+475,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+850,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+445,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+407,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+851,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+852,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+476,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+853,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+477,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+854,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+478,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+855,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+479,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+378,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+856,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+447,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+857,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+448,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+858,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+449,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+859,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+450,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+860,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+451,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk3[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+861,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+480,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+862,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+452,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+863,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+453,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+454,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+864,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+481,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+410,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+865,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+482,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+866,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+484,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,2,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+867,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+486,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+868,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+455,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+869,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+456,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+870,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+457,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+871,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+458,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+346,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+459,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,1,"nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+873,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+640,3,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,2,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+412,2,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+413,2,"wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+571,3,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+487,2,"err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,2,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+742,3,"wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+743,3,"ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+571,3,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+487,2,"err_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+640,3,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,3,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,2,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+414,2,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+145,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+413,2,"wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+580,3,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+488,2,"err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+874,0,"INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+423,2,"sel_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+580,3,"lfsr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+631,3,"lfsr_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 30,0);
    tracep->declBit(c+488,2,"err_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb___024root__trace_init_top(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_init_top\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb___024root__trace_full_1(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb___024root__trace_chg_1(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb___024root__trace_full_2(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb___024root__trace_chg_2(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb___024root__trace_full_3(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb___024root__trace_chg_3(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb___024root__trace_register(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_register\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb___024root__trace_full_1, 1U, vlSelf);
    tracep->addChgCb(&Vtb___024root__trace_chg_1, 1U, vlSelf);
    tracep->addFullCb(&Vtb___024root__trace_full_2, 2U, vlSelf);
    tracep->addChgCb(&Vtb___024root__trace_chg_2, 2U, vlSelf);
    tracep->addFullCb(&Vtb___024root__trace_full_3, 3U, vlSelf);
    tracep->addChgCb(&Vtb___024root__trace_chg_3, 3U, vlSelf);
    tracep->addCleanupCb(&Vtb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb___024root__trace_const_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_const_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb___024root__trace_const_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_const_0_sub_0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+744,(0U),32);
    bufp->fullIData(oldp+745,(0xaU),32);
    bufp->fullIData(oldp+746,(8U),32);
    bufp->fullIData(oldp+747,(0x80000000U),32);
    bufp->fullBit(oldp+748,(0U));
    bufp->fullCData(oldp+749,(0U),3);
    bufp->fullCData(oldp+750,(1U),3);
    bufp->fullCData(oldp+751,(2U),3);
    bufp->fullCData(oldp+752,(3U),3);
    bufp->fullCData(oldp+753,(4U),3);
    bufp->fullCData(oldp+754,(5U),3);
    bufp->fullIData(oldp+755,(0U),32);
    bufp->fullIData(oldp+756,(0xbU),32);
    bufp->fullIData(oldp+757,(1U),32);
    bufp->fullIData(oldp+758,(2U),32);
    bufp->fullIData(oldp+759,(3U),32);
    bufp->fullIData(oldp+760,(4U),32);
    bufp->fullIData(oldp+761,(5U),32);
    bufp->fullIData(oldp+762,(6U),32);
    bufp->fullIData(oldp+763,(7U),32);
    bufp->fullIData(oldp+764,(9U),32);
    bufp->fullIData(oldp+765,(0xcU),32);
    bufp->fullIData(oldp+766,(0x16U),32);
    bufp->fullIData(oldp+767,(0x17U),32);
    bufp->fullIData(oldp+768,(0xdU),32);
    bufp->fullIData(oldp+769,(0xeU),32);
    bufp->fullIData(oldp+770,(0xfU),32);
    bufp->fullIData(oldp+771,(0x10U),32);
    bufp->fullIData(oldp+772,(0x11U),32);
    bufp->fullIData(oldp+773,(0x12U),32);
    bufp->fullIData(oldp+774,(0x13U),32);
    bufp->fullIData(oldp+775,(0x14U),32);
    bufp->fullIData(oldp+776,(0x15U),32);
    bufp->fullIData(oldp+777,(0x18U),32);
    bufp->fullIData(oldp+778,(0x22U),32);
    bufp->fullIData(oldp+779,(0x23U),32);
    bufp->fullIData(oldp+780,(0x19U),32);
    bufp->fullIData(oldp+781,(0x1aU),32);
    bufp->fullIData(oldp+782,(0x1bU),32);
    bufp->fullIData(oldp+783,(0x1cU),32);
    bufp->fullIData(oldp+784,(0x1dU),32);
    bufp->fullIData(oldp+785,(0x1eU),32);
    bufp->fullIData(oldp+786,(0x1fU),32);
    bufp->fullIData(oldp+787,(0x20U),32);
    bufp->fullIData(oldp+788,(0x21U),32);
    bufp->fullIData(oldp+789,(0x24U),32);
    bufp->fullIData(oldp+790,(0x2eU),32);
    bufp->fullIData(oldp+791,(0x2fU),32);
    bufp->fullIData(oldp+792,(0x25U),32);
    bufp->fullIData(oldp+793,(0x26U),32);
    bufp->fullIData(oldp+794,(0x27U),32);
    bufp->fullIData(oldp+795,(0x28U),32);
    bufp->fullIData(oldp+796,(0x29U),32);
    bufp->fullIData(oldp+797,(0x2aU),32);
    bufp->fullIData(oldp+798,(0x2bU),32);
    bufp->fullIData(oldp+799,(0x2cU),32);
    bufp->fullIData(oldp+800,(0x2dU),32);
    bufp->fullIData(oldp+801,(0x30U),32);
    bufp->fullIData(oldp+802,(0x3aU),32);
    bufp->fullIData(oldp+803,(0x3bU),32);
    bufp->fullIData(oldp+804,(0x31U),32);
    bufp->fullIData(oldp+805,(0x32U),32);
    bufp->fullIData(oldp+806,(0x33U),32);
    bufp->fullIData(oldp+807,(0x34U),32);
    bufp->fullIData(oldp+808,(0x35U),32);
    bufp->fullIData(oldp+809,(0x36U),32);
    bufp->fullIData(oldp+810,(0x37U),32);
    bufp->fullIData(oldp+811,(0x38U),32);
    bufp->fullIData(oldp+812,(0x39U),32);
    bufp->fullIData(oldp+813,(0x3cU),32);
    bufp->fullIData(oldp+814,(0x46U),32);
    bufp->fullIData(oldp+815,(0x47U),32);
    bufp->fullIData(oldp+816,(0x3dU),32);
    bufp->fullIData(oldp+817,(0x3eU),32);
    bufp->fullIData(oldp+818,(0x3fU),32);
    bufp->fullIData(oldp+819,(0x40U),32);
    bufp->fullIData(oldp+820,(0x41U),32);
    bufp->fullIData(oldp+821,(0x42U),32);
    bufp->fullIData(oldp+822,(0x43U),32);
    bufp->fullIData(oldp+823,(0x44U),32);
    bufp->fullIData(oldp+824,(0x45U),32);
    bufp->fullIData(oldp+825,(0x48U),32);
    bufp->fullIData(oldp+826,(0x52U),32);
    bufp->fullIData(oldp+827,(0x53U),32);
    bufp->fullIData(oldp+828,(0x49U),32);
    bufp->fullIData(oldp+829,(0x4aU),32);
    bufp->fullIData(oldp+830,(0x4bU),32);
    bufp->fullIData(oldp+831,(0x4cU),32);
    bufp->fullIData(oldp+832,(0x4dU),32);
    bufp->fullIData(oldp+833,(0x4eU),32);
    bufp->fullIData(oldp+834,(0x4fU),32);
    bufp->fullIData(oldp+835,(0x50U),32);
    bufp->fullIData(oldp+836,(0x51U),32);
    bufp->fullIData(oldp+837,(0x54U),32);
    bufp->fullIData(oldp+838,(0x5eU),32);
    bufp->fullIData(oldp+839,(0x5fU),32);
    bufp->fullIData(oldp+840,(0x55U),32);
    bufp->fullIData(oldp+841,(0x56U),32);
    bufp->fullIData(oldp+842,(0x57U),32);
    bufp->fullIData(oldp+843,(0x58U),32);
    bufp->fullIData(oldp+844,(0x59U),32);
    bufp->fullIData(oldp+845,(0x5aU),32);
    bufp->fullIData(oldp+846,(0x5bU),32);
    bufp->fullIData(oldp+847,(0x5cU),32);
    bufp->fullIData(oldp+848,(0x5dU),32);
    bufp->fullIData(oldp+849,(0x60U),32);
    bufp->fullIData(oldp+850,(0x6aU),32);
    bufp->fullIData(oldp+851,(0x6bU),32);
    bufp->fullIData(oldp+852,(0x61U),32);
    bufp->fullIData(oldp+853,(0x62U),32);
    bufp->fullIData(oldp+854,(0x63U),32);
    bufp->fullIData(oldp+855,(0x64U),32);
    bufp->fullIData(oldp+856,(0x65U),32);
    bufp->fullIData(oldp+857,(0x66U),32);
    bufp->fullIData(oldp+858,(0x67U),32);
    bufp->fullIData(oldp+859,(0x68U),32);
    bufp->fullIData(oldp+860,(0x69U),32);
    bufp->fullIData(oldp+861,(0x6cU),32);
    bufp->fullIData(oldp+862,(0x76U),32);
    bufp->fullIData(oldp+863,(0x77U),32);
    bufp->fullIData(oldp+864,(0x6dU),32);
    bufp->fullIData(oldp+865,(0x6eU),32);
    bufp->fullIData(oldp+866,(0x6fU),32);
    bufp->fullIData(oldp+867,(0x70U),32);
    bufp->fullIData(oldp+868,(0x71U),32);
    bufp->fullIData(oldp+869,(0x72U),32);
    bufp->fullIData(oldp+870,(0x73U),32);
    bufp->fullIData(oldp+871,(0x74U),32);
    bufp->fullIData(oldp+872,(0x75U),32);
    bufp->fullIData(oldp+873,(0xf0000000U),32);
    bufp->fullIData(oldp+874,(0x55555555U),32);
}

VL_ATTR_COLD void Vtb___024root__trace_full_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb___024root__trace_full_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_0_sub_0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[15]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[16]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[17]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[18]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[19]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[20]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[21]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[22]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[23]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[24]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[25]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[26]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[27]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[28]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[29]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[30]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[31]),32);
    bufp->fullSData(oldp+33,(vlSelfRef.tb__DOT__u_but__DOT____Vcellout__u_ptm__src),10);
    bufp->fullBit(oldp+34,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__src_edge));
    bufp->fullBit(oldp+35,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__src_edge));
    bufp->fullBit(oldp+36,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__src_edge));
    bufp->fullBit(oldp+37,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__src_edge));
    bufp->fullBit(oldp+38,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__src_edge));
    bufp->fullBit(oldp+39,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__src_edge));
    bufp->fullBit(oldp+40,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__src_edge));
    bufp->fullBit(oldp+41,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__src_edge));
    bufp->fullBit(oldp+42,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__src_edge));
    bufp->fullBit(oldp+43,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__src_edge));
    bufp->fullIData(oldp+44,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins),32);
    bufp->fullCData(oldp+45,((0x1fU & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+46,((0x1fU & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+47,((0x1fU & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                       >> 7U))),5);
    bufp->fullCData(oldp+48,((0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)),7);
    bufp->fullCData(oldp+49,((7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+50,((vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+51,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_imm_i),32);
    bufp->fullIData(oldp+52,((((- (IData)((vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+53,((((- (IData)((vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0x800U 
                                            & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                    >> 7U)))))),32);
    bufp->fullIData(oldp+54,((0xfffff000U & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)),32);
    bufp->fullIData(oldp+55,((((- (IData)((vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0x1fU))) 
                               << 0x14U) | (((0xff000U 
                                              & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins) 
                                             | (0x800U 
                                                & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                   >> 9U))) 
                                            | (0x7feU 
                                               & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                  >> 0x14U))))),32);
    bufp->fullBit(oldp+56,((0U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+57,((1U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+58,((2U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+59,((3U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+60,((4U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+61,((5U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+62,((6U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+63,((7U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+64,((0U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                   >> 0x19U))));
    bufp->fullBit(oldp+65,((0x20U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                      >> 0x19U))));
    bufp->fullBit(oldp+66,((0x18U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                      >> 0x19U))));
    bufp->fullBit(oldp+67,((0U == (0x1fU & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+68,((0U == (0x1fU & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+69,((1U == (0x1fU & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+70,((2U == (0x1fU & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+71,((0U == (0x1fU & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                            >> 7U)))));
    bufp->fullSData(oldp+72,((vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                              >> 0x14U)),12);
    bufp->fullBit(oldp+73,((1U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                  >> 0xcU))));
    bufp->fullBit(oldp+74,((1U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                  >> 0xdU))));
    bufp->fullBit(oldp+75,((1U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+76,((1U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                  >> 0xeU))));
    bufp->fullBit(oldp+77,((0x37U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
    bufp->fullBit(oldp+78,((0x17U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
    bufp->fullBit(oldp+79,((0x6fU == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
    bufp->fullBit(oldp+80,((0x67U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
    bufp->fullBit(oldp+81,((0x63U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
    bufp->fullBit(oldp+82,((3U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
    bufp->fullBit(oldp+83,((0x23U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
    bufp->fullBit(oldp+84,((0x13U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
    bufp->fullBit(oldp+85,((0x33U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
    bufp->fullBit(oldp+86,((0xfU == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
    bufp->fullBit(oldp+87,((0x73U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
    bufp->fullBit(oldp+88,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_jalr));
    bufp->fullBit(oldp+89,((IData)((0x63U == (0x707fU 
                                              & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
    bufp->fullBit(oldp+90,((IData)((0x1063U == (0x707fU 
                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
    bufp->fullBit(oldp+91,((IData)((0x4063U == (0x707fU 
                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
    bufp->fullBit(oldp+92,((IData)((0x5063U == (0x707fU 
                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
    bufp->fullBit(oldp+93,((IData)((0x6063U == (0x707fU 
                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
    bufp->fullBit(oldp+94,((IData)((0x7063U == (0x707fU 
                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
    bufp->fullBit(oldp+95,((IData)((3U == (0x707fU 
                                           & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
    bufp->fullBit(oldp+96,((IData)((0x4003U == (0x707fU 
                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
    bufp->fullBit(oldp+97,((IData)((0x5003U == (0x707fU 
                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
    bufp->fullBit(oldp+98,((IData)((0x13U == (0x707fU 
                                              & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
    bufp->fullBit(oldp+99,((IData)((0x4013U == (0x707fU 
                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
    bufp->fullBit(oldp+100,((IData)((0x6013U == (0x707fU 
                                                 & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
    bufp->fullBit(oldp+101,((IData)((0x7013U == (0x707fU 
                                                 & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
    bufp->fullBit(oldp+102,((IData)((0x4033U == (0xfe00707fU 
                                                 & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
    bufp->fullBit(oldp+103,((IData)((0x6033U == (0xfe00707fU 
                                                 & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
    bufp->fullBit(oldp+104,((IData)((0x7033U == (0xfe00707fU 
                                                 & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
    bufp->fullBit(oldp+105,((IData)((0xfU == (0x707fU 
                                              & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
    bufp->fullBit(oldp+106,((0x300U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                        >> 0x14U))));
    bufp->fullBit(oldp+107,((0x304U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                        >> 0x14U))));
    bufp->fullBit(oldp+108,((0x305U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                        >> 0x14U))));
    bufp->fullBit(oldp+109,((0x341U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                        >> 0x14U))));
    bufp->fullBit(oldp+110,((0x342U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                        >> 0x14U))));
    bufp->fullBit(oldp+111,((0x344U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                        >> 0x14U))));
    bufp->fullBit(oldp+112,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_ins_is_j));
    bufp->fullBit(oldp+113,(((0x17U != (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                             & ((0x37U != (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                & (~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_ins_is_j))))));
    bufp->fullCData(oldp+114,(((3U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))
                                ? 4U : 6U)),6);
    bufp->fullCData(oldp+115,(((3U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))
                                ? 5U : 7U)),6);
    bufp->fullBit(oldp+116,(((0x13U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                             & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_33))));
    bufp->fullBit(oldp+117,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_3) 
                             & (0U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                       >> 0x19U)))));
    bufp->fullBit(oldp+118,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_3) 
                             & (0x20U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                          >> 0x19U)))));
    bufp->fullBit(oldp+119,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_4) 
                             & (0U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                       >> 0x19U)))));
    bufp->fullBit(oldp+120,(((0x33U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                             & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_33))));
    bufp->fullBit(oldp+121,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_5) 
                             & (0U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                       >> 0x19U)))));
    bufp->fullBit(oldp+122,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_5) 
                             & (0x20U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                          >> 0x19U)))));
    bufp->fullBit(oldp+123,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_ev) 
                             & (IData)((0x100000U == 
                                        (0xfff00000U 
                                         & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))))));
    bufp->fullBit(oldp+124,(((0x37U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                             | ((0x17U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                | (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_4) 
                                    & (0U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                              >> 0x19U))) 
                                   | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sub) 
                                      | ((IData)((0x13U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))) 
                                         | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_ins_is_j))))))));
    bufp->fullBit(oldp+125,((((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_5) 
                              & (0U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                        >> 0x19U))) 
                             | (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_5) 
                                 & (0x20U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                              >> 0x19U))) 
                                | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_3) 
                                   & ((0U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                              >> 0x19U)) 
                                      | (0x20U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                   >> 0x19U))))))));
    bufp->fullBit(oldp+126,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_lh));
    bufp->fullBit(oldp+127,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_slti));
    bufp->fullBit(oldp+128,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sltiu));
    bufp->fullBit(oldp+129,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sub));
    bufp->fullBit(oldp+130,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_slt));
    bufp->fullBit(oldp+131,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sltu));
    bufp->fullBit(oldp+132,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_ev));
    bufp->fullBit(oldp+133,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_ecall));
    bufp->fullBit(oldp+134,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_mret));
    bufp->fullBit(oldp+135,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sub));
    bufp->fullIData(oldp+136,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sub),32);
    bufp->fullBit(oldp+137,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_slt) 
                             | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_slti) 
                                | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sltu) 
                                   | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sltiu))))));
    bufp->fullBit(oldp+138,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_inv) 
                             | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))));
    bufp->fullBit(oldp+139,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_funct7_eq_v));
    bufp->fullBit(oldp+140,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_inv_jx));
    bufp->fullBit(oldp+141,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_inv_bx));
    bufp->fullBit(oldp+142,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_30) 
                             | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_29))));
    bufp->fullBit(oldp+143,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_inv));
    bufp->fullBit(oldp+144,(vlSelfRef.tb__DOT__bus_we));
    bufp->fullIData(oldp+145,(vlSelfRef.tb__DOT__bus_wdata),32);
    bufp->fullBit(oldp+146,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__src_edge));
    bufp->fullBit(oldp+147,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__src_edge));
    bufp->fullBit(oldp+148,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__src_edge));
    bufp->fullBit(oldp+149,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__src_edge));
    bufp->fullBit(oldp+150,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__src_edge));
    bufp->fullBit(oldp+151,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__src_edge));
    bufp->fullBit(oldp+152,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__src_edge));
    bufp->fullBit(oldp+153,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__src_edge));
    bufp->fullBit(oldp+154,(vlSelfRef.tb__DOT__u_cpu__DOT__wb_expt));
    bufp->fullBit(oldp+155,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_lw));
    bufp->fullBit(oldp+156,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sb));
    bufp->fullBit(oldp+157,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sh));
    bufp->fullBit(oldp+158,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sw));
    bufp->fullBit(oldp+159,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_ins_is_ls));
    bufp->fullBit(oldp+160,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_lsu_sz_mask_hi));
    bufp->fullCData(oldp+161,((0xfU & vlSelfRef.tb__DOT__bus_wdata)),4);
    bufp->fullCData(oldp+162,((0xfU & (vlSelfRef.tb__DOT__bus_wdata 
                                       >> 4U))),4);
    bufp->fullBit(oldp+163,((0xfU == (0xfU & vlSelfRef.tb__DOT__bus_wdata))));
    bufp->fullBit(oldp+164,((0xfU == (0xfU & (vlSelfRef.tb__DOT__bus_wdata 
                                              >> 4U)))));
    bufp->fullSData(oldp+165,((((((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_11) 
                                  << 0xbU) | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_10) 
                                               << 0xaU) 
                                              | ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_9) 
                                                 << 9U))) 
                                | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_8) 
                                    << 8U) | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_7) 
                                               << 7U) 
                                              | ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_6) 
                                                 << 6U)))) 
                               | ((((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_5) 
                                    << 5U) | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_4) 
                                               << 4U) 
                                              | ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_3) 
                                                 << 3U))) 
                                  | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_2) 
                                      << 2U) | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_1) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_0)))))),12);
    bufp->fullSData(oldp+166,((((((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_21) 
                                  << 9U) | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_20) 
                                             << 8U) 
                                            | ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_19) 
                                               << 7U))) 
                                | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_18) 
                                    << 6U) | ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_17) 
                                              << 5U))) 
                               | ((((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_16) 
                                    << 4U) | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_15) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_14) 
                                                 << 2U))) 
                                  | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_13) 
                                      << 1U) | (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_12))))),10);
    bufp->fullBit(oldp+167,((0U != vlSelfRef.tb__DOT__u_but__DOT__src)));
    bufp->fullIData(oldp+168,(vlSelfRef.tb__DOT__u_but__DOT__src),18);
    bufp->fullBit(oldp+169,(vlSelfRef.tb__DOT__u_cpu__DOT__if_expt));
    bufp->fullBit(oldp+170,(vlSelfRef.tb__DOT__u_cpu__DOT__if_irq_e));
    bufp->fullCData(oldp+171,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__if_irq_e)
                                ? 0xbU : 0U)),6);
    bufp->fullIData(oldp+172,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_pc),32);
    bufp->fullIData(oldp+173,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_imm),32);
    bufp->fullIData(oldp+174,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add_op1),32);
    bufp->fullQData(oldp+175,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add),33);
    bufp->fullIData(oldp+177,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_xor),32);
    bufp->fullBit(oldp+178,((0U == vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_xor)));
    bufp->fullBit(oldp+179,((1U & (~ (IData)((vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add 
                                              >> 0x20U))))));
    bufp->fullBit(oldp+180,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_lts));
    bufp->fullBit(oldp+181,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_srs));
    bufp->fullIData(oldp+182,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl0),32);
    bufp->fullIData(oldp+183,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl1),32);
    bufp->fullIData(oldp+184,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl2),32);
    bufp->fullIData(oldp+185,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl3),32);
    bufp->fullIData(oldp+186,(((0x10U & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_imm)
                                ? VL_SHIFTL_III(32,32,32, vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl3, 0x10U)
                                : vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl3)),32);
}

VL_ATTR_COLD void Vtb___024root__trace_full_1_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb___024root__trace_full_1(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_1\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb___024root__trace_full_1_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb___024root__trace_full_1_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_1_sub_0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+187,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr0),32);
    bufp->fullIData(oldp+188,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr1),32);
    bufp->fullIData(oldp+189,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr2),32);
    bufp->fullIData(oldp+190,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr3),32);
    bufp->fullIData(oldp+191,(((0x10U & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_imm)
                                ? (((- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_srs))) 
                                    << 0x10U) | (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr3 
                                                 >> 0x10U))
                                : vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr3)),32);
    bufp->fullCData(oldp+192,(((1U & (- (IData)((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add)))))) 
                               | ((2U & (- (IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add)))))) 
                                  | ((4U & (- (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add)))))) 
                                     | (8U & (- (IData)(
                                                        (3U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add)))))))))),4);
    bufp->fullCData(oldp+193,(((3U & (- (IData)((1U 
                                                 & (~ (IData)(
                                                              (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add 
                                                               >> 1U))))))) 
                               | (0xcU & (- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add 
                                                                >> 1U)))))))),4);
    bufp->fullIData(oldp+194,(((IData)((0U != vlSelfRef.tb__DOT__u_but__DOT__src)) 
                               << 0xbU)),32);
    bufp->fullIData(oldp+195,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_csr_rdata),32);
    bufp->fullCData(oldp+196,(vlSelfRef.tb__DOT__u_cpu__DOT__wb_lsu_lb),8);
    bufp->fullSData(oldp+197,(vlSelfRef.tb__DOT__u_cpu__DOT__wb_lsu_lh),16);
    bufp->fullBit(oldp+198,(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_set));
    bufp->fullBit(oldp+199,(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_ret));
    bufp->fullBit(oldp+200,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrw));
    bufp->fullBit(oldp+201,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrs));
    bufp->fullBit(oldp+202,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrc));
    bufp->fullBit(oldp+203,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrwi));
    bufp->fullBit(oldp+204,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrsi));
    bufp->fullBit(oldp+205,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrci));
    bufp->fullBit(oldp+206,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_blt));
    bufp->fullBit(oldp+207,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_bru_cmp));
    bufp->fullIData(oldp+208,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_csr_rs1),32);
    bufp->fullBit(oldp+209,(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we));
    bufp->fullIData(oldp+210,(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_wdata),32);
    bufp->fullBit(oldp+211,(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mstatus));
    bufp->fullBit(oldp+212,(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mie));
    bufp->fullBit(oldp+213,(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mepc));
    bufp->fullBit(oldp+214,(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mcause));
    bufp->fullBit(oldp+215,(vlSelfRef.tb__DOT__u_cpu__DOT__wi_csr_we_mstatus));
    bufp->fullBit(oldp+216,(vlSelfRef.tb__DOT__u_cpu__DOT__wi_csr_we_mcause));
    bufp->fullBit(oldp+217,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
    bufp->fullBit(oldp+218,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
    bufp->fullBit(oldp+219,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
    bufp->fullBit(oldp+220,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
    bufp->fullBit(oldp+221,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
    bufp->fullBit(oldp+222,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
    bufp->fullBit(oldp+223,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
    bufp->fullBit(oldp+224,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
    bufp->fullBit(oldp+225,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+226,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
    bufp->fullBit(oldp+227,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
    bufp->fullBit(oldp+228,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+229,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
    bufp->fullBit(oldp+230,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
    bufp->fullBit(oldp+231,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
    bufp->fullBit(oldp+232,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
    bufp->fullBit(oldp+233,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
    bufp->fullBit(oldp+234,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
    bufp->fullBit(oldp+235,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
    bufp->fullBit(oldp+236,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
    bufp->fullBit(oldp+237,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+238,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
    bufp->fullBit(oldp+239,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
    bufp->fullBit(oldp+240,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+241,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
    bufp->fullBit(oldp+242,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
    bufp->fullBit(oldp+243,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
    bufp->fullBit(oldp+244,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
    bufp->fullBit(oldp+245,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
    bufp->fullBit(oldp+246,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
    bufp->fullBit(oldp+247,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
    bufp->fullBit(oldp+248,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
    bufp->fullBit(oldp+249,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+250,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
    bufp->fullBit(oldp+251,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
    bufp->fullBit(oldp+252,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+253,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
    bufp->fullBit(oldp+254,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
    bufp->fullBit(oldp+255,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
    bufp->fullBit(oldp+256,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
    bufp->fullBit(oldp+257,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
    bufp->fullBit(oldp+258,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
    bufp->fullBit(oldp+259,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
    bufp->fullBit(oldp+260,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
    bufp->fullBit(oldp+261,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+262,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+263,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
    bufp->fullBit(oldp+264,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
    bufp->fullBit(oldp+265,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
    bufp->fullBit(oldp+266,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+267,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+268,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
    bufp->fullBit(oldp+269,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
    bufp->fullBit(oldp+270,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
    bufp->fullBit(oldp+271,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
    bufp->fullBit(oldp+272,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
    bufp->fullBit(oldp+273,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
    bufp->fullBit(oldp+274,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
    bufp->fullBit(oldp+275,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
    bufp->fullBit(oldp+276,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
    bufp->fullBit(oldp+277,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
    bufp->fullBit(oldp+278,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
    bufp->fullBit(oldp+279,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
    bufp->fullBit(oldp+280,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
    bufp->fullBit(oldp+281,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
    bufp->fullBit(oldp+282,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
    bufp->fullBit(oldp+283,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
    bufp->fullBit(oldp+284,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
    bufp->fullBit(oldp+285,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+286,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+287,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
    bufp->fullBit(oldp+288,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
    bufp->fullBit(oldp+289,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
    bufp->fullBit(oldp+290,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
    bufp->fullBit(oldp+291,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
    bufp->fullBit(oldp+292,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
    bufp->fullBit(oldp+293,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
    bufp->fullBit(oldp+294,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+295,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+296,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
    bufp->fullBit(oldp+297,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
    bufp->fullBit(oldp+298,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
    bufp->fullBit(oldp+299,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
    bufp->fullBit(oldp+300,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
    bufp->fullBit(oldp+301,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
    bufp->fullBit(oldp+302,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
    bufp->fullSData(oldp+303,(vlSelfRef.tb__DOT__u_led__DOT__val),12);
    bufp->fullBit(oldp+304,((1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val))));
    bufp->fullBit(oldp+305,((1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                   >> 1U))));
    bufp->fullBit(oldp+306,((1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                   >> 2U))));
    bufp->fullBit(oldp+307,((1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                   >> 3U))));
    bufp->fullBit(oldp+308,((1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                   >> 4U))));
    bufp->fullBit(oldp+309,((1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                   >> 5U))));
    bufp->fullBit(oldp+310,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
    bufp->fullBit(oldp+311,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
    bufp->fullBit(oldp+312,((1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                   >> 6U))));
    bufp->fullBit(oldp+313,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
    bufp->fullBit(oldp+314,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
    bufp->fullBit(oldp+315,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
    bufp->fullBit(oldp+316,((1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                   >> 7U))));
    bufp->fullBit(oldp+317,((1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                   >> 8U))));
    bufp->fullBit(oldp+318,((1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                   >> 9U))));
    bufp->fullBit(oldp+319,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
    bufp->fullBit(oldp+320,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
    bufp->fullBit(oldp+321,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
    bufp->fullBit(oldp+322,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
    bufp->fullBit(oldp+323,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
    bufp->fullBit(oldp+324,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
    bufp->fullBit(oldp+325,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
    bufp->fullBit(oldp+326,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
    bufp->fullBit(oldp+327,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
    bufp->fullBit(oldp+328,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
    bufp->fullBit(oldp+329,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
    bufp->fullBit(oldp+330,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
    bufp->fullBit(oldp+331,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
    bufp->fullBit(oldp+332,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
    bufp->fullBit(oldp+333,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
    bufp->fullBit(oldp+334,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
    bufp->fullBit(oldp+335,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
    bufp->fullBit(oldp+336,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
    bufp->fullBit(oldp+337,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
    bufp->fullBit(oldp+338,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
    bufp->fullBit(oldp+339,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
    bufp->fullBit(oldp+340,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
    bufp->fullBit(oldp+341,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
    bufp->fullBit(oldp+342,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
    bufp->fullBit(oldp+343,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
    bufp->fullBit(oldp+344,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
    bufp->fullBit(oldp+345,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
    bufp->fullBit(oldp+346,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
    bufp->fullBit(oldp+347,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
    bufp->fullBit(oldp+348,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
    bufp->fullBit(oldp+349,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
    bufp->fullBit(oldp+350,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
    bufp->fullBit(oldp+351,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
    bufp->fullBit(oldp+352,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
    bufp->fullBit(oldp+353,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
    bufp->fullBit(oldp+354,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
    bufp->fullBit(oldp+355,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
    bufp->fullBit(oldp+356,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
    bufp->fullBit(oldp+357,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
    bufp->fullBit(oldp+358,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
    bufp->fullBit(oldp+359,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
    bufp->fullBit(oldp+360,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
    bufp->fullBit(oldp+361,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
    bufp->fullBit(oldp+362,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
    bufp->fullBit(oldp+363,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
    bufp->fullBit(oldp+364,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
    bufp->fullBit(oldp+365,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
    bufp->fullBit(oldp+366,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
    bufp->fullBit(oldp+367,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
    bufp->fullBit(oldp+368,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
    bufp->fullBit(oldp+369,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
    bufp->fullBit(oldp+370,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
    bufp->fullBit(oldp+371,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
    bufp->fullBit(oldp+372,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
}

VL_ATTR_COLD void Vtb___024root__trace_full_2_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb___024root__trace_full_2(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_2\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb___024root__trace_full_2_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb___024root__trace_full_2_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_2_sub_0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+373,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
    bufp->fullBit(oldp+374,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
    bufp->fullBit(oldp+375,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
    bufp->fullBit(oldp+376,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
    bufp->fullBit(oldp+377,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
    bufp->fullBit(oldp+378,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
    bufp->fullBit(oldp+379,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
    bufp->fullBit(oldp+380,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
    bufp->fullBit(oldp+381,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
    bufp->fullBit(oldp+382,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
    bufp->fullBit(oldp+383,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
    bufp->fullBit(oldp+384,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
    bufp->fullBit(oldp+385,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
    bufp->fullBit(oldp+386,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
    bufp->fullBit(oldp+387,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
    bufp->fullBit(oldp+388,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
    bufp->fullBit(oldp+389,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
    bufp->fullBit(oldp+390,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
    bufp->fullBit(oldp+391,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
    bufp->fullBit(oldp+392,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
    bufp->fullBit(oldp+393,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
    bufp->fullBit(oldp+394,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
    bufp->fullBit(oldp+395,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
    bufp->fullBit(oldp+396,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
    bufp->fullBit(oldp+397,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
    bufp->fullBit(oldp+398,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
    bufp->fullBit(oldp+399,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
    bufp->fullBit(oldp+400,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
    bufp->fullBit(oldp+401,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
    bufp->fullBit(oldp+402,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
    bufp->fullBit(oldp+403,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
    bufp->fullBit(oldp+404,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
    bufp->fullBit(oldp+405,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
    bufp->fullBit(oldp+406,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
    bufp->fullBit(oldp+407,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
    bufp->fullBit(oldp+408,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
    bufp->fullBit(oldp+409,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
    bufp->fullBit(oldp+410,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
    bufp->fullBit(oldp+411,(vlSelfRef.tb__DOT__bus_en));
    bufp->fullIData(oldp+412,(vlSelfRef.tb__DOT__bus_addr),32);
    bufp->fullCData(oldp+413,(vlSelfRef.tb__DOT__bus_wstrb),4);
    bufp->fullSData(oldp+414,((0xfffU & vlSelfRef.tb__DOT__bus_addr)),12);
    bufp->fullBit(oldp+415,(vlSelfRef.tb__DOT__mem_en));
    bufp->fullBit(oldp+416,(vlSelfRef.tb__DOT__rng_en));
    bufp->fullBit(oldp+417,(vlSelfRef.tb__DOT__led_en));
    bufp->fullBit(oldp+418,(vlSelfRef.tb__DOT__lcd_en));
    bufp->fullBit(oldp+419,(vlSelfRef.tb__DOT__but_en));
    bufp->fullBit(oldp+420,(((IData)(vlSelfRef.tb__DOT__bus_en) 
                             & (0x10000U == (vlSelfRef.tb__DOT__bus_addr 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+421,(vlSelfRef.tb__DOT__u_but__DOT__wen));
    bufp->fullBit(oldp+422,(vlSelfRef.tb__DOT__u_led__DOT__wstrb_incomp));
    bufp->fullBit(oldp+423,(vlSelfRef.tb__DOT__u_rng__DOT__sel_val));
    bufp->fullBit(oldp+424,(vlSelfRef.tb__DOT__u_but__DOT__sel_src));
    bufp->fullBit(oldp+425,(vlSelfRef.tb__DOT__u_but__DOT__sel_ptm));
    bufp->fullBit(oldp+426,(vlSelfRef.tb__DOT__u_but__DOT__sel_stm));
    bufp->fullBit(oldp+427,(vlSelfRef.tb__DOT__u_but__DOT__clr_ptm));
    bufp->fullBit(oldp+428,(((IData)(vlSelfRef.tb__DOT__u_but__DOT__wen) 
                             & (IData)(vlSelfRef.tb__DOT__u_but__DOT__sel_ptm))));
    bufp->fullBit(oldp+429,(((IData)(vlSelfRef.tb__DOT__u_but__DOT__wen) 
                             & (IData)(vlSelfRef.tb__DOT__u_but__DOT__sel_stm))));
    bufp->fullCData(oldp+430,(vlSelfRef.tb__DOT__u_cpu__DOT__st_nxt),3);
    bufp->fullBit(oldp+431,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_expt));
    bufp->fullBit(oldp+432,(vlSelfRef.tb__DOT__u_lcd__DOT__wen));
    bufp->fullBit(oldp+433,((0U == (0xfffU & vlSelfRef.tb__DOT__bus_addr))));
    bufp->fullBit(oldp+434,(vlSelfRef.tb__DOT__u_led__DOT__wen));
    bufp->fullBit(oldp+435,(((~ (IData)(vlSelfRef.tb__DOT__u_led__DOT__wstrb_incomp)) 
                             & (0U == (0xfffU & vlSelfRef.tb__DOT__bus_addr)))));
    bufp->fullBit(oldp+436,((0xf0000000U >= vlSelfRef.tb__DOT__bus_addr)));
    bufp->fullBit(oldp+437,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+438,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
    bufp->fullBit(oldp+439,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+440,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
    bufp->fullBit(oldp+441,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
    bufp->fullBit(oldp+442,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
    bufp->fullBit(oldp+443,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
    bufp->fullBit(oldp+444,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
    bufp->fullBit(oldp+445,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
    bufp->fullBit(oldp+446,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
    bufp->fullBit(oldp+447,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
    bufp->fullBit(oldp+448,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
    bufp->fullBit(oldp+449,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
    bufp->fullBit(oldp+450,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
    bufp->fullBit(oldp+451,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
    bufp->fullBit(oldp+452,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
    bufp->fullBit(oldp+453,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
    bufp->fullBit(oldp+454,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
    bufp->fullBit(oldp+455,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
    bufp->fullBit(oldp+456,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
    bufp->fullBit(oldp+457,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
    bufp->fullBit(oldp+458,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
    bufp->fullBit(oldp+459,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
    bufp->fullBit(oldp+460,(vlSelfRef.tb__DOT__u_led__DOT__r_en));
    bufp->fullBit(oldp+461,(vlSelfRef.tb__DOT__u_led__DOT__g_en));
    bufp->fullBit(oldp+462,(vlSelfRef.tb__DOT__u_led__DOT__b_en));
    bufp->fullBit(oldp+463,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
    bufp->fullBit(oldp+464,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
    bufp->fullBit(oldp+465,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
    bufp->fullBit(oldp+466,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
    bufp->fullBit(oldp+467,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
    bufp->fullBit(oldp+468,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
    bufp->fullBit(oldp+469,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
    bufp->fullBit(oldp+470,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
    bufp->fullBit(oldp+471,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
    bufp->fullBit(oldp+472,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
    bufp->fullBit(oldp+473,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
    bufp->fullBit(oldp+474,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
    bufp->fullBit(oldp+475,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+476,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+477,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
    bufp->fullBit(oldp+478,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
    bufp->fullBit(oldp+479,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
    bufp->fullBit(oldp+480,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+481,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+482,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
    bufp->fullBit(oldp+483,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
    bufp->fullBit(oldp+484,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
    bufp->fullBit(oldp+485,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
    bufp->fullBit(oldp+486,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
    bufp->fullBit(oldp+487,(vlSelfRef.tb__DOT__u_mem__DOT__err_q));
    bufp->fullBit(oldp+488,(vlSelfRef.tb__DOT__u_rng__DOT__err_q));
    bufp->fullBit(oldp+489,(vlSelfRef.tb__DOT__u_led__DOT__err_q));
    bufp->fullBit(oldp+490,(vlSelfRef.tb__DOT__u_lcd__DOT__err_q));
    bufp->fullBit(oldp+491,((1U & (~ (IData)((0U != (IData)(vlSelfRef.tb__DOT__u_but__DOT__sel_q)))))));
    bufp->fullCData(oldp+492,(vlSelfRef.tb__DOT__u_but__DOT__sel_q),4);
    bufp->fullCData(oldp+493,(vlSelfRef.tb__DOT__u_cpu__DOT__ie_q),3);
    bufp->fullIData(oldp+494,(vlSelfRef.tb__DOT__u_cpu__DOT__bus_data_q),32);
    bufp->fullIData(oldp+495,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_q),32);
    bufp->fullIData(oldp+496,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_q),32);
    bufp->fullBit(oldp+497,((1U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_q))));
    bufp->fullBit(oldp+498,((2U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_q))));
    bufp->fullBit(oldp+499,((3U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_q))));
    bufp->fullBit(oldp+500,((4U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_q))));
    bufp->fullBit(oldp+501,(vlSelfRef.tb__DOT__u_bus__DOT__mem_en_q));
    bufp->fullBit(oldp+502,(vlSelfRef.tb__DOT__u_bus__DOT__rng_en_q));
    bufp->fullBit(oldp+503,(vlSelfRef.tb__DOT__u_bus__DOT__led_en_q));
    bufp->fullBit(oldp+504,(vlSelfRef.tb__DOT__u_bus__DOT__lcd_en_q));
    bufp->fullBit(oldp+505,(vlSelfRef.tb__DOT__u_bus__DOT__but_en_q));
    bufp->fullBit(oldp+506,(vlSelfRef.tb__DOT__u_bus__DOT__tmp_en_q));
    bufp->fullBit(oldp+507,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__val_q));
    bufp->fullBit(oldp+508,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__val_q));
    bufp->fullBit(oldp+509,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__val_q));
    bufp->fullBit(oldp+510,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__val_q));
    bufp->fullBit(oldp+511,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__val_q));
    bufp->fullBit(oldp+512,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__val_q));
    bufp->fullBit(oldp+513,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__val_q));
    bufp->fullBit(oldp+514,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__val_q));
    bufp->fullBit(oldp+515,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__val_q));
    bufp->fullBit(oldp+516,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__val_q));
    bufp->fullIData(oldp+517,(vlSelfRef.tb__DOT__u_but__DOT__ptm_q),20);
    bufp->fullIData(oldp+518,(vlSelfRef.tb__DOT__u_but__DOT__ptm_q),32);
    bufp->fullCData(oldp+519,((3U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)),2);
    bufp->fullBit(oldp+520,((0U == (3U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q))));
    bufp->fullBit(oldp+521,((1U == (3U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q))));
    bufp->fullBit(oldp+522,((2U == (3U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q))));
    bufp->fullBit(oldp+523,((3U == (3U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q))));
    bufp->fullBit(oldp+524,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__vld_q));
    bufp->fullCData(oldp+525,((3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                     >> 2U))),2);
    bufp->fullBit(oldp+526,((0U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 2U)))));
    bufp->fullBit(oldp+527,((1U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 2U)))));
    bufp->fullBit(oldp+528,((2U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 2U)))));
    bufp->fullBit(oldp+529,((3U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 2U)))));
    bufp->fullBit(oldp+530,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__vld_q));
    bufp->fullCData(oldp+531,((3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                     >> 4U))),2);
    bufp->fullBit(oldp+532,((0U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 4U)))));
    bufp->fullBit(oldp+533,((1U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 4U)))));
    bufp->fullBit(oldp+534,((2U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 4U)))));
    bufp->fullBit(oldp+535,((3U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 4U)))));
    bufp->fullCData(oldp+536,((3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                     >> 6U))),2);
    bufp->fullBit(oldp+537,((0U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 6U)))));
    bufp->fullBit(oldp+538,((1U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 6U)))));
    bufp->fullBit(oldp+539,((2U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 6U)))));
    bufp->fullBit(oldp+540,((3U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 6U)))));
    bufp->fullCData(oldp+541,((3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                     >> 8U))),2);
    bufp->fullBit(oldp+542,((0U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 8U)))));
    bufp->fullBit(oldp+543,((1U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 8U)))));
    bufp->fullBit(oldp+544,((2U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 8U)))));
    bufp->fullBit(oldp+545,((3U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 8U)))));
    bufp->fullCData(oldp+546,((3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                     >> 0xaU))),2);
    bufp->fullBit(oldp+547,((0U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+548,((1U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+549,((2U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+550,((3U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 0xaU)))));
    bufp->fullCData(oldp+551,((3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                     >> 0xcU))),2);
    bufp->fullBit(oldp+552,((0U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+553,((1U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+554,((2U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+555,((3U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 0xcU)))));
    bufp->fullCData(oldp+556,((3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                     >> 0xeU))),2);
    bufp->fullBit(oldp+557,((0U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 0xeU)))));
    bufp->fullBit(oldp+558,((1U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 0xeU)))));
}

VL_ATTR_COLD void Vtb___024root__trace_full_3_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb___024root__trace_full_3(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_3\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb___024root__trace_full_3_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb___024root__trace_full_3_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_3_sub_0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+559,((2U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 0xeU)))));
    bufp->fullBit(oldp+560,((3U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 0xeU)))));
    bufp->fullCData(oldp+561,((3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                     >> 0x10U))),2);
    bufp->fullBit(oldp+562,((0U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 0x10U)))));
    bufp->fullBit(oldp+563,((1U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 0x10U)))));
    bufp->fullBit(oldp+564,((2U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 0x10U)))));
    bufp->fullBit(oldp+565,((3U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 0x10U)))));
    bufp->fullCData(oldp+566,((3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                     >> 0x12U))),2);
    bufp->fullBit(oldp+567,((0U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 0x12U)))));
    bufp->fullBit(oldp+568,((1U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 0x12U)))));
    bufp->fullBit(oldp+569,((2U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 0x12U)))));
    bufp->fullBit(oldp+570,((3U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                          >> 0x12U)))));
    bufp->fullIData(oldp+571,(vlSelfRef.tb__DOT__u_mem__DOT__rdata_q),32);
    bufp->fullBit(oldp+572,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__val_q));
    bufp->fullBit(oldp+573,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__val_q));
    bufp->fullBit(oldp+574,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__val_q));
    bufp->fullBit(oldp+575,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__val_q));
    bufp->fullBit(oldp+576,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__val_q));
    bufp->fullBit(oldp+577,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__val_q));
    bufp->fullBit(oldp+578,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__val_q));
    bufp->fullBit(oldp+579,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__val_q));
    bufp->fullIData(oldp+580,(vlSelfRef.tb__DOT__u_rng__DOT__lfsr_q),32);
    bufp->fullSData(oldp+581,(vlSelfRef.tb__DOT__u_but__DOT__stm_q),16);
    bufp->fullIData(oldp+582,(vlSelfRef.tb__DOT__u_but__DOT__stm_q),32);
    bufp->fullCData(oldp+583,((3U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))),2);
    bufp->fullBit(oldp+584,((0U == (3U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q)))));
    bufp->fullBit(oldp+585,((1U == (3U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q)))));
    bufp->fullBit(oldp+586,((2U == (3U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q)))));
    bufp->fullBit(oldp+587,((3U == (3U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q)))));
    bufp->fullBit(oldp+588,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__vld_q));
    bufp->fullCData(oldp+589,((3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+590,((0U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 2U)))));
    bufp->fullBit(oldp+591,((1U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 2U)))));
    bufp->fullBit(oldp+592,((2U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 2U)))));
    bufp->fullBit(oldp+593,((3U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 2U)))));
    bufp->fullBit(oldp+594,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__vld_q));
    bufp->fullCData(oldp+595,((3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                     >> 4U))),2);
    bufp->fullBit(oldp+596,((0U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 4U)))));
    bufp->fullBit(oldp+597,((1U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 4U)))));
    bufp->fullBit(oldp+598,((2U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 4U)))));
    bufp->fullBit(oldp+599,((3U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 4U)))));
    bufp->fullBit(oldp+600,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__vld_q));
    bufp->fullCData(oldp+601,((3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                     >> 6U))),2);
    bufp->fullBit(oldp+602,((0U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 6U)))));
    bufp->fullBit(oldp+603,((1U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 6U)))));
    bufp->fullBit(oldp+604,((2U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 6U)))));
    bufp->fullBit(oldp+605,((3U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 6U)))));
    bufp->fullBit(oldp+606,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__vld_q));
    bufp->fullCData(oldp+607,((3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                     >> 8U))),2);
    bufp->fullBit(oldp+608,((0U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 8U)))));
    bufp->fullBit(oldp+609,((1U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 8U)))));
    bufp->fullBit(oldp+610,((2U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 8U)))));
    bufp->fullBit(oldp+611,((3U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 8U)))));
    bufp->fullBit(oldp+612,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__vld_q));
    bufp->fullCData(oldp+613,((3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                     >> 0xaU))),2);
    bufp->fullBit(oldp+614,((0U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+615,((1U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+616,((2U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+617,((3U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+618,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__vld_q));
    bufp->fullCData(oldp+619,((3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                     >> 0xcU))),2);
    bufp->fullBit(oldp+620,((0U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+621,((1U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+622,((2U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+623,((3U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+624,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__vld_q));
    bufp->fullCData(oldp+625,((3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                     >> 0xeU))),2);
    bufp->fullBit(oldp+626,((0U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 0xeU)))));
    bufp->fullBit(oldp+627,((1U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 0xeU)))));
    bufp->fullBit(oldp+628,((2U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 0xeU)))));
    bufp->fullBit(oldp+629,((3U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                          >> 0xeU)))));
    bufp->fullBit(oldp+630,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__vld_q));
    bufp->fullIData(oldp+631,(((0x40U & (vlSelfRef.tb__DOT__u_rng__DOT__lfsr_q 
                                         >> 0x19U)) 
                               | ((0x20U & (vlSelfRef.tb__DOT__u_rng__DOT__lfsr_q 
                                            >> 0x1aU)) 
                                  | (2U & (vlSelfRef.tb__DOT__u_rng__DOT__lfsr_q 
                                           >> 0x1eU))))),31);
    bufp->fullBit(oldp+632,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__vld_q));
    bufp->fullBit(oldp+633,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__vld_q));
    bufp->fullBit(oldp+634,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__vld_q));
    bufp->fullBit(oldp+635,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__vld_q));
    bufp->fullBit(oldp+636,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__vld_q));
    bufp->fullBit(oldp+637,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__vld_q));
    bufp->fullBit(oldp+638,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__vld_q));
    bufp->fullBit(oldp+639,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__vld_q));
    bufp->fullBit(oldp+640,(vlSelfRef.clk_i));
    bufp->fullBit(oldp+641,(vlSelfRef.rst_ni));
    bufp->fullWData(oldp+642,(vlSelfRef.led_r_o),120);
    bufp->fullWData(oldp+646,(vlSelfRef.led_g_o),120);
    bufp->fullWData(oldp+650,(vlSelfRef.led_b_o),120);
    bufp->fullCData(oldp+654,(vlSelfRef.sevensegment_1_o),8);
    bufp->fullCData(oldp+655,(vlSelfRef.sevensegment_2_o),8);
    bufp->fullCData(oldp+656,(vlSelfRef.sevensegment_3_o),8);
    bufp->fullCData(oldp+657,(vlSelfRef.sevensegment_4_o),8);
    bufp->fullBit(oldp+658,(vlSelfRef.button_top_i));
    bufp->fullBit(oldp+659,(vlSelfRef.button_bottom_i));
    bufp->fullBit(oldp+660,(vlSelfRef.button_left_i));
    bufp->fullBit(oldp+661,(vlSelfRef.button_right_i));
    bufp->fullBit(oldp+662,(vlSelfRef.button_center_i));
    bufp->fullBit(oldp+663,(vlSelfRef.joystick_up_i));
    bufp->fullBit(oldp+664,(vlSelfRef.joystick_down_i));
    bufp->fullBit(oldp+665,(vlSelfRef.joystick_left_i));
    bufp->fullBit(oldp+666,(vlSelfRef.joystick_right_i));
    bufp->fullBit(oldp+667,(vlSelfRef.joystick_pressed_i));
    bufp->fullCData(oldp+668,(vlSelfRef.dip_switches_i),8);
    bufp->fullIData(oldp+669,(vlSelfRef.tb__DOT__bus_rdata),32);
    bufp->fullBit(oldp+670,((1U & (((IData)(vlSelfRef.tb__DOT__u_bus__DOT__mem_en_q) 
                                    & (IData)(vlSelfRef.tb__DOT__u_mem__DOT__err_q)) 
                                   | (((IData)(vlSelfRef.tb__DOT__u_bus__DOT__rng_en_q) 
                                       & (IData)(vlSelfRef.tb__DOT__u_rng__DOT__err_q)) 
                                      | (((IData)(vlSelfRef.tb__DOT__u_bus__DOT__led_en_q) 
                                          & (IData)(vlSelfRef.tb__DOT__u_led__DOT__err_q)) 
                                         | (((IData)(vlSelfRef.tb__DOT__u_bus__DOT__lcd_en_q) 
                                             & (IData)(vlSelfRef.tb__DOT__u_lcd__DOT__err_q)) 
                                            | ((~ ((IData)(vlSelfRef.tb__DOT__u_bus__DOT__mem_en_q) 
                                                   | ((IData)(vlSelfRef.tb__DOT__u_bus__DOT__rng_en_q) 
                                                      | ((IData)(vlSelfRef.tb__DOT__u_bus__DOT__lcd_en_q) 
                                                         | ((IData)(vlSelfRef.tb__DOT__u_bus__DOT__led_en_q) 
                                                            | ((IData)(vlSelfRef.tb__DOT__u_bus__DOT__but_en_q) 
                                                               | (IData)(vlSelfRef.tb__DOT__u_bus__DOT__tmp_en_q))))))) 
                                               | ((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelfRef.tb__DOT__u_but__DOT__sel_q)))) 
                                                  & (IData)(vlSelfRef.tb__DOT__u_bus__DOT__but_en_q))))))))));
    bufp->fullIData(oldp+671,((((vlSelfRef.tb__DOT__u_lcd__DOT__disp_q
                                 [3U] << 0x18U) | (
                                                   vlSelfRef.tb__DOT__u_lcd__DOT__disp_q
                                                   [2U] 
                                                   << 0x10U)) 
                               | ((vlSelfRef.tb__DOT__u_lcd__DOT__disp_q
                                   [1U] << 8U) | vlSelfRef.tb__DOT__u_lcd__DOT__disp_q
                                  [0U]))),32);
    bufp->fullIData(oldp+672,((((- (IData)((1U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__sel_q)))) 
                                & (((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                    << 0x10U) | (IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push))) 
                               | (((- (IData)((1U & 
                                               ((IData)(vlSelfRef.tb__DOT__u_but__DOT__sel_q) 
                                                >> 1U)))) 
                                   & (((IData)(vlSelfRef.tb__DOT__u_but__DOT____Vcellout__u_stm__src) 
                                       << 0x10U) | (IData)(vlSelfRef.tb__DOT__u_but__DOT____Vcellout__u_ptm__src))) 
                                  | (((- (IData)((1U 
                                                  & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__sel_q) 
                                                     >> 2U)))) 
                                      & vlSelfRef.tb__DOT__u_but__DOT__ptm_q) 
                                     | ((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__sel_q) 
                                                       >> 3U)))) 
                                        & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q)))))),32);
    bufp->fullSData(oldp+673,((((((IData)(vlSelfRef.button_top_i) 
                                  << 9U) | (((IData)(vlSelfRef.button_bottom_i) 
                                             << 8U) 
                                            | ((IData)(vlSelfRef.button_left_i) 
                                               << 7U))) 
                                | (((IData)(vlSelfRef.button_right_i) 
                                    << 6U) | ((IData)(vlSelfRef.button_center_i) 
                                              << 5U))) 
                               | ((((IData)(vlSelfRef.joystick_up_i) 
                                    << 4U) | (((IData)(vlSelfRef.joystick_down_i) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.joystick_left_i) 
                                                 << 2U))) 
                                  | (((IData)(vlSelfRef.joystick_right_i) 
                                      << 1U) | (IData)(vlSelfRef.joystick_pressed_i))))),10);
    bufp->fullBit(oldp+674,(vlSelfRef.tb__DOT__u_but__DOT__ext_vld_q));
    bufp->fullIData(oldp+675,(vlSelfRef.tb__DOT__u_but__DOT__ext_val_q),18);
    bufp->fullSData(oldp+676,(vlSelfRef.tb__DOT__u_but__DOT__ext_push),10);
    bufp->fullCData(oldp+677,(vlSelfRef.tb__DOT__u_but__DOT__ext_switch),8);
    bufp->fullBit(oldp+678,((((IData)(vlSelfRef.tb__DOT__bus_we) 
                              & (0U != vlSelfRef.tb__DOT__bus_wdata)) 
                             | (IData)(vlSelfRef.tb__DOT__u_led__DOT__wstrb_incomp))));
    bufp->fullIData(oldp+679,((((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                << 0x10U) | (IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push))),32);
    bufp->fullIData(oldp+680,((((IData)(vlSelfRef.tb__DOT__u_but__DOT____Vcellout__u_stm__src) 
                                << 0x10U) | (IData)(vlSelfRef.tb__DOT__u_but__DOT____Vcellout__u_ptm__src))),32);
    bufp->fullCData(oldp+681,(vlSelfRef.tb__DOT__u_but__DOT____Vcellout__u_stm__src),8);
    bufp->fullCData(oldp+682,(vlSelfRef.tb__DOT__u_cpu__DOT__st_q),3);
    bufp->fullIData(oldp+683,(vlSelfRef.tb__DOT__u_cpu__DOT__pc_q),32);
    bufp->fullIData(oldp+684,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_set)
                                ? vlSelfRef.tb__DOT__u_cpu__DOT__csr_mtvec_q
                                : ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_ret)
                                    ? vlSelfRef.tb__DOT__u_cpu__DOT__csr_mepc_q
                                    : ((((- (IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_jalr))))) 
                                         & vlSelfRef.tb__DOT__u_cpu__DOT__pc_q) 
                                        | ((- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_jalr))) 
                                           & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_q)) 
                                       + (((- (IData)(
                                                      (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))) 
                                           & (((- (IData)(
                                                          (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                           >> 0x1fU))) 
                                               << 0x14U) 
                                              | (((0xff000U 
                                                   & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins) 
                                                  | (0x800U 
                                                     & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                        >> 9U))) 
                                                 | (0x7feU 
                                                    & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                       >> 0x14U))))) 
                                          | (((- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_jalr))) 
                                              & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_imm_i) 
                                             | (((- (IData)(
                                                            ((0x63U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                                             & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_bru_cmp)))) 
                                                 & (((- (IData)(
                                                                (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0x800U 
                                                        & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                                >> 7U)))))) 
                                                | (4U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_bru_cmp))))))))))))),32);
    bufp->fullBit(oldp+685,((1U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q))));
    bufp->fullBit(oldp+686,((2U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q))));
    bufp->fullBit(oldp+687,((3U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q))));
    bufp->fullBit(oldp+688,((4U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q))));
    bufp->fullBit(oldp+689,((5U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q))));
    bufp->fullBit(oldp+690,((0U != (3U & vlSelfRef.tb__DOT__u_cpu__DOT__pc_q))));
    bufp->fullBit(oldp+691,(((3U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0xcU))) 
                             | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_28))));
    bufp->fullBit(oldp+692,(((3U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0xcU))) 
                             | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_31))));
    bufp->fullBit(oldp+693,((((~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_funct7_eq_v)) 
                              & (0U == (0x7000U & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))) 
                             | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_30) 
                                | ((IData)(((0x2000U 
                                             == (0x7000U 
                                                 & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                            & (0U != 
                                               (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                >> 0x19U)))) 
                                   | ((IData)(((0x3000U 
                                                == 
                                                (0x7000U 
                                                 & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                               & (0U 
                                                  != 
                                                  (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                   >> 0x19U)))) 
                                      | ((IData)(((0x4000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                                  & (0U 
                                                     != 
                                                     (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                      >> 0x19U)))) 
                                         | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_29) 
                                            | ((0U 
                                                != 
                                                (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                 >> 0x19U)) 
                                               & ((6U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                       >> 0xcU))) 
                                                  | (7U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                         >> 0xcU)))))))))))));
    bufp->fullBit(oldp+694,((((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                              & (0U == (0x7000U & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))) 
                             | ((4U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                              >> 0xcU))) 
                                | ((~ ((0x300U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                   >> 0x14U)) 
                                       | ((0x304U == 
                                           (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                            >> 0x14U)) 
                                          | ((0x305U 
                                              == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                  >> 0x14U)) 
                                             | ((0x341U 
                                                 == 
                                                 (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                  >> 0x14U)) 
                                                | ((0x342U 
                                                    == 
                                                    (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                     >> 0x14U)) 
                                                   | (0x344U 
                                                      == 
                                                      (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                       >> 0x14U)))))))) 
                                   & ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_32) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)))))));
    bufp->fullCData(oldp+695,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_inv)
                                ? 2U : ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_ecall)
                                         ? 0xbU : 3U))),6);
    bufp->fullIData(oldp+696,((vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_pc 
                               ^ (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add_op1 
                                  ^ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sub)))),32);
    bufp->fullIData(oldp+697,(((vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_pc 
                                & (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add_op1 
                                   | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sub))) 
                               | (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add_op1 
                                  & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sub)))),32);
    bufp->fullIData(oldp+698,((vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_q 
                               | vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_imm)),32);
    bufp->fullIData(oldp+699,((vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_q 
                               & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_imm)),32);
    bufp->fullIData(oldp+700,(((0x1000U & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)
                                ? (1U & (~ (IData)(
                                                   (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add 
                                                    >> 0x20U))))
                                : (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_lts))),32);
    bufp->fullIData(oldp+701,((((- (IData)((1U & (~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_jalr))))) 
                                & vlSelfRef.tb__DOT__u_cpu__DOT__pc_q) 
                               | ((- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_jalr))) 
                                  & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_q))),32);
    bufp->fullIData(oldp+702,((((- (IData)((0x6fU == 
                                            (0x7fU 
                                             & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))) 
                                & (((- (IData)((vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                >> 0x1fU))) 
                                    << 0x14U) | (((0xff000U 
                                                   & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins) 
                                                  | (0x800U 
                                                     & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                        >> 9U))) 
                                                 | (0x7feU 
                                                    & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                       >> 0x14U))))) 
                               | (((- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_jalr))) 
                                   & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_imm_i) 
                                  | (((- (IData)(((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                                  & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_bru_cmp)))) 
                                      & (((- (IData)(
                                                     (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | ((0x800U 
                                             & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                     >> 7U)))))) 
                                     | (4U & (- (IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_bru_cmp)))))))))),32);
    bufp->fullIData(oldp+703,(((((- (IData)((1U & (~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_jalr))))) 
                                 & vlSelfRef.tb__DOT__u_cpu__DOT__pc_q) 
                                | ((- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_jalr))) 
                                   & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_q)) 
                               + (((- (IData)((0x6fU 
                                               == (0x7fU 
                                                   & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))) 
                                   & (((- (IData)((vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                   >> 0x1fU))) 
                                       << 0x14U) | 
                                      (((0xff000U & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins) 
                                        | (0x800U & 
                                           (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                            >> 9U))) 
                                       | (0x7feU & 
                                          (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0x14U))))) 
                                  | (((- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_jalr))) 
                                      & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_imm_i) 
                                     | (((- (IData)(
                                                    ((0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                                     & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_bru_cmp)))) 
                                         & (((- (IData)(
                                                        (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0x800U 
                                                & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                        >> 7U)))))) 
                                        | (4U & (- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_bru_cmp))))))))))),32);
    bufp->fullBit(oldp+704,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_lh) 
                             | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sh))));
    bufp->fullBit(oldp+705,(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mie_q));
    bufp->fullBit(oldp+706,(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mtie_q));
    bufp->fullBit(oldp+707,(vlSelfRef.tb__DOT__u_cpu__DOT__csr_meie_q));
    bufp->fullBit(oldp+708,(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mpie_q));
    bufp->fullBit(oldp+709,(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mcause_i_q));
    bufp->fullCData(oldp+710,(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mcause_c_q),6);
    bufp->fullIData(oldp+711,(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+712,(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mie),32);
    bufp->fullIData(oldp+713,(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mtvec_q),32);
    bufp->fullIData(oldp+714,(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mepc_q),32);
    bufp->fullIData(oldp+715,(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mcause),32);
    bufp->fullIData(oldp+716,((((- (IData)((IData)(
                                                   (3U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))))) 
                                & (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_lsu_lb) 
                                                   >> 7U)))) 
                                    << 8U) | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_lsu_lb))) 
                               | (((- (IData)((IData)(
                                                      (0x4003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))))) 
                                   & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_lsu_lb)) 
                                  | (((- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_lh))) 
                                      & (((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_lsu_lh) 
                                                         >> 0xfU)))) 
                                          << 0x10U) 
                                         | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_lsu_lh))) 
                                     | (((- (IData)((IData)(
                                                            (0x5003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))))) 
                                         & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_lsu_lh)) 
                                        | ((- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_lw))) 
                                           & vlSelfRef.tb__DOT__bus_rdata)))))),32);
    bufp->fullBit(oldp+717,(((4U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q)) 
                             & ((~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_inv)) 
                                & ((0x63U != (0x7fU 
                                              & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                   & ((~ ((0U == (0x1fU 
                                                  & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                     >> 7U))) 
                                          | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_expt))) 
                                      & ((0x23U != 
                                          (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                         & (0xfU != 
                                            (0x7fU 
                                             & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))))))));
    bufp->fullIData(oldp+718,(vlSelfRef.tb__DOT__u_cpu__DOT__wb_gpr_wdata),32);
    bufp->fullBit(oldp+719,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we) 
                             & (0x305U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+720,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mepc) 
                             | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_set))));
    bufp->fullBit(oldp+721,((((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mstatus) 
                              & (vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_wdata 
                                 >> 3U)) | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_ret) 
                                            & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mpie_q)))));
    bufp->fullBit(oldp+722,((((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mstatus) 
                              & (vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_wdata 
                                 >> 7U)) | (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_set) 
                                             & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mie_q)) 
                                            | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_ret)))));
    bufp->fullIData(oldp+723,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mepc)
                                ? vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_wdata
                                : vlSelfRef.tb__DOT__u_cpu__DOT__pc_q)),32);
    bufp->fullBit(oldp+724,((1U & ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mcause)
                                    ? (vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_wdata 
                                       >> 0x1fU) : (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__if_irq_e)))));
    bufp->fullCData(oldp+725,((0x3fU & ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mcause)
                                         ? vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_wdata
                                         : ((1U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_q))
                                             ? ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__if_irq_e)
                                                 ? 0xbU
                                                 : 0U)
                                             : ((2U 
                                                 == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_q))
                                                 ? 
                                                ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_inv)
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_ecall)
                                                   ? 0xbU
                                                   : 3U))
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_q))
                                                  ? 
                                                 ((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))
                                                   ? 4U
                                                   : 6U)
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))
                                                   ? 5U
                                                   : 7U))))))),6);
    bufp->fullCData(oldp+726,(vlSelfRef.tb__DOT__u_lcd__DOT__disp_q[0]),8);
    bufp->fullCData(oldp+727,(vlSelfRef.tb__DOT__u_lcd__DOT__disp_q[1]),8);
    bufp->fullCData(oldp+728,(vlSelfRef.tb__DOT__u_lcd__DOT__disp_q[2]),8);
    bufp->fullCData(oldp+729,(vlSelfRef.tb__DOT__u_lcd__DOT__disp_q[3]),8);
    bufp->fullWData(oldp+730,(vlSelfRef.tb__DOT__u_led__DOT__led_r_q),120);
    bufp->fullWData(oldp+734,(vlSelfRef.tb__DOT__u_led__DOT__led_g_q),120);
    bufp->fullWData(oldp+738,(vlSelfRef.tb__DOT__u_led__DOT__led_b_q),120);
    bufp->fullBit(oldp+742,(((IData)(vlSelfRef.tb__DOT__mem_en) 
                             & ((IData)(vlSelfRef.tb__DOT__bus_we) 
                                & (0xf0000000U >= vlSelfRef.tb__DOT__bus_addr)))));
    bufp->fullBit(oldp+743,(((IData)(vlSelfRef.tb__DOT__mem_en) 
                             & ((~ (IData)(vlSelfRef.tb__DOT__bus_we)) 
                                & (0xf0000000U >= vlSelfRef.tb__DOT__bus_addr)))));
}
