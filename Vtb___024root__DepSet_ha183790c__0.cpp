// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_gpr_TOP____Vfork_1__2(Vtb___024root* vlSelf, IData/*31:0*/ __Vintraval_hce38801d__0, CData/*4:0*/ __Vintraidx_haa0557d9__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_gpr_TOP____Vfork_1__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_hd48f617d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@([event] __VnbaEvent)", 
                                                         "/home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv", 
                                                         758);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[__Vintraidx_haa0557d9__0] 
        = __Vintraval_hce38801d__0;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_9__1(Vtb___024root* vlSelf, CData/*5:0*/ __Vintraval_hbb21e70c__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_9__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_hd48f617d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@([event] __VnbaEvent)", 
                                                         "/home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv", 
                                                         778);
    vlSelfRef.tb__DOT__u_cpu__DOT__csr_mcause_c_q = __Vintraval_hbb21e70c__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_8__1(Vtb___024root* vlSelf, CData/*0:0*/ __Vintraval_ha0235fe6__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_8__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_hd48f617d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@([event] __VnbaEvent)", 
                                                         "/home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv", 
                                                         777);
    vlSelfRef.tb__DOT__u_cpu__DOT__csr_mcause_i_q = __Vintraval_ha0235fe6__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_7__1(Vtb___024root* vlSelf, IData/*31:0*/ __Vintraval_h7d1fb466__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_7__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_hd48f617d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@([event] __VnbaEvent)", 
                                                         "/home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv", 
                                                         775);
    vlSelfRef.tb__DOT__u_cpu__DOT__csr_mepc_q = __Vintraval_h7d1fb466__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_6__1(Vtb___024root* vlSelf, IData/*31:0*/ __Vintraval_h12f9194f__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_6__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_hd48f617d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@([event] __VnbaEvent)", 
                                                         "/home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv", 
                                                         773);
    vlSelfRef.tb__DOT__u_cpu__DOT__csr_mtvec_q = __Vintraval_h12f9194f__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_5__1(Vtb___024root* vlSelf, CData/*0:0*/ __Vintraval_hd690aa61__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_5__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_hd48f617d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@([event] __VnbaEvent)", 
                                                         "/home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv", 
                                                         770);
    vlSelfRef.tb__DOT__u_cpu__DOT__csr_mtie_q = __Vintraval_hd690aa61__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_4__1(Vtb___024root* vlSelf, CData/*0:0*/ __Vintraval_h93f80602__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_4__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_hd48f617d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@([event] __VnbaEvent)", 
                                                         "/home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv", 
                                                         769);
    vlSelfRef.tb__DOT__u_cpu__DOT__csr_meie_q = __Vintraval_h93f80602__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_3__1(Vtb___024root* vlSelf, CData/*0:0*/ __Vintraval_h11ff6c36__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_3__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_hd48f617d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@([event] __VnbaEvent)", 
                                                         "/home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv", 
                                                         766);
    vlSelfRef.tb__DOT__u_cpu__DOT__csr_mpie_q = __Vintraval_h11ff6c36__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_2__1(Vtb___024root* vlSelf, CData/*0:0*/ __Vintraval_h22719f78__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_2__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_hd48f617d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@([event] __VnbaEvent)", 
                                                         "/home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv", 
                                                         765);
    vlSelfRef.tb__DOT__u_cpu__DOT__csr_mie_q = __Vintraval_h22719f78__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_pc_TOP____Vfork_10__1(Vtb___024root* vlSelf, IData/*31:0*/ __Vintraval_hd747e342__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_pc_TOP____Vfork_10__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_hd48f617d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@([event] __VnbaEvent)", 
                                                         "/home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv", 
                                                         785);
    vlSelfRef.tb__DOT__u_cpu__DOT__pc_q = __Vintraval_hd747e342__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_wr_TOP____Vfork_13__1(Vtb___024root* vlSelf, VlWide<4>/*119:0*/ __Vintraval_hacc916fd__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_wr_TOP____Vfork_13__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_hd48f617d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@([event] __VnbaEvent)", 
                                                         "/home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/led.sv", 
                                                         116);
    vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] = __Vintraval_hacc916fd__0[0U];
    vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] = __Vintraval_hacc916fd__0[1U];
    vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] = __Vintraval_hacc916fd__0[2U];
    vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] = __Vintraval_hacc916fd__0[3U];
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_wr_TOP____Vfork_12__1(Vtb___024root* vlSelf, VlWide<4>/*119:0*/ __Vintraval_h8530bda2__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_wr_TOP____Vfork_12__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_hd48f617d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@([event] __VnbaEvent)", 
                                                         "/home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/led.sv", 
                                                         114);
    vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] = __Vintraval_h8530bda2__0[0U];
    vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] = __Vintraval_h8530bda2__0[1U];
    vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] = __Vintraval_h8530bda2__0[2U];
    vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] = __Vintraval_h8530bda2__0[3U];
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_wr_TOP____Vfork_11__1(Vtb___024root* vlSelf, VlWide<4>/*119:0*/ __Vintraval_hac296cfa__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_wr_TOP____Vfork_11__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_hd48f617d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@([event] __VnbaEvent)", 
                                                         "/home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/led.sv", 
                                                         112);
    vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] = __Vintraval_hac296cfa__0[0U];
    vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] = __Vintraval_hac296cfa__0[1U];
    vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] = __Vintraval_hac296cfa__0[2U];
    vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] = __Vintraval_hac296cfa__0[3U];
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_lcd__DOT__lcd_wr_TOP____Vfork_14__2(Vtb___024root* vlSelf, CData/*7:0*/ __Vintraval_hb301a584__0, CData/*1:0*/ __Vintraidx_h56fdaff3__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_lcd__DOT__lcd_wr_TOP____Vfork_14__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_hd48f617d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@([event] __VnbaEvent)", 
                                                         "/home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/lcd.sv", 
                                                         56);
    vlSelfRef.tb__DOT__u_lcd__DOT__disp_q[__Vintraidx_h56fdaff3__0] 
        = __Vintraval_hb301a584__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_but__DOT__but_wr_TOP____Vfork_16__1(Vtb___024root* vlSelf, IData/*17:0*/ __Vintraval_h99238e2b__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_but__DOT__but_wr_TOP____Vfork_16__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_hd48f617d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@([event] __VnbaEvent)", 
                                                         "/home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/but.sv", 
                                                         152);
    vlSelfRef.tb__DOT__u_but__DOT__ext_val_q = __Vintraval_h99238e2b__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_but__DOT__but_wr_TOP____Vfork_15__1(Vtb___024root* vlSelf, CData/*0:0*/ __Vintraval_h69866d84__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_but__DOT__but_wr_TOP____Vfork_15__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_hd48f617d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@([event] __VnbaEvent)", 
                                                         "/home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/but.sv", 
                                                         151);
    vlSelfRef.tb__DOT__u_but__DOT__ext_vld_q = __Vintraval_h69866d84__0;
}

void Vtb___024root___ico_sequent__TOP__0(Vtb___024root* vlSelf);
void Vtb___024root___ico_comb__TOP__0(Vtb___024root* vlSelf);

void Vtb___024root___eval_ico(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtb___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtb___024root___ico_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb___024root___ico_sequent__TOP__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.led_r[0U] = vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U];
    vlSelfRef.led_r[1U] = vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U];
    vlSelfRef.led_r[2U] = vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U];
    vlSelfRef.led_r[3U] = vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U];
    vlSelfRef.led_g[0U] = vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U];
    vlSelfRef.led_g[1U] = vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U];
    vlSelfRef.led_g[2U] = vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U];
    vlSelfRef.led_g[3U] = vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U];
    vlSelfRef.led_b[0U] = vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U];
    vlSelfRef.led_b[1U] = vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U];
    vlSelfRef.led_b[2U] = vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U];
    vlSelfRef.led_b[3U] = vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U];
    vlSelfRef.sevensegment_1 = vlSelfRef.tb__DOT__u_lcd__DOT__disp_q
        [0U];
    vlSelfRef.sevensegment_2 = vlSelfRef.tb__DOT__u_lcd__DOT__disp_q
        [1U];
    vlSelfRef.sevensegment_3 = vlSelfRef.tb__DOT__u_lcd__DOT__disp_q
        [2U];
    vlSelfRef.sevensegment_4 = vlSelfRef.tb__DOT__u_lcd__DOT__disp_q
        [3U];
    vlSelfRef.tb__DOT__u_cpu__DOT__csr_mstatus = (0x1800U 
                                                  | (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mpie_q) 
                                                      << 7U) 
                                                     | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mie_q) 
                                                        << 3U)));
    vlSelfRef.tb__DOT__u_cpu__DOT__csr_mie = (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__csr_meie_q) 
                                               << 0xbU) 
                                              | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mtie_q) 
                                                 << 7U));
    vlSelfRef.tb__DOT__u_cpu__DOT__csr_mcause = (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mcause_i_q) 
                                                  << 0x1fU) 
                                                 | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mcause_c_q));
}

