// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_gpr_TOP____Vfork_1__2(Vtb___024root* vlSelf, IData/*31:0*/ __Vintraval_he48e540a__0, CData/*4:0*/ __Vintraidx_h804109ab__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_gpr_TOP____Vfork_1__2\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hd48f37a9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@([event] __VnbaEvent)", 
                                                       "/home/eryilmaz/cs-200/infrastructure/debugger/../processor/cpu.sv", 
                                                       758);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb__DOT__u_cpu__DOT__gpr_q[__Vintraidx_h804109ab__0] 
        = __Vintraval_he48e540a__0;
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_9__1(Vtb___024root* vlSelf, CData/*5:0*/ __Vintraval_h8b1804a3__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_9__1\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hd48f37a9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@([event] __VnbaEvent)", 
                                                       "/home/eryilmaz/cs-200/infrastructure/debugger/../processor/cpu.sv", 
                                                       778);
    vlSelf->tb__DOT__u_cpu__DOT__csr_mcause_c_q = __Vintraval_h8b1804a3__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_8__1(Vtb___024root* vlSelf, CData/*0:0*/ __Vintraval_ha2266db0__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_8__1\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hd48f37a9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@([event] __VnbaEvent)", 
                                                       "/home/eryilmaz/cs-200/infrastructure/debugger/../processor/cpu.sv", 
                                                       777);
    vlSelf->tb__DOT__u_cpu__DOT__csr_mcause_i_q = __Vintraval_ha2266db0__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_7__1(Vtb___024root* vlSelf, IData/*31:0*/ __Vintraval_h7d1ca584__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_7__1\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hd48f37a9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@([event] __VnbaEvent)", 
                                                       "/home/eryilmaz/cs-200/infrastructure/debugger/../processor/cpu.sv", 
                                                       775);
    vlSelf->tb__DOT__u_cpu__DOT__csr_mepc_q = __Vintraval_h7d1ca584__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_6__1(Vtb___024root* vlSelf, IData/*31:0*/ __Vintraval_h13126a6f__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_6__1\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hd48f37a9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@([event] __VnbaEvent)", 
                                                       "/home/eryilmaz/cs-200/infrastructure/debugger/../processor/cpu.sv", 
                                                       773);
    vlSelf->tb__DOT__u_cpu__DOT__csr_mtvec_q = __Vintraval_h13126a6f__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_5__1(Vtb___024root* vlSelf, CData/*0:0*/ __Vintraval_hdaf54fc7__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_5__1\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hd48f37a9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@([event] __VnbaEvent)", 
                                                       "/home/eryilmaz/cs-200/infrastructure/debugger/../processor/cpu.sv", 
                                                       770);
    vlSelf->tb__DOT__u_cpu__DOT__csr_mtie_q = __Vintraval_hdaf54fc7__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_4__1(Vtb___024root* vlSelf, CData/*0:0*/ __Vintraval_h9eec91ef__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_4__1\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hd48f37a9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@([event] __VnbaEvent)", 
                                                       "/home/eryilmaz/cs-200/infrastructure/debugger/../processor/cpu.sv", 
                                                       769);
    vlSelf->tb__DOT__u_cpu__DOT__csr_meie_q = __Vintraval_h9eec91ef__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_3__1(Vtb___024root* vlSelf, CData/*0:0*/ __Vintraval_h13901da6__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_3__1\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hd48f37a9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@([event] __VnbaEvent)", 
                                                       "/home/eryilmaz/cs-200/infrastructure/debugger/../processor/cpu.sv", 
                                                       766);
    vlSelf->tb__DOT__u_cpu__DOT__csr_mpie_q = __Vintraval_h13901da6__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_2__1(Vtb___024root* vlSelf, CData/*0:0*/ __Vintraval_h5b6de35f__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_2__1\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hd48f37a9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@([event] __VnbaEvent)", 
                                                       "/home/eryilmaz/cs-200/infrastructure/debugger/../processor/cpu.sv", 
                                                       765);
    vlSelf->tb__DOT__u_cpu__DOT__csr_mie_q = __Vintraval_h5b6de35f__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_pc_TOP____Vfork_11__1(Vtb___024root* vlSelf, CData/*2:0*/ __Vintraval_hc7f976d7__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_pc_TOP____Vfork_11__1\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hd48f37a9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@([event] __VnbaEvent)", 
                                                       "/home/eryilmaz/cs-200/infrastructure/debugger/../processor/cpu.sv", 
                                                       786);
    vlSelf->tb__DOT__u_cpu__DOT__st_q = __Vintraval_hc7f976d7__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_pc_TOP____Vfork_10__1(Vtb___024root* vlSelf, IData/*31:0*/ __Vintraval_hd75fb222__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_pc_TOP____Vfork_10__1\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hd48f37a9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@([event] __VnbaEvent)", 
                                                       "/home/eryilmaz/cs-200/infrastructure/debugger/../processor/cpu.sv", 
                                                       785);
    vlSelf->tb__DOT__u_cpu__DOT__pc_q = __Vintraval_hd75fb222__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_wr_TOP____Vfork_14__1(Vtb___024root* vlSelf, VlWide<4>/*119:0*/ __Vintraval_had264813__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_wr_TOP____Vfork_14__1\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hd48f37a9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@([event] __VnbaEvent)", 
                                                       "/home/eryilmaz/cs-200/infrastructure/debugger/../processor/led.sv", 
                                                       116);
    vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = __Vintraval_had264813__0[0U];
    vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = __Vintraval_had264813__0[1U];
    vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = __Vintraval_had264813__0[2U];
    vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = __Vintraval_had264813__0[3U];
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_wr_TOP____Vfork_13__1(Vtb___024root* vlSelf, VlWide<4>/*119:0*/ __Vintraval_h850b8780__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_wr_TOP____Vfork_13__1\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hd48f37a9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@([event] __VnbaEvent)", 
                                                       "/home/eryilmaz/cs-200/infrastructure/debugger/../processor/led.sv", 
                                                       114);
    vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = __Vintraval_h850b8780__0[0U];
    vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = __Vintraval_h850b8780__0[1U];
    vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = __Vintraval_h850b8780__0[2U];
    vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = __Vintraval_h850b8780__0[3U];
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_wr_TOP____Vfork_12__1(Vtb___024root* vlSelf, VlWide<4>/*119:0*/ __Vintraval_hac066018__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_wr_TOP____Vfork_12__1\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hd48f37a9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@([event] __VnbaEvent)", 
                                                       "/home/eryilmaz/cs-200/infrastructure/debugger/../processor/led.sv", 
                                                       112);
    vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = __Vintraval_hac066018__0[0U];
    vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = __Vintraval_hac066018__0[1U];
    vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = __Vintraval_hac066018__0[2U];
    vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = __Vintraval_hac066018__0[3U];
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_lcd__DOT__lcd_wr_TOP____Vfork_15__2(Vtb___024root* vlSelf, CData/*7:0*/ __Vintraval_h9d398220__0, CData/*1:0*/ __Vintraidx_h1089d523__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_lcd__DOT__lcd_wr_TOP____Vfork_15__2\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hd48f37a9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@([event] __VnbaEvent)", 
                                                       "/home/eryilmaz/cs-200/infrastructure/debugger/../processor/lcd.sv", 
                                                       56);
    vlSelf->tb__DOT__u_lcd__DOT__disp_q[__Vintraidx_h1089d523__0] 
        = __Vintraval_h9d398220__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_but__DOT__but_wr_TOP____Vfork_17__1(Vtb___024root* vlSelf, IData/*17:0*/ __Vintraval_ha6ff6a63__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_but__DOT__but_wr_TOP____Vfork_17__1\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hd48f37a9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@([event] __VnbaEvent)", 
                                                       "/home/eryilmaz/cs-200/infrastructure/debugger/../processor/but.sv", 
                                                       159);
    vlSelf->tb__DOT__u_but__DOT__ext_val_q = __Vintraval_ha6ff6a63__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_but__DOT__but_wr_TOP____Vfork_16__1(Vtb___024root* vlSelf, CData/*0:0*/ __Vintraval_h47565c34__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_but__DOT__but_wr_TOP____Vfork_16__1\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hd48f37a9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@([event] __VnbaEvent)", 
                                                       "/home/eryilmaz/cs-200/infrastructure/debugger/../processor/but.sv", 
                                                       158);
    vlSelf->tb__DOT__u_but__DOT__ext_vld_q = __Vintraval_h47565c34__0;
}

VL_INLINE_OPT void Vtb___024root___ico_sequent__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->led_r_o[0U] = vlSelf->tb__DOT__u_led__DOT__led_r_q[0U];
    vlSelf->led_r_o[1U] = vlSelf->tb__DOT__u_led__DOT__led_r_q[1U];
    vlSelf->led_r_o[2U] = vlSelf->tb__DOT__u_led__DOT__led_r_q[2U];
    vlSelf->led_r_o[3U] = vlSelf->tb__DOT__u_led__DOT__led_r_q[3U];
    vlSelf->led_g_o[0U] = vlSelf->tb__DOT__u_led__DOT__led_g_q[0U];
    vlSelf->led_g_o[1U] = vlSelf->tb__DOT__u_led__DOT__led_g_q[1U];
    vlSelf->led_g_o[2U] = vlSelf->tb__DOT__u_led__DOT__led_g_q[2U];
    vlSelf->led_g_o[3U] = vlSelf->tb__DOT__u_led__DOT__led_g_q[3U];
    vlSelf->led_b_o[0U] = vlSelf->tb__DOT__u_led__DOT__led_b_q[0U];
    vlSelf->led_b_o[1U] = vlSelf->tb__DOT__u_led__DOT__led_b_q[1U];
    vlSelf->led_b_o[2U] = vlSelf->tb__DOT__u_led__DOT__led_b_q[2U];
    vlSelf->led_b_o[3U] = vlSelf->tb__DOT__u_led__DOT__led_b_q[3U];
    vlSelf->sevensegment_1_o = vlSelf->tb__DOT__u_lcd__DOT__disp_q
        [0U];
    vlSelf->sevensegment_2_o = vlSelf->tb__DOT__u_lcd__DOT__disp_q
        [1U];
    vlSelf->sevensegment_3_o = vlSelf->tb__DOT__u_lcd__DOT__disp_q
        [2U];
    vlSelf->sevensegment_4_o = vlSelf->tb__DOT__u_lcd__DOT__disp_q
        [3U];
    vlSelf->tb__DOT__u_cpu__DOT__csr_mstatus = (0x1800U 
                                                | (((IData)(vlSelf->tb__DOT__u_cpu__DOT__csr_mpie_q) 
                                                    << 7U) 
                                                   | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__csr_mie_q) 
                                                      << 3U)));
    vlSelf->tb__DOT__u_cpu__DOT__csr_mie = (((IData)(vlSelf->tb__DOT__u_cpu__DOT__csr_meie_q) 
                                             << 0xbU) 
                                            | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__csr_mtie_q) 
                                               << 7U));
    vlSelf->tb__DOT__u_cpu__DOT__csr_mcause = (((IData)(vlSelf->tb__DOT__u_cpu__DOT__csr_mcause_i_q) 
                                                << 0x1fU) 
                                               | (IData)(vlSelf->tb__DOT__u_cpu__DOT__csr_mcause_c_q));
}

