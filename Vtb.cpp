// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb::Vtb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb__Syms(contextp(), _vcname__, this)}
    , led_g_o{vlSymsp->TOP.led_g_o}
    , led_b_o{vlSymsp->TOP.led_b_o}
    , sevensegment_1_o{vlSymsp->TOP.sevensegment_1_o}
    , sevensegment_2_o{vlSymsp->TOP.sevensegment_2_o}
    , sevensegment_3_o{vlSymsp->TOP.sevensegment_3_o}
    , sevensegment_4_o{vlSymsp->TOP.sevensegment_4_o}
    , button_top_i{vlSymsp->TOP.button_top_i}
    , button_bottom_i{vlSymsp->TOP.button_bottom_i}
    , button_left_i{vlSymsp->TOP.button_left_i}
    , button_right_i{vlSymsp->TOP.button_right_i}
    , button_center_i{vlSymsp->TOP.button_center_i}
    , joystick_up_i{vlSymsp->TOP.joystick_up_i}
    , joystick_down_i{vlSymsp->TOP.joystick_down_i}
    , joystick_left_i{vlSymsp->TOP.joystick_left_i}
    , joystick_right_i{vlSymsp->TOP.joystick_right_i}
    , joystick_pressed_i{vlSymsp->TOP.joystick_pressed_i}
    , dip_switches_i{vlSymsp->TOP.dip_switches_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , led_r_o{vlSymsp->TOP.led_r_o}
    , clk_i{vlSymsp->TOP.clk_i}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb::Vtb(const char* _vcname__)
    : Vtb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb::~Vtb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb___024root___eval_static(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial(Vtb___024root* vlSelf);
void Vtb___024root___eval_settle(Vtb___024root* vlSelf);
void Vtb___024root___eval(Vtb___024root* vlSelf);

void Vtb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->clearTriggeredEvents();
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb___024root___eval_static(&(vlSymsp->TOP));
        Vtb___024root___eval_initial(&(vlSymsp->TOP));
        Vtb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb::eventsPending() { return false; }

uint64_t Vtb::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb___024root___eval_final(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb::final() {
    Vtb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb::hierName() const { return vlSymsp->name(); }
const char* Vtb::modelName() const { return "Vtb"; }
unsigned Vtb::threads() const { return 4; }
void Vtb::prepareClone() const { contextp()->prepareClone(); }
void Vtb::atClone() const {
    vlSymsp->__Vm_threadPoolp = static_cast<VlThreadPool*>(contextp()->threadPoolpOnClone());
}
std::unique_ptr<VerilatedTraceConfig> Vtb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{true, false, false}};
};

//============================================================
// Trace configuration

void Vtb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb___024root__trace_init_top(Vtb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb___024root__trace_decl_types(tracep);
    Vtb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb___024root__trace_register(Vtb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
