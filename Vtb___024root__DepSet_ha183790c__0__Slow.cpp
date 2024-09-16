// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_static(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vtb___024root___eval_final(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_settle(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_stl(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x1dU] = 1U;
        vlSelfRef.__Vm_traceActivity[0x1cU] = 1U;
        vlSelfRef.__Vm_traceActivity[0x1bU] = 1U;
        vlSelfRef.__Vm_traceActivity[0x1aU] = 1U;
        vlSelfRef.__Vm_traceActivity[0x19U] = 1U;
        vlSelfRef.__Vm_traceActivity[0x18U] = 1U;
        vlSelfRef.__Vm_traceActivity[0x17U] = 1U;
        vlSelfRef.__Vm_traceActivity[0x16U] = 1U;
        vlSelfRef.__Vm_traceActivity[0x15U] = 1U;
        vlSelfRef.__Vm_traceActivity[0x14U] = 1U;
        vlSelfRef.__Vm_traceActivity[0x13U] = 1U;
        vlSelfRef.__Vm_traceActivity[0x12U] = 1U;
        vlSelfRef.__Vm_traceActivity[0x11U] = 1U;
        vlSelfRef.__Vm_traceActivity[0x10U] = 1U;
        vlSelfRef.__Vm_traceActivity[0xfU] = 1U;
        vlSelfRef.__Vm_traceActivity[0xeU] = 1U;
        vlSelfRef.__Vm_traceActivity[0xdU] = 1U;
        vlSelfRef.__Vm_traceActivity[0xcU] = 1U;
        vlSelfRef.__Vm_traceActivity[0xbU] = 1U;
        vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___stl_sequent__TOP__0\n"); );
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
    vlSelfRef.tb__DOT__u_rng__DOT__lfsr_xor = ((0x40U 
                                                & (vlSelfRef.tb__DOT__u_rng__DOT__lfsr_q 
                                                   >> 0x19U)) 
                                               | ((0x20U 
                                                   & (vlSelfRef.tb__DOT__u_rng__DOT__lfsr_q 
                                                      >> 0x1aU)) 
                                                  | (2U 
                                                     & (vlSelfRef.tb__DOT__u_rng__DOT__lfsr_q 
                                                        >> 0x1eU))));
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

VL_ATTR_COLD void Vtb___024root___eval_triggers__stl(Vtb___024root* vlSelf);

VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__ico(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: Internal 'ico' trigger - DPI export trigger\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: Internal 'act' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or negedge rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([event] __VnbaEvent)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: Internal 'nba' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or negedge rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([event] __VnbaEvent)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___ctor_var_reset(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = 0;
    vlSelf->rst_n = 0;
    VL_RAND_RESET_W(120, vlSelf->led_r);
    VL_RAND_RESET_W(120, vlSelf->led_g);
    VL_RAND_RESET_W(120, vlSelf->led_b);
    vlSelf->sevensegment_1 = VL_RAND_RESET_I(8);
    vlSelf->sevensegment_2 = VL_RAND_RESET_I(8);
    vlSelf->sevensegment_3 = VL_RAND_RESET_I(8);
    vlSelf->sevensegment_4 = VL_RAND_RESET_I(8);
    vlSelf->button_top = VL_RAND_RESET_I(1);
    vlSelf->button_bottom = VL_RAND_RESET_I(1);
    vlSelf->button_left = VL_RAND_RESET_I(1);
    vlSelf->button_right = VL_RAND_RESET_I(1);
    vlSelf->button_center = VL_RAND_RESET_I(1);
    vlSelf->joystick_up = VL_RAND_RESET_I(1);
    vlSelf->joystick_down = VL_RAND_RESET_I(1);
    vlSelf->joystick_left = VL_RAND_RESET_I(1);
    vlSelf->joystick_right = VL_RAND_RESET_I(1);
    vlSelf->joystick_pressed = VL_RAND_RESET_I(1);
    vlSelf->dip_switches = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__bus_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__bus_we = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__bus_addr = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__bus_wdata = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__bus_wstrb = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__bus_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__mem_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__rng_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__led_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__lcd_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__but_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__ie_q = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__u_cpu__DOT__st_q = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__u_cpu__DOT__st_nxt = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__u_cpu__DOT__pc_q = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__if_expt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__ex_expt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__wb_expt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__if_irq_e = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__bus_data_q = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_imm_i = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_funct7_eq_v = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_jalr = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_lh = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_lw = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sb = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sh = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sw = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_slti = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sltiu = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sub = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_slt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sltu = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_ev = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_ecall = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_mret = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrw = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrs = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrc = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrwi = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrsi = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrci = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_inv_jx = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_inv_bx = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_inv = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_q = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_q = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb__DOT__u_cpu__DOT__gpr_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb__DOT__u_cpu__DOT__ex_ins_is_j = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_pc = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_imm = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sub = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add_op1 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add = VL_RAND_RESET_Q(33);
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_xor = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_lts = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_blt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_srs = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl0 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl1 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl2 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl3 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr0 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr1 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr2 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr3 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__ex_bru_cmp = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__ex_bru_add_op0 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__ex_ins_is_ls = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__ex_lsu_sz_mask_hi = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__csr_mie_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__csr_mtie_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__csr_meie_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__csr_mpie_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__csr_mcause_i_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__csr_mcause_c_q = VL_RAND_RESET_I(6);
    vlSelf->tb__DOT__u_cpu__DOT__csr_mstatus = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__csr_mie = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__csr_mtvec_q = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__csr_mepc_q = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__csr_mcause = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__ex_csr_rs1 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__ex_csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__wb_lsu_lb = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__u_cpu__DOT__wb_lsu_lh = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__u_cpu__DOT__wb_gpr_wdata = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__wb_csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mstatus = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mie = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mepc = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mcause = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__ie_expt_set = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__ie_expt_ret = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__wi_csr_we_mstatus = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT__wi_csr_we_mcause = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_3 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_28 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_29 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_30 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_31 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_32 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_33 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_bus__DOT__mem_en_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_bus__DOT__rng_en_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_bus__DOT__led_en_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_bus__DOT__lcd_en_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_bus__DOT__but_en_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_bus__DOT__tmp_en_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_mem__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_mem__DOT__err_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_rng__DOT__sel_val = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_rng__DOT__lfsr_q = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_rng__DOT__lfsr_xor = VL_RAND_RESET_I(31);
    vlSelf->tb__DOT__u_rng__DOT__err_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__wstrb_incomp = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(120, vlSelf->tb__DOT__u_led__DOT__led_r_q);
    VL_RAND_RESET_W(120, vlSelf->tb__DOT__u_led__DOT__led_g_q);
    VL_RAND_RESET_W(120, vlSelf->tb__DOT__u_led__DOT__led_b_q);
    vlSelf->tb__DOT__u_led__DOT__val = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__u_led__DOT__r_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__g_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__b_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__err_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__8__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__9__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_2 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_3 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_6 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_7 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_8 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_9 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_10 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_11 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_12 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_13 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_14 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_15 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_16 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_17 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_18 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_19 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_20 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_21 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_22 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_lcd__DOT__wen = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb__DOT__u_lcd__DOT__disp_q[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb__DOT__u_lcd__DOT__err_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__ext_vld_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__ext_val_q = VL_RAND_RESET_I(18);
    vlSelf->tb__DOT__u_but__DOT__ext_push = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__u_but__DOT__ext_switch = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__u_but__DOT__src = VL_RAND_RESET_I(18);
    vlSelf->tb__DOT__u_but__DOT__ptm_q = VL_RAND_RESET_I(20);
    vlSelf->tb__DOT__u_but__DOT__stm_q = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__u_but__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__sel_src = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__sel_ptm = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__sel_stm = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__wen_src = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__wen_ptm = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__wen_stm = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__clr_ptm = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__clr_stm = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT____Vcellout__u_ptm__src = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__u_but__DOT____Vcellout__u_stm__src = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__u_but__DOT__sel_q = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__src_edge = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__vld_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__val_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__src_edge = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__vld_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__val_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__src_edge = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__vld_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__val_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__src_edge = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__vld_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__val_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__src_edge = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__vld_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__val_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__src_edge = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__vld_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__val_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__src_edge = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__vld_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__val_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__src_edge = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__vld_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__val_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__src_edge = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__vld_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__val_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__src_edge = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__vld_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__val_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__src_edge = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__vld_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__val_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__src_edge = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__vld_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__val_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__src_edge = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__vld_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__val_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__src_edge = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__vld_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__val_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__src_edge = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__vld_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__val_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__src_edge = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__vld_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__val_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__src_edge = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__vld_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__val_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__src_edge = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__vld_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__val_q = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__VnbaEventTrigger = 0;
    vlSelf->__Vdly__tb__DOT__u_cpu__DOT__csr_mepc_q = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 30; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
