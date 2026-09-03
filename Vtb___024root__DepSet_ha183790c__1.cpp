// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__6(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__6\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__29(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__29\n"); );
    // Body
    vlSelf->tb__DOT__u_cpu__DOT__st_q = ((IData)(vlSelf->rst_ni)
                                          ? (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_nxt)
                                          : 0U);
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__7(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__7\n"); );
    // Body
    vlSelf->tb__DOT__u_cpu__DOT__de_ins = ((2U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q))
                                            ? vlSelf->tb__DOT__bus_rdata
                                            : vlSelf->tb__DOT__u_cpu__DOT__bus_data_q);
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
    vlSelf->tb__DOT__u_cpu__DOT__ex_ins_is_j = ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                | (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_jalr));
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__8(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__8\n"); );
    // Body
    vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h702d1d83__0 
        = (IData)((0x1000U == (0xfe007000U & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h87ebf8fd__0 
        = (IData)((0x5013U == (0x707fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h555416eb__0 
        = (IData)((0x5033U == (0x707fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_lh = (IData)(
                                                        (0x1003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_ev = (IData)(
                                                        (0x73U 
                                                         == 
                                                         (0xfffffU 
                                                          & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
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
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_ecall = 
        ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_ev) 
         & (IData)((0U == (0xfff00000U & vlSelf->tb__DOT__u_cpu__DOT__de_ins))));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_mret = ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_ev) 
                                                   & (IData)(
                                                             (0x30200000U 
                                                              == 
                                                              (0xfff00000U 
                                                               & vlSelf->tb__DOT__u_cpu__DOT__de_ins))));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sub = ((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h0a4778a7__0) 
                                                  & (0x20U 
                                                     == 
                                                     (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                      >> 0x19U)));
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sub = ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sub) 
                                               | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_slt) 
                                                  | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_slti) 
                                                     | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sltiu) 
                                                        | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sltu) 
                                                           | (0x63U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))))));
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__9(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__9\n"); );
    // Body
    vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_hc685467b__0 
        = (IData)(((0x1000U == (0x7000U & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                   & (0U != (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                             >> 0x19U))));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_funct7_eq_v 
        = ((0U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                   >> 0x19U)) | (0x20U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0x19U)));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_inv_bx = 
        ((2U == (7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                       >> 0xcU))) | (3U == (7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                  >> 0xcU))));
    vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_hff8699ac__0 
        = ((6U == (7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                         >> 0xcU))) | (7U == (7U & 
                                              (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                               >> 0xcU))));
    vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h91c39851__0 
        = ((~ (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_funct7_eq_v)) 
           & (0x5000U == (0x7000U & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h044e296a__0 
        = ((1U == (7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                         >> 0xcU))) | (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_inv_bx));
    vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h541efbc5__0 
        = ((5U == (7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                         >> 0xcU))) | (IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_hff8699ac__0));
    vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h9b6faebf__0 
        = ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_ecall) 
           | (((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_ev) 
               & (IData)((0x100000U == (0xfff00000U 
                                        & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))) 
              | (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_mret)));
    vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_hfbc50a14__0 
        = ((4U == (7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                         >> 0xcU))) | (IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h541efbc5__0));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_inv_jx = 
        ((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h044e296a__0) 
         | (IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_hfbc50a14__0));
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
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__10(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__10\n"); );
    // Body
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
    vlSelf->tb__DOT__bus_we = ((3U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q)) 
                               & (0x23U == (0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_lw = (IData)(
                                                        (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->tb__DOT__u_cpu__DOT__de_ins)));
    vlSelf->tb__DOT__u_cpu__DOT__ex_ins_is_ls = ((3U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                 | (0x23U 
                                                    == 
                                                    (0x7fU 
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
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__11(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__11\n"); );
    // Body
    vlSelf->tb__DOT__u_but__DOT__src = (((IData)(vlSelf->tb__DOT__u_but__DOT____Vcellout__u_stm__src) 
                                         << 0xaU) | (IData)(vlSelf->tb__DOT__u_but__DOT____Vcellout__u_ptm__src));
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__12(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__12\n"); );
    // Body
    vlSelf->tb__DOT__u_cpu__DOT__if_irq_e = ((IData)(vlSelf->tb__DOT__u_cpu__DOT__csr_mie_q) 
                                             & ((IData)(vlSelf->tb__DOT__u_cpu__DOT__csr_meie_q) 
                                                & (0U 
                                                   != vlSelf->tb__DOT__u_but__DOT__src)));
    vlSelf->tb__DOT__u_cpu__DOT__if_expt = ((IData)(vlSelf->tb__DOT__u_cpu__DOT__if_irq_e) 
                                            | (0U != 
                                               (3U 
                                                & vlSelf->tb__DOT__u_cpu__DOT__pc_q)));
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
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_srs = ((vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                >> 0x1eU) 
                                               & (vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_q 
                                                  >> 0x1fU));
    vlSelf->tb__DOT__u_cpu__DOT__ex_bru_add_op0 = (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (~ (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_jalr))))) 
                                                    & vlSelf->tb__DOT__u_cpu__DOT__pc_q) 
                                                   | ((- (IData)((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_jalr))) 
                                                      & vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_q));
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
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_lts = (1U & 
                                               ((~ (IData)(
                                                           (vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add 
                                                            >> 0x20U))) 
                                                ^ (
                                                   (vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_pc 
                                                    ^ vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_imm) 
                                                   >> 0x1fU)));
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
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__13(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__13\n"); );
    // Body
    vlSelf->tb__DOT__u_cpu__DOT__ex_csr_rs1 = ((0x4000U 
                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins)
                                                ? (0x1fU 
                                                   & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                      >> 0xfU))
                                                : vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_q);
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
    vlSelf->tb__DOT__u_cpu__DOT__wi_csr_we_mcause = 
        ((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mcause) 
         | (IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_expt_set));
    vlSelf->tb__DOT__u_cpu__DOT__wi_csr_we_mstatus 
        = ((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mstatus) 
           | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_expt_set) 
              | (IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_expt_ret)));
    vlSelf->tb__DOT__u_cpu__DOT__ex_alu_blt = (1U & 
                                               ((0x2000U 
                                                 & vlSelf->tb__DOT__u_cpu__DOT__de_ins)
                                                 ? 
                                                (~ (IData)(
                                                           (vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add 
                                                            >> 0x20U)))
                                                 : (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_lts)));
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
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__14(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__14\n"); );
    // Body
    vlSelf->led_g_o[0U] = vlSelf->tb__DOT__u_led__DOT__led_g_q[0U];
    vlSelf->led_g_o[1U] = vlSelf->tb__DOT__u_led__DOT__led_g_q[1U];
    vlSelf->led_g_o[2U] = vlSelf->tb__DOT__u_led__DOT__led_g_q[2U];
    vlSelf->led_g_o[3U] = vlSelf->tb__DOT__u_led__DOT__led_g_q[3U];
    vlSelf->led_b_o[0U] = vlSelf->tb__DOT__u_led__DOT__led_b_q[0U];
    vlSelf->led_b_o[1U] = vlSelf->tb__DOT__u_led__DOT__led_b_q[1U];
    vlSelf->led_b_o[2U] = vlSelf->tb__DOT__u_led__DOT__led_b_q[2U];
    vlSelf->led_b_o[3U] = vlSelf->tb__DOT__u_led__DOT__led_b_q[3U];
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__15(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__15\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__16(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__16\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__17(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__17\n"); );
    // Body
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
    if ((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata))) {
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
    } else {
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
    }
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__18(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__18\n"); );
    // Body
    vlSelf->led_r_o[0U] = vlSelf->tb__DOT__u_led__DOT__led_r_q[0U];
    vlSelf->led_r_o[1U] = vlSelf->tb__DOT__u_led__DOT__led_r_q[1U];
    vlSelf->led_r_o[2U] = vlSelf->tb__DOT__u_led__DOT__led_r_q[2U];
    vlSelf->led_r_o[3U] = vlSelf->tb__DOT__u_led__DOT__led_r_q[3U];
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__19(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__19\n"); );
    // Body
    if ((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata))) {
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 1U));
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
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 3U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
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
    } else {
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
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
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
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
    }
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__20(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__20\n"); );
    // Body
    if ((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata))) {
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
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xaU));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xaU));
    } else {
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
    }
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__21(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__21\n"); );
    // Body
    if ((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata))) {
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
    } else {
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
    }
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__22(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__22\n"); );
    // Body
    if ((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata))) {
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 2U));
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
    } else {
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
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
    }
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__23(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__23\n"); );
    // Body
    if ((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata))) {
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
    } else {
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
    }
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__24(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__24\n"); );
    // Body
    if ((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata))) {
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
    } else {
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
    }
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__25(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__25\n"); );
    // Body
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
    vlSelf->tb__DOT__u_rng__DOT__sel_val = ((~ (IData)(vlSelf->tb__DOT__bus_we)) 
                                            & (0U == 
                                               (0xfffU 
                                                & vlSelf->tb__DOT__bus_addr)));
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
    vlSelf->tb__DOT__u_led__DOT__wstrb_incomp = ((~ (IData)(
                                                            (0xfU 
                                                             == (IData)(vlSelf->tb__DOT__bus_wstrb)))) 
                                                 & (IData)(vlSelf->tb__DOT__bus_we));
    vlSelf->tb__DOT__bus_en = (((~ (IData)(vlSelf->tb__DOT__u_cpu__DOT__if_expt)) 
                                & (1U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q))) 
                               | ((3U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q)) 
                                  & ((~ (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_expt)) 
                                     & (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_ins_is_ls))));
    vlSelf->tb__DOT__mem_en = ((IData)(vlSelf->tb__DOT__bus_en) 
                               & (vlSelf->tb__DOT__bus_addr 
                                  >> 0x1fU));
    vlSelf->tb__DOT__rng_en = ((IData)(vlSelf->tb__DOT__bus_en) 
                               & (0x40000U == (vlSelf->tb__DOT__bus_addr 
                                               >> 0xcU)));
    vlSelf->tb__DOT__u_but__DOT__sel_stm = ((~ (IData)(vlSelf->tb__DOT__u_led__DOT__wstrb_incomp)) 
                                            & (0xcU 
                                               == (0xfffU 
                                                   & vlSelf->tb__DOT__bus_addr)));
    vlSelf->tb__DOT__u_but__DOT__sel_ptm = ((~ (IData)(vlSelf->tb__DOT__u_led__DOT__wstrb_incomp)) 
                                            & (8U == 
                                               (0xfffU 
                                                & vlSelf->tb__DOT__bus_addr)));
    vlSelf->tb__DOT__lcd_en = ((IData)(vlSelf->tb__DOT__bus_en) 
                               & (0x60000U == (vlSelf->tb__DOT__bus_addr 
                                               >> 0xcU)));
    vlSelf->tb__DOT__u_but__DOT__sel_src = ((~ (((IData)(vlSelf->tb__DOT__bus_we) 
                                                 & (0U 
                                                    != vlSelf->tb__DOT__bus_wdata)) 
                                                | (IData)(vlSelf->tb__DOT__u_led__DOT__wstrb_incomp))) 
                                            & (4U == 
                                               (0xfffU 
                                                & vlSelf->tb__DOT__bus_addr)));
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
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__26(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__26\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__27(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__27\n"); );
    // Body
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
    if ((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata))) {
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xbU));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xbU));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 8U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 0xbU));
    } else {
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 1U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 4U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
    }
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__28(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__28\n"); );
    // Body
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8e759b18__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd850f4e2__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8fd62221__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd850f4e2__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9bbd0f__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd850f4e2__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8e759b18__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8532756__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8fd62221__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8532756__0));
    vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__sel 
        = ((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9bbd0f__0) 
           & (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8532756__0));
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
    if ((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata))) {
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
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 5U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 7U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 2U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 3U));
    } else {
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
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 6U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
        vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__nxt 
            = (1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                     >> 9U));
    }
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

