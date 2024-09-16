// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U]) | vlSelfRef.__Vm_traceActivity
                     [6U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb__DOT__u_cpu__DOT__gpr_q[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0xaU]))) {
        bufp->chgBit(oldp+32,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__src_edge));
        bufp->chgBit(oldp+33,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__src_edge));
        bufp->chgBit(oldp+34,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__src_edge));
        bufp->chgBit(oldp+35,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__src_edge));
        bufp->chgBit(oldp+36,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__src_edge));
        bufp->chgBit(oldp+37,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__src_edge));
        bufp->chgBit(oldp+38,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__src_edge));
        bufp->chgBit(oldp+39,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__src_edge));
        bufp->chgBit(oldp+40,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__src_edge));
        bufp->chgBit(oldp+41,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__src_edge));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0xcU]))) {
        bufp->chgIData(oldp+42,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins),32);
        bufp->chgCData(oldp+43,((0x1fU & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+44,((0x1fU & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+45,((0x1fU & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                          >> 7U))),5);
        bufp->chgCData(oldp+46,((0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)),7);
        bufp->chgCData(oldp+47,((7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+48,((vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                 >> 0x19U)),7);
        bufp->chgIData(oldp+49,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_imm_i),32);
        bufp->chgIData(oldp+50,((((- (IData)((vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+51,((((- (IData)((vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
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
        bufp->chgIData(oldp+52,((0xfffff000U & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)),32);
        bufp->chgIData(oldp+53,((((- (IData)((vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins) 
                                               | ((0x800U 
                                                   & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                        >> 0x14U)))))),32);
        bufp->chgBit(oldp+54,((0U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+55,((1U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+56,((2U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+57,((3U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+58,((4U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+59,((5U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+60,((6U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+61,((7U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+62,((0U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                      >> 0x19U))));
        bufp->chgBit(oldp+63,((0x20U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                         >> 0x19U))));
        bufp->chgBit(oldp+64,((0x18U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                         >> 0x19U))));
        bufp->chgBit(oldp+65,((0U == (0x1fU & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+66,((0U == (0x1fU & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+67,((1U == (0x1fU & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+68,((2U == (0x1fU & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+69,((0U == (0x1fU & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                               >> 7U)))));
        bufp->chgSData(oldp+70,((vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                 >> 0x14U)),12);
        bufp->chgBit(oldp+71,((1U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                     >> 0xcU))));
        bufp->chgBit(oldp+72,((1U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                     >> 0xdU))));
        bufp->chgBit(oldp+73,((1U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+74,((1U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                     >> 0xeU))));
        bufp->chgBit(oldp+75,((0x37U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
        bufp->chgBit(oldp+76,((0x17U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
        bufp->chgBit(oldp+77,((0x6fU == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
        bufp->chgBit(oldp+78,((0x67U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
        bufp->chgBit(oldp+79,((0x63U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
        bufp->chgBit(oldp+80,((3U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
        bufp->chgBit(oldp+81,((0x23U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
        bufp->chgBit(oldp+82,((0x13U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
        bufp->chgBit(oldp+83,((0x33U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
        bufp->chgBit(oldp+84,((0xfU == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
        bufp->chgBit(oldp+85,((0x73U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))));
        bufp->chgBit(oldp+86,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_jalr));
        bufp->chgBit(oldp+87,((IData)((0x63U == (0x707fU 
                                                 & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+88,((IData)((0x1063U == (0x707fU 
                                                   & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+89,((IData)((0x4063U == (0x707fU 
                                                   & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+90,((IData)((0x5063U == (0x707fU 
                                                   & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+91,((IData)((0x6063U == (0x707fU 
                                                   & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+92,((IData)((0x7063U == (0x707fU 
                                                   & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+93,((IData)((3U == (0x707fU 
                                              & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+94,((IData)((0x4003U == (0x707fU 
                                                   & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+95,((IData)((0x5003U == (0x707fU 
                                                   & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+96,((IData)((0x13U == (0x707fU 
                                                 & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+97,((IData)((0x4013U == (0x707fU 
                                                   & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+98,((IData)((0x6013U == (0x707fU 
                                                   & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+99,((IData)((0x7013U == (0x707fU 
                                                   & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+100,((IData)((0x4033U == 
                                        (0xfe00707fU 
                                         & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+101,((IData)((0x6033U == 
                                        (0xfe00707fU 
                                         & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+102,((IData)((0x7033U == 
                                        (0xfe00707fU 
                                         & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+103,((IData)((0xfU == (0x707fU 
                                                 & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+104,((0x300U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0x14U))));
        bufp->chgBit(oldp+105,((0x304U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0x14U))));
        bufp->chgBit(oldp+106,((0x305U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0x14U))));
        bufp->chgBit(oldp+107,((0x341U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0x14U))));
        bufp->chgBit(oldp+108,((0x342U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0x14U))));
        bufp->chgBit(oldp+109,((0x344U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0x14U))));
        bufp->chgBit(oldp+110,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_ins_is_j));
        bufp->chgBit(oldp+111,(((0x17U != (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                & ((0x37U != (0x7fU 
                                              & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                   & (~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_ins_is_j))))));
        bufp->chgCData(oldp+112,(((3U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))
                                   ? 4U : 6U)),6);
        bufp->chgCData(oldp+113,(((3U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))
                                   ? 5U : 7U)),6);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xcU]) | vlSelfRef.__Vm_traceActivity
                     [0xdU]))) {
        bufp->chgBit(oldp+114,(((0x13U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_33))));
        bufp->chgBit(oldp+115,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_3) 
                                & (0U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+116,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_3) 
                                & (0x20U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                             >> 0x19U)))));
        bufp->chgBit(oldp+117,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_4) 
                                & (0U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+118,(((0x33U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_33))));
        bufp->chgBit(oldp+119,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_5) 
                                & (0U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+120,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_5) 
                                & (0x20U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                             >> 0x19U)))));
        bufp->chgBit(oldp+121,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_ev) 
                                & (IData)((0x100000U 
                                           == (0xfff00000U 
                                               & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))))));
        bufp->chgBit(oldp+122,(((0x37U == (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                | ((0x17U == (0x7fU 
                                              & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                   | (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_4) 
                                       & (0U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                 >> 0x19U))) 
                                      | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sub) 
                                         | ((IData)(
                                                    (0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))) 
                                            | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_ins_is_j))))))));
        bufp->chgBit(oldp+123,((((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_5) 
                                 & (0U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0x19U))) 
                                | (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_5) 
                                    & (0x20U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                 >> 0x19U))) 
                                   | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_3) 
                                      & ((0U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                 >> 0x19U)) 
                                         | (0x20U == 
                                            (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                             >> 0x19U))))))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0xdU]))) {
        bufp->chgBit(oldp+124,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_lh));
        bufp->chgBit(oldp+125,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_slti));
        bufp->chgBit(oldp+126,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sltiu));
        bufp->chgBit(oldp+127,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sub));
        bufp->chgBit(oldp+128,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_slt));
        bufp->chgBit(oldp+129,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sltu));
        bufp->chgBit(oldp+130,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_ev));
        bufp->chgBit(oldp+131,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_ecall));
        bufp->chgBit(oldp+132,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_mret));
        bufp->chgBit(oldp+133,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sub));
        bufp->chgIData(oldp+134,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sub),32);
        bufp->chgBit(oldp+135,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_slt) 
                                | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_slti) 
                                   | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sltu) 
                                      | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sltiu))))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0xeU]))) {
        bufp->chgBit(oldp+136,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_inv) 
                                | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))));
        bufp->chgBit(oldp+137,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_funct7_eq_v));
        bufp->chgBit(oldp+138,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_inv_jx));
        bufp->chgBit(oldp+139,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_inv_bx));
        bufp->chgBit(oldp+140,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_30) 
                                | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_29))));
        bufp->chgBit(oldp+141,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_inv));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0xfU]))) {
        bufp->chgBit(oldp+142,(vlSelfRef.tb__DOT__bus_we));
        bufp->chgIData(oldp+143,(vlSelfRef.tb__DOT__bus_wdata),32);
        bufp->chgBit(oldp+144,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__src_edge));
        bufp->chgBit(oldp+145,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__src_edge));
        bufp->chgBit(oldp+146,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__src_edge));
        bufp->chgBit(oldp+147,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__src_edge));
        bufp->chgBit(oldp+148,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__src_edge));
        bufp->chgBit(oldp+149,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__src_edge));
        bufp->chgBit(oldp+150,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__src_edge));
        bufp->chgBit(oldp+151,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__src_edge));
        bufp->chgBit(oldp+152,(vlSelfRef.tb__DOT__u_cpu__DOT__wb_expt));
        bufp->chgBit(oldp+153,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_lw));
        bufp->chgBit(oldp+154,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sb));
        bufp->chgBit(oldp+155,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sh));
        bufp->chgBit(oldp+156,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sw));
        bufp->chgBit(oldp+157,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_ins_is_ls));
        bufp->chgBit(oldp+158,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_lsu_sz_mask_hi));
        bufp->chgCData(oldp+159,((0xfU & vlSelfRef.tb__DOT__bus_wdata)),4);
        bufp->chgCData(oldp+160,((0xfU & (vlSelfRef.tb__DOT__bus_wdata 
                                          >> 4U))),4);
        bufp->chgBit(oldp+161,((0xfU == (0xfU & vlSelfRef.tb__DOT__bus_wdata))));
        bufp->chgBit(oldp+162,((0xfU == (0xfU & (vlSelfRef.tb__DOT__bus_wdata 
                                                 >> 4U)))));
        bufp->chgSData(oldp+163,((((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_11) 
                                   << 0xbU) | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_10) 
                                                << 0xaU) 
                                               | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_9) 
                                                   << 9U) 
                                                  | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_8) 
                                                      << 8U) 
                                                     | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_7) 
                                                         << 7U) 
                                                        | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_6) 
                                                            << 6U) 
                                                           | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_5) 
                                                               << 5U) 
                                                              | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_4) 
                                                                  << 4U) 
                                                                 | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_3) 
                                                                     << 3U) 
                                                                    | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_2) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_1) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_0))))))))))))),12);
        bufp->chgSData(oldp+164,((((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_21) 
                                   << 9U) | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_20) 
                                              << 8U) 
                                             | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_19) 
                                                 << 7U) 
                                                | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_18) 
                                                    << 6U) 
                                                   | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_17) 
                                                       << 5U) 
                                                      | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_16) 
                                                          << 4U) 
                                                         | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_15) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_14) 
                                                                << 2U) 
                                                               | (((IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_13) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.tb__DOT__u_led__DOT____VdfgRegularize_h7b819956_0_12))))))))))),10);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0x10U]))) {
        bufp->chgBit(oldp+165,(vlSelfRef.tb__DOT__u_cpu__DOT__if_expt));
        bufp->chgBit(oldp+166,(vlSelfRef.tb__DOT__u_cpu__DOT__if_irq_e));
        bufp->chgCData(oldp+167,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__if_irq_e)
                                   ? 0xbU : 0U)),6);
        bufp->chgIData(oldp+168,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_pc),32);
        bufp->chgIData(oldp+169,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_imm),32);
        bufp->chgIData(oldp+170,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add_op1),32);
        bufp->chgQData(oldp+171,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add),33);
        bufp->chgIData(oldp+173,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_xor),32);
        bufp->chgBit(oldp+174,((0U == vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_xor)));
        bufp->chgBit(oldp+175,((1U & (~ (IData)((vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+176,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_lts));
        bufp->chgBit(oldp+177,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_srs));
        bufp->chgIData(oldp+178,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl0),32);
        bufp->chgIData(oldp+179,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl1),32);
        bufp->chgIData(oldp+180,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl2),32);
        bufp->chgIData(oldp+181,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl3),32);
        bufp->chgIData(oldp+182,(((0x10U & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_imm)
                                   ? VL_SHIFTL_III(32,32,32, vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl3, 0x10U)
                                   : vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sl3)),32);
        bufp->chgIData(oldp+183,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr0),32);
        bufp->chgIData(oldp+184,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr1),32);
        bufp->chgIData(oldp+185,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr2),32);
        bufp->chgIData(oldp+186,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr3),32);
    }
}