VL_INLINE_OPT void Vtb___024root___ico_comb__TOP__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ico_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb__DOT__u_but__DOT__ext_vld_q) {
        vlSelfRef.tb__DOT__u_but__DOT__ext_switch = 
            (0xffU & (vlSelfRef.tb__DOT__u_but__DOT__ext_val_q 
                      >> 0xaU));
        vlSelfRef.tb__DOT__u_but__DOT__ext_push = (0x3ffU 
                                                   & vlSelfRef.tb__DOT__u_but__DOT__ext_val_q);
    } else {
        vlSelfRef.tb__DOT__u_but__DOT__ext_switch = 
            (0xffU & (IData)(vlSelfRef.dip_switches));
        vlSelfRef.tb__DOT__u_but__DOT__ext_push = (0x3ffU 
                                                   & (((IData)(vlSelfRef.button_top) 
                                                       << 9U) 
                                                      | (((IData)(vlSelfRef.button_bottom) 
                                                          << 8U) 
                                                         | (((IData)(vlSelfRef.button_left) 
                                                             << 7U) 
                                                            | (((IData)(vlSelfRef.button_right) 
                                                                << 6U) 
                                                               | (((IData)(vlSelfRef.button_center) 
                                                                   << 5U) 
                                                                  | (((IData)(vlSelfRef.joystick_up) 
                                                                      << 4U) 
                                                                     | (((IData)(vlSelfRef.joystick_down) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSelfRef.joystick_left) 
                                                                            << 2U) 
                                                                           | (((IData)(vlSelfRef.joystick_right) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelfRef.joystick_pressed)))))))))));
    }
    vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__vld_q)) 
           & (((2U == (3U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
               & ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch)) 
                  & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__val_q))) 
              | ((3U == (3U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                 & ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__val_q)) 
                    & (IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__vld_q)) 
           & ((IData)((((8U == (0xcU & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                              >> 1U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__val_q))) 
              | (IData)((((0xcU == (0xcU & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                            >> 1U)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__vld_q)) 
           & ((IData)((((0x20U == (0x30U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                              >> 2U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__val_q))) 
              | (IData)((((0x30U == (0x30U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                            >> 2U)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__vld_q)) 
           & ((IData)((((0x80U == (0xc0U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                              >> 3U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__val_q))) 
              | (IData)((((0xc0U == (0xc0U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                            >> 3U)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__vld_q)) 
           & ((IData)((((0x200U == (0x300U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                              >> 4U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__val_q))) 
              | (IData)((((0x300U == (0x300U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                            >> 4U)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__vld_q)) 
           & ((IData)((((0x800U == (0xc00U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                              >> 5U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__val_q))) 
              | (IData)((((0xc00U == (0xc00U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                            >> 5U)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__vld_q)) 
           & ((IData)((((0x2000U == (0x3000U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                              >> 6U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__val_q))) 
              | (IData)((((0x3000U == (0x3000U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                            >> 6U)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__vld_q)) 
           & ((IData)((((0x8000U == (0xc000U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                              >> 7U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__val_q))) 
              | (IData)((((0xc000U == (0xc000U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                            >> 7U)))));
    vlSelfRef.tb__DOT__u_but__DOT____Vcellout__u_stm__src 
        = ((((IData)(((~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                          >> 7U)) & (0U == (0xc000U 
                                            & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))))) 
             | ((IData)(((0x4000U == (0xc000U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                            >> 7U))) | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__vld_q))) 
            << 7U) | ((((IData)(((~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                     >> 6U)) & (0U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))))) 
                        | ((IData)(((0x1000U == (0x3000U 
                                                 & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                                    & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                       >> 6U))) | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__vld_q))) 
                       << 6U) | ((((IData)(((~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                                >> 5U)) 
                                            & (0U == 
                                               (0xc00U 
                                                & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))))) 
                                   | ((IData)(((0x400U 
                                                == 
                                                (0xc00U 
                                                 & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                                               & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                                  >> 5U))) 
                                      | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__vld_q))) 
                                  << 5U) | ((((IData)(
                                                      ((~ 
                                                        ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                                         >> 4U)) 
                                                       & (0U 
                                                          == 
                                                          (0x300U 
                                                           & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))))) 
                                              | ((IData)(
                                                         ((0x100U 
                                                           == 
                                                           (0x300U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                                                          & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                                             >> 4U))) 
                                                 | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__vld_q))) 
                                             << 4U) 
                                            | ((((IData)(
                                                         ((~ 
                                                           ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                                            >> 3U)) 
                                                          & (0U 
                                                             == 
                                                             (0xc0U 
                                                              & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))))) 
                                                 | ((IData)(
                                                            ((0x40U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                                                             & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                                                >> 3U))) 
                                                    | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__vld_q))) 
                                                << 3U) 
                                               | ((((IData)(
                                                            ((~ 
                                                              ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                                               >> 2U)) 
                                                             & (0U 
                                                                == 
                                                                (0x30U 
                                                                 & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))))) 
                                                    | ((IData)(
                                                               ((0x10U 
                                                                 == 
                                                                 (0x30U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                                                                & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                                                   >> 2U))) 
                                                       | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__vld_q))) 
                                                   << 2U) 
                                                  | ((((IData)(
                                                               ((~ 
                                                                 ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                                                  >> 1U)) 
                                                                & (0U 
                                                                   == 
                                                                   (0xcU 
                                                                    & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))))) 
                                                       | ((IData)(
                                                                  ((4U 
                                                                    == 
                                                                    (0xcU 
                                                                     & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                                                                   & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                                                      >> 1U))) 
                                                          | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__vld_q))) 
                                                      << 1U) 
                                                     | (((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch)) 
                                                         & (0U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q)))) 
                                                        | (((1U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                                                            & (IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch)) 
                                                           | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__vld_q))))))))));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__vld_q)) 
           & (((2U == (3U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
               & ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push)) 
                  & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__val_q))) 
              | ((3U == (3U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                 & ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__val_q)) 
                    & (IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__vld_q)) 
           & ((IData)((((8U == (0xcU & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                              >> 1U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__val_q))) 
              | (IData)((((0xcU == (0xcU & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                            >> 1U)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__vld_q)) 
           & ((IData)((((0x20U == (0x30U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                              >> 2U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__val_q))) 
              | (IData)((((0x30U == (0x30U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                            >> 2U)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__vld_q)) 
           & ((IData)((((0x80U == (0xc0U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                              >> 3U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__val_q))) 
              | (IData)((((0xc0U == (0xc0U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                            >> 3U)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__vld_q)) 
           & ((IData)((((0x200U == (0x300U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                              >> 4U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__val_q))) 
              | (IData)((((0x300U == (0x300U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                            >> 4U)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__vld_q)) 
           & ((IData)((((0x800U == (0xc00U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                              >> 5U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__val_q))) 
              | (IData)((((0xc00U == (0xc00U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                            >> 5U)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__vld_q)) 
           & ((IData)((((0x2000U == (0x3000U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                              >> 6U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__val_q))) 
              | (IData)((((0x3000U == (0x3000U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                            >> 6U)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__vld_q)) 
           & ((IData)((((0x8000U == (0xc000U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                              >> 7U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__val_q))) 
              | (IData)((((0xc000U == (0xc000U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                            >> 7U)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__vld_q)) 
           & ((IData)((((0x20000U == (0x30000U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                              >> 8U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__val_q))) 
              | (IData)((((0x30000U == (0x30000U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                            >> 8U)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__vld_q)) 
           & ((IData)((((0x80000U == (0xc0000U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                              >> 9U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__val_q))) 
              | (IData)((((0xc0000U == (0xc0000U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                            >> 9U)))));
    vlSelfRef.tb__DOT__u_but__DOT____Vcellout__u_ptm__src 
        = ((((IData)(((~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                          >> 9U)) & (0U == (0xc0000U 
                                            & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)))) 
             | ((IData)(((0x40000U == (0xc0000U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                            >> 9U))) | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__vld_q))) 
            << 9U) | ((((IData)(((~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                     >> 8U)) & (0U 
                                                == 
                                                (0x30000U 
                                                 & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)))) 
                        | ((IData)(((0x10000U == (0x30000U 
                                                  & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                                    & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                       >> 8U))) | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__vld_q))) 
                       << 8U) | ((((IData)(((~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                >> 7U)) 
                                            & (0U == 
                                               (0xc000U 
                                                & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)))) 
                                   | ((IData)(((0x4000U 
                                                == 
                                                (0xc000U 
                                                 & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                                               & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                  >> 7U))) 
                                      | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__vld_q))) 
                                  << 7U) | ((((IData)(
                                                      ((~ 
                                                        ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                         >> 6U)) 
                                                       & (0U 
                                                          == 
                                                          (0x3000U 
                                                           & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)))) 
                                              | ((IData)(
                                                         ((0x1000U 
                                                           == 
                                                           (0x3000U 
                                                            & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                                                          & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                             >> 6U))) 
                                                 | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__vld_q))) 
                                             << 6U) 
                                            | ((((IData)(
                                                         ((~ 
                                                           ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                            >> 5U)) 
                                                          & (0U 
                                                             == 
                                                             (0xc00U 
                                                              & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)))) 
                                                 | ((IData)(
                                                            ((0x400U 
                                                              == 
                                                              (0xc00U 
                                                               & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                                                             & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                                >> 5U))) 
                                                    | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__vld_q))) 
                                                << 5U) 
                                               | ((((IData)(
                                                            ((~ 
                                                              ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                               >> 4U)) 
                                                             & (0U 
                                                                == 
                                                                (0x300U 
                                                                 & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)))) 
                                                    | ((IData)(
                                                               ((0x100U 
                                                                 == 
                                                                 (0x300U 
                                                                  & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                                                                & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                                   >> 4U))) 
                                                       | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__vld_q))) 
                                                   << 4U) 
                                                  | ((((IData)(
                                                               ((~ 
                                                                 ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                                  >> 3U)) 
                                                                & (0U 
                                                                   == 
                                                                   (0xc0U 
                                                                    & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)))) 
                                                       | ((IData)(
                                                                  ((0x40U 
                                                                    == 
                                                                    (0xc0U 
                                                                     & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                                                                   & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                                      >> 3U))) 
                                                          | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__vld_q))) 
                                                      << 3U) 
                                                     | ((((IData)(
                                                                  ((~ 
                                                                    ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                                     >> 2U)) 
                                                                   & (0U 
                                                                      == 
                                                                      (0x30U 
                                                                       & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)))) 
                                                          | ((IData)(
                                                                     ((0x10U 
                                                                       == 
                                                                       (0x30U 
                                                                        & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                                                                      & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                                         >> 2U))) 
                                                             | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__vld_q))) 
                                                         << 2U) 
                                                        | ((((IData)(
                                                                     ((~ 
                                                                       ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                                        >> 1U)) 
                                                                      & (0U 
                                                                         == 
                                                                         (0xcU 
                                                                          & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)))) 
                                                             | ((IData)(
                                                                        ((4U 
                                                                          == 
                                                                          (0xcU 
                                                                           & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                                                                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                                            >> 1U))) 
                                                                | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__vld_q))) 
                                                            << 1U) 
                                                           | (((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push)) 
                                                               & (0U 
                                                                  == 
                                                                  (3U 
                                                                   & vlSelfRef.tb__DOT__u_but__DOT__ptm_q))) 
                                                              | (((1U 
                                                                   == 
                                                                   (3U 
                                                                    & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push)) 
                                                                 | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__vld_q))))))))))));
    vlSelfRef.tb__DOT__u_but__DOT__src = (((IData)(vlSelfRef.tb__DOT__u_but__DOT____Vcellout__u_stm__src) 
                                           << 0xaU) 
                                          | (IData)(vlSelfRef.tb__DOT__u_but__DOT____Vcellout__u_ptm__src));
    vlSelfRef.tb__DOT__bus_rdata = (((- (IData)((IData)(vlSelfRef.tb__DOT__u_bus__DOT__mem_en_q))) 
                                     & vlSelfRef.tb__DOT__u_mem__DOT__rdata_q) 
                                    | (((- (IData)((IData)(vlSelfRef.tb__DOT__u_bus__DOT__rng_en_q))) 
                                        & vlSelfRef.tb__DOT__u_rng__DOT__lfsr_q) 
                                       | (((- (IData)((IData)(vlSelfRef.tb__DOT__u_bus__DOT__lcd_en_q))) 
                                           & ((vlSelfRef.tb__DOT__u_lcd__DOT__disp_q
                                               [3U] 
                                               << 0x18U) 
                                              | ((vlSelfRef.tb__DOT__u_lcd__DOT__disp_q
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelfRef.tb__DOT__u_lcd__DOT__disp_q
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelfRef.tb__DOT__u_lcd__DOT__disp_q
                                                    [0U])))) 
                                          | ((- (IData)((IData)(vlSelfRef.tb__DOT__u_bus__DOT__but_en_q))) 
                                             & (((- (IData)(
                                                            (1U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_but__DOT__sel_q)))) 
                                                 & (((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push))) 
                                                | (((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__sel_q) 
                                                                   >> 1U)))) 
                                                    & (((IData)(vlSelfRef.tb__DOT__u_but__DOT____Vcellout__u_stm__src) 
                                                        << 0x10U) 
                                                       | (IData)(vlSelfRef.tb__DOT__u_but__DOT____Vcellout__u_ptm__src))) 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__sel_q) 
                                                                      >> 2U)))) 
                                                       & vlSelfRef.tb__DOT__u_but__DOT__ptm_q) 
                                                      | ((- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__sel_q) 
                                                                        >> 3U)))) 
                                                         & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q)))))))));
    vlSelfRef.tb__DOT__u_cpu__DOT__if_irq_e = ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mie_q) 
                                               & ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__csr_meie_q) 
                                                  & (0U 
                                                     != vlSelfRef.tb__DOT__u_but__DOT__src)));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins = ((2U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q))
                                              ? vlSelfRef.tb__DOT__bus_rdata
                                              : vlSelfRef.tb__DOT__u_cpu__DOT__bus_data_q);
    vlSelfRef.tb__DOT__u_cpu__DOT__if_expt = ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__if_irq_e) 
                                              | (0U 
                                                 != 
                                                 (3U 
                                                  & vlSelfRef.tb__DOT__u_cpu__DOT__pc_q)));
    vlSelfRef.tb__DOT__u_cpu__DOT__ex_csr_rs1 = ((0x4000U 
                                                  & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                     >> 0xfU))
                                                  : vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_q);
    vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_30 
        = (IData)(((0x1000U == (0x7000U & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                   & (0U != (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                             >> 0x19U))));
    vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_33 
        = (IData)((0x1000U == (0xfe007000U & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_3 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_5 
        = (IData)((0x5033U == (0x707fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__u_cpu__DOT__ex_csr_rdata = (
                                                   ((- (IData)(
                                                               (0x300U 
                                                                == 
                                                                (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                                 >> 0x14U)))) 
                                                    & vlSelfRef.tb__DOT__u_cpu__DOT__csr_mstatus) 
                                                   | (((- (IData)(
                                                                  (0x304U 
                                                                   == 
                                                                   (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                                    >> 0x14U)))) 
                                                       & vlSelfRef.tb__DOT__u_cpu__DOT__csr_mie) 
                                                      | (((- (IData)(
                                                                     (0x305U 
                                                                      == 
                                                                      (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                                       >> 0x14U)))) 
                                                          & vlSelfRef.tb__DOT__u_cpu__DOT__csr_mtvec_q) 
                                                         | (((- (IData)(
                                                                        (0x341U 
                                                                         == 
                                                                         (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                                          >> 0x14U)))) 
                                                             & vlSelfRef.tb__DOT__u_cpu__DOT__csr_mepc_q) 
                                                            | (((- (IData)(
                                                                           (0x342U 
                                                                            == 
                                                                            (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                                             >> 0x14U)))) 
                                                                & vlSelfRef.tb__DOT__u_cpu__DOT__csr_mcause) 
                                                               | ((- (IData)(
                                                                             (0x344U 
                                                                              == 
                                                                              (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                                               >> 0x14U)))) 
                                                                  & ((IData)(
                                                                             (0U 
                                                                              != vlSelfRef.tb__DOT__u_but__DOT__src)) 
                                                                     << 0xbU)))))));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrc 
        = (IData)((0x3073U == (0x707fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrwi 
        = (IData)((0x5073U == (0x707fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrsi 
        = (IData)((0x6073U == (0x707fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrci 
        = (IData)((0x7073U == (0x707fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_funct7_eq_v 
        = ((0U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                   >> 0x19U)) | (0x20U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0x19U)));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_inv_bx 
        = ((2U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                         >> 0xcU))) | (3U == (7U & 
                                              (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                               >> 0xcU))));
    vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_28 
        = ((6U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                         >> 0xcU))) | (7U == (7U & 
                                              (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                               >> 0xcU))));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_lh = (IData)(
                                                          (0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__bus_we = ((3U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q)) 
                                 & (0x23U == (0x7fU 
                                              & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_lw = (IData)(
                                                          (0x2003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_ev = (IData)(
                                                          (0x73U 
                                                           == 
                                                           (0xfffffU 
                                                            & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_srs = ((vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                  >> 0x1eU) 
                                                 & (vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_q 
                                                    >> 0x1fU));
    vlSelfRef.tb__DOT__u_cpu__DOT__ex_ins_is_ls = (
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                                   | (0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_imm_i = (
                                                   ((- (IData)(
                                                               (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                      >> 0x14U));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_slti = (IData)(
                                                            (0x2013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sltiu 
        = (IData)((0x3013U == (0x707fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_slt = (IData)(
                                                           (0x2033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sltu = (IData)(
                                                            (0x3033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_4 
        = (IData)((0x33U == (0x707fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_jalr = (IData)(
                                                            (0x67U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sb = (IData)(
                                                          (0x23U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sh = (IData)(
                                                          (0x1023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sw = (IData)(
                                                          (0x2023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_wdata = (
                                                   ((- (IData)(
                                                               ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrw) 
                                                                | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrwi)))) 
                                                    & vlSelfRef.tb__DOT__u_cpu__DOT__ex_csr_rs1) 
                                                   | (((- (IData)(
                                                                  ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrs) 
                                                                   | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrsi)))) 
                                                       & (vlSelfRef.tb__DOT__u_cpu__DOT__ex_csr_rs1 
                                                          | vlSelfRef.tb__DOT__u_cpu__DOT__ex_csr_rdata)) 
                                                      | ((- (IData)(
                                                                    ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrc) 
                                                                     | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrci)))) 
                                                         & ((~ vlSelfRef.tb__DOT__u_cpu__DOT__ex_csr_rs1) 
                                                            & vlSelfRef.tb__DOT__u_cpu__DOT__ex_csr_rdata))));
    vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we = ((4U 
                                                 == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q)) 
                                                & ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrw) 
                                                   | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrs) 
                                                      | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrc) 
                                                         | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrwi) 
                                                            | ((0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                                    >> 0xfU))) 
                                                               & ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrsi) 
                                                                  | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrci))))))));
    vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_29 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_funct7_eq_v)) 
           & (0x5000U == (0x7000U & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)));
    vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_32 
        = ((1U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                         >> 0xcU))) | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_inv_bx));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_2 = ((5U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                     >> 0xcU))) 
                                                | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_28));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_ecall 
        = ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_ev) 
           & (IData)((0U == (0xfff00000U & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_mret = 
        ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_ev) 
         & (IData)((0x30200000U == (0xfff00000U & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
    vlSelfRef.tb__DOT__u_cpu__DOT__wb_expt = ((4U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q)) 
                                              & ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_ins_is_ls) 
                                                 & (((IData)(vlSelfRef.tb__DOT__u_bus__DOT__mem_en_q) 
                                                     & (IData)(vlSelfRef.tb__DOT__u_mem__DOT__err_q)) 
                                                    | (((IData)(vlSelfRef.tb__DOT__u_bus__DOT__rng_en_q) 
                                                        & (IData)(vlSelfRef.tb__DOT__u_rng__DOT__err_q)) 
                                                       | (((IData)(vlSelfRef.tb__DOT__u_bus__DOT__led_en_q) 
                                                           & (IData)(vlSelfRef.tb__DOT__u_led__DOT__err_q)) 
                                                          | (((IData)(vlSelfRef.tb__DOT__u_bus__DOT__lcd_en_q) 
                                                              & (IData)(vlSelfRef.tb__DOT__u_lcd__DOT__err_q)) 
                                                             | ((~ 
                                                                 ((IData)(vlSelfRef.tb__DOT__u_bus__DOT__mem_en_q) 
                                                                  | ((IData)(vlSelfRef.tb__DOT__u_bus__DOT__rng_en_q) 
                                                                     | ((IData)(vlSelfRef.tb__DOT__u_bus__DOT__lcd_en_q) 
                                                                        | ((IData)(vlSelfRef.tb__DOT__u_bus__DOT__led_en_q) 
                                                                           | ((IData)(vlSelfRef.tb__DOT__u_bus__DOT__but_en_q) 
                                                                              | (IData)(vlSelfRef.tb__DOT__u_bus__DOT__tmp_en_q))))))) 
                                                                | ((~ (IData)(
                                                                              (0U 
                                                                               != (IData)(vlSelfRef.tb__DOT__u_but__DOT__sel_q)))) 
                                                                   & (IData)(vlSelfRef.tb__DOT__u_bus__DOT__but_en_q)))))))));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sub = 
        ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_4) 
         & (0x20U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                      >> 0x19U)));
    vlSelfRef.tb__DOT__u_cpu__DOT__ex_bru_add_op0 = 
        (((- (IData)((1U & (~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_jalr))))) 
          & vlSelfRef.tb__DOT__u_cpu__DOT__pc_q) | 
         ((- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_jalr))) 
          & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_q));
    vlSelfRef.tb__DOT__u_cpu__DOT__ex_ins_is_j = ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                                  | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_jalr));
    vlSelfRef.tb__DOT__u_cpu__DOT__ex_lsu_sz_mask_hi 
        = ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_lw) 
           | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sw));
    vlSelfRef.tb__DOT__bus_wdata = (((- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sb))) 
                                     & ((vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_q 
                                         << 0x18U) 
                                        | ((0xff0000U 
                                            & (vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_q 
                                               << 0x10U)) 
                                           | ((0xff00U 
                                               & (vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_q 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_q))))) 
                                    | (((- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sh))) 
                                        & ((vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_q 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_q))) 
                                       | ((- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sw))) 
                                          & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_q)));
    vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mie = 
        ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we) 
         & (0x304U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                       >> 0x14U)));
    vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mepc = 
        ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we) 
         & (0x341U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                       >> 0x14U)));
    vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mcause 
        = ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we) 
           & (0x342U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                         >> 0x14U)));
    vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mstatus 
        = ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we) 
           & (0x300U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                         >> 0x14U)));
    vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_31 
        = ((4U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                         >> 0xcU))) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2));
    vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_ret = ((5U 
                                                   == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q)) 
                                                  & ((2U 
                                                      == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_q)) 
                                                     & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_mret)));
    vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_set = ((5U 
                                                   == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q)) 
                                                  & ((1U 
                                                      == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_q)) 
                                                     | (((~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_mret)) 
                                                         & (2U 
                                                            == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_q))) 
                                                        | ((3U 
                                                            == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_q)) 
                                                           | (4U 
                                                              == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_q))))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 = ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_ecall) 
                                                | (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_ev) 
                                                    & (IData)(
                                                              (0x100000U 
                                                               == 
                                                               (0xfff00000U 
                                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))) 
                                                   | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_mret)));
    vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sub = ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sub) 
                                                 | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_slt) 
                                                    | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_slti) 
                                                       | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sltiu) 
                                                          | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sltu) 
                                                             | (0x63U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))))));
    vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_pc = (((- (IData)(
                                                            ((0x17U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                                             | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_ins_is_j)))) 
                                                 & vlSelfRef.tb__DOT__u_cpu__DOT__pc_q) 
                                                | ((- (IData)(
                                                              ((0x17U 
                                                                != 
                                                                (0x7fU 
                                                                 & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                                               & ((0x37U 
                                                                   != 
                                                                   (0x7fU 
                                                                    & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                                                  & (~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_ins_is_j)))))) 
                                                   & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_q));
    vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_imm = (((- (IData)(
                                                             ((3U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                                              | (0x13U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))))) 
                                                  & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_imm_i) 
                                                 | (((- (IData)(
                                                                (0x23U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))) 
                                                     & (((- (IData)(
                                                                    (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | ((0xfe0U 
                                                            & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                               >> 0x14U)) 
                                                           | (0x1fU 
                                                              & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                                 >> 7U))))) 
                                                    | ((0xfffff000U 
                                                        & ((- (IData)(
                                                                      ((0x17U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                                                       | (0x37U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))))) 
                                                           & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                                       | (((- (IData)(
                                                                      ((0x33U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                                                       | (0x63U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))))) 
                                                           & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_q) 
                                                          | (4U 
                                                             & (- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_ins_is_j))))))));
    vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_11 
        = ((0xfU == (0xfU & vlSelfRef.tb__DOT__bus_wdata)) 
           | (0xbU == (0xfU & vlSelfRef.tb__DOT__bus_wdata)));
    vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_10 
        = ((0xfU == (0xfU & vlSelfRef.tb__DOT__bus_wdata)) 
           | (0xaU == (0xfU & vlSelfRef.tb__DOT__bus_wdata)));
    vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_9 
        = ((0xfU == (0xfU & vlSelfRef.tb__DOT__bus_wdata)) 
           | (9U == (0xfU & vlSelfRef.tb__DOT__bus_wdata)));
    vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_8 
        = ((0xfU == (0xfU & vlSelfRef.tb__DOT__bus_wdata)) 
           | (8U == (0xfU & vlSelfRef.tb__DOT__bus_wdata)));
    vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_7 
        = ((0xfU == (0xfU & vlSelfRef.tb__DOT__bus_wdata)) 
           | (7U == (0xfU & vlSelfRef.tb__DOT__bus_wdata)));
    vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_6 
        = ((0xfU == (0xfU & vlSelfRef.tb__DOT__bus_wdata)) 
           | (6U == (0xfU & vlSelfRef.tb__DOT__bus_wdata)));
    vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_5 
        = ((0xfU == (0xfU & vlSelfRef.tb__DOT__bus_wdata)) 
           | (5U == (0xfU & vlSelfRef.tb__DOT__bus_wdata)));
    vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_4 
        = ((0xfU == (0xfU & vlSelfRef.tb__DOT__bus_wdata)) 
           | (4U == (0xfU & vlSelfRef.tb__DOT__bus_wdata)));
    vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_3 
        = ((0xfU == (0xfU & vlSelfRef.tb__DOT__bus_wdata)) 
           | (3U == (0xfU & vlSelfRef.tb__DOT__bus_wdata)));
    vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_2 
        = ((0xfU == (0xfU & vlSelfRef.tb__DOT__bus_wdata)) 
           | (2U == (0xfU & vlSelfRef.tb__DOT__bus_wdata)));
    vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_1 
        = ((0xfU == (0xfU & vlSelfRef.tb__DOT__bus_wdata)) 
           | (1U == (0xfU & vlSelfRef.tb__DOT__bus_wdata)));
    vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_0 
        = ((0xfU == (0xfU & vlSelfRef.tb__DOT__bus_wdata)) 
           | (0U == (0xfU & vlSelfRef.tb__DOT__bus_wdata)));
    vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_21 
        = ((0xfU == (0xfU & (vlSelfRef.tb__DOT__bus_wdata 
                             >> 4U))) | (9U == (0xfU 
                                                & (vlSelfRef.tb__DOT__bus_wdata 
                                                   >> 4U))));
    vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_20 
        = ((0xfU == (0xfU & (vlSelfRef.tb__DOT__bus_wdata 
                             >> 4U))) | (8U == (0xfU 
                                                & (vlSelfRef.tb__DOT__bus_wdata 
                                                   >> 4U))));
    vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_19 
        = ((0xfU == (0xfU & (vlSelfRef.tb__DOT__bus_wdata 
                             >> 4U))) | (7U == (0xfU 
                                                & (vlSelfRef.tb__DOT__bus_wdata 
                                                   >> 4U))));
    vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_18 
        = ((0xfU == (0xfU & (vlSelfRef.tb__DOT__bus_wdata 
                             >> 4U))) | (6U == (0xfU 
                                                & (vlSelfRef.tb__DOT__bus_wdata 
                                                   >> 4U))));
    vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_17 
        = ((0xfU == (0xfU & (vlSelfRef.tb__DOT__bus_wdata 
                             >> 4U))) | (5U == (0xfU 
                                                & (vlSelfRef.tb__DOT__bus_wdata 
                                                   >> 4U))));
    vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_16 
        = ((0xfU == (0xfU & (vlSelfRef.tb__DOT__bus_wdata 
                             >> 4U))) | (4U == (0xfU 
                                                & (vlSelfRef.tb__DOT__bus_wdata 
                                                   >> 4U))));
    vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_15 
        = ((0xfU == (0xfU & (vlSelfRef.tb__DOT__bus_wdata 
                             >> 4U))) | (3U == (0xfU 
                                                & (vlSelfRef.tb__DOT__bus_wdata 
                                                   >> 4U))));
    vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_14 
        = ((0xfU == (0xfU & (vlSelfRef.tb__DOT__bus_wdata 
                             >> 4U))) | (2U == (0xfU 
                                                & (vlSelfRef.tb__DOT__bus_wdata 
                                                   >> 4U))));
    vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_13 
        = ((0xfU == (0xfU & (vlSelfRef.tb__DOT__bus_wdata 
                             >> 4U))) | (1U == (0xfU 
                                                & (vlSelfRef.tb__DOT__bus_wdata 
                                                   >> 4U))));
    vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_12 
        = ((0xfU == (0xfU & (vlSelfRef.tb__DOT__bus_wdata 
                             >> 4U))) | (0U == (0xfU 
                                                & (vlSelfRef.tb__DOT__bus_wdata 
                                                   >> 4U))));
    vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_22 
        = ((0xfU == (0xfU & vlSelfRef.tb__DOT__bus_wdata)) 
           ^ (0xfU == (0xfU & (vlSelfRef.tb__DOT__bus_wdata 
                               >> 4U))));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_inv_jx 
        = ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_32) 
           | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_31));
    vlSelfRef.tb__DOT__u_cpu__DOT__wi_csr_we_mcause 
        = ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mcause) 
           | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_set));
    vlSelfRef.tb__DOT__u_cpu__DOT__wi_csr_we_mstatus 
        = ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mstatus) 
           | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_set) 
              | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_ret)));
    vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_xor = (vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_q 
                                                 ^ vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_imm);
    if ((1U & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_imm)) {
        vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl0 = 
            VL_SHIFTL_III(32,32,32, vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_q, 1U);
        vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr0 = 
            (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_srs) 
              << 0x1fU) | (vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_q 
                           >> 1U));
    } else {
        vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl0 = vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_q;
        vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr0 = vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_q;
    }
    vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add_op1 = 
        ((- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sub))) 
         ^ vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_imm);
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_0) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_21));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_1) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_21));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_2) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_21));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_3) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_21));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_4) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_21));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_5) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_21));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_6) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_21));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_7) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_21));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_8) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_21));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__9__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_9) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_21));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_10) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_21));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_11) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_21));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_0) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_20));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_1) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_20));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_2) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_20));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_3) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_20));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_4) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_20));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_5) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_20));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_6) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_20));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_7) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_20));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__8__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_8) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_20));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_9) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_20));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_10) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_20));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_11) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_20));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_0) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_19));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_1) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_19));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_2) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_19));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_3) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_19));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_4) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_19));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_5) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_19));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_6) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_19));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_7) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_19));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_8) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_19));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_9) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_19));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_10) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_19));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_11) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_19));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_0) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_18));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_1) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_18));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_2) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_18));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_3) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_18));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_4) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_18));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_5) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_18));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_6) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_18));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_7) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_18));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_8) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_18));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_9) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_18));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_10) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_18));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_11) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_18));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_0) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_17));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_1) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_17));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_2) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_17));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_3) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_17));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_4) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_17));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_5) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_17));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_6) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_17));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_7) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_17));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_8) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_17));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_9) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_17));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_10) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_17));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_11) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_17));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_0) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_16));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_1) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_16));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_2) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_16));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_3) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_16));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_4) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_16));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_5) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_16));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_6) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_16));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_7) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_16));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_8) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_16));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_9) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_16));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_10) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_16));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_11) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_16));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_0) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_15));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_1) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_15));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_2) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_15));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_3) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_15));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_4) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_15));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_5) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_15));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_6) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_15));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_7) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_15));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_8) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_15));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_9) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_15));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_10) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_15));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_11) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_15));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_0) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_14));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_1) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_14));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_2) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_14));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_3) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_14));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_4) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_14));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_5) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_14));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_6) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_14));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_7) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_14));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_8) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_14));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_9) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_14));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_10) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_14));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_11) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_14));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_0) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_13));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_1) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_13));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_2) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_13));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_3) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_13));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_4) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_13));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_5) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_13));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_6) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_13));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_7) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_13));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_8) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_13));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_9) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_13));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_10) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_13));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_11) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_13));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_0) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_12));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_1) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_12));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_2) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_12));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_3) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_12));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_4) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_12));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_5) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_12));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_6) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_12));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_7) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_12));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_8) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_12));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_9) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_12));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_10) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_12));
    vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__sel 
        = ((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_11) 
           & (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_12));
    vlSelfRef.tb__DOT__u_led__DOT__val = (0xfffU & 
                                          (((- (IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_22))))) 
                                            & (- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.tb__DOT__bus_wdata 
                                                             >> 0x10U))))) 
                                           | ((- (IData)((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_22))) 
                                              & (vlSelfRef.tb__DOT__bus_wdata 
                                                 >> 0x10U))));
    vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_inv = 
        (((0x37U != (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
          & ((0x17U != (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
             & ((0x6fU != (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                & ((0x67U != (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                   & ((0x63U != (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                      & ((3U != (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                         & ((0x23U != (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                            & ((0x13U != (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                               & ((0x33U != (0x7fU 
                                             & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                  & ((0xfU != (0x7fU 
                                               & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                     & (0x73U != (0x7fU 
                                                  & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))))))))))) 
         | (((0x67U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
             & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_inv_jx)) 
            | (((0x63U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_inv_bx)) 
               | (((3U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                   & ((3U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                    >> 0xcU))) | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_28))) 
                  | (((0x23U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                      & ((3U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                       >> 0xcU))) | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_31))) 
                     | (((0x13U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                         & ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_30) 
                            | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_29))) 
                        | (((0x33U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                            & (((~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_funct7_eq_v)) 
                                & (0U == (0x7000U & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))) 
                               | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_30) 
                                  | ((IData)(((0x2000U 
                                               == (0x7000U 
                                                   & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                              & (0U 
                                                 != 
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
                                        | ((IData)(
                                                   ((0x4000U 
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
                                                           >> 0xcU)))))))))))) 
                           | (((0xfU == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                               & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_inv_jx)) 
                              | ((0x73U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                 & (((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
                                     & (0U == (0x7000U 
                                               & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))) 
                                    | ((4U == (7U & 
                                               (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                >> 0xcU))) 
                                       | ((~ ((0x300U 
                                               == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                   >> 0x14U)) 
                                              | ((0x304U 
                                                  == 
                                                  (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                   >> 0x14U)) 
                                                 | ((0x305U 
                                                     == 
                                                     (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
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
                                             | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))))))))))))));
    if ((2U & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_imm)) {
        vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl1 = 
            VL_SHIFTL_III(32,32,32, vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl0, 2U);
        vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr1 = 
            (((- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_srs))) 
              << 0x1eU) | (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr0 
                           >> 2U));
    } else {
        vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl1 = vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl0;
        vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr1 = vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr0;
    }
    vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add = (0x1ffffffffULL 
                                                 & (((QData)((IData)(
                                                                     ((vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_pc 
                                                                       & (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add_op1 
                                                                          | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sub))) 
                                                                      | (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add_op1 
                                                                         & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sub))))) 
                                                     << 1U) 
                                                    + (QData)((IData)(
                                                                      (vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_pc 
                                                                       ^ 
                                                                       (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add_op1 
                                                                        ^ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sub)))))));
    if ((0xfU == (0xfU & vlSelfRef.tb__DOT__bus_wdata))) {
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 0xaU));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 0xbU));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 0xaU));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 0xbU));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 0xaU));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 0xbU));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 0xaU));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 0xbU));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 0xaU));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 0xbU));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 0xaU));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 0xbU));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 0xaU));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 0xbU));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 0xaU));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 0xbU));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 0xaU));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 0xbU));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 0xaU));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 0xbU));
    } else {
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                     >> 9U));
    }
    if ((4U & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_imm)) {
        vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl2 = 
            VL_SHIFTL_III(32,32,32, vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl1, 4U);
        vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr2 = 
            (((- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_srs))) 
              << 0x1cU) | (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr1 
                           >> 4U));
    } else {
        vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl2 = vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl1;
        vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr2 = vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr1;
    }
    vlSelfRef.tb__DOT__u_cpu__DOT__wb_lsu_lb = (0xffU 
                                                & (((- (IData)(
                                                               (0U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add))))) 
                                                    & vlSelfRef.tb__DOT__bus_rdata) 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add))))) 
                                                       & (vlSelfRef.tb__DOT__bus_rdata 
                                                          >> 8U)) 
                                                      | (((- (IData)(
                                                                     (2U 
                                                                      == 
                                                                      (3U 
                                                                       & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add))))) 
                                                          & (vlSelfRef.tb__DOT__bus_rdata 
                                                             >> 0x10U)) 
                                                         | ((- (IData)(
                                                                       (3U 
                                                                        == 
                                                                        (3U 
                                                                         & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add))))) 
                                                            & (vlSelfRef.tb__DOT__bus_rdata 
                                                               >> 0x18U))))));
    vlSelfRef.tb__DOT__u_cpu__DOT__wb_lsu_lh = (0xffffU 
                                                & (((- (IData)(
                                                               (1U 
                                                                & (~ (IData)(
                                                                             (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add 
                                                                              >> 1U)))))) 
                                                    & vlSelfRef.tb__DOT__bus_rdata) 
                                                   | ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add 
                                                                             >> 1U))))) 
                                                      & (vlSelfRef.tb__DOT__bus_rdata 
                                                         >> 0x10U))));
    vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_lts = (1U 
                                                 & ((~ (IData)(
                                                               (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add 
                                                                >> 0x20U))) 
                                                    ^ 
                                                    ((vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_pc 
                                                      ^ vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_imm) 
                                                     >> 0x1fU)));
    vlSelfRef.tb__DOT__bus_wstrb = (0xfU & (((- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sb))) 
                                             & ((1U 
                                                 & (- (IData)(
                                                              (0U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add)))))) 
                                                | ((2U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add)))))) 
                                                   | ((4U 
                                                       & (- (IData)(
                                                                    (2U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add)))))) 
                                                      | (8U 
                                                         & (- (IData)(
                                                                      (3U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add)))))))))) 
                                            | (((- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sh))) 
                                                & ((3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (~ (IData)(
                                                                               (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add 
                                                                                >> 1U))))))) 
                                                   | (0xcU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add 
                                                                               >> 1U)))))))) 
                                               | (- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sw))))));
    vlSelfRef.tb__DOT__u_cpu__DOT__ex_expt = ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_ins_is_ls) 
                                              & (0U 
                                                 != 
                                                 ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add) 
                                                  & (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_lsu_sz_mask_hi) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_lsu_sz_mask_hi) 
                                                        | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_lh) 
                                                           | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sh)))))));
    vlSelfRef.tb__DOT__bus_addr = (((- (IData)((1U 
                                                == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q)))) 
                                    & vlSelfRef.tb__DOT__u_cpu__DOT__pc_q) 
                                   | ((- (IData)((3U 
                                                  == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q)))) 
                                      & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add)));
    if ((8U & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_imm)) {
        vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl3 = 
            VL_SHIFTL_III(32,32,32, vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl2, 8U);
        vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr3 = 
            (((- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_srs))) 
              << 0x18U) | (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr2 
                           >> 8U));
    } else {
        vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl3 = vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl2;
        vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr3 = vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr2;
    }
    vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_blt = (1U 
                                                 & ((0x2000U 
                                                     & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)
                                                     ? 
                                                    (~ (IData)(
                                                               (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add 
                                                                >> 0x20U)))
                                                     : (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_lts)));
    vlSelfRef.tb__DOT__u_led__DOT__wstrb_incomp = (
                                                   (~ (IData)(
                                                              (0xfU 
                                                               == (IData)(vlSelfRef.tb__DOT__bus_wstrb)))) 
                                                   & (IData)(vlSelfRef.tb__DOT__bus_we));
    vlSelfRef.tb__DOT__u_cpu__DOT__st_nxt = ((4U & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q))
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_expt)
                                                    ? 5U
                                                    : 1U)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q))
                                                   ? 
                                                  ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_expt)
                                                    ? 5U
                                                    : 4U)
                                                   : 
                                                  (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_inv) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))
                                                    ? 5U
                                                    : 3U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q))
                                                   ? 
                                                  ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__if_expt)
                                                    ? 5U
                                                    : 2U)
                                                   : 1U)));
    vlSelfRef.tb__DOT__bus_en = (((~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__if_expt)) 
                                  & (1U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q))) 
                                 | ((3U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q)) 
                                    & ((~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_expt)) 
                                       & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_ins_is_ls))));
    vlSelfRef.tb__DOT__u_rng__DOT__sel_val = ((~ (IData)(vlSelfRef.tb__DOT__bus_we)) 
                                              & (0U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelfRef.tb__DOT__bus_addr)));
    vlSelfRef.tb__DOT__u_cpu__DOT__wb_gpr_wdata = (
                                                   ((- (IData)(
                                                               ((0x37U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                                                | ((0x17U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                                                   | (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_4) 
                                                                       & (0U 
                                                                          == 
                                                                          (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                                           >> 0x19U))) 
                                                                      | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sub) 
                                                                         | ((IData)(
                                                                                (0x13U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))) 
                                                                            | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_ins_is_j)))))))) 
                                                    & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add)) 
                                                   | (((- (IData)(
                                                                  ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_slt) 
                                                                   | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_slti) 
                                                                      | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sltu) 
                                                                         | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sltiu)))))) 
                                                       & ((0x1000U 
                                                           & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)
                                                           ? 
                                                          (1U 
                                                           & (~ (IData)(
                                                                        (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add 
                                                                         >> 0x20U))))
                                                           : (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_lts))) 
                                                      | (((- (IData)(
                                                                     ((IData)(
                                                                              (0x4033U 
                                                                               == 
                                                                               (0xfe00707fU 
                                                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))) 
                                                                      | (IData)(
                                                                                (0x4013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))))) 
                                                          & vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_xor) 
                                                         | (((- (IData)(
                                                                        ((IData)(
                                                                                (0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))) 
                                                                         | (IData)(
                                                                                (0x6013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))))) 
                                                             & (vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_q 
                                                                | vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_imm)) 
                                                            | (((- (IData)(
                                                                           ((IData)(
                                                                                (0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))) 
                                                                            | (IData)(
                                                                                (0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))))) 
                                                                & (vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_q 
                                                                   & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_imm)) 
                                                               | (((- (IData)(
                                                                              (((0x33U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                                                                | (0x13U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))) 
                                                                               & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_33)))) 
                                                                   & ((0x10U 
                                                                       & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_imm)
                                                                       ? 
                                                                      VL_SHIFTL_III(32,32,32, vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl3, 0x10U)
                                                                       : vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl3)) 
                                                                  | (((- (IData)(
                                                                                (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_5) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                                                >> 0x19U))) 
                                                                                | (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_5) 
                                                                                & (0x20U 
                                                                                == 
                                                                                (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                                                >> 0x19U))) 
                                                                                | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_3) 
                                                                                & ((0U 
                                                                                == 
                                                                                (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                                                >> 0x19U)) 
                                                                                | (0x20U 
                                                                                == 
                                                                                (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                                                >> 0x19U)))))))) 
                                                                      & ((0x10U 
                                                                          & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_imm)
                                                                          ? 
                                                                         (((- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_srs))) 
                                                                           << 0x10U) 
                                                                          | (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr3 
                                                                             >> 0x10U))
                                                                          : vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr3)) 
                                                                     | (((- (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))) 
                                                                         & (((- (IData)((IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))))) 
                                                                             & (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_lsu_lb) 
                                                                                >> 7U)))) 
                                                                                << 8U) 
                                                                                | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_lsu_lb))) 
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
                                                                                & vlSelfRef.tb__DOT__bus_rdata)))))) 
                                                                        | ((- (IData)(
                                                                                (0x73U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))) 
                                                                           & vlSelfRef.tb__DOT__u_cpu__DOT__ex_csr_rdata)))))))));
    vlSelfRef.tb__DOT__u_cpu__DOT__ex_bru_cmp = ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_ins_is_j) 
                                                 | (((IData)(
                                                             (0x63U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))) 
                                                     & (0U 
                                                        == vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_xor)) 
                                                    | (((0U 
                                                         != vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_xor) 
                                                        & (IData)(
                                                                  (0x1063U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))) 
                                                       | ((((IData)(
                                                                    (0x4063U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))) 
                                                            | (IData)(
                                                                      (0x6063U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))) 
                                                           & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_blt)) 
                                                          | ((~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_blt)) 
                                                             & ((IData)(
                                                                        (0x5063U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))) 
                                                                | (IData)(
                                                                          (0x7063U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))))))));
    vlSelfRef.tb__DOT__u_but__DOT__sel_stm = ((~ (IData)(vlSelfRef.tb__DOT__u_led__DOT__wstrb_incomp)) 
                                              & (0xcU 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelfRef.tb__DOT__bus_addr)));
    vlSelfRef.tb__DOT__u_but__DOT__sel_ptm = ((~ (IData)(vlSelfRef.tb__DOT__u_led__DOT__wstrb_incomp)) 
                                              & (8U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelfRef.tb__DOT__bus_addr)));
    vlSelfRef.tb__DOT__u_but__DOT__sel_src = ((~ (((IData)(vlSelfRef.tb__DOT__bus_we) 
                                                   & (0U 
                                                      != vlSelfRef.tb__DOT__bus_wdata)) 
                                                  | (IData)(vlSelfRef.tb__DOT__u_led__DOT__wstrb_incomp))) 
                                              & (4U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelfRef.tb__DOT__bus_addr)));
    vlSelfRef.tb__DOT__mem_en = ((IData)(vlSelfRef.tb__DOT__bus_en) 
                                 & (vlSelfRef.tb__DOT__bus_addr 
                                    >> 0x1fU));
    vlSelfRef.tb__DOT__rng_en = ((IData)(vlSelfRef.tb__DOT__bus_en) 
                                 & (0x40000U == (vlSelfRef.tb__DOT__bus_addr 
                                                 >> 0xcU)));
    vlSelfRef.tb__DOT__lcd_en = ((IData)(vlSelfRef.tb__DOT__bus_en) 
                                 & (0x60000U == (vlSelfRef.tb__DOT__bus_addr 
                                                 >> 0xcU)));
    vlSelfRef.tb__DOT__led_en = ((IData)(vlSelfRef.tb__DOT__bus_en) 
                                 & (0x50000U == (vlSelfRef.tb__DOT__bus_addr 
                                                 >> 0xcU)));
    vlSelfRef.tb__DOT__but_en = ((IData)(vlSelfRef.tb__DOT__bus_en) 
                                 & (0x70000U == (vlSelfRef.tb__DOT__bus_addr 
                                                 >> 0xcU)));
    vlSelfRef.tb__DOT__u_lcd__DOT__wen = ((IData)(vlSelfRef.tb__DOT__lcd_en) 
                                          & (IData)(vlSelfRef.tb__DOT__bus_we));
    vlSelfRef.tb__DOT__u_led__DOT__wen = ((IData)(vlSelfRef.tb__DOT__led_en) 
                                          & (IData)(vlSelfRef.tb__DOT__bus_we));
    vlSelfRef.tb__DOT__u_but__DOT__wen = ((IData)(vlSelfRef.tb__DOT__but_en) 
                                          & (IData)(vlSelfRef.tb__DOT__bus_we));
    vlSelfRef.tb__DOT__u_led__DOT__r_en = ((IData)(vlSelfRef.tb__DOT__u_led__DOT__wen) 
                                           & (vlSelfRef.tb__DOT__bus_wdata 
                                              >> 8U));
    vlSelfRef.tb__DOT__u_led__DOT__g_en = ((IData)(vlSelfRef.tb__DOT__u_led__DOT__wen) 
                                           & (vlSelfRef.tb__DOT__bus_wdata 
                                              >> 9U));
    vlSelfRef.tb__DOT__u_led__DOT__b_en = ((IData)(vlSelfRef.tb__DOT__u_led__DOT__wen) 
                                           & (vlSelfRef.tb__DOT__bus_wdata 
                                              >> 0xaU));
    vlSelfRef.tb__DOT__u_but__DOT__wen_ptm = ((IData)(vlSelfRef.tb__DOT__u_but__DOT__wen) 
                                              & (IData)(vlSelfRef.tb__DOT__u_but__DOT__sel_ptm));
    vlSelfRef.tb__DOT__u_but__DOT__wen_stm = ((IData)(vlSelfRef.tb__DOT__u_but__DOT__wen) 
                                              & (IData)(vlSelfRef.tb__DOT__u_but__DOT__sel_stm));
    vlSelfRef.tb__DOT__u_but__DOT__wen_src = ((IData)(vlSelfRef.tb__DOT__u_but__DOT__wen) 
                                              & (IData)(vlSelfRef.tb__DOT__u_but__DOT__sel_src));
    vlSelfRef.tb__DOT__u_but__DOT__clr_ptm = ((IData)(vlSelfRef.tb__DOT__u_but__DOT__wen_src) 
                                              | (IData)(vlSelfRef.tb__DOT__u_but__DOT__wen_ptm));
    vlSelfRef.tb__DOT__u_but__DOT__clr_stm = ((IData)(vlSelfRef.tb__DOT__u_but__DOT__wen_src) 
                                              | (IData)(vlSelfRef.tb__DOT__u_but__DOT__wen_stm));
}