VL_INLINE_OPT void Vtb___024root___ico_comb__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ico_comb__TOP__0\n"); );
    // Body
    if (vlSelf->tb__DOT__u_but__DOT__ext_vld_q) {
        vlSelf->tb__DOT__u_but__DOT__ext_switch = (0xffU 
                                                   & (vlSelf->tb__DOT__u_but__DOT__ext_val_q 
                                                      >> 0xaU));
        vlSelf->tb__DOT__u_but__DOT__ext_push = (0x3ffU 
                                                 & vlSelf->tb__DOT__u_but__DOT__ext_val_q);
    } else {
        vlSelf->tb__DOT__u_but__DOT__ext_switch = (0xffU 
                                                   & (IData)(vlSelf->dip_switches_i));
        vlSelf->tb__DOT__u_but__DOT__ext_push = (0x3ffU 
                                                 & (((IData)(vlSelf->button_top_i) 
                                                     << 9U) 
                                                    | (((IData)(vlSelf->button_bottom_i) 
                                                        << 8U) 
                                                       | (((IData)(vlSelf->button_left_i) 
                                                           << 7U) 
                                                          | (((IData)(vlSelf->button_right_i) 
                                                              << 6U) 
                                                             | (((IData)(vlSelf->button_center_i) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->joystick_up_i) 
                                                                    << 4U) 
                                                                   | (((IData)(vlSelf->joystick_down_i) 
                                                                       << 3U) 
                                                                      | (((IData)(vlSelf->joystick_left_i) 
                                                                          << 2U) 
                                                                         | (((IData)(vlSelf->joystick_right_i) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->joystick_pressed_i)))))))))));
    }
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__vld_q)) 
           & (((2U == (3U & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
               & ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch)) 
                  & (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__val_q))) 
              | ((1U == (3U & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                 & ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__val_q)) 
                    & (IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch)))));
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__vld_q)) 
           & ((IData)((((8U == (0xcU & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                              >> 1U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__val_q))) 
              | (IData)((((4U == (0xcU & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                            >> 1U)))));
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__vld_q)) 
           & ((IData)((((0x20U == (0x30U & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                              >> 2U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__val_q))) 
              | (IData)((((0x10U == (0x30U & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                            >> 2U)))));
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__vld_q)) 
           & ((IData)((((0x80U == (0xc0U & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                              >> 3U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__val_q))) 
              | (IData)((((0x40U == (0xc0U & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                            >> 3U)))));
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__vld_q)) 
           & ((IData)((((0x200U == (0x300U & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                              >> 4U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__val_q))) 
              | (IData)((((0x100U == (0x300U & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                            >> 4U)))));
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__vld_q)) 
           & ((IData)((((0x800U == (0xc00U & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                              >> 5U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__val_q))) 
              | (IData)((((0x400U == (0xc00U & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                            >> 5U)))));
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__vld_q)) 
           & ((IData)((((0x2000U == (0x3000U & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                              >> 6U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__val_q))) 
              | (IData)((((0x1000U == (0x3000U & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                            >> 6U)))));
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__vld_q)) 
           & ((IData)((((0x8000U == (0xc000U & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                              >> 7U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__val_q))) 
              | (IData)((((0x4000U == (0xc000U & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                            >> 7U)))));
    vlSelf->tb__DOT__u_but__DOT____Vcellout__u_stm__src 
        = ((((IData)(((~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                          >> 7U)) & (0U == (0xc000U 
                                            & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))))) 
             | ((IData)(((0xc000U == (0xc000U & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                            >> 7U))) | (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__vld_q))) 
            << 7U) | ((((IData)(((~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                     >> 6U)) & (0U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))))) 
                        | ((IData)(((0x3000U == (0x3000U 
                                                 & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                                    & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                       >> 6U))) | (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__vld_q))) 
                       << 6U) | ((((IData)(((~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                                >> 5U)) 
                                            & (0U == 
                                               (0xc00U 
                                                & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))))) 
                                   | ((IData)(((0xc00U 
                                                == 
                                                (0xc00U 
                                                 & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                                               & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                                  >> 5U))) 
                                      | (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__vld_q))) 
                                  << 5U) | ((((IData)(
                                                      ((~ 
                                                        ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                                         >> 4U)) 
                                                       & (0U 
                                                          == 
                                                          (0x300U 
                                                           & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))))) 
                                              | ((IData)(
                                                         ((0x300U 
                                                           == 
                                                           (0x300U 
                                                            & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                                                          & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                                             >> 4U))) 
                                                 | (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__vld_q))) 
                                             << 4U) 
                                            | ((((IData)(
                                                         ((~ 
                                                           ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                                            >> 3U)) 
                                                          & (0U 
                                                             == 
                                                             (0xc0U 
                                                              & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))))) 
                                                 | ((IData)(
                                                            ((0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                                                             & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                                                >> 3U))) 
                                                    | (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__vld_q))) 
                                                << 3U) 
                                               | ((((IData)(
                                                            ((~ 
                                                              ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                                               >> 2U)) 
                                                             & (0U 
                                                                == 
                                                                (0x30U 
                                                                 & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))))) 
                                                    | ((IData)(
                                                               ((0x30U 
                                                                 == 
                                                                 (0x30U 
                                                                  & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                                                                & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                                                   >> 2U))) 
                                                       | (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__vld_q))) 
                                                   << 2U) 
                                                  | ((((IData)(
                                                               ((~ 
                                                                 ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                                                  >> 1U)) 
                                                                & (0U 
                                                                   == 
                                                                   (0xcU 
                                                                    & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))))) 
                                                       | ((IData)(
                                                                  ((0xcU 
                                                                    == 
                                                                    (0xcU 
                                                                     & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                                                                   & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                                                      >> 1U))) 
                                                          | (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__vld_q))) 
                                                      << 1U) 
                                                     | (((~ (IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch)) 
                                                         & (0U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q)))) 
                                                        | (((3U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                                                            & (IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch)) 
                                                           | (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__vld_q))))))))));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__vld_q)) 
           & (((2U == (3U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
               & ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__ext_push)) 
                  & (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__val_q))) 
              | ((1U == (3U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                 & ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__val_q)) 
                    & (IData)(vlSelf->tb__DOT__u_but__DOT__ext_push)))));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__vld_q)) 
           & ((IData)((((8U == (0xcU & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                              >> 1U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__val_q))) 
              | (IData)((((4U == (0xcU & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                            >> 1U)))));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__vld_q)) 
           & ((IData)((((0x20U == (0x30U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                              >> 2U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__val_q))) 
              | (IData)((((0x10U == (0x30U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                            >> 2U)))));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__vld_q)) 
           & ((IData)((((0x80U == (0xc0U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                              >> 3U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__val_q))) 
              | (IData)((((0x40U == (0xc0U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                            >> 3U)))));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__vld_q)) 
           & ((IData)((((0x200U == (0x300U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                              >> 4U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__val_q))) 
              | (IData)((((0x100U == (0x300U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                            >> 4U)))));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__vld_q)) 
           & ((IData)((((0x800U == (0xc00U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                              >> 5U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__val_q))) 
              | (IData)((((0x400U == (0xc00U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                            >> 5U)))));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__vld_q)) 
           & ((IData)((((0x2000U == (0x3000U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                              >> 6U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__val_q))) 
              | (IData)((((0x1000U == (0x3000U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                            >> 6U)))));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__vld_q)) 
           & ((IData)((((0x8000U == (0xc000U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                              >> 7U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__val_q))) 
              | (IData)((((0x4000U == (0xc000U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                            >> 7U)))));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__vld_q)) 
           & ((IData)((((0x20000U == (0x30000U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                              >> 8U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__val_q))) 
              | (IData)((((0x10000U == (0x30000U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                            >> 8U)))));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__vld_q)) 
           & ((IData)((((0x80000U == (0xc0000U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                              >> 9U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__val_q))) 
              | (IData)((((0x40000U == (0xc0000U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                            >> 9U)))));
    vlSelf->tb__DOT__u_but__DOT____Vcellout__u_ptm__src 
        = ((((IData)(((~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                          >> 9U)) & (0U == (0xc0000U 
                                            & vlSelf->tb__DOT__u_but__DOT__ptm_q)))) 
             | ((IData)(((0xc0000U == (0xc0000U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                            >> 9U))) | (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__vld_q))) 
            << 9U) | ((((IData)(((~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                     >> 8U)) & (0U 
                                                == 
                                                (0x30000U 
                                                 & vlSelf->tb__DOT__u_but__DOT__ptm_q)))) 
                        | ((IData)(((0x30000U == (0x30000U 
                                                  & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                                    & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                       >> 8U))) | (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__vld_q))) 
                       << 8U) | ((((IData)(((~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                >> 7U)) 
                                            & (0U == 
                                               (0xc000U 
                                                & vlSelf->tb__DOT__u_but__DOT__ptm_q)))) 
                                   | ((IData)(((0xc000U 
                                                == 
                                                (0xc000U 
                                                 & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                                               & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                  >> 7U))) 
                                      | (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__vld_q))) 
                                  << 7U) | ((((IData)(
                                                      ((~ 
                                                        ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                         >> 6U)) 
                                                       & (0U 
                                                          == 
                                                          (0x3000U 
                                                           & vlSelf->tb__DOT__u_but__DOT__ptm_q)))) 
                                              | ((IData)(
                                                         ((0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                                                          & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                             >> 6U))) 
                                                 | (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__vld_q))) 
                                             << 6U) 
                                            | ((((IData)(
                                                         ((~ 
                                                           ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                            >> 5U)) 
                                                          & (0U 
                                                             == 
                                                             (0xc00U 
                                                              & vlSelf->tb__DOT__u_but__DOT__ptm_q)))) 
                                                 | ((IData)(
                                                            ((0xc00U 
                                                              == 
                                                              (0xc00U 
                                                               & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                                                             & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                                >> 5U))) 
                                                    | (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__vld_q))) 
                                                << 5U) 
                                               | ((((IData)(
                                                            ((~ 
                                                              ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                               >> 4U)) 
                                                             & (0U 
                                                                == 
                                                                (0x300U 
                                                                 & vlSelf->tb__DOT__u_but__DOT__ptm_q)))) 
                                                    | ((IData)(
                                                               ((0x300U 
                                                                 == 
                                                                 (0x300U 
                                                                  & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                                                                & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                                   >> 4U))) 
                                                       | (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__vld_q))) 
                                                   << 4U) 
                                                  | ((((IData)(
                                                               ((~ 
                                                                 ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                                  >> 3U)) 
                                                                & (0U 
                                                                   == 
                                                                   (0xc0U 
                                                                    & vlSelf->tb__DOT__u_but__DOT__ptm_q)))) 
                                                       | ((IData)(
                                                                  ((0xc0U 
                                                                    == 
                                                                    (0xc0U 
                                                                     & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                                                                   & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                                      >> 3U))) 
                                                          | (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__vld_q))) 
                                                      << 3U) 
                                                     | ((((IData)(
                                                                  ((~ 
                                                                    ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                                     >> 2U)) 
                                                                   & (0U 
                                                                      == 
                                                                      (0x30U 
                                                                       & vlSelf->tb__DOT__u_but__DOT__ptm_q)))) 
                                                          | ((IData)(
                                                                     ((0x30U 
                                                                       == 
                                                                       (0x30U 
                                                                        & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                                                                      & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                                         >> 2U))) 
                                                             | (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__vld_q))) 
                                                         << 2U) 
                                                        | ((((IData)(
                                                                     ((~ 
                                                                       ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                                        >> 1U)) 
                                                                      & (0U 
                                                                         == 
                                                                         (0xcU 
                                                                          & vlSelf->tb__DOT__u_but__DOT__ptm_q)))) 
                                                             | ((IData)(
                                                                        ((0xcU 
                                                                          == 
                                                                          (0xcU 
                                                                           & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                                                                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                                            >> 1U))) 
                                                                | (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__vld_q))) 
                                                            << 1U) 
                                                           | (((~ (IData)(vlSelf->tb__DOT__u_but__DOT__ext_push)) 
                                                               & (0U 
                                                                  == 
                                                                  (3U 
                                                                   & vlSelf->tb__DOT__u_but__DOT__ptm_q))) 
                                                              | (((3U 
                                                                   == 
                                                                   (3U 
                                                                    & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                                                                  & (IData)(vlSelf->tb__DOT__u_but__DOT__ext_push)) 
                                                                 | (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__vld_q))))))))))));
    vlSelf->tb__DOT__u_but__DOT__src = (((IData)(vlSelf->tb__DOT__u_but__DOT____Vcellout__u_stm__src) 
                                         << 0xaU) | (IData)(vlSelf->tb__DOT__u_but__DOT____Vcellout__u_ptm__src));
    vlSelf->tb__DOT__bus_rdata = (((- (IData)((IData)(vlSelf->tb__DOT__u_bus__DOT__mem_en_q))) 
                                   & vlSelf->tb__DOT__u_mem__DOT__rdata_q) 
                                  | (((- (IData)((IData)(vlSelf->tb__DOT__u_bus__DOT__rng_en_q))) 
                                      & vlSelf->tb__DOT__u_rng__DOT__lfsr_q) 
                                     | (((- (IData)((IData)(vlSelf->tb__DOT__u_bus__DOT__lcd_en_q))) 
                                         & ((vlSelf->tb__DOT__u_lcd__DOT__disp_q
                                             [3U] << 0x18U) 
                                            | ((vlSelf->tb__DOT__u_lcd__DOT__disp_q
                                                [2U] 
                                                << 0x10U) 
                                               | ((vlSelf->tb__DOT__u_lcd__DOT__disp_q
                                                   [1U] 
                                                   << 8U) 
                                                  | vlSelf->tb__DOT__u_lcd__DOT__disp_q
                                                  [0U])))) 
                                        | ((- (IData)((IData)(vlSelf->tb__DOT__u_bus__DOT__but_en_q))) 
                                           & (((- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->tb__DOT__u_but__DOT__sel_q)))) 
                                               & (((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelf->tb__DOT__u_but__DOT__ext_push))) 
                                              | (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->tb__DOT__u_but__DOT__sel_q) 
                                                                 >> 1U)))) 
                                                  & (((IData)(vlSelf->tb__DOT__u_but__DOT____Vcellout__u_stm__src) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->tb__DOT__u_but__DOT____Vcellout__u_ptm__src))) 
                                                 | (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->tb__DOT__u_but__DOT__sel_q) 
                                                                    >> 2U)))) 
                                                     & vlSelf->tb__DOT__u_but__DOT__ptm_q) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->tb__DOT__u_but__DOT__sel_q) 
                                                                      >> 3U)))) 
                                                       & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q)))))))));
    vlSelf->tb__DOT__u_cpu__DOT__if_irq_e = ((IData)(vlSelf->tb__DOT__u_cpu__DOT__csr_mie_q) 
                                             & ((IData)(vlSelf->tb__DOT__u_cpu__DOT__csr_meie_q) 
                                                & (0U 
                                                   != vlSelf->tb__DOT__u_but__DOT__src)));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins = ((2U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q))
                                            ? vlSelf->tb__DOT__bus_rdata
                                            : vlSelf->tb__DOT__u_cpu__DOT__bus_data_q);
    vlSelf->tb__DOT__u_cpu__DOT__if_expt = ((IData)(vlSelf->tb__DOT__u_cpu__DOT__if_irq_e) 
                                            | (0U != 
                                               (3U 
                                                & vlSelf->tb__DOT__u_cpu__DOT__pc_q)));
    vlSelf->tb__DOT__u_cpu__DOT__ex_csr_rs1 = ((0x4000U 
                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins)
                                                ? (0x1fU 
                                                   & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                      >> 0xfU))
                                                : vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_q);
    vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_hc685467b__0 
        = (IData)(((0x1000U == (0x7000U & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                   & (0U != (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                             >> 0x19U))));
    vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h702d1d83__0 
        = (IData)((0x1000U == (0xfe007000U & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h87ebf8fd__0 
        = (IData)((0x5013U == (0x707fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h555416eb__0 
        = (IData)((0x5033U == (0x707fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT__ex_csr_rdata = (((- (IData)(
                                                             (0x300U 
                                                              == 
                                                              (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                               >> 0x14U)))) 
                                                  & vlSelf->tb__DOT__u_cpu__DOT__csr_mstatus) 
                                                 | (((- (IData)(
                                                                (0x304U 
                                                                 == 
                                                                 (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                  >> 0x14U)))) 
                                                     & vlSelf->tb__DOT__u_cpu__DOT__csr_mie) 
                                                    | (((- (IData)(
                                                                   (0x305U 
                                                                    == 
                                                                    (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                     >> 0x14U)))) 
                                                        & vlSelf->tb__DOT__u_cpu__DOT__csr_mtvec_q) 
                                                       | (((- (IData)(
                                                                      (0x341U 
                                                                       == 
                                                                       (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                        >> 0x14U)))) 
                                                           & vlSelf->tb__DOT__u_cpu__DOT__csr_mepc_q) 
                                                          | (((- (IData)(
                                                                         (0x342U 
                                                                          == 
                                                                          (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                           >> 0x14U)))) 
                                                              & vlSelf->tb__DOT__u_cpu__DOT__csr_mcause) 
                                                             | ((- (IData)(
                                                                           (0x344U 
                                                                            == 
                                                                            (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                             >> 0x14U)))) 
                                                                & ((IData)(
                                                                           (0U 
                                                                            != vlSelf->tb__DOT__u_but__DOT__src)) 
                                                                   << 0xbU)))))));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrw = (IData)(
                                                           (0x1073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrs = (IData)(
                                                           (0x2073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrc = (IData)(
                                                           (0x3073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrwi = (IData)(
                                                            (0x5073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrsi = (IData)(
                                                            (0x6073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrci = (IData)(
                                                            (0x7073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_funct7_eq_v 
        = ((0U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                   >> 0x19U)) | (0x20U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0x19U)));
    vlSelf->tb__DOT__bus_we = ((3U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q)) 
                               & (0x23U == (0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_inv_bx = 
        ((2U == (7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                       >> 0xcU))) | (3U == (7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                  >> 0xcU))));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_lh = (IData)(
                                                        (0x1003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_hff8699ac__0 
        = ((6U == (7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                         >> 0xcU))) | (7U == (7U & 
                                              (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                               >> 0xcU))));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_lw = (IData)(
                                                        (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_ev = (IData)(
                                                        (0x73U 
                                                         == 
                                                         (0xfffffU 
                                                          & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT__ex_ins_is_ls = ((3U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                 | (0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_srs = ((vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                >> 0x1eU) 
                                               & (vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_q 
                                                  >> 0x1fU));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_slti = (IData)(
                                                          (0x2013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sltiu = (IData)(
                                                           (0x3013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_slt = (IData)(
                                                         (0x2033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sltu = (IData)(
                                                          (0x3033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h0a4778a7__0 
        = (IData)((0x33U == (0x707fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_imm_i = (((- (IData)(
                                                             (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                    >> 0x14U));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_jalr = (IData)(
                                                          (0x67U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sb = (IData)(
                                                        (0x23U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sh = (IData)(
                                                        (0x1023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sw = (IData)(
                                                        (0x2023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT__wb_csr_wdata = (((- (IData)(
                                                             ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrw) 
                                                              | (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrwi)))) 
                                                  & vlSelf->tb__DOT__u_cpu__DOT__ex_csr_rs1) 
                                                 | (((- (IData)(
                                                                ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrs) 
                                                                 | (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrsi)))) 
                                                     & (vlSelf->tb__DOT__u_cpu__DOT__ex_csr_rs1 
                                                        | vlSelf->tb__DOT__u_cpu__DOT__ex_csr_rdata)) 
                                                    | ((- (IData)(
                                                                  ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrc) 
                                                                   | (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrci)))) 
                                                       & ((~ vlSelf->tb__DOT__u_cpu__DOT__ex_csr_rs1) 
                                                          & vlSelf->tb__DOT__u_cpu__DOT__ex_csr_rdata))));
    vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we = ((4U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q)) 
                                              & ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrw) 
                                                 | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrs) 
                                                    | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrc) 
                                                       | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrwi) 
                                                          | ((0U 
                                                              != 
                                                              (0x1fU 
                                                               & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                  >> 0xfU))) 
                                                             & ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrsi) 
                                                                | (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrci))))))));
    vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h91c39851__0 
        = ((~ (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_funct7_eq_v)) 
           & (0x5000U == (0x7000U & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h044e296a__0 
        = ((1U == (7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                         >> 0xcU))) | (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_inv_bx));
    vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h541efbc5__0 
        = ((5U == (7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                         >> 0xcU))) | (IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_hff8699ac__0));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_ecall = 
        ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_ev) 
         & (IData)((0U == (0xfff00000U & vlSelf->tb__DOT__u_cpu__DOT__de_ins))));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_mret = ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_ev) 
                                                   & (IData)(
                                                             (0x30200000U 
                                                              == 
                                                              (0xfff00000U 
                                                               & vlSelf->tb__DOT__u_cpu__DOT__de_ins))));
    vlSelf->tb__DOT__u_cpu__DOT__wb_expt = ((4U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q)) 
                                            & ((IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_ins_is_ls) 
                                               & (((IData)(vlSelf->tb__DOT__u_bus__DOT__mem_en_q) 
                                                   & (IData)(vlSelf->tb__DOT__u_mem__DOT__err_q)) 
                                                  | (((IData)(vlSelf->tb__DOT__u_bus__DOT__rng_en_q) 
                                                      & (IData)(vlSelf->tb__DOT__u_rng__DOT__err_q)) 
                                                     | (((IData)(vlSelf->tb__DOT__u_bus__DOT__led_en_q) 
                                                         & (IData)(vlSelf->tb__DOT__u_led__DOT__err_q)) 
                                                        | (((IData)(vlSelf->tb__DOT__u_bus__DOT__lcd_en_q) 
                                                            & (IData)(vlSelf->tb__DOT__u_lcd__DOT__err_q)) 
                                                           | ((~ 
                                                               ((IData)(vlSelf->tb__DOT__u_bus__DOT__mem_en_q) 
                                                                | ((IData)(vlSelf->tb__DOT__u_bus__DOT__rng_en_q) 
                                                                   | ((IData)(vlSelf->tb__DOT__u_bus__DOT__led_en_q) 
                                                                      | ((IData)(vlSelf->tb__DOT__u_bus__DOT__lcd_en_q) 
                                                                         | ((IData)(vlSelf->tb__DOT__u_bus__DOT__but_en_q) 
                                                                            | (IData)(vlSelf->tb__DOT__u_bus__DOT__tmp_en_q))))))) 
                                                              | ((~ (IData)(
                                                                            (0U 
                                                                             != (IData)(vlSelf->tb__DOT__u_but__DOT__sel_q)))) 
                                                                 & (IData)(vlSelf->tb__DOT__u_bus__DOT__but_en_q)))))))));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sub = ((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h0a4778a7__0) 
                                                  & (0x20U 
                                                     == 
                                                     (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                      >> 0x19U)));
    vlSelf->tb__DOT__u_cpu__DOT__ex_bru_add_op0 = (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (~ (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_jalr))))) 
                                                    & vlSelf->tb__DOT__u_cpu__DOT__pc_q) 
                                                   | ((- (IData)((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_jalr))) 
                                                      & vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_q));
    vlSelf->tb__DOT__u_cpu__DOT__ex_ins_is_j = ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                | (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_jalr));
    vlSelf->tb__DOT__u_cpu__DOT__ex_lsu_sz_mask_hi 
        = ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_lw) 
           | (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sw));
    vlSelf->tb__DOT__bus_wdata = (((- (IData)((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sb))) 
                                   & ((vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_q 
                                       << 0x18U) | 
                                      ((0xff0000U & 
                                        (vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_q 
                                         << 0x10U)) 
                                       | ((0xff00U 
                                           & (vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_q 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_q))))) 
                                  | (((- (IData)((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sh))) 
                                      & ((vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_q 
                                          << 0x10U) 
                                         | (0xffffU 
                                            & vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_q))) 
                                     | ((- (IData)((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sw))) 
                                        & vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_q)));
    vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mie = ((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we) 
                                                  & (0x304U 
                                                     == 
                                                     (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                      >> 0x14U)));
    vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mepc = ((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we) 
                                                   & (0x341U 
                                                      == 
                                                      (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                       >> 0x14U)));
    vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mcause = 
        ((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we) 
         & (0x342U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                       >> 0x14U)));
    vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mstatus 
        = ((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we) 
           & (0x300U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                         >> 0x14U)));
    vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_hfbc50a14__0 
        = ((4U == (7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                         >> 0xcU))) | (IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h541efbc5__0));
    vlSelf->tb__DOT__u_cpu__DOT__ie_expt_ret = ((5U 
                                                 == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q)) 
                                                & ((2U 
                                                    == (IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_q)) 
                                                   & (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_mret)));
    vlSelf->tb__DOT__u_cpu__DOT__ie_expt_set = ((5U 
                                                 == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q)) 
                                                & ((1U 
                                                    == (IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_q)) 
                                                   | (((~ (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_mret)) 
                                                       & (2U 
                                                          == (IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_q))) 
                                                      | ((3U 
                                                          == (IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_q)) 
                                                         | (4U 
                                                            == (IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_q))))));
    vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h9b6faebf__0 
        = ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_ecall) 
           | (((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_ev) 
               & (IData)((0x100000U == (0xfff00000U 
                                        & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))) 
              | (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_mret)));
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sub = ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sub) 
                                               | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_slt) 
                                                  | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_slti) 
                                                     | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sltiu) 
                                                        | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sltu) 
                                                           | (0x63U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))))));
    vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_pc = (((- (IData)(
                                                          ((0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                           | (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_ins_is_j)))) 
                                               & vlSelf->tb__DOT__u_cpu__DOT__pc_q) 
                                              | ((- (IData)(
                                                            ((0x17U 
                                                              != 
                                                              (0x7fU 
                                                               & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                             & ((0x37U 
                                                                 != 
                                                                 (0x7fU 
                                                                  & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                                & (~ (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_ins_is_j)))))) 
                                                 & vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_q));
    vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_imm = (((- (IData)(
                                                           ((3U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                            | (0x13U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins))))) 
                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins_imm_i) 
                                               | (((- (IData)(
                                                              (0x23U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))) 
                                                   & (((- (IData)(
                                                                  (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | ((0xfe0U 
                                                          & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                               >> 7U))))) 
                                                  | ((0xfffff000U 
                                                      & ((- (IData)(
                                                                    ((0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                                     | (0x37U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->tb__DOT__u_cpu__DOT__de_ins))))) 
                                                         & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                     | (((- (IData)(
                                                                    ((0x33U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                                     | (0x63U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->tb__DOT__u_cpu__DOT__de_ins))))) 
                                                         & vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_q) 
                                                        | (4U 
                                                           & (- (IData)((IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_ins_is_j))))))));
    vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9bbd0f__0 
        = ((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata)) 
           | (0xbU == (0xfU & vlSelf->tb__DOT__bus_wdata)));
    vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8fd62221__0 
        = ((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata)) 
           | (0xaU == (0xfU & vlSelf->tb__DOT__bus_wdata)));
    vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8e759b18__0 
        = ((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata)) 
           | (9U == (0xfU & vlSelf->tb__DOT__bus_wdata)));
    vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f2ef9a1__0 
        = ((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata)) 
           | (8U == (0xfU & vlSelf->tb__DOT__bus_wdata)));
    vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f223bc1__0 
        = ((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata)) 
           | (7U == (0xfU & vlSelf->tb__DOT__bus_wdata)));
    vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f26a8df__0 
        = ((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata)) 
           | (6U == (0xfU & vlSelf->tb__DOT__bus_wdata)));
    vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f02fc66__0 
        = ((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata)) 
           | (5U == (0xfU & vlSelf->tb__DOT__bus_wdata)));
    vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7a5f0b__0 
        = ((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata)) 
           | (4U == (0xfU & vlSelf->tb__DOT__bus_wdata)));
    vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7efefc__0 
        = ((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata)) 
           | (3U == (0xfU & vlSelf->tb__DOT__bus_wdata)));
    vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f31bf2c__0 
        = ((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata)) 
           | (2U == (0xfU & vlSelf->tb__DOT__bus_wdata)));
    vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9e5970__0 
        = ((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata)) 
           | (1U == (0xfU & vlSelf->tb__DOT__bus_wdata)));
    vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f0d5fe9__0 
        = ((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata)) 
           | (0U == (0xfU & vlSelf->tb__DOT__bus_wdata)));
    vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8c0ed67__0 
        = ((0xfU == (0xfU & (vlSelf->tb__DOT__bus_wdata 
                             >> 4U))) | (9U == (0xfU 
                                                & (vlSelf->tb__DOT__bus_wdata 
                                                   >> 4U))));
    vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd808e424__0 
        = ((0xfU == (0xfU & (vlSelf->tb__DOT__bus_wdata 
                             >> 4U))) | (8U == (0xfU 
                                                & (vlSelf->tb__DOT__bus_wdata 
                                                   >> 4U))));
    vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8532756__0 
        = ((0xfU == (0xfU & (vlSelf->tb__DOT__bus_wdata 
                             >> 4U))) | (7U == (0xfU 
                                                & (vlSelf->tb__DOT__bus_wdata 
                                                   >> 4U))));
    vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd850f4e2__0 
        = ((0xfU == (0xfU & (vlSelf->tb__DOT__bus_wdata 
                             >> 4U))) | (6U == (0xfU 
                                                & (vlSelf->tb__DOT__bus_wdata 
                                                   >> 4U))));
    vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd833e037__0 
        = ((0xfU == (0xfU & (vlSelf->tb__DOT__bus_wdata 
                             >> 4U))) | (5U == (0xfU 
                                                & (vlSelf->tb__DOT__bus_wdata 
                                                   >> 4U))));
    vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7c66dbc__0 
        = ((0xfU == (0xfU & (vlSelf->tb__DOT__bus_wdata 
                             >> 4U))) | (4U == (0xfU 
                                                & (vlSelf->tb__DOT__bus_wdata 
                                                   >> 4U))));
    vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7f5e319__0 
        = ((0xfU == (0xfU & (vlSelf->tb__DOT__bus_wdata 
                             >> 4U))) | (3U == (0xfU 
                                                & (vlSelf->tb__DOT__bus_wdata 
                                                   >> 4U))));
    vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd80e8247__0 
        = ((0xfU == (0xfU & (vlSelf->tb__DOT__bus_wdata 
                             >> 4U))) | (2U == (0xfU 
                                                & (vlSelf->tb__DOT__bus_wdata 
                                                   >> 4U))));
    vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hda9d64cf__0 
        = ((0xfU == (0xfU & (vlSelf->tb__DOT__bus_wdata 
                             >> 4U))) | (1U == (0xfU 
                                                & (vlSelf->tb__DOT__bus_wdata 
                                                   >> 4U))));
    vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd869425c__0 
        = ((0xfU == (0xfU & (vlSelf->tb__DOT__bus_wdata 
                             >> 4U))) | (0U == (0xfU 
                                                & (vlSelf->tb__DOT__bus_wdata 
                                                   >> 4U))));
    vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he27f05d9__0 
        = ((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata)) 
           ^ (0xfU == (0xfU & (vlSelf->tb__DOT__bus_wdata 
                               >> 4U))));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_inv_jx = 
        ((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h044e296a__0) 
         | (IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_hfbc50a14__0));
    vlSelf->tb__DOT__u_cpu__DOT__wi_csr_we_mcause = 
        ((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mcause) 
         | (IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_expt_set));
    vlSelf->tb__DOT__u_cpu__DOT__wi_csr_we_mstatus 
        = ((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mstatus) 
           | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_expt_set) 
              | (IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_expt_ret)));
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_xor = (vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_q 
                                               ^ vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_imm);
    if ((1U & vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_imm)) {
        vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl0 = VL_SHIFTL_III(32,32,32, vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_q, 1U);
        vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr0 = (
                                                   ((IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_srs) 
                                                    << 0x1fU) 
                                                   | (vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_q 
                                                      >> 1U));
    } else {
        vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl0 = vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_q;
        vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr0 = vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_q;
    }
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add_op1 = (
                                                   (- (IData)((IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sub))) 
                                                   ^ vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_imm);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f0d5fe9__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8c0ed67__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9e5970__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8c0ed67__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f31bf2c__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8c0ed67__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7efefc__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8c0ed67__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7a5f0b__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8c0ed67__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f02fc66__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8c0ed67__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f26a8df__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8c0ed67__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f223bc1__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8c0ed67__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f2ef9a1__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8c0ed67__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__9__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8e759b18__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8c0ed67__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8fd62221__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8c0ed67__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9bbd0f__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8c0ed67__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f0d5fe9__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd808e424__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9e5970__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd808e424__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f31bf2c__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd808e424__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7efefc__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd808e424__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7a5f0b__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd808e424__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f02fc66__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd808e424__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f26a8df__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd808e424__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f223bc1__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd808e424__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__8__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f2ef9a1__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd808e424__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8e759b18__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd808e424__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8fd62221__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd808e424__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9bbd0f__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd808e424__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f0d5fe9__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8532756__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9e5970__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8532756__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f31bf2c__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8532756__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7efefc__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8532756__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7a5f0b__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8532756__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f02fc66__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8532756__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f26a8df__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8532756__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f223bc1__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8532756__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f2ef9a1__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8532756__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8e759b18__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8532756__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8fd62221__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8532756__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9bbd0f__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8532756__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f0d5fe9__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd850f4e2__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9e5970__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd850f4e2__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f31bf2c__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd850f4e2__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7efefc__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd850f4e2__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7a5f0b__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd850f4e2__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f02fc66__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd850f4e2__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f26a8df__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd850f4e2__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f223bc1__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd850f4e2__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f2ef9a1__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd850f4e2__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8e759b18__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd850f4e2__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8fd62221__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd850f4e2__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9bbd0f__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd850f4e2__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f0d5fe9__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd833e037__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9e5970__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd833e037__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f31bf2c__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd833e037__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7efefc__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd833e037__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7a5f0b__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd833e037__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f02fc66__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd833e037__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f26a8df__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd833e037__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f223bc1__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd833e037__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f2ef9a1__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd833e037__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8e759b18__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd833e037__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8fd62221__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd833e037__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9bbd0f__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd833e037__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f0d5fe9__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7c66dbc__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9e5970__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7c66dbc__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f31bf2c__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7c66dbc__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7efefc__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7c66dbc__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7a5f0b__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7c66dbc__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f02fc66__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7c66dbc__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f26a8df__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7c66dbc__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f223bc1__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7c66dbc__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f2ef9a1__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7c66dbc__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8e759b18__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7c66dbc__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8fd62221__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7c66dbc__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9bbd0f__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7c66dbc__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f0d5fe9__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7f5e319__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9e5970__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7f5e319__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f31bf2c__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7f5e319__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7efefc__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7f5e319__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7a5f0b__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7f5e319__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f02fc66__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7f5e319__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f26a8df__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7f5e319__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f223bc1__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7f5e319__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f2ef9a1__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7f5e319__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8e759b18__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7f5e319__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8fd62221__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7f5e319__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9bbd0f__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7f5e319__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f0d5fe9__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd80e8247__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9e5970__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd80e8247__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f31bf2c__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd80e8247__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7efefc__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd80e8247__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7a5f0b__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd80e8247__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f02fc66__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd80e8247__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f26a8df__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd80e8247__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f223bc1__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd80e8247__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f2ef9a1__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd80e8247__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8e759b18__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd80e8247__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8fd62221__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd80e8247__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9bbd0f__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd80e8247__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f0d5fe9__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hda9d64cf__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9e5970__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hda9d64cf__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f31bf2c__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hda9d64cf__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7efefc__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hda9d64cf__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7a5f0b__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hda9d64cf__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f02fc66__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hda9d64cf__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f26a8df__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hda9d64cf__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f223bc1__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hda9d64cf__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f2ef9a1__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hda9d64cf__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8e759b18__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hda9d64cf__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8fd62221__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hda9d64cf__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9bbd0f__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hda9d64cf__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f0d5fe9__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd869425c__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9e5970__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd869425c__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f31bf2c__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd869425c__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7efefc__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd869425c__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7a5f0b__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd869425c__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f02fc66__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd869425c__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f26a8df__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd869425c__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f223bc1__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd869425c__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f2ef9a1__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd869425c__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8e759b18__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd869425c__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8fd62221__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd869425c__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9bbd0f__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd869425c__0));
    vlSelf->tb__DOT__u_led__DOT__val = (0xfffU & ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (~ (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he27f05d9__0))))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelf->tb__DOT__bus_wdata 
                                                                    >> 0x10U))))) 
                                                  | ((- (IData)((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he27f05d9__0))) 
                                                     & (vlSelf->tb__DOT__bus_wdata 
                                                        >> 0x10U))));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_inv = ((
                                                   (0x37U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                   & ((0x17U 
                                                       != 
                                                       (0x7fU 
                                                        & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                      & ((0x6fU 
                                                          != 
                                                          (0x7fU 
                                                           & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                         & ((0x67U 
                                                             != 
                                                             (0x7fU 
                                                              & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                            & ((0x63U 
                                                                != 
                                                                (0x7fU 
                                                                 & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                               & ((3U 
                                                                   != 
                                                                   (0x7fU 
                                                                    & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                                  & ((0x23U 
                                                                      != 
                                                                      (0x7fU 
                                                                       & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                                     & ((0x13U 
                                                                         != 
                                                                         (0x7fU 
                                                                          & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                                        & ((0x33U 
                                                                            != 
                                                                            (0x7fU 
                                                                             & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                                           & ((0xfU 
                                                                               != 
                                                                               (0x7fU 
                                                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                                              & (0x73U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))))))))))) 
                                                  | (((0x67U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                      & (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_inv_jx)) 
                                                     | (((0x63U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                         & (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_inv_bx)) 
                                                        | (((3U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                            & ((3U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                    >> 0xcU))) 
                                                               | (IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_hff8699ac__0))) 
                                                           | (((0x23U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                               & ((3U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                       >> 0xcU))) 
                                                                  | (IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_hfbc50a14__0))) 
                                                              | (((0x13U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                                  & ((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_hc685467b__0) 
                                                                     | (IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h91c39851__0))) 
                                                                 | (((0x33U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                                     & (((~ (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_funct7_eq_v)) 
                                                                         & (0U 
                                                                            == 
                                                                            (0x7000U 
                                                                             & vlSelf->tb__DOT__u_cpu__DOT__de_ins))) 
                                                                        | ((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_hc685467b__0) 
                                                                           | ((IData)(
                                                                                ((0x2000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                                                & (0U 
                                                                                != 
                                                                                (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                                >> 0x19U)))) 
                                                                              | ((IData)(
                                                                                ((0x3000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                                                & (0U 
                                                                                != 
                                                                                (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                                >> 0x19U)))) 
                                                                                | ((IData)(
                                                                                ((0x4000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                                                & (0U 
                                                                                != 
                                                                                (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                                >> 0x19U)))) 
                                                                                | ((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h91c39851__0) 
                                                                                | ((0U 
                                                                                != 
                                                                                (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                                >> 0x19U)) 
                                                                                & ((6U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                                >> 0xcU))) 
                                                                                | (7U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                                >> 0xcU)))))))))))) 
                                                                    | (((0xfU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                                        & (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_inv_jx)) 
                                                                       | ((0x73U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                                          & (((~ (IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h9b6faebf__0)) 
                                                                              & (0U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins))) 
                                                                             | ((4U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                                >> 0xcU))) 
                                                                                | ((~ 
                                                                                ((0x300U 
                                                                                == 
                                                                                (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                                >> 0x14U)) 
                                                                                | ((0x304U 
                                                                                == 
                                                                                (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                                >> 0x14U)) 
                                                                                | ((0x305U 
                                                                                == 
                                                                                (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                                >> 0x14U)) 
                                                                                | ((0x341U 
                                                                                == 
                                                                                (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                                >> 0x14U)) 
                                                                                | ((0x342U 
                                                                                == 
                                                                                (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                                >> 0x14U)) 
                                                                                | (0x344U 
                                                                                == 
                                                                                (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                                >> 0x14U)))))))) 
                                                                                & ((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h044e296a__0) 
                                                                                | (IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h541efbc5__0))))))))))))));
    if ((2U & vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_imm)) {
        vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl1 = VL_SHIFTL_III(32,32,32, vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl0, 2U);
        vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr1 = (
                                                   ((- (IData)((IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_srs))) 
                                                    << 0x1eU) 
                                                   | (vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr0 
                                                      >> 2U));
    } else {
        vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl1 = vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl0;
        vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr1 = vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr0;
    }
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add = (0x1ffffffffULL 
                                               & (((QData)((IData)(
                                                                   ((vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_pc 
                                                                     & (vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add_op1 
                                                                        | (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sub))) 
                                                                    | (vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add_op1 
                                                                       & (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sub))))) 
                                                   << 1U) 
                                                  + (QData)((IData)(
                                                                    (vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_pc 
                                                                     ^ 
                                                                     (vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add_op1 
                                                                      ^ (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sub)))))));
    if ((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata))) {
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xaU));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xbU));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xaU));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xbU));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xaU));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xbU));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xaU));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xbU));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xaU));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xbU));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xaU));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xbU));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xaU));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xbU));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xaU));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xbU));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xaU));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xbU));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xaU));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xbU));
    } else {
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
    }
    if ((4U & vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_imm)) {
        vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl2 = VL_SHIFTL_III(32,32,32, vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl1, 4U);
        vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr2 = (
                                                   ((- (IData)((IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_srs))) 
                                                    << 0x1cU) 
                                                   | (vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr1 
                                                      >> 4U));
    } else {
        vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl2 = vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl1;
        vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr2 = vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr1;
    }
    vlSelf->tb__DOT__bus_wstrb = (0xfU & (((- (IData)((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sb))) 
                                           & ((1U & 
                                               (- (IData)(
                                                          (0U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add)))))) 
                                              | ((2U 
                                                  & (- (IData)(
                                                               (1U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add)))))) 
                                                 | ((4U 
                                                     & (- (IData)(
                                                                  (2U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add)))))) 
                                                    | (8U 
                                                       & (- (IData)(
                                                                    (3U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add)))))))))) 
                                          | (((- (IData)((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sh))) 
                                              & ((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ (IData)(
                                                                             (vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add 
                                                                              >> 1U))))))) 
                                                 | (0xcU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add 
                                                                             >> 1U)))))))) 
                                             | (- (IData)((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sw))))));
    vlSelf->tb__DOT__u_cpu__DOT__wb_lsu_lb = (0xffU 
                                              & (((- (IData)(
                                                             (0U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add))))) 
                                                  & vlSelf->tb__DOT__bus_rdata) 
                                                 | (((- (IData)(
                                                                (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add))))) 
                                                     & (vlSelf->tb__DOT__bus_rdata 
                                                        >> 8U)) 
                                                    | (((- (IData)(
                                                                   (2U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add))))) 
                                                        & (vlSelf->tb__DOT__bus_rdata 
                                                           >> 0x10U)) 
                                                       | ((- (IData)(
                                                                     (3U 
                                                                      == 
                                                                      (3U 
                                                                       & (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add))))) 
                                                          & (vlSelf->tb__DOT__bus_rdata 
                                                             >> 0x18U))))));
    vlSelf->tb__DOT__u_cpu__DOT__wb_lsu_lh = (0xffffU 
                                              & (((- (IData)(
                                                             (1U 
                                                              & (~ (IData)(
                                                                           (vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add 
                                                                            >> 1U)))))) 
                                                  & vlSelf->tb__DOT__bus_rdata) 
                                                 | ((- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add 
                                                                           >> 1U))))) 
                                                    & (vlSelf->tb__DOT__bus_rdata 
                                                       >> 0x10U))));
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_lts = (1U & 
                                               ((~ (IData)(
                                                           (vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add 
                                                            >> 0x20U))) 
                                                ^ (
                                                   (vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_pc 
                                                    ^ vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_imm) 
                                                   >> 0x1fU)));
    vlSelf->tb__DOT__u_cpu__DOT__ex_expt = ((IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_ins_is_ls) 
                                            & (0U != 
                                               ((IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add) 
                                                & (((IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_lsu_sz_mask_hi) 
                                                    << 1U) 
                                                   | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_lsu_sz_mask_hi) 
                                                      | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_lh) 
                                                         | (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sh)))))));
    vlSelf->tb__DOT__bus_addr = (((- (IData)((1U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q)))) 
                                  & vlSelf->tb__DOT__u_cpu__DOT__pc_q) 
                                 | ((- (IData)((3U 
                                                == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q)))) 
                                    & (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add)));
    if ((8U & vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_imm)) {
        vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl3 = VL_SHIFTL_III(32,32,32, vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl2, 8U);
        vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr3 = (
                                                   ((- (IData)((IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_srs))) 
                                                    << 0x18U) 
                                                   | (vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr2 
                                                      >> 8U));
    } else {
        vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl3 = vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl2;
        vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr3 = vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr2;
    }
    vlSelf->tb__DOT__u_led__DOT__wstrb_incomp = ((~ (IData)(
                                                            (0xfU 
                                                             == (IData)(vlSelf->tb__DOT__bus_wstrb)))) 
                                                 & (IData)(vlSelf->tb__DOT__bus_we));
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_blt = (1U & 
                                               ((0x2000U 
                                                 & vlSelf->tb__DOT__u_cpu__DOT__de_ins)
                                                 ? 
                                                (~ (IData)(
                                                           (vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add 
                                                            >> 0x20U)))
                                                 : (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_lts)));
    vlSelf->tb__DOT__u_cpu__DOT__st_nxt = ((4U & (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q))
                                            ? ((2U 
                                                & (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_expt)
                                                     ? 5U
                                                     : 1U)))
                                            : ((2U 
                                                & (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q))
                                                    ? 
                                                   ((IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_expt)
                                                     ? 5U
                                                     : 4U)
                                                    : 
                                                   (((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_inv) 
                                                     | (IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h9b6faebf__0))
                                                     ? 5U
                                                     : 3U))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q))
                                                    ? 
                                                   ((IData)(vlSelf->tb__DOT__u_cpu__DOT__if_expt)
                                                     ? 5U
                                                     : 2U)
                                                    : 1U)));
    vlSelf->tb__DOT__bus_en = (((~ (IData)(vlSelf->tb__DOT__u_cpu__DOT__if_expt)) 
                                & (1U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q))) 
                               | ((3U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q)) 
                                  & ((~ (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_expt)) 
                                     & (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_ins_is_ls))));
    vlSelf->tb__DOT__u_rng__DOT__sel_val = ((~ (IData)(vlSelf->tb__DOT__bus_we)) 
                                            & (0U == 
                                               (0xfffU 
                                                & vlSelf->tb__DOT__bus_addr)));
    vlSelf->tb__DOT__u_cpu__DOT__wb_gpr_wdata = (((- (IData)(
                                                             ((0x37U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                              | ((0x17U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                                 | (((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h0a4778a7__0) 
                                                                     & (0U 
                                                                        == 
                                                                        (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                         >> 0x19U))) 
                                                                    | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sub) 
                                                                       | ((IData)(
                                                                                (0x13U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins))) 
                                                                          | (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_ins_is_j)))))))) 
                                                  & (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add)) 
                                                 | (((- (IData)(
                                                                ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_slt) 
                                                                 | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_slti) 
                                                                    | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sltu) 
                                                                       | (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sltiu)))))) 
                                                     & ((0x1000U 
                                                         & vlSelf->tb__DOT__u_cpu__DOT__de_ins)
                                                         ? 
                                                        (1U 
                                                         & (~ (IData)(
                                                                      (vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add 
                                                                       >> 0x20U))))
                                                         : (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_lts))) 
                                                    | (((- (IData)(
                                                                   ((IData)(
                                                                            (0x4033U 
                                                                             == 
                                                                             (0xfe00707fU 
                                                                              & vlSelf->tb__DOT__u_cpu__DOT__de_ins))) 
                                                                    | (IData)(
                                                                              (0x4013U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))))) 
                                                        & vlSelf->tb__DOT__u_cpu__DOT__ex_alu_xor) 
                                                       | (((- (IData)(
                                                                      ((IData)(
                                                                               (0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins))) 
                                                                       | (IData)(
                                                                                (0x6013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))))) 
                                                           & (vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_q 
                                                              | vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_imm)) 
                                                          | (((- (IData)(
                                                                         ((IData)(
                                                                                (0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins))) 
                                                                          | (IData)(
                                                                                (0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))))) 
                                                              & (vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_q 
                                                                 & vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_imm)) 
                                                             | (((- (IData)(
                                                                            (((0x33U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                                              | (0x13U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins))) 
                                                                             & (IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h702d1d83__0)))) 
                                                                 & ((0x10U 
                                                                     & vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_imm)
                                                                     ? 
                                                                    VL_SHIFTL_III(32,32,32, vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl3, 0x10U)
                                                                     : vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl3)) 
                                                                | (((- (IData)(
                                                                               (((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h555416eb__0) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                                >> 0x19U))) 
                                                                                | (((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h555416eb__0) 
                                                                                & (0x20U 
                                                                                == 
                                                                                (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                                >> 0x19U))) 
                                                                                | ((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h87ebf8fd__0) 
                                                                                & ((0U 
                                                                                == 
                                                                                (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                                >> 0x19U)) 
                                                                                | (0x20U 
                                                                                == 
                                                                                (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                                >> 0x19U)))))))) 
                                                                    & ((0x10U 
                                                                        & vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_imm)
                                                                        ? 
                                                                       (((- (IData)((IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_srs))) 
                                                                         << 0x10U) 
                                                                        | (vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr3 
                                                                           >> 0x10U))
                                                                        : vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr3)) 
                                                                   | (((- (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))) 
                                                                       & (((- (IData)((IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins))))) 
                                                                           & (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_lsu_lb) 
                                                                                >> 7U)))) 
                                                                               << 8U) 
                                                                              | (IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_lsu_lb))) 
                                                                          | (((- (IData)((IData)(
                                                                                (0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins))))) 
                                                                              & (IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_lsu_lb)) 
                                                                             | (((- (IData)((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_lh))) 
                                                                                & (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_lsu_lh) 
                                                                                >> 0xfU)))) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_lsu_lh))) 
                                                                                | (((- (IData)((IData)(
                                                                                (0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins))))) 
                                                                                & (IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_lsu_lh)) 
                                                                                | ((- (IData)((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_lw))) 
                                                                                & vlSelf->tb__DOT__bus_rdata)))))) 
                                                                      | ((- (IData)(
                                                                                (0x73U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))) 
                                                                         & vlSelf->tb__DOT__u_cpu__DOT__ex_csr_rdata)))))))));
    vlSelf->tb__DOT__u_but__DOT__sel_stm = ((~ (IData)(vlSelf->tb__DOT__u_led__DOT__wstrb_incomp)) 
                                            & (0xcU 
                                               == (0xfffU 
                                                   & vlSelf->tb__DOT__bus_addr)));
    vlSelf->tb__DOT__u_but__DOT__sel_ptm = ((~ (IData)(vlSelf->tb__DOT__u_led__DOT__wstrb_incomp)) 
                                            & (8U == 
                                               (0xfffU 
                                                & vlSelf->tb__DOT__bus_addr)));
    vlSelf->tb__DOT__u_but__DOT__sel_src = ((~ (((IData)(vlSelf->tb__DOT__bus_we) 
                                                 & (0U 
                                                    != vlSelf->tb__DOT__bus_wdata)) 
                                                | (IData)(vlSelf->tb__DOT__u_led__DOT__wstrb_incomp))) 
                                            & (4U == 
                                               (0xfffU 
                                                & vlSelf->tb__DOT__bus_addr)));
    vlSelf->tb__DOT__u_cpu__DOT__ex_bru_cmp = ((IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_ins_is_j) 
                                               | (((IData)(
                                                           (0x63U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->tb__DOT__u_cpu__DOT__de_ins))) 
                                                   & (0U 
                                                      == vlSelf->tb__DOT__u_cpu__DOT__ex_alu_xor)) 
                                                  | (((0U 
                                                       != vlSelf->tb__DOT__u_cpu__DOT__ex_alu_xor) 
                                                      & (IData)(
                                                                (0x1063U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))) 
                                                     | ((((IData)(
                                                                  (0x4063U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->tb__DOT__u_cpu__DOT__de_ins))) 
                                                          | (IData)(
                                                                    (0x6063U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))) 
                                                         & (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_blt)) 
                                                        | ((~ (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_blt)) 
                                                           & ((IData)(
                                                                      (0x5063U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->tb__DOT__u_cpu__DOT__de_ins))) 
                                                              | (IData)(
                                                                        (0x7063U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))))))));
    vlSelf->tb__DOT__mem_en = ((IData)(vlSelf->tb__DOT__bus_en) 
                               & (vlSelf->tb__DOT__bus_addr 
                                  >> 0x1fU));
    vlSelf->tb__DOT__rng_en = ((IData)(vlSelf->tb__DOT__bus_en) 
                               & (0x40000U == (vlSelf->tb__DOT__bus_addr 
                                               >> 0xcU)));
    vlSelf->tb__DOT__lcd_en = ((IData)(vlSelf->tb__DOT__bus_en) 
                               & (0x60000U == (vlSelf->tb__DOT__bus_addr 
                                               >> 0xcU)));
    vlSelf->tb__DOT__but_en = ((IData)(vlSelf->tb__DOT__bus_en) 
                               & (0x70000U == (vlSelf->tb__DOT__bus_addr 
                                               >> 0xcU)));
    vlSelf->tb__DOT__led_en = ((IData)(vlSelf->tb__DOT__bus_en) 
                               & (0x50000U == (vlSelf->tb__DOT__bus_addr 
                                               >> 0xcU)));
    vlSelf->tb__DOT__u_lcd__DOT__wen = ((IData)(vlSelf->tb__DOT__lcd_en) 
                                        & (IData)(vlSelf->tb__DOT__bus_we));
    vlSelf->tb__DOT__u_but__DOT__wen = ((IData)(vlSelf->tb__DOT__but_en) 
                                        & (IData)(vlSelf->tb__DOT__bus_we));
    vlSelf->tb__DOT__u_led__DOT__wen = ((IData)(vlSelf->tb__DOT__led_en) 
                                        & (IData)(vlSelf->tb__DOT__bus_we));
    vlSelf->tb__DOT__u_but__DOT__wen_src = ((IData)(vlSelf->tb__DOT__u_but__DOT__wen) 
                                            & (IData)(vlSelf->tb__DOT__u_but__DOT__sel_src));
    vlSelf->tb__DOT__u_led__DOT__r_en = ((IData)(vlSelf->tb__DOT__u_led__DOT__wen) 
                                         & (vlSelf->tb__DOT__bus_wdata 
                                            >> 8U));
    vlSelf->tb__DOT__u_led__DOT__g_en = ((IData)(vlSelf->tb__DOT__u_led__DOT__wen) 
                                         & (vlSelf->tb__DOT__bus_wdata 
                                            >> 9U));
    vlSelf->tb__DOT__u_led__DOT__b_en = ((IData)(vlSelf->tb__DOT__u_led__DOT__wen) 
                                         & (vlSelf->tb__DOT__bus_wdata 
                                            >> 0xaU));
}