void Vtb___024root__trace_chg_1_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb___024root__trace_chg_1(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_1\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb___024root__trace_chg_1_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb___024root__trace_chg_1_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_1_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 188);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0x10U]))) {
        bufp->chgIData(oldp+0,(((0x10U & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_imm)
                                 ? (((- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_srs))) 
                                     << 0x10U) | (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr3 
                                                  >> 0x10U))
                                 : vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sr3)),32);
        bufp->chgCData(oldp+1,(((1U & (- (IData)((0U 
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
        bufp->chgCData(oldp+2,(((3U & (- (IData)((1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add 
                                                                >> 1U))))))) 
                                | (0xcU & (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add 
                                                                 >> 1U)))))))),4);
        bufp->chgIData(oldp+3,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_csr_rdata),32);
        bufp->chgCData(oldp+4,(vlSelfRef.tb__DOT__u_cpu__DOT__wb_lsu_lb),8);
        bufp->chgSData(oldp+5,(vlSelfRef.tb__DOT__u_cpu__DOT__wb_lsu_lh),16);
        bufp->chgBit(oldp+6,(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_set));
        bufp->chgBit(oldp+7,(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_ret));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0x11U]))) {
        bufp->chgBit(oldp+8,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+9,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
        bufp->chgBit(oldp+10,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
        bufp->chgBit(oldp+11,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
        bufp->chgBit(oldp+12,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
        bufp->chgBit(oldp+13,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
        bufp->chgBit(oldp+14,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
        bufp->chgBit(oldp+15,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
        bufp->chgBit(oldp+16,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
        bufp->chgBit(oldp+17,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
        bufp->chgBit(oldp+18,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
        bufp->chgBit(oldp+19,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
        bufp->chgBit(oldp+20,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+21,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
        bufp->chgBit(oldp+22,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
        bufp->chgBit(oldp+23,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
        bufp->chgBit(oldp+24,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
        bufp->chgBit(oldp+25,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
        bufp->chgBit(oldp+26,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
        bufp->chgBit(oldp+27,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
        bufp->chgBit(oldp+28,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
        bufp->chgBit(oldp+29,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
        bufp->chgBit(oldp+30,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
        bufp->chgBit(oldp+31,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
        bufp->chgBit(oldp+32,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+33,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
        bufp->chgBit(oldp+34,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
        bufp->chgBit(oldp+35,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
        bufp->chgBit(oldp+36,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
        bufp->chgBit(oldp+37,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
        bufp->chgBit(oldp+38,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+39,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
        bufp->chgBit(oldp+40,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
        bufp->chgBit(oldp+41,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
        bufp->chgBit(oldp+42,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
        bufp->chgBit(oldp+43,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
        bufp->chgBit(oldp+44,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
        bufp->chgBit(oldp+45,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
        bufp->chgBit(oldp+46,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
        bufp->chgBit(oldp+47,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
        bufp->chgBit(oldp+48,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
        bufp->chgBit(oldp+49,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
        bufp->chgBit(oldp+50,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
        bufp->chgBit(oldp+51,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
        bufp->chgBit(oldp+52,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
        bufp->chgBit(oldp+53,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
        bufp->chgBit(oldp+54,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
        bufp->chgBit(oldp+55,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
        bufp->chgBit(oldp+56,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
        bufp->chgBit(oldp+57,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
        bufp->chgBit(oldp+58,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
        bufp->chgBit(oldp+59,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
        bufp->chgBit(oldp+60,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
        bufp->chgBit(oldp+61,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0x12U]))) {
        bufp->chgBit(oldp+62,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
        bufp->chgBit(oldp+63,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
        bufp->chgBit(oldp+64,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
        bufp->chgBit(oldp+65,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
        bufp->chgBit(oldp+66,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
        bufp->chgBit(oldp+67,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
        bufp->chgBit(oldp+68,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
        bufp->chgBit(oldp+69,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
        bufp->chgBit(oldp+70,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
        bufp->chgBit(oldp+71,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
        bufp->chgBit(oldp+72,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
        bufp->chgBit(oldp+73,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
        bufp->chgBit(oldp+74,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+75,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
        bufp->chgBit(oldp+76,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
        bufp->chgBit(oldp+77,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
        bufp->chgBit(oldp+78,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
        bufp->chgBit(oldp+79,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
        bufp->chgBit(oldp+80,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
        bufp->chgBit(oldp+81,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+82,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
        bufp->chgBit(oldp+83,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
        bufp->chgBit(oldp+84,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
        bufp->chgBit(oldp+85,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
        bufp->chgBit(oldp+86,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
        bufp->chgBit(oldp+87,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
        bufp->chgBit(oldp+88,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+89,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
        bufp->chgBit(oldp+90,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
        bufp->chgBit(oldp+91,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
        bufp->chgBit(oldp+92,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
        bufp->chgBit(oldp+93,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
        bufp->chgBit(oldp+94,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
        bufp->chgBit(oldp+95,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
        bufp->chgBit(oldp+96,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
        bufp->chgBit(oldp+97,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
        bufp->chgBit(oldp+98,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
        bufp->chgBit(oldp+99,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
        bufp->chgBit(oldp+100,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+101,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
        bufp->chgBit(oldp+102,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
        bufp->chgBit(oldp+103,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
        bufp->chgBit(oldp+104,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
        bufp->chgBit(oldp+105,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
        bufp->chgBit(oldp+106,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
        bufp->chgBit(oldp+107,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
        bufp->chgBit(oldp+108,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
        bufp->chgBit(oldp+109,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
        bufp->chgBit(oldp+110,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
        bufp->chgBit(oldp+111,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
        bufp->chgBit(oldp+112,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+113,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
        bufp->chgBit(oldp+114,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
        bufp->chgBit(oldp+115,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
        bufp->chgBit(oldp+116,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
        bufp->chgBit(oldp+117,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
        bufp->chgBit(oldp+118,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
        bufp->chgBit(oldp+119,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+120,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
        bufp->chgBit(oldp+121,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
        bufp->chgBit(oldp+122,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
        bufp->chgBit(oldp+123,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
        bufp->chgBit(oldp+124,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
        bufp->chgBit(oldp+125,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0x13U]))) {
        bufp->chgBit(oldp+126,(vlSelfRef.tb__DOT__bus_en));
        bufp->chgIData(oldp+127,(vlSelfRef.tb__DOT__bus_addr),32);
        bufp->chgCData(oldp+128,(vlSelfRef.tb__DOT__bus_wstrb),4);
        bufp->chgSData(oldp+129,((0xfffU & vlSelfRef.tb__DOT__bus_addr)),12);
        bufp->chgBit(oldp+130,(vlSelfRef.tb__DOT__mem_en));
        bufp->chgBit(oldp+131,(vlSelfRef.tb__DOT__rng_en));
        bufp->chgBit(oldp+132,(vlSelfRef.tb__DOT__led_en));
        bufp->chgBit(oldp+133,(vlSelfRef.tb__DOT__lcd_en));
        bufp->chgBit(oldp+134,(vlSelfRef.tb__DOT__but_en));
        bufp->chgBit(oldp+135,(((IData)(vlSelfRef.tb__DOT__bus_en) 
                                & (0x10000U == (vlSelfRef.tb__DOT__bus_addr 
                                                >> 0xcU)))));
        bufp->chgBit(oldp+136,(vlSelfRef.tb__DOT__u_but__DOT__wen));
        bufp->chgBit(oldp+137,(vlSelfRef.tb__DOT__u_led__DOT__wstrb_incomp));
        bufp->chgBit(oldp+138,(vlSelfRef.tb__DOT__u_rng__DOT__sel_val));
        bufp->chgBit(oldp+139,(vlSelfRef.tb__DOT__u_but__DOT__sel_src));
        bufp->chgBit(oldp+140,(vlSelfRef.tb__DOT__u_but__DOT__sel_ptm));
        bufp->chgBit(oldp+141,(vlSelfRef.tb__DOT__u_but__DOT__sel_stm));
        bufp->chgBit(oldp+142,(vlSelfRef.tb__DOT__u_but__DOT__wen_src));
        bufp->chgBit(oldp+143,(vlSelfRef.tb__DOT__u_but__DOT__wen_ptm));
        bufp->chgBit(oldp+144,(vlSelfRef.tb__DOT__u_but__DOT__wen_stm));
        bufp->chgBit(oldp+145,(vlSelfRef.tb__DOT__u_but__DOT__clr_ptm));
        bufp->chgBit(oldp+146,(vlSelfRef.tb__DOT__u_but__DOT__clr_stm));
        bufp->chgCData(oldp+147,(vlSelfRef.tb__DOT__u_cpu__DOT__st_nxt),3);
        bufp->chgBit(oldp+148,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_expt));
        bufp->chgBit(oldp+149,(vlSelfRef.tb__DOT__u_lcd__DOT__wen));
        bufp->chgBit(oldp+150,((0U == (0xfffU & vlSelfRef.tb__DOT__bus_addr))));
        bufp->chgBit(oldp+151,(vlSelfRef.tb__DOT__u_led__DOT__wen));
        bufp->chgBit(oldp+152,(((~ (IData)(vlSelfRef.tb__DOT__u_led__DOT__wstrb_incomp)) 
                                & (0U == (0xfffU & vlSelfRef.tb__DOT__bus_addr)))));
        bufp->chgBit(oldp+153,((0xf0000000U >= vlSelfRef.tb__DOT__bus_addr)));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0x14U]))) {
        bufp->chgBit(oldp+154,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrw));
        bufp->chgBit(oldp+155,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrs));
        bufp->chgBit(oldp+156,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrc));
        bufp->chgBit(oldp+157,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrwi));
        bufp->chgBit(oldp+158,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrsi));
        bufp->chgBit(oldp+159,(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_csrrci));
        bufp->chgBit(oldp+160,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_blt));
        bufp->chgBit(oldp+161,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_bru_cmp));
        bufp->chgIData(oldp+162,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_csr_rs1),32);
        bufp->chgIData(oldp+163,(vlSelfRef.tb__DOT__u_cpu__DOT__wb_gpr_wdata),32);
        bufp->chgBit(oldp+164,(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we));
        bufp->chgIData(oldp+165,(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_wdata),32);
        bufp->chgBit(oldp+166,(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mstatus));
        bufp->chgBit(oldp+167,(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mie));
        bufp->chgBit(oldp+168,(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mepc));
        bufp->chgBit(oldp+169,(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mcause));
        bufp->chgBit(oldp+170,(vlSelfRef.tb__DOT__u_cpu__DOT__wi_csr_we_mstatus));
        bufp->chgBit(oldp+171,(vlSelfRef.tb__DOT__u_cpu__DOT__wi_csr_we_mcause));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0x15U]))) {
        bufp->chgSData(oldp+172,(vlSelfRef.tb__DOT__u_led__DOT__val),12);
        bufp->chgBit(oldp+173,(vlSelfRef.tb__DOT__u_led__DOT__r_en));
        bufp->chgBit(oldp+174,(vlSelfRef.tb__DOT__u_led__DOT__g_en));
        bufp->chgBit(oldp+175,(vlSelfRef.tb__DOT__u_led__DOT__b_en));
        bufp->chgBit(oldp+176,((1U & (IData)(vlSelfRef.tb__DOT__u_led__DOT__val))));
        bufp->chgBit(oldp+177,((1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                      >> 1U))));
        bufp->chgBit(oldp+178,((1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                      >> 2U))));
        bufp->chgBit(oldp+179,((1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                      >> 3U))));
        bufp->chgBit(oldp+180,((1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                      >> 4U))));
        bufp->chgBit(oldp+181,((1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                      >> 5U))));
        bufp->chgBit(oldp+182,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
        bufp->chgBit(oldp+183,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
        bufp->chgBit(oldp+184,((1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                      >> 6U))));
        bufp->chgBit(oldp+185,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
        bufp->chgBit(oldp+186,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
    }
}

void Vtb___024root__trace_chg_2_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb___024root__trace_chg_2(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_2\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb___024root__trace_chg_2_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb___024root__trace_chg_2_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_2_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 375);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0x15U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
        bufp->chgBit(oldp+1,((1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                    >> 7U))));
        bufp->chgBit(oldp+2,((1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                    >> 8U))));
        bufp->chgBit(oldp+3,((1U & ((IData)(vlSelfRef.tb__DOT__u_led__DOT__val) 
                                    >> 9U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0x16U]))) {
        bufp->chgBit(oldp+4,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
        bufp->chgBit(oldp+5,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
        bufp->chgBit(oldp+6,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
        bufp->chgBit(oldp+7,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
        bufp->chgBit(oldp+8,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
        bufp->chgBit(oldp+9,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
        bufp->chgBit(oldp+10,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
        bufp->chgBit(oldp+11,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
        bufp->chgBit(oldp+12,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0x17U]))) {
        bufp->chgBit(oldp+13,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
        bufp->chgBit(oldp+14,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
        bufp->chgBit(oldp+15,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
        bufp->chgBit(oldp+16,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
        bufp->chgBit(oldp+17,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
        bufp->chgBit(oldp+18,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
        bufp->chgBit(oldp+19,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
        bufp->chgBit(oldp+20,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
        bufp->chgBit(oldp+21,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
        bufp->chgBit(oldp+22,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0x18U]))) {
        bufp->chgBit(oldp+23,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
        bufp->chgBit(oldp+24,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
        bufp->chgBit(oldp+25,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
        bufp->chgBit(oldp+26,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
        bufp->chgBit(oldp+27,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
        bufp->chgBit(oldp+28,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
        bufp->chgBit(oldp+29,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
        bufp->chgBit(oldp+30,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
        bufp->chgBit(oldp+31,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
        bufp->chgBit(oldp+32,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0x19U]))) {
        bufp->chgBit(oldp+33,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
        bufp->chgBit(oldp+34,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
        bufp->chgBit(oldp+35,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
        bufp->chgBit(oldp+36,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
        bufp->chgBit(oldp+37,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
        bufp->chgBit(oldp+38,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
        bufp->chgBit(oldp+39,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
        bufp->chgBit(oldp+40,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
        bufp->chgBit(oldp+41,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
        bufp->chgBit(oldp+42,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
        bufp->chgBit(oldp+43,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
        bufp->chgBit(oldp+44,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
        bufp->chgBit(oldp+45,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
        bufp->chgBit(oldp+46,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0x1aU]))) {
        bufp->chgBit(oldp+47,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
        bufp->chgBit(oldp+48,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
        bufp->chgBit(oldp+49,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
        bufp->chgBit(oldp+50,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
        bufp->chgBit(oldp+51,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
        bufp->chgBit(oldp+52,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
        bufp->chgBit(oldp+53,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
        bufp->chgBit(oldp+54,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
        bufp->chgBit(oldp+55,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
        bufp->chgBit(oldp+56,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
        bufp->chgBit(oldp+57,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
        bufp->chgBit(oldp+58,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
        bufp->chgBit(oldp+59,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
        bufp->chgBit(oldp+60,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
        bufp->chgBit(oldp+61,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
        bufp->chgBit(oldp+62,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0x1bU]))) {
        bufp->chgBit(oldp+63,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
        bufp->chgBit(oldp+64,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
        bufp->chgBit(oldp+65,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
        bufp->chgBit(oldp+66,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
        bufp->chgBit(oldp+67,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
        bufp->chgBit(oldp+68,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
        bufp->chgBit(oldp+69,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
        bufp->chgBit(oldp+70,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
        bufp->chgBit(oldp+71,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
        bufp->chgBit(oldp+72,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
        bufp->chgBit(oldp+73,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
        bufp->chgBit(oldp+74,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
        bufp->chgBit(oldp+75,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
        bufp->chgBit(oldp+76,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
        bufp->chgBit(oldp+77,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
        bufp->chgBit(oldp+78,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0x1cU]))) {
        bufp->chgBit(oldp+79,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
        bufp->chgBit(oldp+80,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
        bufp->chgBit(oldp+81,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
        bufp->chgBit(oldp+82,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
        bufp->chgBit(oldp+83,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
        bufp->chgBit(oldp+84,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
        bufp->chgBit(oldp+85,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
        bufp->chgBit(oldp+86,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
        bufp->chgBit(oldp+87,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
        bufp->chgBit(oldp+88,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
        bufp->chgBit(oldp+89,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
        bufp->chgBit(oldp+90,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
        bufp->chgBit(oldp+91,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
        bufp->chgBit(oldp+92,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
        bufp->chgBit(oldp+93,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
        bufp->chgBit(oldp+94,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0x1dU]))) {
        bufp->chgBit(oldp+95,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
        bufp->chgBit(oldp+96,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
        bufp->chgBit(oldp+97,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
        bufp->chgBit(oldp+98,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
        bufp->chgBit(oldp+99,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
        bufp->chgBit(oldp+100,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
        bufp->chgBit(oldp+101,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
        bufp->chgBit(oldp+102,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
        bufp->chgBit(oldp+103,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
        bufp->chgBit(oldp+104,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
        bufp->chgBit(oldp+105,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
        bufp->chgBit(oldp+106,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
        bufp->chgBit(oldp+107,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
        bufp->chgBit(oldp+108,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
        bufp->chgBit(oldp+109,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
        bufp->chgBit(oldp+110,(vlSelfRef.tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+111,(vlSelfRef.tb__DOT__u_mem__DOT__rdata_q),32);
        bufp->chgBit(oldp+112,(vlSelfRef.tb__DOT__u_mem__DOT__err_q));
        bufp->chgBit(oldp+113,(vlSelfRef.tb__DOT__u_rng__DOT__err_q));
        bufp->chgBit(oldp+114,(vlSelfRef.tb__DOT__u_led__DOT__err_q));
        bufp->chgBit(oldp+115,(vlSelfRef.tb__DOT__u_lcd__DOT__err_q));
        bufp->chgBit(oldp+116,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelfRef.tb__DOT__u_but__DOT__sel_q)))))));
        bufp->chgCData(oldp+117,(vlSelfRef.tb__DOT__u_but__DOT__sel_q),4);
        bufp->chgIData(oldp+118,(vlSelfRef.tb__DOT__u_cpu__DOT__bus_data_q),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+119,(vlSelfRef.tb__DOT__u_bus__DOT__mem_en_q));
        bufp->chgBit(oldp+120,(vlSelfRef.tb__DOT__u_bus__DOT__rng_en_q));
        bufp->chgBit(oldp+121,(vlSelfRef.tb__DOT__u_bus__DOT__led_en_q));
        bufp->chgBit(oldp+122,(vlSelfRef.tb__DOT__u_bus__DOT__lcd_en_q));
        bufp->chgBit(oldp+123,(vlSelfRef.tb__DOT__u_bus__DOT__but_en_q));
        bufp->chgBit(oldp+124,(vlSelfRef.tb__DOT__u_bus__DOT__tmp_en_q));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+125,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__val_q));
        bufp->chgBit(oldp+126,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__val_q));
        bufp->chgBit(oldp+127,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__val_q));
        bufp->chgBit(oldp+128,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__val_q));
        bufp->chgBit(oldp+129,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__val_q));
        bufp->chgBit(oldp+130,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__val_q));
        bufp->chgBit(oldp+131,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__val_q));
        bufp->chgBit(oldp+132,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__val_q));
        bufp->chgCData(oldp+133,(vlSelfRef.tb__DOT__u_cpu__DOT__ie_q),3);
        bufp->chgIData(oldp+134,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_q),32);
        bufp->chgIData(oldp+135,(vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_q),32);
        bufp->chgBit(oldp+136,((1U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_q))));
        bufp->chgBit(oldp+137,((2U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_q))));
        bufp->chgBit(oldp+138,((3U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_q))));
        bufp->chgBit(oldp+139,((4U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_q))));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[7U])) {
        bufp->chgSData(oldp+140,(vlSelfRef.tb__DOT__u_but__DOT__stm_q),16);
        bufp->chgIData(oldp+141,(vlSelfRef.tb__DOT__u_but__DOT__stm_q),32);
        bufp->chgCData(oldp+142,((3U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q))),2);
        bufp->chgBit(oldp+143,((0U == (3U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q)))));
        bufp->chgBit(oldp+144,((1U == (3U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q)))));
        bufp->chgBit(oldp+145,((2U == (3U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q)))));
        bufp->chgBit(oldp+146,((3U == (3U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q)))));
        bufp->chgBit(oldp+147,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__vld_q));
        bufp->chgCData(oldp+148,((3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                        >> 2U))),2);
        bufp->chgBit(oldp+149,((0U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 2U)))));
        bufp->chgBit(oldp+150,((1U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 2U)))));
        bufp->chgBit(oldp+151,((2U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 2U)))));
        bufp->chgBit(oldp+152,((3U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 2U)))));
        bufp->chgBit(oldp+153,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__vld_q));
        bufp->chgCData(oldp+154,((3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                        >> 4U))),2);
        bufp->chgBit(oldp+155,((0U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 4U)))));
        bufp->chgBit(oldp+156,((1U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 4U)))));
        bufp->chgBit(oldp+157,((2U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 4U)))));
        bufp->chgBit(oldp+158,((3U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 4U)))));
        bufp->chgBit(oldp+159,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__vld_q));
        bufp->chgCData(oldp+160,((3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                        >> 6U))),2);
        bufp->chgBit(oldp+161,((0U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 6U)))));
        bufp->chgBit(oldp+162,((1U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 6U)))));
        bufp->chgBit(oldp+163,((2U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 6U)))));
        bufp->chgBit(oldp+164,((3U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 6U)))));
        bufp->chgBit(oldp+165,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__vld_q));
        bufp->chgCData(oldp+166,((3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                        >> 8U))),2);
        bufp->chgBit(oldp+167,((0U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 8U)))));
        bufp->chgBit(oldp+168,((1U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 8U)))));
        bufp->chgBit(oldp+169,((2U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 8U)))));
        bufp->chgBit(oldp+170,((3U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 8U)))));
        bufp->chgBit(oldp+171,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__vld_q));
        bufp->chgCData(oldp+172,((3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                        >> 0xaU))),2);
        bufp->chgBit(oldp+173,((0U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 0xaU)))));
        bufp->chgBit(oldp+174,((1U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 0xaU)))));
        bufp->chgBit(oldp+175,((2U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 0xaU)))));
        bufp->chgBit(oldp+176,((3U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 0xaU)))));
        bufp->chgBit(oldp+177,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__vld_q));
        bufp->chgCData(oldp+178,((3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                        >> 0xcU))),2);
        bufp->chgBit(oldp+179,((0U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+180,((1U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+181,((2U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+182,((3U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+183,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__vld_q));
        bufp->chgCData(oldp+184,((3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                        >> 0xeU))),2);
        bufp->chgBit(oldp+185,((0U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 0xeU)))));
        bufp->chgBit(oldp+186,((1U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                             >> 0xeU)))));
    }
}

void Vtb___024root__trace_chg_3_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb___024root__trace_chg_3(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_3\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb___024root__trace_chg_3_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb___024root__trace_chg_3_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_3_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 562);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+0,((2U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                           >> 0xeU)))));
        bufp->chgBit(oldp+1,((3U == (3U & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q) 
                                           >> 0xeU)))));
        bufp->chgBit(oldp+2,(vlSelfRef.tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__vld_q));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+3,(vlSelfRef.tb__DOT__u_rng__DOT__lfsr_q),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb__DOT__u_but__DOT__ptm_q),20);
        bufp->chgIData(oldp+5,(vlSelfRef.tb__DOT__u_but__DOT__ptm_q),32);
        bufp->chgCData(oldp+6,((3U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q)),2);
        bufp->chgBit(oldp+7,((0U == (3U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q))));
        bufp->chgBit(oldp+8,((1U == (3U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q))));
        bufp->chgBit(oldp+9,((2U == (3U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q))));
        bufp->chgBit(oldp+10,((3U == (3U & vlSelfRef.tb__DOT__u_but__DOT__ptm_q))));
        bufp->chgBit(oldp+11,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__vld_q));
        bufp->chgCData(oldp+12,((3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                       >> 2U))),2);
        bufp->chgBit(oldp+13,((0U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 2U)))));
        bufp->chgBit(oldp+14,((1U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 2U)))));
        bufp->chgBit(oldp+15,((2U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 2U)))));
        bufp->chgBit(oldp+16,((3U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 2U)))));
        bufp->chgBit(oldp+17,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__vld_q));
        bufp->chgCData(oldp+18,((3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                       >> 4U))),2);
        bufp->chgBit(oldp+19,((0U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 4U)))));
        bufp->chgBit(oldp+20,((1U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 4U)))));
        bufp->chgBit(oldp+21,((2U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 4U)))));
        bufp->chgBit(oldp+22,((3U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 4U)))));
        bufp->chgBit(oldp+23,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__vld_q));
        bufp->chgCData(oldp+24,((3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                       >> 6U))),2);
        bufp->chgBit(oldp+25,((0U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 6U)))));
        bufp->chgBit(oldp+26,((1U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 6U)))));
        bufp->chgBit(oldp+27,((2U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 6U)))));
        bufp->chgBit(oldp+28,((3U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 6U)))));
        bufp->chgBit(oldp+29,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__vld_q));
        bufp->chgCData(oldp+30,((3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                       >> 8U))),2);
        bufp->chgBit(oldp+31,((0U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 8U)))));
        bufp->chgBit(oldp+32,((1U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 8U)))));
        bufp->chgBit(oldp+33,((2U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 8U)))));
        bufp->chgBit(oldp+34,((3U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 8U)))));
        bufp->chgBit(oldp+35,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__vld_q));
        bufp->chgCData(oldp+36,((3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                       >> 0xaU))),2);
        bufp->chgBit(oldp+37,((0U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 0xaU)))));
        bufp->chgBit(oldp+38,((1U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 0xaU)))));
        bufp->chgBit(oldp+39,((2U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 0xaU)))));
        bufp->chgBit(oldp+40,((3U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 0xaU)))));
        bufp->chgBit(oldp+41,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__vld_q));
        bufp->chgCData(oldp+42,((3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                       >> 0xcU))),2);
        bufp->chgBit(oldp+43,((0U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+44,((1U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+45,((2U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+46,((3U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+47,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__vld_q));
        bufp->chgCData(oldp+48,((3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                       >> 0xeU))),2);
        bufp->chgBit(oldp+49,((0U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 0xeU)))));
        bufp->chgBit(oldp+50,((1U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 0xeU)))));
        bufp->chgBit(oldp+51,((2U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 0xeU)))));
        bufp->chgBit(oldp+52,((3U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 0xeU)))));
        bufp->chgBit(oldp+53,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__vld_q));
        bufp->chgCData(oldp+54,((3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                       >> 0x10U))),2);
        bufp->chgBit(oldp+55,((0U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 0x10U)))));
        bufp->chgBit(oldp+56,((1U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 0x10U)))));
        bufp->chgBit(oldp+57,((2U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 0x10U)))));
        bufp->chgBit(oldp+58,((3U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 0x10U)))));
        bufp->chgBit(oldp+59,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__vld_q));
        bufp->chgCData(oldp+60,((3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                       >> 0x12U))),2);
        bufp->chgBit(oldp+61,((0U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 0x12U)))));
        bufp->chgBit(oldp+62,((1U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 0x12U)))));
        bufp->chgBit(oldp+63,((2U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 0x12U)))));
        bufp->chgBit(oldp+64,((3U == (3U & (vlSelfRef.tb__DOT__u_but__DOT__ptm_q 
                                            >> 0x12U)))));
        bufp->chgBit(oldp+65,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__vld_q));
        bufp->chgIData(oldp+66,(((0x40U & (vlSelfRef.tb__DOT__u_rng__DOT__lfsr_q 
                                           >> 0x19U)) 
                                 | ((0x20U & (vlSelfRef.tb__DOT__u_rng__DOT__lfsr_q 
                                              >> 0x1aU)) 
                                    | (2U & (vlSelfRef.tb__DOT__u_rng__DOT__lfsr_q 
                                             >> 0x1eU))))),31);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[9U])) {
        bufp->chgBit(oldp+67,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__val_q));
        bufp->chgBit(oldp+68,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__val_q));
        bufp->chgBit(oldp+69,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__val_q));
        bufp->chgBit(oldp+70,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__val_q));
        bufp->chgBit(oldp+71,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__val_q));
        bufp->chgBit(oldp+72,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__val_q));
        bufp->chgBit(oldp+73,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__val_q));
        bufp->chgBit(oldp+74,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__val_q));
        bufp->chgBit(oldp+75,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__val_q));
        bufp->chgBit(oldp+76,(vlSelfRef.tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__val_q));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0xbU])) {
        bufp->chgCData(oldp+77,(vlSelfRef.tb__DOT__u_cpu__DOT__st_q),3);
        bufp->chgBit(oldp+78,((1U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q))));
        bufp->chgBit(oldp+79,((2U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q))));
        bufp->chgBit(oldp+80,((3U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q))));
        bufp->chgBit(oldp+81,((4U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q))));
        bufp->chgBit(oldp+82,((5U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q))));
    }
    bufp->chgBit(oldp+83,(vlSelfRef.clk));
    bufp->chgBit(oldp+84,(vlSelfRef.rst_n));
    bufp->chgWData(oldp+85,(vlSelfRef.led_r),120);
    bufp->chgWData(oldp+89,(vlSelfRef.led_g),120);
    bufp->chgWData(oldp+93,(vlSelfRef.led_b),120);
    bufp->chgCData(oldp+97,(vlSelfRef.sevensegment_1),8);
    bufp->chgCData(oldp+98,(vlSelfRef.sevensegment_2),8);
    bufp->chgCData(oldp+99,(vlSelfRef.sevensegment_3),8);
    bufp->chgCData(oldp+100,(vlSelfRef.sevensegment_4),8);
    bufp->chgBit(oldp+101,(vlSelfRef.button_top));
    bufp->chgBit(oldp+102,(vlSelfRef.button_bottom));
    bufp->chgBit(oldp+103,(vlSelfRef.button_left));
    bufp->chgBit(oldp+104,(vlSelfRef.button_right));
    bufp->chgBit(oldp+105,(vlSelfRef.button_center));
    bufp->chgBit(oldp+106,(vlSelfRef.joystick_up));
    bufp->chgBit(oldp+107,(vlSelfRef.joystick_down));
    bufp->chgBit(oldp+108,(vlSelfRef.joystick_left));
    bufp->chgBit(oldp+109,(vlSelfRef.joystick_right));
    bufp->chgBit(oldp+110,(vlSelfRef.joystick_pressed));
    bufp->chgCData(oldp+111,(vlSelfRef.dip_switches),8);
    bufp->chgIData(oldp+112,(vlSelfRef.tb__DOT__bus_rdata),32);
    bufp->chgBit(oldp+113,((1U & (((IData)(vlSelfRef.tb__DOT__u_bus__DOT__mem_en_q) 
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
    bufp->chgIData(oldp+114,(((vlSelfRef.tb__DOT__u_lcd__DOT__disp_q
                               [3U] << 0x18U) | ((vlSelfRef.tb__DOT__u_lcd__DOT__disp_q
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelfRef.tb__DOT__u_lcd__DOT__disp_q
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelfRef.tb__DOT__u_lcd__DOT__disp_q
                                                    [0U])))),32);
    bufp->chgIData(oldp+115,((((- (IData)((1U & (IData)(vlSelfRef.tb__DOT__u_but__DOT__sel_q)))) 
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
                                    | ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.tb__DOT__u_but__DOT__sel_q) 
                                                      >> 3U)))) 
                                       & (IData)(vlSelfRef.tb__DOT__u_but__DOT__stm_q)))))),32);
    bufp->chgBit(oldp+116,((0U != vlSelfRef.tb__DOT__u_but__DOT__src)));
    bufp->chgSData(oldp+117,((((IData)(vlSelfRef.button_top) 
                               << 9U) | (((IData)(vlSelfRef.button_bottom) 
                                          << 8U) | 
                                         (((IData)(vlSelfRef.button_left) 
                                           << 7U) | 
                                          (((IData)(vlSelfRef.button_right) 
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
                                                          | (IData)(vlSelfRef.joystick_pressed))))))))))),10);
    bufp->chgBit(oldp+118,(vlSelfRef.tb__DOT__u_but__DOT__ext_vld_q));
    bufp->chgIData(oldp+119,(vlSelfRef.tb__DOT__u_but__DOT__ext_val_q),18);
    bufp->chgSData(oldp+120,(vlSelfRef.tb__DOT__u_but__DOT__ext_push),10);
    bufp->chgCData(oldp+121,(vlSelfRef.tb__DOT__u_but__DOT__ext_switch),8);
    bufp->chgIData(oldp+122,(vlSelfRef.tb__DOT__u_but__DOT__src),18);
    bufp->chgBit(oldp+123,((((IData)(vlSelfRef.tb__DOT__bus_we) 
                             & (0U != vlSelfRef.tb__DOT__bus_wdata)) 
                            | (IData)(vlSelfRef.tb__DOT__u_led__DOT__wstrb_incomp))));
    bufp->chgIData(oldp+124,((((IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_switch) 
                               << 0x10U) | (IData)(vlSelfRef.tb__DOT__u_but__DOT__ext_push))),32);
    bufp->chgIData(oldp+125,((((IData)(vlSelfRef.tb__DOT__u_but__DOT____Vcellout__u_stm__src) 
                               << 0x10U) | (IData)(vlSelfRef.tb__DOT__u_but__DOT____Vcellout__u_ptm__src))),32);
    bufp->chgSData(oldp+126,(vlSelfRef.tb__DOT__u_but__DOT____Vcellout__u_ptm__src),10);
    bufp->chgCData(oldp+127,(vlSelfRef.tb__DOT__u_but__DOT____Vcellout__u_stm__src),8);
    bufp->chgIData(oldp+128,(vlSelfRef.tb__DOT__u_cpu__DOT__pc_q),32);
    bufp->chgIData(oldp+129,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_set)
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
                                                                & (~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_bru_cmp))))))))))))),32);
    bufp->chgBit(oldp+130,((0U != (3U & vlSelfRef.tb__DOT__u_cpu__DOT__pc_q))));
    bufp->chgBit(oldp+131,(((3U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                          >> 0xcU))) 
                            | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_28))));
    bufp->chgBit(oldp+132,(((3U == (7U & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                          >> 0xcU))) 
                            | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_31))));
    bufp->chgBit(oldp+133,((((~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_funct7_eq_v)) 
                             & (0U == (0x7000U & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))) 
                            | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT____VdfgRegularize_hcce91bd5_0_30) 
                               | ((IData)(((0x2000U 
                                            == (0x7000U 
                                                & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                           & (0U != 
                                              (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                               >> 0x19U)))) 
                                  | ((IData)(((0x3000U 
                                               == (0x7000U 
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
                                           | ((0U != 
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
    bufp->chgBit(oldp+134,((((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)) 
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
    bufp->chgCData(oldp+135,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_inv)
                               ? 2U : ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_ecall)
                                        ? 0xbU : 3U))),6);
    bufp->chgIData(oldp+136,((vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_pc 
                              ^ (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add_op1 
                                 ^ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sub)))),32);
    bufp->chgIData(oldp+137,(((vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_pc 
                               & (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add_op1 
                                  | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sub))) 
                              | (vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add_op1 
                                 & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_sub)))),32);
    bufp->chgIData(oldp+138,((vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_q 
                              | vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_imm)),32);
    bufp->chgIData(oldp+139,((vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_q 
                              & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs2_imm)),32);
    bufp->chgIData(oldp+140,(((0x1000U & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)
                               ? (1U & (~ (IData)((vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_add 
                                                   >> 0x20U))))
                               : (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_alu_lts))),32);
    bufp->chgIData(oldp+141,((((- (IData)((1U & (~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_jalr))))) 
                               & vlSelfRef.tb__DOT__u_cpu__DOT__pc_q) 
                              | ((- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_jalr))) 
                                 & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_q))),32);
    bufp->chgIData(oldp+142,((((- (IData)((0x6fU == 
                                           (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))) 
                               & (((- (IData)((vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff000U 
                                                 & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins) 
                                                | ((0x800U 
                                                    & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                         >> 0x14U)))))) 
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
                                         << 0xcU) | 
                                        ((0x800U & 
                                          (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
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
    bufp->chgIData(oldp+143,(((((- (IData)((1U & (~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_jalr))))) 
                                & vlSelfRef.tb__DOT__u_cpu__DOT__pc_q) 
                               | ((- (IData)((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_jalr))) 
                                  & vlSelfRef.tb__DOT__u_cpu__DOT__ex_rs1_q)) 
                              + (((- (IData)((0x6fU 
                                              == (0x7fU 
                                                  & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))) 
                                  & (((- (IData)((vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                  >> 0x1fU))) 
                                      << 0x14U) | (
                                                   (0xff000U 
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
                                       | (4U & (- (IData)(
                                                          (1U 
                                                           & (~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ex_bru_cmp))))))))))),32);
    bufp->chgBit(oldp+144,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_lh) 
                            | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_sh))));
    bufp->chgBit(oldp+145,(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mie_q));
    bufp->chgBit(oldp+146,(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mtie_q));
    bufp->chgBit(oldp+147,(vlSelfRef.tb__DOT__u_cpu__DOT__csr_meie_q));
    bufp->chgBit(oldp+148,(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mpie_q));
    bufp->chgBit(oldp+149,(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mcause_i_q));
    bufp->chgCData(oldp+150,(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mcause_c_q),6);
    bufp->chgIData(oldp+151,(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mstatus),32);
    bufp->chgIData(oldp+152,(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mie),32);
    bufp->chgIData(oldp+153,(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mtvec_q),32);
    bufp->chgIData(oldp+154,(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mepc_q),32);
    bufp->chgIData(oldp+155,(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mcause),32);
    bufp->chgIData(oldp+156,(((IData)((0U != vlSelfRef.tb__DOT__u_but__DOT__src)) 
                              << 0xbU)),32);
    bufp->chgIData(oldp+157,((((- (IData)((IData)((3U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins))))) 
                               & (((- (IData)((1U & 
                                               ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_lsu_lb) 
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
    bufp->chgBit(oldp+158,(((4U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__st_q)) 
                            & ((~ (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_inv)) 
                               & ((0x63U != (0x7fU 
                                             & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                  & ((~ ((0U == (0x1fU 
                                                 & (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                                    >> 7U))) 
                                         | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_expt))) 
                                     & ((0x23U != (0x7fU 
                                                   & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)) 
                                        & (0xfU != 
                                           (0x7fU & vlSelfRef.tb__DOT__u_cpu__DOT__de_ins)))))))));
    bufp->chgBit(oldp+159,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we) 
                            & (0x305U == (vlSelfRef.tb__DOT__u_cpu__DOT__de_ins 
                                          >> 0x14U)))));
    bufp->chgBit(oldp+160,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mepc) 
                            | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_set))));
    bufp->chgBit(oldp+161,((((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mstatus) 
                             & (vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_wdata 
                                >> 3U)) | ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_ret) 
                                           & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mpie_q)))));
    bufp->chgBit(oldp+162,((((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mstatus) 
                             & (vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_wdata 
                                >> 7U)) | (((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_set) 
                                            & (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__csr_mie_q)) 
                                           | (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_expt_ret)))));
    bufp->chgIData(oldp+163,(((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mepc)
                               ? vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_wdata
                               : vlSelfRef.tb__DOT__u_cpu__DOT__pc_q)),32);
    bufp->chgBit(oldp+164,((1U & ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mcause)
                                   ? (vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_wdata 
                                      >> 0x1fU) : (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__if_irq_e)))));
    bufp->chgCData(oldp+165,((0x3fU & ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_we_mcause)
                                        ? vlSelfRef.tb__DOT__u_cpu__DOT__wb_csr_wdata
                                        : ((1U == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_q))
                                            ? ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__if_irq_e)
                                                ? 0xbU
                                                : 0U)
                                            : ((2U 
                                                == (IData)(vlSelfRef.tb__DOT__u_cpu__DOT__ie_q))
                                                ? ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_inv)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelfRef.tb__DOT__u_cpu__DOT__de_ins_is_ecall)
                                                     ? 0xbU
                                                     : 3U))
                                                : (
                                                   (3U 
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
    bufp->chgCData(oldp+166,(vlSelfRef.tb__DOT__u_lcd__DOT__disp_q[0]),8);
    bufp->chgCData(oldp+167,(vlSelfRef.tb__DOT__u_lcd__DOT__disp_q[1]),8);
    bufp->chgCData(oldp+168,(vlSelfRef.tb__DOT__u_lcd__DOT__disp_q[2]),8);
    bufp->chgCData(oldp+169,(vlSelfRef.tb__DOT__u_lcd__DOT__disp_q[3]),8);
    bufp->chgWData(oldp+170,(vlSelfRef.tb__DOT__u_led__DOT__led_r_q),120);
    bufp->chgWData(oldp+174,(vlSelfRef.tb__DOT__u_led__DOT__led_g_q),120);
    bufp->chgWData(oldp+178,(vlSelfRef.tb__DOT__u_led__DOT__led_b_q),120);
    bufp->chgBit(oldp+182,(((IData)(vlSelfRef.tb__DOT__mem_en) 
                            & ((IData)(vlSelfRef.tb__DOT__bus_we) 
                               & (0xf0000000U >= vlSelfRef.tb__DOT__bus_addr)))));
    bufp->chgBit(oldp+183,(((IData)(vlSelfRef.tb__DOT__mem_en) 
                            & ((~ (IData)(vlSelfRef.tb__DOT__bus_we)) 
                               & (0xf0000000U >= vlSelfRef.tb__DOT__bus_addr)))));
}

void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_cleanup\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x13U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x14U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x15U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x16U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x17U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x18U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x19U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1aU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1bU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1cU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1dU] = 0U;
}