void Vtb___024root___eval_triggers__ico(Vtb___024root* vlSelf);

bool Vtb___024root___eval_phase__ico(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtb___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtb___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfffffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 1U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfffffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 2U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfffffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 3U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xffffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 4U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xffffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 5U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xffffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 6U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xffffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 7U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfffffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 8U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfffffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 9U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfffffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0xaU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfffff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0xbU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xffffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0xcU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xffffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0xeU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xffff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0xfU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfffeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0x10U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfffdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x11U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfffbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x12U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfff7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0x13U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xffefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x14U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xffdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x15U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xffbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x16U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xff7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x17U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfeffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x18U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfdffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x19U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xf7ffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x1bU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xefffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0x1cU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xdfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x1dU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xbfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x1eU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0x7fffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0x1fU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfffffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfffffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 1U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfffffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 2U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfffffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 3U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xffffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 4U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xffffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 5U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xffffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 6U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfffffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 8U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfffffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 9U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfffffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0xaU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfffff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0xbU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xffffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0xcU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xffffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0xdU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xffffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0xeU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xffff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0xfU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfffeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x10U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfffdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x11U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfffbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0x12U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfff7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x13U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xffdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x15U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xffbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x16U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xff7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0x17U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfeffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x18U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfdffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x19U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfbffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x1aU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xf7ffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x1bU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xefffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x1cU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xdfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x1dU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xbfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0x1eU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0x7fffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x1fU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfffffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfffffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 2U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfffffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 3U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xffffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 4U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xffffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 5U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xffffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 6U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xffffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 7U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfffffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 8U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfffffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 9U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfffffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0xaU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfffff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0xbU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xffffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0xcU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xffffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0xdU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xffff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0xfU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfffeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x10U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfffdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x11U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfffbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x12U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfff7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x13U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xffefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x14U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xffdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x15U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xffbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0x16U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xff7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x17U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfeffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0x18U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfdffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x19U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfbffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x1aU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xefffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x1cU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xdfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x1dU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xbfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x1eU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0x7fffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x1fU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xfffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__nxt)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xfffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                                   << 1U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xfffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                                   << 2U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xfffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                                   << 3U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                                   << 4U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                                   << 5U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                                   << 6U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                                   << 7U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xfffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                                   << 9U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xfffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                                   << 0xaU)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xfff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                                   << 0xbU)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                                   << 0xcU)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                                   << 0xdU)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                                   << 0xeU)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                                   << 0xfU)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xfeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                                   << 0x10U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xfdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                                   << 0x11U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xfbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                                   << 0x12U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xf7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                                   << 0x13U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                                   << 0x14U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                                   << 0x16U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0x7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                                   << 0x17U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfffffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | (1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xffffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | (0x2000U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                 << 0xcU)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfbffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | (0x4000000U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                    << 0x18U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xffffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | (0x80U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                               << 4U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xffefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | (0x100000U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                   << 0x10U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfffffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | (2U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                            >> 4U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xffffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | (0x4000U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                 << 8U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xf7ffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | (0x8000000U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                    << 0x14U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xfffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0x100U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0x200000U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                   << 0xcU)));
        }
    } else {
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xfffffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xfffffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xfffffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xffffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xffffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xffffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xffffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xfffffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xfffffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xfffffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xfffff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xffffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xffffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xffff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xfffeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xfffdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xfffbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xfff7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xffefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xffdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xffbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xff7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xfeffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xfdffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xf7ffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xefffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xdfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xbfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0x7fffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xfffffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xfffffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xfffffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xfffffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xffffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xffffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xffffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xfffffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xfffffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xfffffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xfffff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xffffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xffffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xffffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xffff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xfffeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xfffdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xfffbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xfff7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xffdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xffbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xff7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xfeffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xfdffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xfbffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xf7ffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xefffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xdfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xbfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0x7fffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xfffffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xfffffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xfffffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xffffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xffffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xffffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xffffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xfffffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xfffffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xfffffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xfffff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xffffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xffffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xffff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xfffeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xfffdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xfffbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xfff7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xffefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xffdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xffbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xff7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xfeffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xfdffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xfbffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xefffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xdfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xbfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0x7fffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0xfffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0xfffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0xfffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0xfffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0xffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0xffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0xffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0xffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0xfffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0xfffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0xfff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0xffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0xffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0xffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0xff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0xfeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0xfdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0xfbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0xf7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0xefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0xbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0x7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xfffffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xffffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U] 
            = (0xfbffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xffffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U] 
            = (0xffefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xfffffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xffffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U] 
            = (0xf7ffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0xfffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U] 
            = (0xdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_r_q[3U]);
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfffffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 1U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfffffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 2U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfffffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 3U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xffffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 4U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xffffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 5U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xffffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 6U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xffffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 7U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfffffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 8U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfffffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 9U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfffffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0xaU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfffff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0xbU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xffffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0xcU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xffffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0xeU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xffff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0xfU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfffeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0x10U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfffdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x11U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfffbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x12U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfff7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0x13U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xffefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x14U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xffdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x15U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xffbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x16U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xff7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x17U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfeffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x18U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfdffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x19U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xf7ffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x1bU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xefffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0x1cU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xdfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x1dU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xbfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x1eU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0x7fffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0x1fU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfffffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfffffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 1U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfffffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 2U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfffffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 3U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xffffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 4U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xffffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 5U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xffffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 6U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfffffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 8U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfffffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 9U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfffffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0xaU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfffff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0xbU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xffffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0xcU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xffffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0xdU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xffffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0xeU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xffff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0xfU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfffeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x10U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfffdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x11U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfffbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0x12U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfff7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x13U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xffdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x15U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xffbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x16U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xff7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0x17U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfeffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x18U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfdffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x19U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfbffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x1aU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xf7ffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x1bU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xefffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x1cU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xdfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x1dU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xbfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0x1eU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0x7fffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x1fU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfffffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfffffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 2U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfffffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 3U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xffffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 4U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xffffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 5U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xffffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 6U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xffffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 7U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfffffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 8U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfffffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 9U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfffffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0xaU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfffff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0xbU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xffffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0xcU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xffffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0xdU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xffff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0xfU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfffeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x10U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfffdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x11U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfffbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x12U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfff7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x13U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xffefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x14U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xffdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x15U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xffbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0x16U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xff7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x17U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfeffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0x18U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfdffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x19U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfbffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x1aU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xefffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x1cU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xdfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x1dU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xbfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x1eU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0x7fffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x1fU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xfffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__nxt)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xfffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                                   << 1U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xfffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                                   << 2U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xfffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                                   << 3U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                                   << 4U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                                   << 5U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                                   << 6U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                                   << 7U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xfffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                                   << 9U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xfffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                                   << 0xaU)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xfff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                                   << 0xbU)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                                   << 0xcU)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                                   << 0xdU)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                                   << 0xeU)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                                   << 0xfU)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xfeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                                   << 0x10U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xfdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                                   << 0x11U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xfbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                                   << 0x12U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xf7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                                   << 0x13U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                                   << 0x14U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                                   << 0x16U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0x7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                                   << 0x17U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfffffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | (1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xffffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | (0x2000U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                 << 0xcU)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfbffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | (0x4000000U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                    << 0x18U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xffffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | (0x80U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                               << 4U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xffefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | (0x100000U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                   << 0x10U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfffffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | (2U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                            >> 4U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xffffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | (0x4000U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                 << 8U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xf7ffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | (0x8000000U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                    << 0x14U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xfffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0x100U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0x200000U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                   << 0xcU)));
        }
    } else {
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xfffffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xfffffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xfffffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xffffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xffffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xffffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xffffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xfffffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xfffffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xfffffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xfffff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xffffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xffffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xffff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xfffeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xfffdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xfffbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xfff7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xffefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xffdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xffbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xff7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xfeffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xfdffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xf7ffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xefffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xdfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xbfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0x7fffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xfffffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xfffffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xfffffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xfffffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xffffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xffffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xffffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xfffffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xfffffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xfffffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xfffff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xffffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xffffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xffffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xffff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xfffeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xfffdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xfffbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xfff7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xffdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xffbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xff7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xfeffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xfdffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xfbffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xf7ffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xefffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xdfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xbfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0x7fffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xfffffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xfffffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xfffffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xffffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xffffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xffffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xffffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xfffffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xfffffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xfffffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xfffff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xffffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xffffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xffff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xfffeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xfffdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xfffbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xfff7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xffefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xffdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xffbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xff7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xfeffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xfdffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xfbffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xefffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xdfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xbfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0x7fffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0xfffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0xfffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0xfffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0xfffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0xffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0xffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0xffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0xffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0xfffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0xfffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0xfff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0xffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0xffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0xffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0xff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0xfeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0xfdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0xfbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0xf7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0xefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0xbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0x7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xfffffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xffffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U] 
            = (0xfbffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xffffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U] 
            = (0xffefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xfffffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xffffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U] 
            = (0xf7ffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0xfffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U] 
            = (0xdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_g_q[3U]);
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__2(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfffffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 1U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfffffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 2U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfffffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 3U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xffffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 4U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xffffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 5U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xffffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 6U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xffffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 7U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfffffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 8U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfffffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 9U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfffffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0xaU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfffff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0xbU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xffffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0xcU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xffffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0xeU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xffff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0xfU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfffeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0x10U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfffdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x11U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfffbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x12U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfff7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0x13U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xffefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x14U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xffdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x15U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xffbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x16U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xff7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x17U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfeffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x18U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfdffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x19U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xf7ffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x1bU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xefffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0x1cU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xdfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x1dU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xbfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x1eU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0x7fffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0x1fU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfffffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfffffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 1U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfffffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 2U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfffffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 3U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xffffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 4U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xffffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 5U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xffffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 6U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfffffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 8U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfffffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 9U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfffffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0xaU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfffff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0xbU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xffffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0xcU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xffffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0xdU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xffffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0xeU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xffff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0xfU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfffeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x10U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfffdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x11U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfffbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0x12U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfff7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x13U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xffdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x15U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xffbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x16U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xff7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0x17U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfeffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x18U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfdffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x19U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfbffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x1aU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xf7ffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x1bU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xefffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x1cU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xdfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x1dU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xbfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0x1eU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0x7fffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x1fU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfffffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfffffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 2U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfffffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 3U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xffffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 4U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xffffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 5U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xffffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 6U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xffffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 7U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfffffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 8U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfffffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 9U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfffffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0xaU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfffff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0xbU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xffffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0xcU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xffffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0xdU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xffff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0xfU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfffeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x10U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfffdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x11U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfffbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x12U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfff7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x13U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xffefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x14U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xffdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x15U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xffbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0x16U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xff7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x17U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfeffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0x18U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfdffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x19U));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfbffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x1aU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xefffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x1cU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xdfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x1dU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xbfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x1eU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0x7fffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x1fU));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xfffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__nxt)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xfffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                                   << 1U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xfffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                                   << 2U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xfffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                                   << 3U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                                   << 4U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                                   << 5U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                                   << 6U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                                   << 7U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xfffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                                   << 9U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xfffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                                   << 0xaU)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xfff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                                   << 0xbU)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                                   << 0xcU)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                                   << 0xdU)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                                   << 0xeU)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                                   << 0xfU)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xfeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                                   << 0x10U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xfdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                                   << 0x11U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xfbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                                   << 0x12U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xf7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                                   << 0x13U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                                   << 0x14U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                                   << 0x16U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0x7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                                   << 0x17U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfffffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | (1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xffffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | (0x2000U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                 << 0xcU)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfbffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | (0x4000000U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                    << 0x18U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xffffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | (0x80U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                               << 4U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xffefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | (0x100000U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                   << 0x10U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfffffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | (2U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                            >> 4U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xffffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | (0x4000U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                 << 8U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xf7ffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | (0x8000000U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                    << 0x14U)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xfffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0x100U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0x200000U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                   << 0xcU)));
        }
    } else {
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xfffffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xfffffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xfffffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xffffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xffffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xffffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xffffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xfffffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xfffffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xfffffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xfffff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xffffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xffffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xffff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xfffeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xfffdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xfffbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xfff7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xffefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xffdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xffbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xff7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xfeffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xfdffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xf7ffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xefffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xdfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xbfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0x7fffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xfffffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xfffffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xfffffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xfffffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xffffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xffffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xffffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xfffffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xfffffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xfffffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xfffff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xffffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xffffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xffffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xffff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xfffeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xfffdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xfffbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xfff7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xffdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xffbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xff7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xfeffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xfdffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xfbffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xf7ffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xefffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xdfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xbfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0x7fffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xfffffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xfffffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xfffffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xffffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xffffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xffffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xffffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xfffffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xfffffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xfffffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xfffff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xffffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xffffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xffff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xfffeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xfffdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xfffbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xfff7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xffefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xffdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xffbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xff7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xfeffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xfdffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xfbffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xefffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xdfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xbfffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0x7fffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0xfffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0xfffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0xfffffbU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0xfffff7U & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0xffffefU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0xffffdfU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0xffffbfU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0xffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0xfffdffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0xfffbffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0xfff7ffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0xffefffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0xffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0xffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0xff7fffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0xfeffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0xfdffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0xfbffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0xf7ffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0xefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0xbfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0x7fffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xfffffffeU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xffffdfffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U] 
            = (0xfbffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xffffff7fU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U] 
            = (0xffefffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xfffffffdU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xffffbfffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U] 
            = (0xf7ffffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0xfffeffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U] 
            = (0xdfffffU & vlSelfRef.tb__DOT__u_led__DOT__led_b_q[3U]);
    }
}