void Vtb___024root___eval_ico(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_ico\n"); );
    // Body
    if ((2ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb___024root___ico_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vtb___024root___eval_triggers__ico(Vtb___024root* vlSelf);

bool Vtb___024root___eval_phase__ico(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtb___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtb___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__tb__DOT__u_cpu__DOT__csr_mie_q 
        = vlSelf->tb__DOT__u_cpu__DOT__csr_mie_q;
    vlSelf->__Vdlyvset__tb__DOT__u_cpu__DOT__gpr_q__v0 = 0U;
    vlSelf->__Vdly__tb__DOT__u_cpu__DOT__csr_mepc_q 
        = vlSelf->tb__DOT__u_cpu__DOT__csr_mepc_q;
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v0 = 0U;
    vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v1 = 0U;
    vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v2 = 0U;
    vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v3 = 0U;
    vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v4 = 0U;
    vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v5 = 0U;
    vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v6 = 0U;
    vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v7 = 0U;
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__2(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->tb__DOT__u_cpu__DOT__wi_csr_we_mstatus) {
        vlSelf->__Vdly__tb__DOT__u_cpu__DOT__csr_mie_q 
            = (((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mstatus) 
                & (vlSelf->tb__DOT__u_cpu__DOT__wb_csr_wdata 
                   >> 3U)) | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_expt_ret) 
                              & (IData)(vlSelf->tb__DOT__u_cpu__DOT__csr_mpie_q)));
    }
    if (((4U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q)) 
         & ((~ (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_inv)) 
            & ((0x63U != (0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
               & ((0x23U != (0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                  & ((0xfU != (0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                     & (~ ((0U == (0x1fU & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                            >> 7U))) 
                           | (IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_expt))))))))) {
        vlSelf->__Vdlyvval__tb__DOT__u_cpu__DOT__gpr_q__v0 
            = vlSelf->tb__DOT__u_cpu__DOT__wb_gpr_wdata;
        vlSelf->__Vdlyvset__tb__DOT__u_cpu__DOT__gpr_q__v0 = 1U;
        vlSelf->__Vdlyvdim0__tb__DOT__u_cpu__DOT__gpr_q__v0 
            = (0x1fU & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                        >> 7U));
    }
    if (((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mepc) 
         | (IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_expt_set))) {
        vlSelf->__Vdly__tb__DOT__u_cpu__DOT__csr_mepc_q 
            = ((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mepc)
                ? vlSelf->tb__DOT__u_cpu__DOT__wb_csr_wdata
                : vlSelf->tb__DOT__u_cpu__DOT__pc_q);
    }
    vlSelf->tb__DOT__u_rng__DOT__err_q = ((IData)(vlSelf->tb__DOT__rng_en) 
                                          & (~ (IData)(vlSelf->tb__DOT__u_rng__DOT__sel_val)));
    if (vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mie) {
        vlSelf->tb__DOT__u_cpu__DOT__csr_mtie_q = (1U 
                                                   & (vlSelf->tb__DOT__u_cpu__DOT__wb_csr_wdata 
                                                      >> 7U));
        vlSelf->tb__DOT__u_cpu__DOT__csr_meie_q = (1U 
                                                   & (vlSelf->tb__DOT__u_cpu__DOT__wb_csr_wdata 
                                                      >> 0xbU));
    }
    vlSelf->tb__DOT__u_mem__DOT__err_q = ((IData)(vlSelf->tb__DOT__mem_en) 
                                          & (0xf0000000U 
                                             < vlSelf->tb__DOT__bus_addr));
    vlSelf->tb__DOT__u_lcd__DOT__err_q = ((IData)(vlSelf->tb__DOT__lcd_en) 
                                          & (0U != 
                                             (0xfffU 
                                              & vlSelf->tb__DOT__bus_addr)));
    vlSelf->tb__DOT__u_led__DOT__err_q = ((IData)(vlSelf->tb__DOT__led_en) 
                                          & (~ ((~ (IData)(vlSelf->tb__DOT__u_led__DOT__wstrb_incomp)) 
                                                & (0U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->tb__DOT__bus_addr)))));
    if (vlSelf->tb__DOT__u_cpu__DOT__wi_csr_we_mcause) {
        if (vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mcause) {
            vlSelf->tb__DOT__u_cpu__DOT__csr_mcause_i_q 
                = (1U & (vlSelf->tb__DOT__u_cpu__DOT__wb_csr_wdata 
                         >> 0x1fU));
            vlSelf->tb__DOT__u_cpu__DOT__csr_mcause_c_q 
                = (0x3fU & vlSelf->tb__DOT__u_cpu__DOT__wb_csr_wdata);
        } else {
            vlSelf->tb__DOT__u_cpu__DOT__csr_mcause_i_q 
                = (1U & (IData)(vlSelf->tb__DOT__u_cpu__DOT__if_irq_e));
            vlSelf->tb__DOT__u_cpu__DOT__csr_mcause_c_q 
                = (0x3fU & ((1U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_q))
                             ? ((IData)(vlSelf->tb__DOT__u_cpu__DOT__if_irq_e)
                                 ? 0xbU : 0U) : ((2U 
                                                  == (IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_q))
                                                  ? 
                                                 ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_inv)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_ecall)
                                                    ? 0xbU
                                                    : 3U))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_q))
                                                   ? 
                                                  ((3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->tb__DOT__u_cpu__DOT__de_ins))
                                                    ? 4U
                                                    : 6U)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->tb__DOT__u_cpu__DOT__de_ins))
                                                    ? 5U
                                                    : 7U)))));
        }
    }
    if (vlSelf->tb__DOT__but_en) {
        vlSelf->tb__DOT__u_but__DOT__sel_q = (((IData)(vlSelf->tb__DOT__u_but__DOT__sel_stm) 
                                               << 3U) 
                                              | (((IData)(vlSelf->tb__DOT__u_but__DOT__sel_ptm) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->tb__DOT__u_but__DOT__sel_src) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->tb__DOT__u_rng__DOT__sel_val))));
    }
    if ((2U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q))) {
        vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_q = vlSelf->tb__DOT__u_cpu__DOT__gpr_q
            [(0x1fU & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                       >> 0xfU))];
        vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_q = vlSelf->tb__DOT__u_cpu__DOT__gpr_q
            [(0x1fU & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                       >> 0x14U))];
        vlSelf->tb__DOT__u_cpu__DOT__bus_data_q = vlSelf->tb__DOT__bus_rdata;
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__3(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->tb__DOT__u_lcd__DOT__wen) 
             & (IData)(vlSelf->tb__DOT__bus_wstrb))) {
            vlSelf->__Vdlyvval__tb__DOT__u_lcd__DOT__disp_q__v0 
                = (0xffU & vlSelf->tb__DOT__bus_wdata);
            vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v0 = 1U;
        }
        if (((IData)(vlSelf->tb__DOT__u_lcd__DOT__wen) 
             & ((IData)(vlSelf->tb__DOT__bus_wstrb) 
                >> 1U))) {
            vlSelf->__Vdlyvval__tb__DOT__u_lcd__DOT__disp_q__v2 
                = (0xffU & (vlSelf->tb__DOT__bus_wdata 
                            >> 8U));
            vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v2 = 1U;
        }
        if (((IData)(vlSelf->tb__DOT__u_lcd__DOT__wen) 
             & ((IData)(vlSelf->tb__DOT__bus_wstrb) 
                >> 2U))) {
            vlSelf->__Vdlyvval__tb__DOT__u_lcd__DOT__disp_q__v4 
                = (0xffU & (vlSelf->tb__DOT__bus_wdata 
                            >> 0x10U));
            vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v4 = 1U;
        }
        if (((IData)(vlSelf->tb__DOT__u_lcd__DOT__wen) 
             & ((IData)(vlSelf->tb__DOT__bus_wstrb) 
                >> 3U))) {
            vlSelf->__Vdlyvval__tb__DOT__u_lcd__DOT__disp_q__v6 
                = (vlSelf->tb__DOT__bus_wdata >> 0x18U);
            vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v6 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v1 = 1U;
        vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v3 = 1U;
        vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v5 = 1U;
        vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v7 = 1U;
    }
    vlSelf->tb__DOT__u_bus__DOT__led_en_q = ((IData)(vlSelf->rst_ni) 
                                             && (IData)(vlSelf->tb__DOT__led_en));
    vlSelf->tb__DOT__u_bus__DOT__tmp_en_q = ((IData)(vlSelf->rst_ni) 
                                             && ((IData)(vlSelf->tb__DOT__bus_en) 
                                                 & (0x10000U 
                                                    == 
                                                    (vlSelf->tb__DOT__bus_addr 
                                                     >> 0xcU))));
    vlSelf->tb__DOT__u_bus__DOT__rng_en_q = ((IData)(vlSelf->rst_ni) 
                                             && (IData)(vlSelf->tb__DOT__rng_en));
    vlSelf->tb__DOT__u_bus__DOT__mem_en_q = ((IData)(vlSelf->rst_ni) 
                                             && (IData)(vlSelf->tb__DOT__mem_en));
    vlSelf->tb__DOT__u_bus__DOT__lcd_en_q = ((IData)(vlSelf->rst_ni) 
                                             && (IData)(vlSelf->tb__DOT__lcd_en));
    vlSelf->tb__DOT__u_bus__DOT__but_en_q = ((IData)(vlSelf->rst_ni) 
                                             && (IData)(vlSelf->tb__DOT__but_en));
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__4(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tb__DOT__u_cpu__DOT__gpr_q__v0) {
        vlSelf->tb__DOT__u_cpu__DOT__gpr_q[vlSelf->__Vdlyvdim0__tb__DOT__u_cpu__DOT__gpr_q__v0] 
            = vlSelf->__Vdlyvval__tb__DOT__u_cpu__DOT__gpr_q__v0;
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__5(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__5\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v0) {
        vlSelf->tb__DOT__u_lcd__DOT__disp_q[0U] = vlSelf->__Vdlyvval__tb__DOT__u_lcd__DOT__disp_q__v0;
    }
    if (vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v1) {
        vlSelf->tb__DOT__u_lcd__DOT__disp_q[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v2) {
        vlSelf->tb__DOT__u_lcd__DOT__disp_q[1U] = vlSelf->__Vdlyvval__tb__DOT__u_lcd__DOT__disp_q__v2;
    }
    if (vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v3) {
        vlSelf->tb__DOT__u_lcd__DOT__disp_q[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v4) {
        vlSelf->tb__DOT__u_lcd__DOT__disp_q[2U] = vlSelf->__Vdlyvval__tb__DOT__u_lcd__DOT__disp_q__v4;
    }
    if (vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v5) {
        vlSelf->tb__DOT__u_lcd__DOT__disp_q[2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v6) {
        vlSelf->tb__DOT__u_lcd__DOT__disp_q[3U] = vlSelf->__Vdlyvval__tb__DOT__u_lcd__DOT__disp_q__v6;
    }
    if (vlSelf->__Vdlyvset__tb__DOT__u_lcd__DOT__disp_q__v7) {
        vlSelf->tb__DOT__u_lcd__DOT__disp_q[3U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if (((4U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q)) 
             | (5U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q)))) {
            vlSelf->tb__DOT__u_cpu__DOT__pc_q = ((IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_expt_set)
                                                  ? vlSelf->tb__DOT__u_cpu__DOT__csr_mtvec_q
                                                  : 
                                                 ((IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_expt_ret)
                                                   ? vlSelf->tb__DOT__u_cpu__DOT__csr_mepc_q
                                                   : 
                                                  (vlSelf->tb__DOT__u_cpu__DOT__ex_bru_add_op0 
                                                   + 
                                                   (((- (IData)(
                                                                (0x6fU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))) 
                                                     & (((- (IData)(
                                                                    (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                     >> 0x1fU))) 
                                                         << 0x14U) 
                                                        | ((0xff000U 
                                                            & vlSelf->tb__DOT__u_cpu__DOT__de_ins) 
                                                           | ((0x800U 
                                                               & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                  >> 9U)) 
                                                              | (0x7feU 
                                                                 & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                    >> 0x14U)))))) 
                                                    | (((- (IData)((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_jalr))) 
                                                        & vlSelf->tb__DOT__u_cpu__DOT__de_ins_imm_i) 
                                                       | (((- (IData)(
                                                                      ((0x63U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                                       & (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_bru_cmp)))) 
                                                           & (((- (IData)(
                                                                          (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                           >> 0x1fU))) 
                                                               << 0xcU) 
                                                              | ((0x800U 
                                                                  & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                                          >> 7U)))))) 
                                                          | (4U 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_bru_cmp))))))))))));
        }
    } else {
        vlSelf->tb__DOT__u_cpu__DOT__pc_q = 0x80000000U;
    }
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb__DOT__u_cpu__DOT__csr_mie = (((IData)(vlSelf->tb__DOT__u_cpu__DOT__csr_meie_q) 
                                             << 0xbU) 
                                            | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__csr_mtie_q) 
                                               << 7U));
    vlSelf->tb__DOT__u_cpu__DOT__csr_mcause = (((IData)(vlSelf->tb__DOT__u_cpu__DOT__csr_mcause_i_q) 
                                                << 0x1fU) 
                                               | (IData)(vlSelf->tb__DOT__u_cpu__DOT__csr_mcause_c_q));
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__1(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->sevensegment_1_o = vlSelf->tb__DOT__u_lcd__DOT__disp_q
        [0U];
    vlSelf->sevensegment_2_o = vlSelf->tb__DOT__u_lcd__DOT__disp_q
        [1U];
    vlSelf->sevensegment_3_o = vlSelf->tb__DOT__u_lcd__DOT__disp_q
        [2U];
    vlSelf->sevensegment_4_o = vlSelf->tb__DOT__u_lcd__DOT__disp_q
        [3U];
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__6(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__6\n"); );
    // Body
    if (vlSelf->tb__DOT__u_cpu__DOT__wi_csr_we_mstatus) {
        vlSelf->tb__DOT__u_cpu__DOT__csr_mpie_q = (
                                                   ((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mstatus) 
                                                    & (vlSelf->tb__DOT__u_cpu__DOT__wb_csr_wdata 
                                                       >> 7U)) 
                                                   | (((IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_expt_set) 
                                                       & (IData)(vlSelf->tb__DOT__u_cpu__DOT__csr_mie_q)) 
                                                      | (IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_expt_ret)));
    }
    if ((5U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_nxt))) {
        vlSelf->tb__DOT__u_cpu__DOT__ie_q = vlSelf->tb__DOT__u_cpu__DOT__st_q;
    }
    vlSelf->tb__DOT__u_cpu__DOT__csr_mepc_q = vlSelf->__Vdly__tb__DOT__u_cpu__DOT__csr_mepc_q;
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__8(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->tb__DOT__u_cpu__DOT__csr_mie_q = vlSelf->__Vdly__tb__DOT__u_cpu__DOT__csr_mie_q;
    if (((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we) 
         & (0x305U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                       >> 0x14U)))) {
        vlSelf->tb__DOT__u_cpu__DOT__csr_mtvec_q = vlSelf->tb__DOT__u_cpu__DOT__wb_csr_wdata;
    }
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__2(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->tb__DOT__u_cpu__DOT__csr_mstatus = (0x1800U 
                                                | (((IData)(vlSelf->tb__DOT__u_cpu__DOT__csr_mpie_q) 
                                                    << 7U) 
                                                   | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__csr_mie_q) 
                                                      << 3U)));
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__10(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__10\n"); );
    // Body
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfffffffdU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 1U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfffffffbU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 2U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfffffff7U & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 3U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xffffffefU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 4U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xffffffdfU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 5U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xffffffbfU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 6U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xffffff7fU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 7U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfffffeffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 8U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfffffdffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 9U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfffffbffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0xaU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfffff7ffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0xbU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xffffefffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0xcU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xffffbfffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0xeU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xffff7fffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0xfU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfffeffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0x10U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfffdffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x11U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfffbffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x12U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfff7ffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0x13U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xffefffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x14U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xffdfffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x15U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xffbfffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x16U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xff7fffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x17U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfeffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x18U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfdffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x19U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xf7ffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x1bU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xefffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0x1cU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xdfffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x1dU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xbfffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x1eU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0x7fffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0x1fU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfffffffeU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfffffffdU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 1U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfffffffbU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 2U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfffffff7U & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 3U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xffffffefU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 4U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xffffffdfU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 5U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xffffffbfU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 6U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfffffeffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 8U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfffffdffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 9U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfffffbffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0xaU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfffff7ffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0xbU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xffffefffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0xcU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xffffdfffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0xdU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xffffbfffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0xeU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xffff7fffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0xfU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfffeffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x10U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfffdffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x11U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfffbffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0x12U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfff7ffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x13U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xffdfffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x15U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xffbfffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x16U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xff7fffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0x17U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfeffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x18U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfdffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x19U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xfbffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x1aU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xf7ffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x1bU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xefffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x1cU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xdfffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x1dU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xbfffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0x1eU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0x7fffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x1fU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfffffffeU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfffffffbU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 2U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfffffff7U & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 3U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xffffffefU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 4U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xffffffdfU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 5U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xffffffbfU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 6U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xffffff7fU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 7U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfffffeffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 8U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfffffdffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 9U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfffffbffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0xaU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfffff7ffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0xbU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xffffefffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0xcU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xffffdfffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0xdU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xffff7fffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0xfU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfffeffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x10U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfffdffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x11U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfffbffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x12U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfff7ffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x13U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xffefffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x14U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xffdfffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x15U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xffbfffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0x16U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xff7fffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x17U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfeffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0x18U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfdffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x19U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfbffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x1aU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xefffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x1cU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xdfffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x1dU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xbfffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x1eU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0x7fffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x1fU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xfffffeU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__nxt)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xfffffdU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                                   << 1U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xfffffbU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                                   << 2U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xfffff7U & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                                   << 3U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xffffefU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                                   << 4U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xffffdfU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                                   << 5U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xffffbfU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                                   << 6U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xffff7fU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                                   << 7U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xfffdffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                                   << 9U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xfffbffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                                   << 0xaU)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xfff7ffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                                   << 0xbU)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xffefffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                                   << 0xcU)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xffdfffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                                   << 0xdU)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xffbfffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                                   << 0xeU)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xff7fffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                                   << 0xfU)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xfeffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                                   << 0x10U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xfdffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                                   << 0x11U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xfbffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                                   << 0x12U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xf7ffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                                   << 0x13U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xefffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                                   << 0x14U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xbfffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                                   << 0x16U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0x7fffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                                   << 0x17U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfffffffeU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xffffdfffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | (0x2000U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                 << 0xcU)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] 
                = ((0xfbffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]) 
                   | (0x4000000U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                    << 0x18U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xffffff7fU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | (0x80U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                               << 4U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] 
                = ((0xffefffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]) 
                   | (0x100000U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                   << 0x10U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xfffffffdU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | (2U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                            >> 4U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xffffbfffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | (0x4000U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                 << 8U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] 
                = ((0xf7ffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]) 
                   | (0x8000000U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                    << 0x14U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xfffeffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0x100U & (IData)(vlSelf->tb__DOT__u_led__DOT__val)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__r_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] 
                = ((0xdfffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]) 
                   | (0x200000U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                   << 0xcU)));
        }
    } else {
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xfffffffdU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xfffffffbU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xfffffff7U & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xffffffefU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xffffffdfU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xffffffbfU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xffffff7fU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xfffffeffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xfffffdffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xfffffbffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xfffff7ffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xffffefffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xffffbfffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xffff7fffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xfffeffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xfffdffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xfffbffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xfff7ffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xffefffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xffdfffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xffbfffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xff7fffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xfeffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xfdffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xf7ffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xefffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xdfffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xbfffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0x7fffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xfffffffeU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xfffffffdU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xfffffffbU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xfffffff7U & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xffffffefU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xffffffdfU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xffffffbfU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xfffffeffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xfffffdffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xfffffbffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xfffff7ffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xffffefffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xffffdfffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xffffbfffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xffff7fffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xfffeffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xfffdffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xfffbffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xfff7ffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xffdfffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xffbfffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xff7fffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xfeffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xfdffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xfbffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xf7ffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xefffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xdfffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xbfffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0x7fffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xfffffffeU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xfffffffbU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xfffffff7U & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xffffffefU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xffffffdfU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xffffffbfU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xffffff7fU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xfffffeffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xfffffdffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xfffffbffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xfffff7ffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xffffefffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xffffdfffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xffff7fffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xfffeffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xfffdffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xfffbffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xfff7ffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xffefffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xffdfffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xffbfffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xff7fffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xfeffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xfdffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xfbffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xefffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xdfffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xbfffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0x7fffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0xfffffeU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0xfffffdU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0xfffffbU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0xfffff7U & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0xffffefU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0xffffdfU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0xffffbfU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0xffff7fU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0xfffdffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0xfffbffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0xfff7ffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0xffefffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0xffdfffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0xffbfffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0xff7fffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0xfeffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0xfdffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0xfbffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0xf7ffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0xefffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0xbfffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0x7fffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xfffffffeU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xffffdfffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[0U] = 
            (0xfbffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xffffff7fU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[1U] = 
            (0xffefffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xfffffffdU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xffffbfffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[2U] = 
            (0xf7ffffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0xfffeffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_r_q[3U] = 
            (0xdfffffU & vlSelf->tb__DOT__u_led__DOT__led_r_q[3U]);
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__11(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__11\n"); );
    // Body
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfffffffdU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 1U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfffffffbU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 2U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfffffff7U & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 3U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xffffffefU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 4U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xffffffdfU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 5U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xffffffbfU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 6U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xffffff7fU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 7U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfffffeffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 8U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfffffdffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 9U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfffffbffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0xaU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfffff7ffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0xbU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xffffefffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0xcU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xffffbfffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0xeU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xffff7fffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0xfU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfffeffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0x10U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfffdffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x11U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfffbffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x12U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfff7ffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0x13U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xffefffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x14U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xffdfffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x15U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xffbfffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x16U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xff7fffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x17U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfeffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x18U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfdffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x19U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xf7ffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x1bU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xefffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0x1cU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xdfffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x1dU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xbfffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x1eU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0x7fffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0x1fU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfffffffeU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfffffffdU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 1U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfffffffbU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 2U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfffffff7U & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 3U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xffffffefU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 4U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xffffffdfU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 5U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xffffffbfU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 6U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfffffeffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 8U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfffffdffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 9U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfffffbffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0xaU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfffff7ffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0xbU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xffffefffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0xcU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xffffdfffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0xdU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xffffbfffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0xeU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xffff7fffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0xfU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfffeffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x10U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfffdffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x11U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfffbffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0x12U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfff7ffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x13U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xffdfffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x15U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xffbfffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x16U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xff7fffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0x17U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfeffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x18U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfdffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x19U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xfbffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x1aU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xf7ffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x1bU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xefffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x1cU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xdfffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x1dU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xbfffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0x1eU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0x7fffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x1fU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfffffffeU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfffffffbU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 2U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfffffff7U & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 3U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xffffffefU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 4U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xffffffdfU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 5U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xffffffbfU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 6U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xffffff7fU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 7U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfffffeffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 8U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfffffdffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 9U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfffffbffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0xaU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfffff7ffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0xbU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xffffefffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0xcU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xffffdfffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0xdU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xffff7fffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0xfU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfffeffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x10U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfffdffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x11U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfffbffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x12U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfff7ffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x13U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xffefffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x14U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xffdfffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x15U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xffbfffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0x16U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xff7fffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x17U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfeffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0x18U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfdffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x19U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfbffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x1aU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xefffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x1cU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xdfffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x1dU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xbfffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x1eU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0x7fffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x1fU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xfffffeU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__nxt)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xfffffdU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                                   << 1U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xfffffbU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                                   << 2U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xfffff7U & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                                   << 3U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xffffefU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                                   << 4U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xffffdfU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                                   << 5U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xffffbfU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                                   << 6U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xffff7fU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                                   << 7U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xfffdffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                                   << 9U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xfffbffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                                   << 0xaU)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xfff7ffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                                   << 0xbU)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xffefffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                                   << 0xcU)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xffdfffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                                   << 0xdU)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xffbfffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                                   << 0xeU)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xff7fffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                                   << 0xfU)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xfeffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                                   << 0x10U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xfdffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                                   << 0x11U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xfbffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                                   << 0x12U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xf7ffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                                   << 0x13U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xefffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                                   << 0x14U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xbfffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                                   << 0x16U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0x7fffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                                   << 0x17U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfffffffeU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xffffdfffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | (0x2000U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                 << 0xcU)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] 
                = ((0xfbffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]) 
                   | (0x4000000U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                    << 0x18U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xffffff7fU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | (0x80U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                               << 4U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] 
                = ((0xffefffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]) 
                   | (0x100000U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                   << 0x10U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xfffffffdU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | (2U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                            >> 4U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xffffbfffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | (0x4000U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                 << 8U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] 
                = ((0xf7ffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]) 
                   | (0x8000000U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                    << 0x14U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xfffeffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0x100U & (IData)(vlSelf->tb__DOT__u_led__DOT__val)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__g_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] 
                = ((0xdfffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]) 
                   | (0x200000U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                   << 0xcU)));
        }
    } else {
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xfffffffdU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xfffffffbU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xfffffff7U & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xffffffefU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xffffffdfU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xffffffbfU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xffffff7fU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xfffffeffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xfffffdffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xfffffbffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xfffff7ffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xffffefffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xffffbfffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xffff7fffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xfffeffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xfffdffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xfffbffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xfff7ffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xffefffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xffdfffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xffbfffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xff7fffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xfeffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xfdffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xf7ffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xefffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xdfffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xbfffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0x7fffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xfffffffeU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xfffffffdU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xfffffffbU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xfffffff7U & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xffffffefU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xffffffdfU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xffffffbfU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xfffffeffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xfffffdffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xfffffbffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xfffff7ffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xffffefffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xffffdfffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xffffbfffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xffff7fffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xfffeffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xfffdffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xfffbffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xfff7ffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xffdfffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xffbfffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xff7fffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xfeffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xfdffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xfbffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xf7ffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xefffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xdfffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xbfffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0x7fffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xfffffffeU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xfffffffbU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xfffffff7U & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xffffffefU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xffffffdfU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xffffffbfU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xffffff7fU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xfffffeffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xfffffdffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xfffffbffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xfffff7ffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xffffefffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xffffdfffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xffff7fffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xfffeffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xfffdffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xfffbffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xfff7ffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xffefffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xffdfffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xffbfffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xff7fffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xfeffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xfdffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xfbffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xefffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xdfffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xbfffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0x7fffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0xfffffeU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0xfffffdU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0xfffffbU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0xfffff7U & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0xffffefU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0xffffdfU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0xffffbfU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0xffff7fU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0xfffdffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0xfffbffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0xfff7ffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0xffefffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0xffdfffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0xffbfffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0xff7fffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0xfeffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0xfdffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0xfbffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0xf7ffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0xefffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0xbfffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0x7fffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xfffffffeU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xffffdfffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[0U] = 
            (0xfbffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xffffff7fU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[1U] = 
            (0xffefffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xfffffffdU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xffffbfffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[2U] = 
            (0xf7ffffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0xfffeffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_g_q[3U] = 
            (0xdfffffU & vlSelf->tb__DOT__u_led__DOT__led_g_q[3U]);
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__12(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__12\n"); );
    // Body
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfffffffdU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 1U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfffffffbU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 2U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfffffff7U & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 3U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xffffffefU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 4U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xffffffdfU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 5U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xffffffbfU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 6U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xffffff7fU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 7U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfffffeffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 8U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfffffdffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 9U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfffffbffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0xaU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfffff7ffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0xbU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xffffefffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0xcU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xffffbfffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0xeU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xffff7fffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0xfU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfffeffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0x10U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfffdffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x11U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfffbffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x12U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfff7ffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0x13U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xffefffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x14U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xffdfffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x15U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xffbfffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x16U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xff7fffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x17U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfeffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x18U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfdffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x19U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xf7ffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x1bU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xefffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0x1cU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xdfffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x1dU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xbfffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x1eU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0x7fffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0x1fU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfffffffeU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfffffffdU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 1U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfffffffbU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 2U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfffffff7U & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 3U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xffffffefU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 4U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xffffffdfU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 5U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xffffffbfU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 6U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfffffeffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 8U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfffffdffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 9U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfffffbffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0xaU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfffff7ffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0xbU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xffffefffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0xcU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xffffdfffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0xdU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xffffbfffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0xeU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xffff7fffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0xfU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfffeffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x10U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfffdffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x11U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfffbffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0x12U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfff7ffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x13U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xffdfffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x15U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xffbfffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x16U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xff7fffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0x17U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfeffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x18U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfdffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x19U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xfbffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x1aU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xf7ffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x1bU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xefffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x1cU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xdfffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x1dU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xbfffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0x1eU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0x7fffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x1fU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfffffffeU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfffffffbU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 2U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfffffff7U & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 3U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xffffffefU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 4U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xffffffdfU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 5U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xffffffbfU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 6U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xffffff7fU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 7U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfffffeffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 8U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfffffdffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 9U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfffffbffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0xaU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfffff7ffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0xbU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xffffefffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0xcU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xffffdfffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0xdU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xffff7fffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                      << 0xfU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfffeffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x10U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfffdffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x11U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfffbffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x12U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfff7ffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x13U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xffefffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                      << 0x14U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xffdfffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                      << 0x15U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xffbfffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                      << 0x16U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xff7fffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                      << 0x17U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfeffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                      << 0x18U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfdffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                      << 0x19U));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfbffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                      << 0x1aU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xefffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                      << 0x1cU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xdfffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                      << 0x1dU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xbfffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                      << 0x1eU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0x7fffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                      << 0x1fU));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xfffffeU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__nxt)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xfffffdU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                                   << 1U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xfffffbU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                                   << 2U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xfffff7U & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                                   << 3U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xffffefU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                                   << 4U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xffffdfU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                                   << 5U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xffffbfU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                                   << 6U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xffff7fU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                                   << 7U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xfffdffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__nxt) 
                                   << 9U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xfffbffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                                   << 0xaU)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xfff7ffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                                   << 0xbU)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xffefffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__nxt) 
                                   << 0xcU)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xffdfffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__nxt) 
                                   << 0xdU)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xffbfffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__nxt) 
                                   << 0xeU)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xff7fffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__nxt) 
                                   << 0xfU)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xfeffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__nxt) 
                                   << 0x10U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xfdffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__nxt) 
                                   << 0x11U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xfbffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__nxt) 
                                   << 0x12U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xf7ffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__nxt) 
                                   << 0x13U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xefffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__nxt) 
                                   << 0x14U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xbfffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__nxt) 
                                   << 0x16U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0x7fffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__nxt) 
                                   << 0x17U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfffffffeU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xffffdfffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | (0x2000U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                 << 0xcU)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] 
                = ((0xfbffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]) 
                   | (0x4000000U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                    << 0x18U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xffffff7fU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | (0x80U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                               << 4U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] 
                = ((0xffefffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]) 
                   | (0x100000U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                   << 0x10U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xfffffffdU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | (2U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                            >> 4U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xffffbfffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | (0x4000U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                 << 8U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] 
                = ((0xf7ffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]) 
                   | (0x8000000U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                    << 0x14U)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__8__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xfffeffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0x100U & (IData)(vlSelf->tb__DOT__u_led__DOT__val)));
        }
        if (((IData)(vlSelf->tb__DOT__u_led__DOT__b_en) 
             & (IData)(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__9__KET____DOT__sel))) {
            vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] 
                = ((0xdfffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]) 
                   | (0x200000U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                   << 0xcU)));
        }
    } else {
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xfffffffdU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xfffffffbU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xfffffff7U & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xffffffefU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xffffffdfU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xffffffbfU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xffffff7fU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xfffffeffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xfffffdffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xfffffbffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xfffff7ffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xffffefffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xffffbfffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xffff7fffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xfffeffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xfffdffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xfffbffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xfff7ffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xffefffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xffdfffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xffbfffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xff7fffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xfeffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xfdffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xf7ffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xefffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xdfffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xbfffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0x7fffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xfffffffeU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xfffffffdU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xfffffffbU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xfffffff7U & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xffffffefU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xffffffdfU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xffffffbfU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xfffffeffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xfffffdffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xfffffbffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xfffff7ffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xffffefffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xffffdfffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xffffbfffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xffff7fffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xfffeffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xfffdffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xfffbffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xfff7ffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xffdfffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xffbfffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xff7fffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xfeffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xfdffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xfbffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xf7ffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xefffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xdfffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xbfffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0x7fffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xfffffffeU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xfffffffbU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xfffffff7U & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xffffffefU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xffffffdfU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xffffffbfU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xffffff7fU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xfffffeffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xfffffdffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xfffffbffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xfffff7ffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xffffefffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xffffdfffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xffff7fffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xfffeffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xfffdffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xfffbffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xfff7ffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xffefffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xffdfffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xffbfffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xff7fffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xfeffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xfdffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xfbffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xefffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xdfffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xbfffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0x7fffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0xfffffeU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0xfffffdU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0xfffffbU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0xfffff7U & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0xffffefU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0xffffdfU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0xffffbfU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0xffff7fU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0xfffdffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0xfffbffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0xfff7ffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0xffefffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0xffdfffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0xffbfffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0xff7fffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0xfeffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0xfdffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0xfbffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0xf7ffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0xefffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0xbfffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0x7fffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xfffffffeU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xffffdfffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[0U] = 
            (0xfbffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[0U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xffffff7fU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[1U] = 
            (0xffefffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[1U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xfffffffdU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xffffbfffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[2U] = 
            (0xf7ffffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[2U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0xfffeffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
        vlSelf->tb__DOT__u_led__DOT__led_b_q[3U] = 
            (0xdfffffU & vlSelf->tb__DOT__u_led__DOT__led_b_q[3U]);
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__15(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__15\n"); );
    // Body
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__val_q 
        = (1U & (IData)(vlSelf->tb__DOT__u_but__DOT__ext_push));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__val_q 
        = (1U & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                 >> 1U));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__val_q 
        = (1U & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                 >> 2U));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__val_q 
        = (1U & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                 >> 3U));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__val_q 
        = (1U & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                 >> 4U));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__val_q 
        = (1U & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                 >> 5U));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__val_q 
        = (1U & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                 >> 6U));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__val_q 
        = (1U & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                 >> 7U));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__val_q 
        = (1U & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                 >> 8U));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__val_q 
        = (1U & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                 >> 9U));
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__16(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__16\n"); );
    // Body
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__src_edge) 
             | (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src))) {
            vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__vld_q 
                = ((IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src)));
        }
        if (((IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__src_edge) 
             | (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src))) {
            vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__vld_q 
                = ((IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src)));
        }
        if (((IData)(vlSelf->tb__DOT__u_but__DOT__wen) 
             & (IData)(vlSelf->tb__DOT__u_but__DOT__sel_ptm))) {
            vlSelf->tb__DOT__u_but__DOT__ptm_q = (0xfffffU 
                                                  & vlSelf->tb__DOT__bus_wdata);
        }
    } else {
        vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__vld_q = 0U;
        vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__vld_q = 0U;
        vlSelf->tb__DOT__u_but__DOT__ptm_q = 0x55555U;
    }
}