void Vtb___024root___timing_resume(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_resume\n"); );
    // Body
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hd48f37a9__0.resume("@([event] __VnbaEvent)");
    }
}

void Vtb___024root___timing_commit(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_commit\n"); );
    // Body
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hd48f37a9__0.commit("@([event] __VnbaEvent)");
    }
}

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf);
void Vtb___024root___eval_act(Vtb___024root* vlSelf);

bool Vtb___024root___eval_phase__act(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb___024root___eval_triggers__act(vlSelf);
    Vtb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb___024root___timing_resume(vlSelf);
        Vtb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtb___024root___eval_nba(Vtb___024root* vlSelf);

bool Vtb___024root___eval_phase__nba(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    if (vlSelf->__VnbaEventTrigger) {
        __VnbaExecute = 1U;
        vlSelf->__VnbaEventTrigger = 0U;
        vlSelf->__VnbaEvent.fire();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__ico(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
bool Vtb___024root___eval_phase__ico(Vtb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/eryilmaz/cs-200/infrastructure/debugger/../processor/tb.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtb___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/eryilmaz/cs-200/infrastructure/debugger/../processor/tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/eryilmaz/cs-200/infrastructure/debugger/../processor/tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelf->button_top_i & 0xfeU))) {
        Verilated::overWidthError("button_top_i");}
    if (VL_UNLIKELY((vlSelf->button_bottom_i & 0xfeU))) {
        Verilated::overWidthError("button_bottom_i");}
    if (VL_UNLIKELY((vlSelf->button_left_i & 0xfeU))) {
        Verilated::overWidthError("button_left_i");}
    if (VL_UNLIKELY((vlSelf->button_right_i & 0xfeU))) {
        Verilated::overWidthError("button_right_i");}
    if (VL_UNLIKELY((vlSelf->button_center_i & 0xfeU))) {
        Verilated::overWidthError("button_center_i");}
    if (VL_UNLIKELY((vlSelf->joystick_up_i & 0xfeU))) {
        Verilated::overWidthError("joystick_up_i");}
    if (VL_UNLIKELY((vlSelf->joystick_down_i & 0xfeU))) {
        Verilated::overWidthError("joystick_down_i");}
    if (VL_UNLIKELY((vlSelf->joystick_left_i & 0xfeU))) {
        Verilated::overWidthError("joystick_left_i");}
    if (VL_UNLIKELY((vlSelf->joystick_right_i & 0xfeU))) {
        Verilated::overWidthError("joystick_right_i");}
    if (VL_UNLIKELY((vlSelf->joystick_pressed_i & 0xfeU))) {
        Verilated::overWidthError("joystick_pressed_i");}
}
#endif  // VL_DEBUG