void Vtb___024root____Vdpiimwrap_tb__DOT__u_mem__DOT__mem_wr_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ strb);
void Vtb___024root____Vdpiimwrap_tb__DOT__u_mem__DOT__mem_rd_TOP(IData/*31:0*/ addr, IData/*31:0*/ &mem_rd__Vfuncrtn);

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__3(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_tb__DOT__u_mem__DOT__mem_rd__0__Vfuncout;
    __Vfunc_tb__DOT__u_mem__DOT__mem_rd__0__Vfuncout = 0;
    // Body
    if (((IData)(vlSelfRef.tb__DOT__mem_en) & ((IData)(vlSelfRef.tb__DOT__bus_we) 
                                               & (0xf0000000U 
                                                  >= vlSelfRef.tb__DOT__bus_addr)))) {
        Vtb___024root____Vdpiimwrap_tb__DOT__u_mem__DOT__mem_wr_TOP(vlSelfRef.tb__DOT__bus_addr, vlSelfRef.tb__DOT__bus_wdata, (IData)(vlSelfRef.tb__DOT__bus_wstrb));
    }
    vlSelfRef.tb__DOT__u_rng__DOT__err_q = ((IData)(vlSelfRef.tb__DOT__rng_en) 
                                            & (~ (IData)(vlSelfRef.tb__DOT__u_rng__DOT__sel_val)));
    vlSelfRef.tb__DOT__u_lcd__DOT__err_q = ((IData)(vlSelfRef.tb__DOT__lcd_en) 
                                            & (0U != 
                                               (0xfffU 
                                                & vlSelfRef.tb__DOT__bus_addr)));
    vlSelfRef.tb__DOT__u_mem__DOT__err_q = ((IData)(vlSelfRef.tb__DOT__mem_en) 
                                            & (0xf0000000U 
                                               < vlSelfRef.tb__DOT__bus_addr));
    vlSelfRef.tb__DOT__u_led__DOT__err_q = ((IData)(vlSelfRef.tb__DOT__led_en) 
                                            & (~ ((~ (IData)(vlSelfRef.tb__DOT__u_led__DOT__wstrb_incomp)) 
                                                  & (0U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelfRef.tb__DOT__bus_addr)))));
    if (vlSelfRef.tb__DOT__but_en) {
        vlSelfRef.tb__DOT__u_but__DOT__sel_q = (((IData)(vlSelfRef.tb__DOT__u_but__DOT__sel_stm) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.tb__DOT__u_but__DOT__sel_ptm) 
                                                    << 2U) 
                                                   | (((IData)(vlSelfRef.tb__DOT__u_but__DOT__sel_src) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.tb__DOT__u_rng__DOT__sel_val))));
    }
    if (((IData)(vlSelfRef.tb__DOT__mem_en) & ((~ (IData)(vlSelfRef.tb__DOT__bus_we)) 
                                               & (0xf0000000U 
                                                  >= vlSelfRef.tb__DOT__bus_addr)))) {
        Vtb___024root____Vdpiimwrap_tb__DOT__u_mem__DOT__mem_rd_TOP(vlSelfRef.tb__DOT__bus_addr, __Vfunc_tb__DOT__u_mem__DOT__mem_rd__0__Vfuncout);
        vlSelfRef.tb__DOT__u_mem__DOT__rdata_q = __Vfunc_tb__DOT__u_mem__DOT__mem_rd__0__Vfuncout;
    }
    if ((2U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q))) {
        vlSelfRef.tb__DOT__u_cpu__DOT__bus_data_q = vlSelfRef.tb__DOT__bus_rdata;
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__4(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__tb__DOT__u_lcd__DOT__disp_q__v0;
    __VdlyVal__tb__DOT__u_lcd__DOT__disp_q__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__u_lcd__DOT__disp_q__v2;
    __VdlyVal__tb__DOT__u_lcd__DOT__disp_q__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__u_lcd__DOT__disp_q__v4;
    __VdlyVal__tb__DOT__u_lcd__DOT__disp_q__v4 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__u_lcd__DOT__disp_q__v6;
    __VdlyVal__tb__DOT__u_lcd__DOT__disp_q__v6 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v0;
    __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v1;
    __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v1 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v2;
    __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v2 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v3;
    __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v3 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v4;
    __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v4 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v5;
    __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v5 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v6;
    __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v6 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v7;
    __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v7 = 0;
    // Body
    __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v0 = 0U;
    __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v1 = 0U;
    __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v2 = 0U;
    __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v3 = 0U;
    __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v4 = 0U;
    __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v5 = 0U;
    __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v6 = 0U;
    __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v7 = 0U;
    if (vlSelfRef.rst_n) {
        if (((IData)(vlSelfRef.tb__DOT__u_lcd__DOT__wen) 
             & (IData)(vlSelfRef.tb__DOT__bus_wstrb))) {
            __VdlyVal__tb__DOT__u_lcd__DOT__disp_q__v0 
                = (0xffU & vlSelfRef.tb__DOT__bus_wdata);
            __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v0 = 1U;
        }
        if (((IData)(vlSelfRef.tb__DOT__u_lcd__DOT__wen) 
             & ((IData)(vlSelfRef.tb__DOT__bus_wstrb) 
                >> 1U))) {
            __VdlyVal__tb__DOT__u_lcd__DOT__disp_q__v2 
                = (0xffU & (vlSelfRef.tb__DOT__bus_wdata 
                            >> 8U));
            __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v2 = 1U;
        }
        if (((IData)(vlSelfRef.tb__DOT__u_lcd__DOT__wen) 
             & ((IData)(vlSelfRef.tb__DOT__bus_wstrb) 
                >> 2U))) {
            __VdlyVal__tb__DOT__u_lcd__DOT__disp_q__v4 
                = (0xffU & (vlSelfRef.tb__DOT__bus_wdata 
                            >> 0x10U));
            __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v4 = 1U;
        }
        if (((IData)(vlSelfRef.tb__DOT__u_lcd__DOT__wen) 
             & ((IData)(vlSelfRef.tb__DOT__bus_wstrb) 
                >> 3U))) {
            __VdlyVal__tb__DOT__u_lcd__DOT__disp_q__v6 
                = (vlSelfRef.tb__DOT__bus_wdata >> 0x18U);
            __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v6 = 1U;
        }
    } else {
        __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v1 = 1U;
        __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v3 = 1U;
        __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v5 = 1U;
        __VdlySet__tb__DOT__u_lcd__DOT__disp_q__v7 = 1U;
    }
    vlSelfRef.tb__DOT__u_bus__DOT__led_en_q = ((IData)(vlSelfRef.rst_n) 
                                               && (IData)(vlSelfRef.tb__DOT__led_en));
    vlSelfRef.tb__DOT__u_bus__DOT__tmp_en_q = ((IData)(vlSelfRef.rst_n) 
                                               && ((IData)(vlSelfRef.tb__DOT__bus_en) 
                                                   & (0x10000U 
                                                      == 
                                                      (vlSelfRef.tb__DOT__bus_addr 
                                                       >> 0xcU))));
    vlSelfRef.tb__DOT__u_bus__DOT__rng_en_q = ((IData)(vlSelfRef.rst_n) 
                                               && (IData)(vlSelfRef.tb__DOT__rng_en));
    vlSelfRef.tb__DOT__u_bus__DOT__mem_en_q = ((IData)(vlSelfRef.rst_n) 
                                               && (IData)(vlSelfRef.tb__DOT__mem_en));
    vlSelfRef.tb__DOT__u_bus__DOT__lcd_en_q = ((IData)(vlSelfRef.rst_n) 
                                               && (IData)(vlSelfRef.tb__DOT__lcd_en));
    vlSelfRef.tb__DOT__u_bus__DOT__but_en_q = ((IData)(vlSelfRef.rst_n) 
                                               && (IData)(vlSelfRef.tb__DOT__but_en));
    if (__VdlySet__tb__DOT__u_lcd__DOT__disp_q__v0) {
        vlSelfRef.tb__DOT__u_lcd__DOT__disp_q[0U] = __VdlyVal__tb__DOT__u_lcd__DOT__disp_q__v0;
    }
    if (__VdlySet__tb__DOT__u_lcd__DOT__disp_q__v1) {
        vlSelfRef.tb__DOT__u_lcd__DOT__disp_q[0U] = 0U;
    }
    if (__VdlySet__tb__DOT__u_lcd__DOT__disp_q__v2) {
        vlSelfRef.tb__DOT__u_lcd__DOT__disp_q[1U] = __VdlyVal__tb__DOT__u_lcd__DOT__disp_q__v2;
    }
    if (__VdlySet__tb__DOT__u_lcd__DOT__disp_q__v3) {
        vlSelfRef.tb__DOT__u_lcd__DOT__disp_q[1U] = 0U;
    }
    if (__VdlySet__tb__DOT__u_lcd__DOT__disp_q__v4) {
        vlSelfRef.tb__DOT__u_lcd__DOT__disp_q[2U] = __VdlyVal__tb__DOT__u_lcd__DOT__disp_q__v4;
    }
    if (__VdlySet__tb__DOT__u_lcd__DOT__disp_q__v5) {
        vlSelfRef.tb__DOT__u_lcd__DOT__disp_q[2U] = 0U;
    }
    if (__VdlySet__tb__DOT__u_lcd__DOT__disp_q__v6) {
        vlSelfRef.tb__DOT__u_lcd__DOT__disp_q[3U] = __VdlyVal__tb__DOT__u_lcd__DOT__disp_q__v6;
    }
    if (__VdlySet__tb__DOT__u_lcd__DOT__disp_q__v7) {
        vlSelfRef.tb__DOT__u_lcd__DOT__disp_q[3U] = 0U;
    }
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sevensegment_1 = vlSelfRef.tb__DOT__u_lcd__DOT__disp_q
        [0U];
    vlSelfRef.sevensegment_2 = vlSelfRef.tb__DOT__u_lcd__DOT__disp_q
        [1U];
    vlSelfRef.sevensegment_3 = vlSelfRef.tb__DOT__u_lcd__DOT__disp_q
        [2U];
    vlSelfRef.sevensegment_4 = vlSelfRef.tb__DOT__u_lcd__DOT__disp_q
        [3U];
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__5(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__5\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__tb__DOT__u_cpu__DOT__gpr_q__v0;
    __VdlyVal__tb__DOT__u_cpu__DOT__gpr_q__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb__DOT__u_cpu__DOT__gpr_q__v0;
    __VdlyDim0__tb__DOT__u_cpu__DOT__gpr_q__v0 = 0;
    CData/*0:0*/ __Vdly__tb__DOT__u_cpu__DOT__csr_mie_q;
    __Vdly__tb__DOT__u_cpu__DOT__csr_mie_q = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__u_cpu__DOT__gpr_q__v0;
    __VdlySet__tb__DOT__u_cpu__DOT__gpr_q__v0 = 0;
    // Body
    __Vdly__tb__DOT__u_cpu__DOT__csr_mie_q = vlSelfRef.tb__DOT__u_cpu__DOT__csr_mie_q;
    __VdlySet__tb__DOT__u_cpu__DOT__gpr_q__v0 = 0U;
    vlSelfRef.__Vdly__tb__DOT__u_cpu__DOT__csr_mepc_q 
        = vlSelfRef.tb__DOT__u_cpu__DOT__csr_mepc_q;
    if (vlSelfRef.tb__DOT__u_cpu__DOT__wi_csr_we_mstatus) {
        __Vdly__tb__DOT__u_cpu__DOT__csr_mie_q = (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mstatus) 
                                                   & (vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_wdata 
                                                      >> 3U)) 
                                                  | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_ret) 
                                                     & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mpie_q)));
        vlSelfRef.tb__DOT__u_cpu__DOT__csr_mpie_q = 
            (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mstatus) 
              & (vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_wdata 
                 >> 7U)) | (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_set) 
                             & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mie_q)) 
                            | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_ret)));
    }
    if (((4U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q)) 
         & ((~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_inv)) 
            & ((0x63U != (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
               & ((~ ((0U == (0x1fU & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                       >> 7U))) | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_expt))) 
                  & ((0x23U != (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                     & (0xfU != (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))))))) {
        __VdlyVal__tb__DOT__u_cpu__DOT__gpr_q__v0 = vlSelfRef.tb__DOT__u_cpu__DOT__wb_gpr_wdata;
        __VdlyDim0__tb__DOT__u_cpu__DOT__gpr_q__v0 
            = (0x1fU & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                        >> 7U));
        __VdlySet__tb__DOT__u_cpu__DOT__gpr_q__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mepc) 
         | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_set))) {
        vlSelfRef.__Vdly__tb__DOT__u_cpu__DOT__csr_mepc_q 
            = ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mepc)
                ? vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_wdata
                : vlSelfRef.tb__DOT__u_cpu__DOT__pc_q);
    }
    if (vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mie) {
        vlSelfRef.tb__DOT__u_cpu__DOT__csr_mtie_q = 
            (1U & (vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_wdata 
                   >> 7U));
        vlSelfRef.tb__DOT__u_cpu__DOT__csr_meie_q = 
            (1U & (vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_wdata 
                   >> 0xbU));
    }
    if (vlSelfRef.tb__DOT__u_cpu__DOT__wi_csr_we_mcause) {
        if (vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mcause) {
            vlSelfRef.tb__DOT__u_cpu__DOT__csr_mcause_i_q 
                = (1U & (vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_wdata 
                         >> 0x1fU));
            vlSelfRef.tb__DOT__u_cpu__DOT__csr_mcause_c_q 
                = (0x3fU & vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_wdata);
        } else {
            vlSelfRef.tb__DOT__u_cpu__DOT__csr_mcause_i_q 
                = (1U & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__if_irq_e));
            vlSelfRef.tb__DOT__u_cpu__DOT__csr_mcause_c_q 
                = (0x3fU & ((1U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_q))
                             ? ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__if_irq_e)
                                 ? 0xbU : 0U) : ((2U 
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
                                                    : 7U)))));
        }
    }
    vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__val_q 
        = (1U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                 >> 7U));
    vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__val_q 
        = (1U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                 >> 6U));
    vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__val_q 
        = (1U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                 >> 5U));
    vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__val_q 
        = (1U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                 >> 4U));
    vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__val_q 
        = (1U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                 >> 3U));
    vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__val_q 
        = (1U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                 >> 2U));
    vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__val_q 
        = (1U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                 >> 1U));
    vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__val_q 
        = (1U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch));
    if ((2U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q))) {
        vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_q = vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q
            [(0x1fU & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                       >> 0xfU))];
        vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_q = vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q
            [(0x1fU & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                       >> 0x14U))];
    }
    if (__VdlySet__tb__DOT__u_cpu__DOT__gpr_q__v0) {
        vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[__VdlyDim0__tb__DOT__u_cpu__DOT__gpr_q__v0] 
            = __VdlyVal__tb__DOT__u_cpu__DOT__gpr_q__v0;
    }
    if ((5U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_nxt))) {
        vlSelfRef.tb__DOT__u_cpu__DOT__ie_q = vlSelfRef.tb__DOT__u_cpu__DOT__st_q;
    }
    vlSelfRef.tb__DOT__u_cpu__DOT__csr_mie_q = __Vdly__tb__DOT__u_cpu__DOT__csr_mie_q;
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__6(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__6\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        if (((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__src_edge) 
             | (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_stm))) {
            vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__vld_q 
                = ((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_stm)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__src_edge) 
             | (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_stm))) {
            vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__vld_q 
                = ((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_stm)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__src_edge) 
             | (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_stm))) {
            vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__vld_q 
                = ((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_stm)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__src_edge) 
             | (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_stm))) {
            vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__vld_q 
                = ((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_stm)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__src_edge) 
             | (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_stm))) {
            vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__vld_q 
                = ((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_stm)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__src_edge) 
             | (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_stm))) {
            vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__vld_q 
                = ((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_stm)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__src_edge) 
             | (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_stm))) {
            vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__vld_q 
                = ((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_stm)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__src_edge) 
             | (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_stm))) {
            vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__vld_q 
                = ((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_stm)));
        }
        if (vlSelfRef.tb__DOT__u_but__DOT__wen_stm) {
            vlSelfRef.tb__DOT__u_but__DOT__stm_q = 
                (0xffffU & vlSelfRef.tb__DOT__bus_wdata);
        }
        if (((4U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q)) 
             | (5U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q)))) {
            vlSelfRef.tb__DOT__u_cpu__DOT__pc_q = ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_set)
                                                    ? vlSelfRef.tb__DOT__u_cpu__DOT__csr_mtvec_q
                                                    : 
                                                   ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_ret)
                                                     ? vlSelfRef.tb__DOT__u_cpu__DOT__csr_mepc_q
                                                     : 
                                                    (vlSelfRef.tb__DOT__u_cpu__DOT__ex_bru_add_op0 
                                                     + 
                                                     (((- (IData)(
                                                                  (0x6fU 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))) 
                                                       & (((- (IData)(
                                                                      (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                                       >> 0x1fU))) 
                                                           << 0x14U) 
                                                          | ((0xff000U 
                                                              & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins) 
                                                             | ((0x800U 
                                                                 & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                                    >> 9U)) 
                                                                | (0x7feU 
                                                                   & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                                      >> 0x14U)))))) 
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
                                                                             & (~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_bru_cmp))))))))))));
        }
    } else {
        vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__vld_q = 0U;
        vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__vld_q = 0U;
        vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__vld_q = 0U;
        vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__vld_q = 0U;
        vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__vld_q = 0U;
        vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__vld_q = 0U;
        vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__vld_q = 0U;
        vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__vld_q = 0U;
        vlSelfRef.tb__DOT__u_but__DOT__stm_q = 0xffffU;
        vlSelfRef.tb__DOT__u_cpu__DOT__pc_q = 0x80000000U;
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__7(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__7\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__u_but__DOT__ext_switch = (0xffU 
                                                 & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_vld_q)
                                                     ? 
                                                    (vlSelfRef.tb__DOT__u_but__DOT__ext_val_q 
                                                     >> 0xaU)
                                                     : (IData)(vlSelfRef.dip_switches)));
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__1(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__u_cpu__DOT__csr_mie = (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__csr_meie_q) 
                                               << 0xbU) 
                                              | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mtie_q) 
                                                 << 7U));
    vlSelfRef.tb__DOT__u_cpu__DOT__csr_mcause = (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mcause_i_q) 
                                                  << 0x1fU) 
                                                 | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mcause_c_q));
    vlSelfRef.tb__DOT__u_cpu__DOT__csr_mstatus = (0x1800U 
                                                  | (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mpie_q) 
                                                      << 7U) 
                                                     | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mie_q) 
                                                        << 3U)));
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__8(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__8\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__u_cpu__DOT__csr_mepc_q = vlSelfRef.__Vdly__tb__DOT__u_cpu__DOT__csr_mepc_q;
    if (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we) 
         & (0x305U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                       >> 0x14U)))) {
        vlSelfRef.tb__DOT__u_cpu__DOT__csr_mtvec_q 
            = vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_wdata;
    }
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__2(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__u_but__DOT____Vcellout__u_stm__src 
        = ((((IData)(((~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                          >> 7U)) & (0U == (0xc000U 
                                            & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))))) 
             | ((IData)(((0x4000U == (0xc000U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                            >> 7U))) | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__vld_q))) 
            << 7U) | ((((IData)(((~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                     >> 6U)) & (0U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))))) 
                        | ((IData)(((0x1000U == (0x3000U 
                                                 & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                                    & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                       >> 6U))) | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__vld_q))) 
                       << 6U) | ((((IData)(((~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                                >> 5U)) 
                                            & (0U == 
                                               (0xc00U 
                                                & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))))) 
                                   | ((IData)(((0x400U 
                                                == 
                                                (0xc00U 
                                                 & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                                               & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                                  >> 5U))) 
                                      | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__vld_q))) 
                                  << 5U) | ((((IData)(
                                                      ((~ 
                                                        ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                                         >> 4U)) 
                                                       & (0U 
                                                          == 
                                                          (0x300U 
                                                           & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))))) 
                                              | ((IData)(
                                                         ((0x100U 
                                                           == 
                                                           (0x300U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                                                          & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                                             >> 4U))) 
                                                 | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__vld_q))) 
                                             << 4U) 
                                            | ((((IData)(
                                                         ((~ 
                                                           ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                                            >> 3U)) 
                                                          & (0U 
                                                             == 
                                                             (0xc0U 
                                                              & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))))) 
                                                 | ((IData)(
                                                            ((0x40U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                                                             & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                                                >> 3U))) 
                                                    | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__vld_q))) 
                                                << 3U) 
                                               | ((((IData)(
                                                            ((~ 
                                                              ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                                               >> 2U)) 
                                                             & (0U 
                                                                == 
                                                                (0x30U 
                                                                 & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))))) 
                                                    | ((IData)(
                                                               ((0x10U 
                                                                 == 
                                                                 (0x30U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                                                                & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                                                   >> 2U))) 
                                                       | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__vld_q))) 
                                                   << 2U) 
                                                  | ((((IData)(
                                                               ((~ 
                                                                 ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                                                  >> 1U)) 
                                                                & (0U 
                                                                   == 
                                                                   (0xcU 
                                                                    & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))))) 
                                                       | ((IData)(
                                                                  ((4U 
                                                                    == 
                                                                    (0xcU 
                                                                     & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                                                                   & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                                                                      >> 1U))) 
                                                          | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__vld_q))) 
                                                      << 1U) 
                                                     | (((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch)) 
                                                         & (0U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q)))) 
                                                        | (((1U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))) 
                                                            & (IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch)) 
                                                           | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__vld_q))))))))));
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__9(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__9\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        vlSelfRef.tb__DOT__u_rng__DOT__lfsr_q = ((0U 
                                                  != vlSelfRef.tb__DOT__u_rng__DOT__lfsr_q)
                                                  ? 
                                                 (((vlSelfRef.tb__DOT__u_rng__DOT__lfsr_q 
                                                    ^ vlSelfRef.tb__DOT__u_rng__DOT__lfsr_xor) 
                                                   << 1U) 
                                                  | (vlSelfRef.tb__DOT__u_rng__DOT__lfsr_q 
                                                     >> 0x1fU))
                                                  : 0x55555555U);
        if (((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__src_edge) 
             | (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_ptm))) {
            vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__vld_q 
                = ((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_ptm)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__src_edge) 
             | (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_ptm))) {
            vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__vld_q 
                = ((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_ptm)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__src_edge) 
             | (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_ptm))) {
            vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__vld_q 
                = ((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_ptm)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__src_edge) 
             | (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_ptm))) {
            vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__vld_q 
                = ((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_ptm)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__src_edge) 
             | (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_ptm))) {
            vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__vld_q 
                = ((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_ptm)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__src_edge) 
             | (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_ptm))) {
            vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__vld_q 
                = ((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_ptm)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__src_edge) 
             | (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_ptm))) {
            vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__vld_q 
                = ((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_ptm)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__src_edge) 
             | (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_ptm))) {
            vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__vld_q 
                = ((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_ptm)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__src_edge) 
             | (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_ptm))) {
            vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__vld_q 
                = ((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_ptm)));
        }
        if (((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__src_edge) 
             | (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_ptm))) {
            vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__vld_q 
                = ((IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__clr_ptm)));
        }
        if (vlSelfRef.tb__DOT__u_but__DOT__wen_ptm) {
            vlSelfRef.tb__DOT__u_but__DOT__ptm_q = 
                (0xfffffU & vlSelfRef.tb__DOT__bus_wdata);
        }
    } else {
        vlSelfRef.tb__DOT__u_rng__DOT__lfsr_q = 0x55555555U;
        vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__vld_q = 0U;
        vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__vld_q = 0U;
        vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__vld_q = 0U;
        vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__vld_q = 0U;
        vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__vld_q = 0U;
        vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__vld_q = 0U;
        vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__vld_q = 0U;
        vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__vld_q = 0U;
        vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__vld_q = 0U;
        vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__vld_q = 0U;
        vlSelfRef.tb__DOT__u_but__DOT__ptm_q = 0xfffffU;
    }
    vlSelfRef.tb__DOT__u_rng__DOT__lfsr_xor = ((0x40U 
                                                & (vlSelfRef.tb__DOT__u_rng__DOT__lfsr_q 
                                                   >> 0x19U)) 
                                               | ((0x20U 
                                                   & (vlSelfRef.tb__DOT__u_rng__DOT__lfsr_q 
                                                      >> 0x1aU)) 
                                                  | (2U 
                                                     & (vlSelfRef.tb__DOT__u_rng__DOT__lfsr_q 
                                                        >> 0x1eU))));
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__10(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__10\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__val_q 
        = (1U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                 >> 9U));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__val_q 
        = (1U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                 >> 8U));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__val_q 
        = (1U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                 >> 7U));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__val_q 
        = (1U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                 >> 6U));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__val_q 
        = (1U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                 >> 5U));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__val_q 
        = (1U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                 >> 4U));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__val_q 
        = (1U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                 >> 3U));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__val_q 
        = (1U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                 >> 2U));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__val_q 
        = (1U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                 >> 1U));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__val_q 
        = (1U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push));
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__11(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__11\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__u_but__DOT__ext_push = (0x3ffU 
                                               & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_vld_q)
                                                   ? vlSelfRef.tb__DOT__u_but__DOT__ext_val_q
                                                   : 
                                                  (((IData)(vlSelfRef.button_top) 
                                                    << 9U) 
                                                   | (((IData)(vlSelfRef.button_bottom) 
                                                       << 8U) 
                                                      | (((IData)(vlSelfRef.button_left) 
                                                          << 7U) 
                                                         | (((IData)(vlSelfRef.button_right) 
                                                             << 6U) 
                                                            | (((IData)(vlSelfRef.button_center) 
                                                                << 5U) 
                                                               | (((IData)(vlSelfRef.joystick_up) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSelfRef.joystick_down) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSelfRef.joystick_left) 
                                                                         << 2U) 
                                                                        | (((IData)(vlSelfRef.joystick_right) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelfRef.joystick_pressed))))))))))));
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__3(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__vld_q)) 
           & (((2U == (3U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
               & ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push)) 
                  & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__val_q))) 
              | ((3U == (3U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                 & ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__val_q)) 
                    & (IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__vld_q)) 
           & ((IData)((((8U == (0xcU & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                              >> 1U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__val_q))) 
              | (IData)((((0xcU == (0xcU & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                            >> 1U)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__vld_q)) 
           & ((IData)((((0x20U == (0x30U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                              >> 2U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__val_q))) 
              | (IData)((((0x30U == (0x30U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                            >> 2U)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__vld_q)) 
           & ((IData)((((0x80U == (0xc0U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                              >> 3U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__val_q))) 
              | (IData)((((0xc0U == (0xc0U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                            >> 3U)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__vld_q)) 
           & ((IData)((((0x200U == (0x300U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                              >> 4U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__val_q))) 
              | (IData)((((0x300U == (0x300U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                            >> 4U)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__vld_q)) 
           & ((IData)((((0x800U == (0xc00U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                              >> 5U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__val_q))) 
              | (IData)((((0xc00U == (0xc00U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                            >> 5U)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__vld_q)) 
           & ((IData)((((0x2000U == (0x3000U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                              >> 6U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__val_q))) 
              | (IData)((((0x3000U == (0x3000U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                            >> 6U)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__vld_q)) 
           & ((IData)((((0x8000U == (0xc000U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                              >> 7U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__val_q))) 
              | (IData)((((0xc000U == (0xc000U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                            >> 7U)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__vld_q)) 
           & ((IData)((((0x20000U == (0x30000U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                              >> 8U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__val_q))) 
              | (IData)((((0x30000U == (0x30000U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                            >> 8U)))));
    vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__src_edge 
        = ((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__vld_q)) 
           & ((IData)((((0x80000U == (0xc0000U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                              >> 9U))) & (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__val_q))) 
              | (IData)((((0xc0000U == (0xc0000U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__val_q))) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                            >> 9U)))));
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__4(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__u_but__DOT____Vcellout__u_ptm__src 
        = ((((IData)(((~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                          >> 9U)) & (0U == (0xc0000U 
                                            & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)))) 
             | ((IData)(((0x40000U == (0xc0000U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                            >> 9U))) | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__vld_q))) 
            << 9U) | ((((IData)(((~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                     >> 8U)) & (0U 
                                                == 
                                                (0x30000U 
                                                 & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)))) 
                        | ((IData)(((0x10000U == (0x30000U 
                                                  & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                                    & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                       >> 8U))) | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__vld_q))) 
                       << 8U) | ((((IData)(((~ ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                >> 7U)) 
                                            & (0U == 
                                               (0xc000U 
                                                & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)))) 
                                   | ((IData)(((0x4000U 
                                                == 
                                                (0xc000U 
                                                 & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                                               & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                  >> 7U))) 
                                      | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__vld_q))) 
                                  << 7U) | ((((IData)(
                                                      ((~ 
                                                        ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                         >> 6U)) 
                                                       & (0U 
                                                          == 
                                                          (0x3000U 
                                                           & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)))) 
                                              | ((IData)(
                                                         ((0x1000U 
                                                           == 
                                                           (0x3000U 
                                                            & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                                                          & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                             >> 6U))) 
                                                 | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__vld_q))) 
                                             << 6U) 
                                            | ((((IData)(
                                                         ((~ 
                                                           ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                            >> 5U)) 
                                                          & (0U 
                                                             == 
                                                             (0xc00U 
                                                              & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)))) 
                                                 | ((IData)(
                                                            ((0x400U 
                                                              == 
                                                              (0xc00U 
                                                               & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                                                             & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                                >> 5U))) 
                                                    | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__vld_q))) 
                                                << 5U) 
                                               | ((((IData)(
                                                            ((~ 
                                                              ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                               >> 4U)) 
                                                             & (0U 
                                                                == 
                                                                (0x300U 
                                                                 & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)))) 
                                                    | ((IData)(
                                                               ((0x100U 
                                                                 == 
                                                                 (0x300U 
                                                                  & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                                                                & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                                   >> 4U))) 
                                                       | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__vld_q))) 
                                                   << 4U) 
                                                  | ((((IData)(
                                                               ((~ 
                                                                 ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                                  >> 3U)) 
                                                                & (0U 
                                                                   == 
                                                                   (0xc0U 
                                                                    & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)))) 
                                                       | ((IData)(
                                                                  ((0x40U 
                                                                    == 
                                                                    (0xc0U 
                                                                     & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                                                                   & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                                      >> 3U))) 
                                                          | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__vld_q))) 
                                                      << 3U) 
                                                     | ((((IData)(
                                                                  ((~ 
                                                                    ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                                     >> 2U)) 
                                                                   & (0U 
                                                                      == 
                                                                      (0x30U 
                                                                       & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)))) 
                                                          | ((IData)(
                                                                     ((0x10U 
                                                                       == 
                                                                       (0x30U 
                                                                        & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                                                                      & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                                         >> 2U))) 
                                                             | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__vld_q))) 
                                                         << 2U) 
                                                        | ((((IData)(
                                                                     ((~ 
                                                                       ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                                        >> 1U)) 
                                                                      & (0U 
                                                                         == 
                                                                         (0xcU 
                                                                          & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)))) 
                                                             | ((IData)(
                                                                        ((4U 
                                                                          == 
                                                                          (0xcU 
                                                                           & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                                                                         & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push) 
                                                                            >> 1U))) 
                                                                | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__vld_q))) 
                                                            << 1U) 
                                                           | (((~ (IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push)) 
                                                               & (0U 
                                                                  == 
                                                                  (3U 
                                                                   & vlSelfRef.tb__DOT__u_but__DOT__ptm_q))) 
                                                              | (((1U 
                                                                   == 
                                                                   (3U 
                                                                    & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)) 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push)) 
                                                                 | (IData)(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__vld_q))))))))))));
}