void Vtb___024root____Vdpiimwrap_tb__DOT__u_mem__DOT__mem_wr_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ strb);

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__17(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__17\n"); );
    // Body
    if (((IData)(vlSelf->tb__DOT__mem_en) & ((IData)(vlSelf->tb__DOT__bus_we) 
                                             & (0xf0000000U 
                                                >= vlSelf->tb__DOT__bus_addr)))) {
        Vtb___024root____Vdpiimwrap_tb__DOT__u_mem__DOT__mem_wr_TOP(vlSelf->tb__DOT__bus_addr, vlSelf->tb__DOT__bus_wdata, (IData)(vlSelf->tb__DOT__bus_wstrb));
    }
}

void Vtb___024root____Vdpiimwrap_tb__DOT__u_mem__DOT__mem_rd_TOP(IData/*31:0*/ addr, IData/*31:0*/ &mem_rd__Vfuncrtn);

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__19(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__19\n"); );
    // Init
    IData/*31:0*/ __Vfunc_tb__DOT__u_mem__DOT__mem_rd__0__Vfuncout;
    __Vfunc_tb__DOT__u_mem__DOT__mem_rd__0__Vfuncout = 0;
    // Body
    if (((IData)(vlSelf->tb__DOT__mem_en) & ((~ (IData)(vlSelf->tb__DOT__bus_we)) 
                                             & (0xf0000000U 
                                                >= vlSelf->tb__DOT__bus_addr)))) {
        Vtb___024root____Vdpiimwrap_tb__DOT__u_mem__DOT__mem_rd_TOP(vlSelf->tb__DOT__bus_addr, __Vfunc_tb__DOT__u_mem__DOT__mem_rd__0__Vfuncout);
        vlSelf->tb__DOT__u_mem__DOT__rdata_q = __Vfunc_tb__DOT__u_mem__DOT__mem_rd__0__Vfuncout;
    }
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__val_q 
        = (1U & (IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch));
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__val_q 
        = (1U & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                 >> 1U));
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__val_q 
        = (1U & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                 >> 2U));
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__val_q 
        = (1U & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                 >> 3U));
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__val_q 
        = (1U & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                 >> 4U));
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__val_q 
        = (1U & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                 >> 5U));
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__val_q 
        = (1U & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                 >> 6U));
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__val_q 
        = (1U & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                 >> 7U));
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__20(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__20\n"); );
    // Body
    if (vlSelf->rst_ni) {
        vlSelf->tb__DOT__u_rng__DOT__lfsr_q = ((0U 
                                                != vlSelf->tb__DOT__u_rng__DOT__lfsr_q)
                                                ? (
                                                   ((vlSelf->tb__DOT__u_rng__DOT__lfsr_q 
                                                     ^ vlSelf->tb__DOT__u_rng__DOT__lfsr_xor) 
                                                    << 1U) 
                                                   | (vlSelf->tb__DOT__u_rng__DOT__lfsr_q 
                                                      >> 0x1fU))
                                                : 0x55555555U);
        if (((IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__src_edge) 
             | (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src))) {
            vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__vld_q 
                = ((IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src)));
        }
        if (((IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__src_edge) 
             | (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src))) {
            vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__vld_q 
                = ((IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src)));
        }
        if (((IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__src_edge) 
             | (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src))) {
            vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__vld_q 
                = ((IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src)));
        }
        if (((IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__src_edge) 
             | (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src))) {
            vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__vld_q 
                = ((IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src)));
        }
        if (((IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__src_edge) 
             | (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src))) {
            vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__vld_q 
                = ((IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src)));
        }
        if (((IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__src_edge) 
             | (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src))) {
            vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__vld_q 
                = ((IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src)));
        }
        if (((IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__src_edge) 
             | (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src))) {
            vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__vld_q 
                = ((IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src)));
        }
        if (((IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__src_edge) 
             | (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src))) {
            vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__vld_q 
                = ((IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src)));
        }
        if (((IData)(vlSelf->tb__DOT__u_but__DOT__wen) 
             & (IData)(vlSelf->tb__DOT__u_but__DOT__sel_stm))) {
            vlSelf->tb__DOT__u_but__DOT__stm_q = (0xffffU 
                                                  & vlSelf->tb__DOT__bus_wdata);
        }
    } else {
        vlSelf->tb__DOT__u_rng__DOT__lfsr_q = 0x55555555U;
        vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__vld_q = 0U;
        vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__vld_q = 0U;
        vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__vld_q = 0U;
        vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__vld_q = 0U;
        vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__vld_q = 0U;
        vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__vld_q = 0U;
        vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__vld_q = 0U;
        vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__vld_q = 0U;
        vlSelf->tb__DOT__u_but__DOT__stm_q = 0x5555U;
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__21(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__21\n"); );
    // Body
    vlSelf->tb__DOT__u_but__DOT__ext_switch = (0xffU 
                                               & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_vld_q)
                                                   ? 
                                                  (vlSelf->tb__DOT__u_but__DOT__ext_val_q 
                                                   >> 0xaU)
                                                   : (IData)(vlSelf->dip_switches_i)));
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__3(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->tb__DOT__u_but__DOT____Vcellout__u_stm__src 
        = ((((IData)(((~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                          >> 7U)) & (0U == (0xc000U 
                                            & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))))) 
             | ((IData)(((0xc000U == (0xc000U & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                            >> 7U))) | (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__vld_q))) 
            << 7U) | ((((IData)(((~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                     >> 6U)) & (0U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))))) 
                        | ((IData)(((0x3000U == (0x3000U 
                                                 & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                                    & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                       >> 6U))) | (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__vld_q))) 
                       << 6U) | ((((IData)(((~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                                >> 5U)) 
                                            & (0U == 
                                               (0xc00U 
                                                & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))))) 
                                   | ((IData)(((0xc00U 
                                                == 
                                                (0xc00U 
                                                 & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                                               & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                                  >> 5U))) 
                                      | (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__vld_q))) 
                                  << 5U) | ((((IData)(
                                                      ((~ 
                                                        ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                                         >> 4U)) 
                                                       & (0U 
                                                          == 
                                                          (0x300U 
                                                           & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))))) 
                                              | ((IData)(
                                                         ((0x300U 
                                                           == 
                                                           (0x300U 
                                                            & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                                                          & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                                             >> 4U))) 
                                                 | (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__vld_q))) 
                                             << 4U) 
                                            | ((((IData)(
                                                         ((~ 
                                                           ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                                            >> 3U)) 
                                                          & (0U 
                                                             == 
                                                             (0xc0U 
                                                              & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))))) 
                                                 | ((IData)(
                                                            ((0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                                                             & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                                                >> 3U))) 
                                                    | (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__vld_q))) 
                                                << 3U) 
                                               | ((((IData)(
                                                            ((~ 
                                                              ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                                               >> 2U)) 
                                                             & (0U 
                                                                == 
                                                                (0x30U 
                                                                 & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))))) 
                                                    | ((IData)(
                                                               ((0x30U 
                                                                 == 
                                                                 (0x30U 
                                                                  & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                                                                & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                                                   >> 2U))) 
                                                       | (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__vld_q))) 
                                                   << 2U) 
                                                  | ((((IData)(
                                                               ((~ 
                                                                 ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                                                  >> 1U)) 
                                                                & (0U 
                                                                   == 
                                                                   (0xcU 
                                                                    & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))))) 
                                                       | ((IData)(
                                                                  ((0xcU 
                                                                    == 
                                                                    (0xcU 
                                                                     & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                                                                   & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                                                      >> 1U))) 
                                                          | (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__vld_q))) 
                                                      << 1U) 
                                                     | (((~ (IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch)) 
                                                         & (0U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q)))) 
                                                        | (((3U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))) 
                                                            & (IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch)) 
                                                           | (IData)(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__vld_q))))))))));
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__24(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__24\n"); );
    // Body
    vlSelf->tb__DOT__u_rng__DOT__lfsr_xor = ((0x40U 
                                              & (vlSelf->tb__DOT__u_rng__DOT__lfsr_q 
                                                 >> 0x19U)) 
                                             | ((0x20U 
                                                 & (vlSelf->tb__DOT__u_rng__DOT__lfsr_q 
                                                    >> 0x1aU)) 
                                                | (2U 
                                                   & (vlSelf->tb__DOT__u_rng__DOT__lfsr_q 
                                                      >> 0x1eU))));
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__25(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__25\n"); );
    // Body
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__src_edge) 
             | (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src))) {
            vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__vld_q 
                = ((IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src)));
        }
        if (((IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__src_edge) 
             | (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src))) {
            vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__vld_q 
                = ((IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src)));
        }
        if (((IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__src_edge) 
             | (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src))) {
            vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__vld_q 
                = ((IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src)));
        }
        if (((IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__src_edge) 
             | (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src))) {
            vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__vld_q 
                = ((IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src)));
        }
        if (((IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__src_edge) 
             | (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src))) {
            vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__vld_q 
                = ((IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src)));
        }
        if (((IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__src_edge) 
             | (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src))) {
            vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__vld_q 
                = ((IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src)));
        }
        if (((IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__src_edge) 
             | (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src))) {
            vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__vld_q 
                = ((IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src)));
        }
        if (((IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__src_edge) 
             | (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src))) {
            vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__vld_q 
                = ((IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__src_edge) 
                   & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__wen_src)));
        }
    } else {
        vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__vld_q = 0U;
        vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__vld_q = 0U;
        vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__vld_q = 0U;
        vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__vld_q = 0U;
        vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__vld_q = 0U;
        vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__vld_q = 0U;
        vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__vld_q = 0U;
        vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__vld_q = 0U;
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__26(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__26\n"); );
    // Body
    vlSelf->tb__DOT__u_but__DOT__ext_push = (0x3ffU 
                                             & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_vld_q)
                                                 ? vlSelf->tb__DOT__u_but__DOT__ext_val_q
                                                 : 
                                                (((IData)(vlSelf->button_top_i) 
                                                  << 9U) 
                                                 | (((IData)(vlSelf->button_bottom_i) 
                                                     << 8U) 
                                                    | (((IData)(vlSelf->button_left_i) 
                                                        << 7U) 
                                                       | (((IData)(vlSelf->button_right_i) 
                                                           << 6U) 
                                                          | (((IData)(vlSelf->button_center_i) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->joystick_up_i) 
                                                                 << 4U) 
                                                                | (((IData)(vlSelf->joystick_down_i) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelf->joystick_left_i) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->joystick_right_i) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->joystick_pressed_i))))))))))));
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__4(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->tb__DOT__u_but__DOT____Vcellout__u_ptm__src 
        = ((((IData)(((~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                          >> 9U)) & (0U == (0xc0000U 
                                            & vlSelf->tb__DOT__u_but__DOT__ptm_q)))) 
             | ((IData)(((0xc0000U == (0xc0000U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                            >> 9U))) | (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__vld_q))) 
            << 9U) | ((((IData)(((~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                     >> 8U)) & (0U 
                                                == 
                                                (0x30000U 
                                                 & vlSelf->tb__DOT__u_but__DOT__ptm_q)))) 
                        | ((IData)(((0x30000U == (0x30000U 
                                                  & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                                    & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                       >> 8U))) | (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__vld_q))) 
                       << 8U) | ((((IData)(((~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                >> 7U)) 
                                            & (0U == 
                                               (0xc000U 
                                                & vlSelf->tb__DOT__u_but__DOT__ptm_q)))) 
                                   | ((IData)(((0xc000U 
                                                == 
                                                (0xc000U 
                                                 & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                                               & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                  >> 7U))) 
                                      | (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__vld_q))) 
                                  << 7U) | ((((IData)(
                                                      ((~ 
                                                        ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                         >> 6U)) 
                                                       & (0U 
                                                          == 
                                                          (0x3000U 
                                                           & vlSelf->tb__DOT__u_but__DOT__ptm_q)))) 
                                              | ((IData)(
                                                         ((0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                                                          & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                             >> 6U))) 
                                                 | (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__vld_q))) 
                                             << 6U) 
                                            | ((((IData)(
                                                         ((~ 
                                                           ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                            >> 5U)) 
                                                          & (0U 
                                                             == 
                                                             (0xc00U 
                                                              & vlSelf->tb__DOT__u_but__DOT__ptm_q)))) 
                                                 | ((IData)(
                                                            ((0xc00U 
                                                              == 
                                                              (0xc00U 
                                                               & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                                                             & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                                >> 5U))) 
                                                    | (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__vld_q))) 
                                                << 5U) 
                                               | ((((IData)(
                                                            ((~ 
                                                              ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                               >> 4U)) 
                                                             & (0U 
                                                                == 
                                                                (0x300U 
                                                                 & vlSelf->tb__DOT__u_but__DOT__ptm_q)))) 
                                                    | ((IData)(
                                                               ((0x300U 
                                                                 == 
                                                                 (0x300U 
                                                                  & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                                                                & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                                   >> 4U))) 
                                                       | (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__vld_q))) 
                                                   << 4U) 
                                                  | ((((IData)(
                                                               ((~ 
                                                                 ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                                  >> 3U)) 
                                                                & (0U 
                                                                   == 
                                                                   (0xc0U 
                                                                    & vlSelf->tb__DOT__u_but__DOT__ptm_q)))) 
                                                       | ((IData)(
                                                                  ((0xc0U 
                                                                    == 
                                                                    (0xc0U 
                                                                     & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                                                                   & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                                      >> 3U))) 
                                                          | (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__vld_q))) 
                                                      << 3U) 
                                                     | ((((IData)(
                                                                  ((~ 
                                                                    ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                                     >> 2U)) 
                                                                   & (0U 
                                                                      == 
                                                                      (0x30U 
                                                                       & vlSelf->tb__DOT__u_but__DOT__ptm_q)))) 
                                                          | ((IData)(
                                                                     ((0x30U 
                                                                       == 
                                                                       (0x30U 
                                                                        & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                                                                      & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                                         >> 2U))) 
                                                             | (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__vld_q))) 
                                                         << 2U) 
                                                        | ((((IData)(
                                                                     ((~ 
                                                                       ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                                        >> 1U)) 
                                                                      & (0U 
                                                                         == 
                                                                         (0xcU 
                                                                          & vlSelf->tb__DOT__u_but__DOT__ptm_q)))) 
                                                             | ((IData)(
                                                                        ((0xcU 
                                                                          == 
                                                                          (0xcU 
                                                                           & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                                                                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                                                                            >> 1U))) 
                                                                | (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__vld_q))) 
                                                            << 1U) 
                                                           | (((~ (IData)(vlSelf->tb__DOT__u_but__DOT__ext_push)) 
                                                               & (0U 
                                                                  == 
                                                                  (3U 
                                                                   & vlSelf->tb__DOT__u_but__DOT__ptm_q))) 
                                                              | (((3U 
                                                                   == 
                                                                   (3U 
                                                                    & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                                                                  & (IData)(vlSelf->tb__DOT__u_but__DOT__ext_push)) 
                                                                 | (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__vld_q))))))))))));
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__5(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__5\n"); );
    // Body
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__vld_q)) 
           & (((2U == (3U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
               & ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__ext_push)) 
                  & (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__val_q))) 
              | ((1U == (3U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                 & ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__val_q)) 
                    & (IData)(vlSelf->tb__DOT__u_but__DOT__ext_push)))));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__vld_q)) 
           & ((IData)((((8U == (0xcU & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                              >> 1U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__val_q))) 
              | (IData)((((4U == (0xcU & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                            >> 1U)))));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__vld_q)) 
           & ((IData)((((0x20U == (0x30U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                              >> 2U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__val_q))) 
              | (IData)((((0x10U == (0x30U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                            >> 2U)))));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__vld_q)) 
           & ((IData)((((0x80U == (0xc0U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                              >> 3U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__val_q))) 
              | (IData)((((0x40U == (0xc0U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                            >> 3U)))));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__vld_q)) 
           & ((IData)((((0x200U == (0x300U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                              >> 4U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__val_q))) 
              | (IData)((((0x100U == (0x300U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                            >> 4U)))));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__vld_q)) 
           & ((IData)((((0x800U == (0xc00U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                              >> 5U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__val_q))) 
              | (IData)((((0x400U == (0xc00U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                            >> 5U)))));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__vld_q)) 
           & ((IData)((((0x2000U == (0x3000U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                              >> 6U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__val_q))) 
              | (IData)((((0x1000U == (0x3000U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                            >> 6U)))));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__vld_q)) 
           & ((IData)((((0x8000U == (0xc000U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                              >> 7U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__val_q))) 
              | (IData)((((0x4000U == (0xc000U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                            >> 7U)))));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__vld_q)) 
           & ((IData)((((0x20000U == (0x30000U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                              >> 8U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__val_q))) 
              | (IData)((((0x10000U == (0x30000U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                            >> 8U)))));
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__src_edge 
        = ((~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__vld_q)) 
           & ((IData)((((0x80000U == (0xc0000U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                        & (~ ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                              >> 9U))) & (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__val_q))) 
              | (IData)((((0x40000U == (0xc0000U & vlSelf->tb__DOT__u_but__DOT__ptm_q)) 
                          & (~ (IData)(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__val_q))) 
                         & ((IData)(vlSelf->tb__DOT__u_but__DOT__ext_push) 
                            >> 9U)))));
}
