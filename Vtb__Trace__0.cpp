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
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgIData(oldp+0,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->tb__DOT__u_cpu__DOT__gpr_q[31]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0xdU]))) {
        bufp->chgBit(oldp+32,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__src_edge));
        bufp->chgBit(oldp+33,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__src_edge));
        bufp->chgBit(oldp+34,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__src_edge));
        bufp->chgBit(oldp+35,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__src_edge));
        bufp->chgBit(oldp+36,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__src_edge));
        bufp->chgBit(oldp+37,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__src_edge));
        bufp->chgBit(oldp+38,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__src_edge));
        bufp->chgBit(oldp+39,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__src_edge));
        bufp->chgBit(oldp+40,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__src_edge));
        bufp->chgBit(oldp+41,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__src_edge));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0xeU]))) {
        bufp->chgIData(oldp+42,(vlSelf->tb__DOT__u_cpu__DOT__de_ins),32);
        bufp->chgCData(oldp+43,((0x1fU & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+44,((0x1fU & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+45,((0x1fU & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                          >> 7U))),5);
        bufp->chgCData(oldp+46,((0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins)),7);
        bufp->chgCData(oldp+47,((7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+48,((vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                 >> 0x19U)),7);
        bufp->chgIData(oldp+49,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_imm_i),32);
        bufp->chgIData(oldp+50,((((- (IData)((vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+51,((((- (IData)((vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0x800U 
                                               & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                       >> 7U)))))),32);
        bufp->chgIData(oldp+52,((0xfffff000U & vlSelf->tb__DOT__u_cpu__DOT__de_ins)),32);
        bufp->chgIData(oldp+53,((((- (IData)((vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins) 
                                               | ((0x800U 
                                                   & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                        >> 0x14U)))))),32);
        bufp->chgBit(oldp+54,((0U == (7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+55,((1U == (7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+56,((2U == (7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+57,((3U == (7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+58,((4U == (7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+59,((5U == (7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+60,((6U == (7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+61,((7U == (7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+62,((0U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                      >> 0x19U))));
        bufp->chgBit(oldp+63,((0x20U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                         >> 0x19U))));
        bufp->chgBit(oldp+64,((0x18U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                         >> 0x19U))));
        bufp->chgBit(oldp+65,((0U == (0x1fU & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+66,((0U == (0x1fU & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+67,((1U == (0x1fU & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+68,((2U == (0x1fU & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+69,((0U == (0x1fU & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                               >> 7U)))));
        bufp->chgSData(oldp+70,((vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                 >> 0x14U)),12);
        bufp->chgBit(oldp+71,((1U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                     >> 0xcU))));
        bufp->chgBit(oldp+72,((1U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                     >> 0xdU))));
        bufp->chgBit(oldp+73,((1U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+74,((1U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                     >> 0xeU))));
        bufp->chgBit(oldp+75,((0x37U == (0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins))));
        bufp->chgBit(oldp+76,((0x17U == (0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins))));
        bufp->chgBit(oldp+77,((0x6fU == (0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins))));
        bufp->chgBit(oldp+78,((0x67U == (0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins))));
        bufp->chgBit(oldp+79,((0x63U == (0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins))));
        bufp->chgBit(oldp+80,((3U == (0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins))));
        bufp->chgBit(oldp+81,((0x23U == (0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins))));
        bufp->chgBit(oldp+82,((0x13U == (0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins))));
        bufp->chgBit(oldp+83,((0x33U == (0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins))));
        bufp->chgBit(oldp+84,((0xfU == (0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins))));
        bufp->chgBit(oldp+85,((0x73U == (0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins))));
        bufp->chgBit(oldp+86,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_jalr));
        bufp->chgBit(oldp+87,((IData)((0x63U == (0x707fU 
                                                 & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+88,((IData)((0x1063U == (0x707fU 
                                                   & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+89,((IData)((0x4063U == (0x707fU 
                                                   & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+90,((IData)((0x5063U == (0x707fU 
                                                   & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+91,((IData)((0x6063U == (0x707fU 
                                                   & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+92,((IData)((0x7063U == (0x707fU 
                                                   & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+93,((IData)((3U == (0x707fU 
                                              & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+94,((IData)((0x4003U == (0x707fU 
                                                   & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+95,((IData)((0x5003U == (0x707fU 
                                                   & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+96,((IData)((0x13U == (0x707fU 
                                                 & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+97,((IData)((0x4013U == (0x707fU 
                                                   & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+98,((IData)((0x6013U == (0x707fU 
                                                   & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+99,((IData)((0x7013U == (0x707fU 
                                                   & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+100,((IData)((0x4033U == 
                                        (0xfe00707fU 
                                         & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+101,((IData)((0x6033U == 
                                        (0xfe00707fU 
                                         & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+102,((IData)((0x7033U == 
                                        (0xfe00707fU 
                                         & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+103,((IData)((0xfU == (0x707fU 
                                                 & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))));
        bufp->chgBit(oldp+104,((0x300U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0x14U))));
        bufp->chgBit(oldp+105,((0x304U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0x14U))));
        bufp->chgBit(oldp+106,((0x305U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0x14U))));
        bufp->chgBit(oldp+107,((0x341U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0x14U))));
        bufp->chgBit(oldp+108,((0x342U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0x14U))));
        bufp->chgBit(oldp+109,((0x344U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0x14U))));
        bufp->chgBit(oldp+110,(vlSelf->tb__DOT__u_cpu__DOT__ex_ins_is_j));
        bufp->chgBit(oldp+111,(((0x17U != (0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                & ((0x37U != (0x7fU 
                                              & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                   & (~ (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_ins_is_j))))));
        bufp->chgCData(oldp+112,(((3U == (0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins))
                                   ? 4U : 6U)),6);
        bufp->chgCData(oldp+113,(((3U == (0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins))
                                   ? 5U : 7U)),6);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[3U] 
                      | vlSelf->__Vm_traceActivity[0xeU]) 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgBit(oldp+114,(((0x13U == (0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                & (IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h702d1d83__0))));
        bufp->chgBit(oldp+115,(((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h87ebf8fd__0) 
                                & (0U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+116,(((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h87ebf8fd__0) 
                                & (0x20U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                             >> 0x19U)))));
        bufp->chgBit(oldp+117,(((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h0a4778a7__0) 
                                & (0U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+118,(((0x33U == (0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                & (IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h702d1d83__0))));
        bufp->chgBit(oldp+119,(((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h555416eb__0) 
                                & (0U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+120,(((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h555416eb__0) 
                                & (0x20U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                             >> 0x19U)))));
        bufp->chgBit(oldp+121,(((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_ev) 
                                & (IData)((0x100000U 
                                           == (0xfff00000U 
                                               & vlSelf->tb__DOT__u_cpu__DOT__de_ins))))));
        bufp->chgBit(oldp+122,(((0x37U == (0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                | ((0x17U == (0x7fU 
                                              & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                   | (((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h0a4778a7__0) 
                                       & (0U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                 >> 0x19U))) 
                                      | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sub) 
                                         | ((IData)(
                                                    (0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->tb__DOT__u_cpu__DOT__de_ins))) 
                                            | (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_ins_is_j))))))));
        bufp->chgBit(oldp+123,((((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h555416eb__0) 
                                 & (0U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0x19U))) 
                                | (((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h555416eb__0) 
                                    & (0x20U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                 >> 0x19U))) 
                                   | ((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h87ebf8fd__0) 
                                      & ((0U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                 >> 0x19U)) 
                                         | (0x20U == 
                                            (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                             >> 0x19U))))))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgBit(oldp+124,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_lh));
        bufp->chgBit(oldp+125,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_slti));
        bufp->chgBit(oldp+126,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sltiu));
        bufp->chgBit(oldp+127,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sub));
        bufp->chgBit(oldp+128,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_slt));
        bufp->chgBit(oldp+129,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sltu));
        bufp->chgBit(oldp+130,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_ev));
        bufp->chgBit(oldp+131,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_ecall));
        bufp->chgBit(oldp+132,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_mret));
        bufp->chgBit(oldp+133,(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sub));
        bufp->chgIData(oldp+134,(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sub),32);
        bufp->chgBit(oldp+135,(((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_slt) 
                                | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_slti) 
                                   | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sltu) 
                                      | (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sltiu))))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x10U]))) {
        bufp->chgBit(oldp+136,(((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_inv) 
                                | (IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h9b6faebf__0))));
        bufp->chgBit(oldp+137,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_funct7_eq_v));
        bufp->chgBit(oldp+138,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_inv_jx));
        bufp->chgBit(oldp+139,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_inv_bx));
        bufp->chgBit(oldp+140,(((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_hc685467b__0) 
                                | (IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h91c39851__0))));
        bufp->chgBit(oldp+141,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_inv));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x11U]))) {
        bufp->chgBit(oldp+142,(vlSelf->tb__DOT__bus_we));
        bufp->chgIData(oldp+143,(vlSelf->tb__DOT__bus_wdata),32);
        bufp->chgBit(oldp+144,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__src_edge));
        bufp->chgBit(oldp+145,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__src_edge));
        bufp->chgBit(oldp+146,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__src_edge));
        bufp->chgBit(oldp+147,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__src_edge));
        bufp->chgBit(oldp+148,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__src_edge));
        bufp->chgBit(oldp+149,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__src_edge));
        bufp->chgBit(oldp+150,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__src_edge));
        bufp->chgBit(oldp+151,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__src_edge));
        bufp->chgBit(oldp+152,(vlSelf->tb__DOT__u_cpu__DOT__wb_expt));
        bufp->chgBit(oldp+153,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_lw));
        bufp->chgBit(oldp+154,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sb));
        bufp->chgBit(oldp+155,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sh));
        bufp->chgBit(oldp+156,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sw));
        bufp->chgBit(oldp+157,(vlSelf->tb__DOT__u_cpu__DOT__ex_ins_is_ls));
        bufp->chgBit(oldp+158,(vlSelf->tb__DOT__u_cpu__DOT__ex_lsu_sz_mask_hi));
        bufp->chgCData(oldp+159,((0xfU & vlSelf->tb__DOT__bus_wdata)),4);
        bufp->chgCData(oldp+160,((0xfU & (vlSelf->tb__DOT__bus_wdata 
                                          >> 4U))),4);
        bufp->chgBit(oldp+161,((0xfU == (0xfU & vlSelf->tb__DOT__bus_wdata))));
        bufp->chgBit(oldp+162,((0xfU == (0xfU & (vlSelf->tb__DOT__bus_wdata 
                                                 >> 4U)))));
        bufp->chgSData(oldp+163,((((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9bbd0f__0) 
                                   << 0xbU) | (((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8fd62221__0) 
                                                << 0xaU) 
                                               | (((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8e759b18__0) 
                                                   << 9U) 
                                                  | (((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f2ef9a1__0) 
                                                      << 8U) 
                                                     | (((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f223bc1__0) 
                                                         << 7U) 
                                                        | (((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f26a8df__0) 
                                                            << 6U) 
                                                           | (((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f02fc66__0) 
                                                               << 5U) 
                                                              | (((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7a5f0b__0) 
                                                                  << 4U) 
                                                                 | (((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f7efefc__0) 
                                                                     << 3U) 
                                                                    | (((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f31bf2c__0) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f9e5970__0) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_h8f0d5fe9__0))))))))))))),12);
        bufp->chgSData(oldp+164,((((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8c0ed67__0) 
                                   << 9U) | (((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd808e424__0) 
                                              << 8U) 
                                             | (((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd8532756__0) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd850f4e2__0) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd833e037__0) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7c66dbc__0) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_he7f5e319__0) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd80e8247__0) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hda9d64cf__0) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->tb__DOT__u_led__DOT____VdfgTmp_hd869425c__0))))))))))),10);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x12U]))) {
        bufp->chgBit(oldp+165,(vlSelf->tb__DOT__u_cpu__DOT__if_expt));
        bufp->chgBit(oldp+166,(vlSelf->tb__DOT__u_cpu__DOT__if_irq_e));
        bufp->chgCData(oldp+167,(((IData)(vlSelf->tb__DOT__u_cpu__DOT__if_irq_e)
                                   ? 0xbU : 0U)),6);
        bufp->chgIData(oldp+168,(vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_pc),32);
        bufp->chgIData(oldp+169,(vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_imm),32);
        bufp->chgIData(oldp+170,(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add_op1),32);
        bufp->chgQData(oldp+171,(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add),33);
        bufp->chgIData(oldp+173,(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_xor),32);
        bufp->chgBit(oldp+174,((0U == vlSelf->tb__DOT__u_cpu__DOT__ex_alu_xor)));
        bufp->chgBit(oldp+175,((1U & (~ (IData)((vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+176,(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_lts));
        bufp->chgBit(oldp+177,(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_srs));
        bufp->chgIData(oldp+178,(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl0),32);
        bufp->chgIData(oldp+179,(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl1),32);
        bufp->chgIData(oldp+180,(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl2),32);
        bufp->chgIData(oldp+181,(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl3),32);
        bufp->chgIData(oldp+182,(((0x10U & vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_imm)
                                   ? VL_SHIFTL_III(32,32,32, vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl3, 0x10U)
                                   : vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sl3)),32);
        bufp->chgIData(oldp+183,(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr0),32);
        bufp->chgIData(oldp+184,(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr1),32);
        bufp->chgIData(oldp+185,(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr2),32);
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
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_1_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 187);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x12U]))) {
        bufp->chgIData(oldp+0,(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr3),32);
        bufp->chgIData(oldp+1,(((0x10U & vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_imm)
                                 ? (((- (IData)((IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_srs))) 
                                     << 0x10U) | (vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr3 
                                                  >> 0x10U))
                                 : vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sr3)),32);
        bufp->chgCData(oldp+2,(((1U & (- (IData)((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add)))))) 
                                | ((2U & (- (IData)(
                                                    (1U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add)))))) 
                                   | ((4U & (- (IData)(
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add)))))) 
                                      | (8U & (- (IData)(
                                                         (3U 
                                                          == 
                                                          (3U 
                                                           & (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add)))))))))),4);
        bufp->chgCData(oldp+3,(((3U & (- (IData)((1U 
                                                  & (~ (IData)(
                                                               (vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add 
                                                                >> 1U))))))) 
                                | (0xcU & (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add 
                                                                 >> 1U)))))))),4);
        bufp->chgIData(oldp+4,(vlSelf->tb__DOT__u_cpu__DOT__ex_csr_rdata),32);
        bufp->chgCData(oldp+5,(vlSelf->tb__DOT__u_cpu__DOT__wb_lsu_lb),8);
        bufp->chgSData(oldp+6,(vlSelf->tb__DOT__u_cpu__DOT__wb_lsu_lh),16);
        bufp->chgBit(oldp+7,(vlSelf->tb__DOT__u_cpu__DOT__ie_expt_set));
        bufp->chgBit(oldp+8,(vlSelf->tb__DOT__u_cpu__DOT__ie_expt_ret));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x13U]))) {
        bufp->chgBit(oldp+9,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrw));
        bufp->chgBit(oldp+10,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrs));
        bufp->chgBit(oldp+11,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrc));
        bufp->chgBit(oldp+12,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrwi));
        bufp->chgBit(oldp+13,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrsi));
        bufp->chgBit(oldp+14,(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_csrrci));
        bufp->chgBit(oldp+15,(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_blt));
        bufp->chgBit(oldp+16,(vlSelf->tb__DOT__u_cpu__DOT__ex_bru_cmp));
        bufp->chgIData(oldp+17,(vlSelf->tb__DOT__u_cpu__DOT__ex_csr_rs1),32);
        bufp->chgBit(oldp+18,(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we));
        bufp->chgIData(oldp+19,(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_wdata),32);
        bufp->chgBit(oldp+20,(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mstatus));
        bufp->chgBit(oldp+21,(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mie));
        bufp->chgBit(oldp+22,(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mepc));
        bufp->chgBit(oldp+23,(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mcause));
        bufp->chgBit(oldp+24,(vlSelf->tb__DOT__u_cpu__DOT__wi_csr_we_mstatus));
        bufp->chgBit(oldp+25,(vlSelf->tb__DOT__u_cpu__DOT__wi_csr_we_mcause));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x14U]))) {
        bufp->chgBit(oldp+26,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
        bufp->chgBit(oldp+27,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
        bufp->chgBit(oldp+28,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
        bufp->chgBit(oldp+29,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
        bufp->chgBit(oldp+30,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
        bufp->chgBit(oldp+31,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
        bufp->chgBit(oldp+32,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
        bufp->chgBit(oldp+33,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
        bufp->chgBit(oldp+34,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+35,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
        bufp->chgBit(oldp+36,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
        bufp->chgBit(oldp+37,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
        bufp->chgBit(oldp+38,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
        bufp->chgBit(oldp+39,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
        bufp->chgBit(oldp+40,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
        bufp->chgBit(oldp+41,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
        bufp->chgBit(oldp+42,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
        bufp->chgBit(oldp+43,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
        bufp->chgBit(oldp+44,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
        bufp->chgBit(oldp+45,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
        bufp->chgBit(oldp+46,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+47,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
        bufp->chgBit(oldp+48,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
        bufp->chgBit(oldp+49,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
        bufp->chgBit(oldp+50,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
        bufp->chgBit(oldp+51,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
        bufp->chgBit(oldp+52,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
        bufp->chgBit(oldp+53,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
        bufp->chgBit(oldp+54,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
        bufp->chgBit(oldp+55,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
        bufp->chgBit(oldp+56,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
        bufp->chgBit(oldp+57,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
        bufp->chgBit(oldp+58,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+59,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
        bufp->chgBit(oldp+60,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
        bufp->chgBit(oldp+61,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
        bufp->chgBit(oldp+62,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
        bufp->chgBit(oldp+63,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
        bufp->chgBit(oldp+64,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
        bufp->chgBit(oldp+65,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
        bufp->chgBit(oldp+66,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
        bufp->chgBit(oldp+67,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
        bufp->chgBit(oldp+68,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
        bufp->chgBit(oldp+69,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
        bufp->chgBit(oldp+70,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+71,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
        bufp->chgBit(oldp+72,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
        bufp->chgBit(oldp+73,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
        bufp->chgBit(oldp+74,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
        bufp->chgBit(oldp+75,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+76,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
        bufp->chgBit(oldp+77,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
        bufp->chgBit(oldp+78,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
        bufp->chgBit(oldp+79,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x15U]))) {
        bufp->chgBit(oldp+80,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
        bufp->chgBit(oldp+81,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
        bufp->chgBit(oldp+82,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
        bufp->chgBit(oldp+83,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
        bufp->chgBit(oldp+84,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
        bufp->chgBit(oldp+85,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
        bufp->chgBit(oldp+86,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
        bufp->chgBit(oldp+87,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
        bufp->chgBit(oldp+88,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
        bufp->chgBit(oldp+89,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
        bufp->chgBit(oldp+90,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
        bufp->chgBit(oldp+91,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
        bufp->chgBit(oldp+92,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
        bufp->chgBit(oldp+93,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
        bufp->chgBit(oldp+94,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+95,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
        bufp->chgBit(oldp+96,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
        bufp->chgBit(oldp+97,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
        bufp->chgBit(oldp+98,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
        bufp->chgBit(oldp+99,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
        bufp->chgBit(oldp+100,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
        bufp->chgBit(oldp+101,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
        bufp->chgBit(oldp+102,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
        bufp->chgBit(oldp+103,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+104,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
        bufp->chgBit(oldp+105,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
        bufp->chgBit(oldp+106,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
        bufp->chgBit(oldp+107,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
        bufp->chgBit(oldp+108,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
        bufp->chgBit(oldp+109,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
        bufp->chgBit(oldp+110,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
        bufp->chgBit(oldp+111,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x16U]))) {
        bufp->chgSData(oldp+112,(vlSelf->tb__DOT__u_led__DOT__val),12);
        bufp->chgBit(oldp+113,((1U & (IData)(vlSelf->tb__DOT__u_led__DOT__val))));
        bufp->chgBit(oldp+114,((1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                      >> 1U))));
        bufp->chgBit(oldp+115,((1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                      >> 2U))));
        bufp->chgBit(oldp+116,((1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                      >> 3U))));
        bufp->chgBit(oldp+117,((1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                      >> 4U))));
        bufp->chgBit(oldp+118,((1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                      >> 5U))));
        bufp->chgBit(oldp+119,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
        bufp->chgBit(oldp+120,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
        bufp->chgBit(oldp+121,((1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                      >> 6U))));
        bufp->chgBit(oldp+122,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
        bufp->chgBit(oldp+123,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
        bufp->chgBit(oldp+124,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
        bufp->chgBit(oldp+125,((1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                      >> 7U))));
        bufp->chgBit(oldp+126,((1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                      >> 8U))));
        bufp->chgBit(oldp+127,((1U & ((IData)(vlSelf->tb__DOT__u_led__DOT__val) 
                                      >> 9U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x17U]))) {
        bufp->chgBit(oldp+128,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
        bufp->chgBit(oldp+129,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
        bufp->chgBit(oldp+130,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
        bufp->chgBit(oldp+131,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
        bufp->chgBit(oldp+132,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
        bufp->chgBit(oldp+133,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
        bufp->chgBit(oldp+134,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
        bufp->chgBit(oldp+135,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
        bufp->chgBit(oldp+136,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
        bufp->chgBit(oldp+137,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
        bufp->chgBit(oldp+138,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
        bufp->chgBit(oldp+139,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
        bufp->chgBit(oldp+140,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
        bufp->chgBit(oldp+141,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
        bufp->chgBit(oldp+142,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
        bufp->chgBit(oldp+143,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
        bufp->chgBit(oldp+144,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
        bufp->chgBit(oldp+145,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x18U]))) {
        bufp->chgBit(oldp+146,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
        bufp->chgBit(oldp+147,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
        bufp->chgBit(oldp+148,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
        bufp->chgBit(oldp+149,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
        bufp->chgBit(oldp+150,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
        bufp->chgBit(oldp+151,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
        bufp->chgBit(oldp+152,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
        bufp->chgBit(oldp+153,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
        bufp->chgBit(oldp+154,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
        bufp->chgBit(oldp+155,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x19U]))) {
        bufp->chgBit(oldp+156,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
        bufp->chgBit(oldp+157,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
        bufp->chgBit(oldp+158,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
        bufp->chgBit(oldp+159,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
        bufp->chgBit(oldp+160,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
        bufp->chgBit(oldp+161,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
        bufp->chgBit(oldp+162,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
        bufp->chgBit(oldp+163,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
        bufp->chgBit(oldp+164,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
        bufp->chgBit(oldp+165,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
        bufp->chgBit(oldp+166,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
        bufp->chgBit(oldp+167,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
        bufp->chgBit(oldp+168,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
        bufp->chgBit(oldp+169,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
        bufp->chgBit(oldp+170,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
        bufp->chgBit(oldp+171,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x1aU]))) {
        bufp->chgBit(oldp+172,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
        bufp->chgBit(oldp+173,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
        bufp->chgBit(oldp+174,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
        bufp->chgBit(oldp+175,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
        bufp->chgBit(oldp+176,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
        bufp->chgBit(oldp+177,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
        bufp->chgBit(oldp+178,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
        bufp->chgBit(oldp+179,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
        bufp->chgBit(oldp+180,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
        bufp->chgBit(oldp+181,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
        bufp->chgBit(oldp+182,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
        bufp->chgBit(oldp+183,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
        bufp->chgBit(oldp+184,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
        bufp->chgBit(oldp+185,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
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
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_2_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 373);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x1aU]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
        bufp->chgBit(oldp+1,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x1bU]))) {
        bufp->chgBit(oldp+2,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
        bufp->chgBit(oldp+3,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
        bufp->chgBit(oldp+4,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
        bufp->chgBit(oldp+5,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
        bufp->chgBit(oldp+6,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
        bufp->chgBit(oldp+7,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
        bufp->chgBit(oldp+8,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
        bufp->chgBit(oldp+9,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
        bufp->chgBit(oldp+10,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
        bufp->chgBit(oldp+11,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
        bufp->chgBit(oldp+12,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
        bufp->chgBit(oldp+13,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
        bufp->chgBit(oldp+14,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
        bufp->chgBit(oldp+15,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
        bufp->chgBit(oldp+16,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
        bufp->chgBit(oldp+17,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x1cU]))) {
        bufp->chgBit(oldp+18,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
        bufp->chgBit(oldp+19,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
        bufp->chgBit(oldp+20,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
        bufp->chgBit(oldp+21,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
        bufp->chgBit(oldp+22,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__nxt));
        bufp->chgBit(oldp+23,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
        bufp->chgBit(oldp+24,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
        bufp->chgBit(oldp+25,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__nxt));
        bufp->chgBit(oldp+26,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
        bufp->chgBit(oldp+27,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
        bufp->chgBit(oldp+28,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
        bufp->chgBit(oldp+29,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__nxt));
        bufp->chgBit(oldp+30,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__nxt));
        bufp->chgBit(oldp+31,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
        bufp->chgBit(oldp+32,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
        bufp->chgBit(oldp+33,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x1dU]))) {
        bufp->chgBit(oldp+34,(vlSelf->tb__DOT__bus_en));
        bufp->chgIData(oldp+35,(vlSelf->tb__DOT__bus_addr),32);
        bufp->chgCData(oldp+36,(vlSelf->tb__DOT__bus_wstrb),4);
        bufp->chgSData(oldp+37,((0xfffU & vlSelf->tb__DOT__bus_addr)),12);
        bufp->chgBit(oldp+38,(vlSelf->tb__DOT__mem_en));
        bufp->chgBit(oldp+39,(vlSelf->tb__DOT__rng_en));
        bufp->chgBit(oldp+40,(vlSelf->tb__DOT__led_en));
        bufp->chgBit(oldp+41,(vlSelf->tb__DOT__lcd_en));
        bufp->chgBit(oldp+42,(vlSelf->tb__DOT__but_en));
        bufp->chgBit(oldp+43,(((IData)(vlSelf->tb__DOT__bus_en) 
                               & (0x10000U == (vlSelf->tb__DOT__bus_addr 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+44,(vlSelf->tb__DOT__u_but__DOT__wen));
        bufp->chgBit(oldp+45,(vlSelf->tb__DOT__u_led__DOT__wstrb_incomp));
        bufp->chgBit(oldp+46,(vlSelf->tb__DOT__u_rng__DOT__sel_val));
        bufp->chgBit(oldp+47,(vlSelf->tb__DOT__u_but__DOT__sel_src));
        bufp->chgBit(oldp+48,(vlSelf->tb__DOT__u_but__DOT__sel_ptm));
        bufp->chgBit(oldp+49,(vlSelf->tb__DOT__u_but__DOT__sel_stm));
        bufp->chgBit(oldp+50,(vlSelf->tb__DOT__u_but__DOT__wen_src));
        bufp->chgBit(oldp+51,(((IData)(vlSelf->tb__DOT__u_but__DOT__wen) 
                               & (IData)(vlSelf->tb__DOT__u_but__DOT__sel_ptm))));
        bufp->chgBit(oldp+52,(((IData)(vlSelf->tb__DOT__u_but__DOT__wen) 
                               & (IData)(vlSelf->tb__DOT__u_but__DOT__sel_stm))));
        bufp->chgCData(oldp+53,(vlSelf->tb__DOT__u_cpu__DOT__st_nxt),3);
        bufp->chgBit(oldp+54,(vlSelf->tb__DOT__u_cpu__DOT__ex_expt));
        bufp->chgBit(oldp+55,(vlSelf->tb__DOT__u_lcd__DOT__wen));
        bufp->chgBit(oldp+56,((0U == (0xfffU & vlSelf->tb__DOT__bus_addr))));
        bufp->chgBit(oldp+57,(vlSelf->tb__DOT__u_led__DOT__wen));
        bufp->chgBit(oldp+58,(((~ (IData)(vlSelf->tb__DOT__u_led__DOT__wstrb_incomp)) 
                               & (0U == (0xfffU & vlSelf->tb__DOT__bus_addr)))));
        bufp->chgBit(oldp+59,((0xf0000000U >= vlSelf->tb__DOT__bus_addr)));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x1eU]))) {
        bufp->chgBit(oldp+60,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+61,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
        bufp->chgBit(oldp+62,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
        bufp->chgBit(oldp+63,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
        bufp->chgBit(oldp+64,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
        bufp->chgBit(oldp+65,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
        bufp->chgBit(oldp+66,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
        bufp->chgBit(oldp+67,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__nxt));
        bufp->chgBit(oldp+68,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
        bufp->chgBit(oldp+69,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
        bufp->chgBit(oldp+70,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
        bufp->chgBit(oldp+71,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
        bufp->chgBit(oldp+72,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
        bufp->chgBit(oldp+73,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
        bufp->chgBit(oldp+74,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
        bufp->chgBit(oldp+75,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
        bufp->chgBit(oldp+76,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
        bufp->chgBit(oldp+77,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
        bufp->chgBit(oldp+78,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__sel));
        bufp->chgBit(oldp+79,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__sel));
        bufp->chgBit(oldp+80,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__sel));
        bufp->chgBit(oldp+81,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__sel));
        bufp->chgBit(oldp+82,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x1fU]))) {
        bufp->chgBit(oldp+83,(vlSelf->tb__DOT__u_led__DOT__r_en));
        bufp->chgBit(oldp+84,(vlSelf->tb__DOT__u_led__DOT__g_en));
        bufp->chgBit(oldp+85,(vlSelf->tb__DOT__u_led__DOT__b_en));
        bufp->chgBit(oldp+86,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__nxt));
        bufp->chgBit(oldp+87,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__nxt));
        bufp->chgBit(oldp+88,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__nxt));
        bufp->chgBit(oldp+89,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
        bufp->chgBit(oldp+90,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
        bufp->chgBit(oldp+91,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
        bufp->chgBit(oldp+92,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__nxt));
        bufp->chgBit(oldp+93,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__nxt));
        bufp->chgBit(oldp+94,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
        bufp->chgBit(oldp+95,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__sel));
        bufp->chgBit(oldp+96,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__sel));
        bufp->chgBit(oldp+97,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__sel));
        bufp->chgBit(oldp+98,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+99,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
        bufp->chgBit(oldp+100,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
        bufp->chgBit(oldp+101,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
        bufp->chgBit(oldp+102,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
        bufp->chgBit(oldp+103,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+104,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__sel));
        bufp->chgBit(oldp+105,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__sel));
        bufp->chgBit(oldp+106,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__nxt));
        bufp->chgBit(oldp+107,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__sel));
        bufp->chgBit(oldp+108,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__nxt));
        bufp->chgBit(oldp+109,(vlSelf->tb__DOT__u_led__DOT__genblk3__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__sel));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+110,(vlSelf->tb__DOT__u_mem__DOT__err_q));
        bufp->chgBit(oldp+111,(vlSelf->tb__DOT__u_rng__DOT__err_q));
        bufp->chgBit(oldp+112,(vlSelf->tb__DOT__u_led__DOT__err_q));
        bufp->chgBit(oldp+113,(vlSelf->tb__DOT__u_lcd__DOT__err_q));
        bufp->chgBit(oldp+114,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->tb__DOT__u_but__DOT__sel_q)))))));
        bufp->chgCData(oldp+115,(vlSelf->tb__DOT__u_but__DOT__sel_q),4);
        bufp->chgIData(oldp+116,(vlSelf->tb__DOT__u_cpu__DOT__bus_data_q),32);
        bufp->chgIData(oldp+117,(vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_q),32);
        bufp->chgIData(oldp+118,(vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_q),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+119,(vlSelf->tb__DOT__u_bus__DOT__mem_en_q));
        bufp->chgBit(oldp+120,(vlSelf->tb__DOT__u_bus__DOT__rng_en_q));
        bufp->chgBit(oldp+121,(vlSelf->tb__DOT__u_bus__DOT__led_en_q));
        bufp->chgBit(oldp+122,(vlSelf->tb__DOT__u_bus__DOT__lcd_en_q));
        bufp->chgBit(oldp+123,(vlSelf->tb__DOT__u_bus__DOT__but_en_q));
        bufp->chgBit(oldp+124,(vlSelf->tb__DOT__u_bus__DOT__tmp_en_q));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgCData(oldp+125,(vlSelf->tb__DOT__u_cpu__DOT__ie_q),3);
        bufp->chgBit(oldp+126,((1U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_q))));
        bufp->chgBit(oldp+127,((2U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_q))));
        bufp->chgBit(oldp+128,((3U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_q))));
        bufp->chgBit(oldp+129,((4U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_q))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgBit(oldp+130,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__val_q));
        bufp->chgBit(oldp+131,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__val_q));
        bufp->chgBit(oldp+132,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__val_q));
        bufp->chgBit(oldp+133,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__val_q));
        bufp->chgBit(oldp+134,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__val_q));
        bufp->chgBit(oldp+135,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__val_q));
        bufp->chgBit(oldp+136,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__val_q));
        bufp->chgBit(oldp+137,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__val_q));
        bufp->chgBit(oldp+138,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__val_q));
        bufp->chgBit(oldp+139,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__val_q));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgIData(oldp+140,(vlSelf->tb__DOT__u_but__DOT__ptm_q),20);
        bufp->chgIData(oldp+141,(vlSelf->tb__DOT__u_but__DOT__ptm_q),32);
        bufp->chgCData(oldp+142,((3U & vlSelf->tb__DOT__u_but__DOT__ptm_q)),2);
        bufp->chgBit(oldp+143,((0U == (3U & vlSelf->tb__DOT__u_but__DOT__ptm_q))));
        bufp->chgBit(oldp+144,((1U == (3U & vlSelf->tb__DOT__u_but__DOT__ptm_q))));
        bufp->chgBit(oldp+145,((2U == (3U & vlSelf->tb__DOT__u_but__DOT__ptm_q))));
        bufp->chgBit(oldp+146,((3U == (3U & vlSelf->tb__DOT__u_but__DOT__ptm_q))));
        bufp->chgBit(oldp+147,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__0__KET____DOT__vld_q));
        bufp->chgCData(oldp+148,((3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                        >> 2U))),2);
        bufp->chgBit(oldp+149,((0U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 2U)))));
        bufp->chgBit(oldp+150,((1U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 2U)))));
        bufp->chgBit(oldp+151,((2U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 2U)))));
        bufp->chgBit(oldp+152,((3U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 2U)))));
        bufp->chgBit(oldp+153,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__1__KET____DOT__vld_q));
        bufp->chgCData(oldp+154,((3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                        >> 4U))),2);
        bufp->chgBit(oldp+155,((0U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 4U)))));
        bufp->chgBit(oldp+156,((1U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 4U)))));
        bufp->chgBit(oldp+157,((2U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 4U)))));
        bufp->chgBit(oldp+158,((3U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 4U)))));
        bufp->chgCData(oldp+159,((3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                        >> 6U))),2);
        bufp->chgBit(oldp+160,((0U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 6U)))));
        bufp->chgBit(oldp+161,((1U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 6U)))));
        bufp->chgBit(oldp+162,((2U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 6U)))));
        bufp->chgBit(oldp+163,((3U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 6U)))));
        bufp->chgCData(oldp+164,((3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                        >> 8U))),2);
        bufp->chgBit(oldp+165,((0U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 8U)))));
        bufp->chgBit(oldp+166,((1U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 8U)))));
        bufp->chgBit(oldp+167,((2U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 8U)))));
        bufp->chgBit(oldp+168,((3U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 8U)))));
        bufp->chgCData(oldp+169,((3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                        >> 0xaU))),2);
        bufp->chgBit(oldp+170,((0U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 0xaU)))));
        bufp->chgBit(oldp+171,((1U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 0xaU)))));
        bufp->chgBit(oldp+172,((2U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 0xaU)))));
        bufp->chgBit(oldp+173,((3U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 0xaU)))));
        bufp->chgCData(oldp+174,((3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                        >> 0xcU))),2);
        bufp->chgBit(oldp+175,((0U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+176,((1U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+177,((2U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+178,((3U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 0xcU)))));
        bufp->chgCData(oldp+179,((3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                        >> 0xeU))),2);
        bufp->chgBit(oldp+180,((0U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 0xeU)))));
        bufp->chgBit(oldp+181,((1U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 0xeU)))));
        bufp->chgBit(oldp+182,((2U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 0xeU)))));
        bufp->chgBit(oldp+183,((3U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 0xeU)))));
        bufp->chgCData(oldp+184,((3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                        >> 0x10U))),2);
        bufp->chgBit(oldp+185,((0U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                             >> 0x10U)))));
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
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_3_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 559);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgBit(oldp+0,((1U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                           >> 0x10U)))));
        bufp->chgBit(oldp+1,((2U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                           >> 0x10U)))));
        bufp->chgBit(oldp+2,((3U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                           >> 0x10U)))));
        bufp->chgCData(oldp+3,((3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                      >> 0x12U))),2);
        bufp->chgBit(oldp+4,((0U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                           >> 0x12U)))));
        bufp->chgBit(oldp+5,((1U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                           >> 0x12U)))));
        bufp->chgBit(oldp+6,((2U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                           >> 0x12U)))));
        bufp->chgBit(oldp+7,((3U == (3U & (vlSelf->tb__DOT__u_but__DOT__ptm_q 
                                           >> 0x12U)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgIData(oldp+8,(vlSelf->tb__DOT__u_mem__DOT__rdata_q),32);
        bufp->chgBit(oldp+9,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__val_q));
        bufp->chgBit(oldp+10,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__val_q));
        bufp->chgBit(oldp+11,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__val_q));
        bufp->chgBit(oldp+12,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__val_q));
        bufp->chgBit(oldp+13,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__val_q));
        bufp->chgBit(oldp+14,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__val_q));
        bufp->chgBit(oldp+15,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__val_q));
        bufp->chgBit(oldp+16,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__val_q));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgIData(oldp+17,(vlSelf->tb__DOT__u_rng__DOT__lfsr_q),32);
        bufp->chgSData(oldp+18,(vlSelf->tb__DOT__u_but__DOT__stm_q),16);
        bufp->chgIData(oldp+19,(vlSelf->tb__DOT__u_but__DOT__stm_q),32);
        bufp->chgCData(oldp+20,((3U & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q))),2);
        bufp->chgBit(oldp+21,((0U == (3U & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q)))));
        bufp->chgBit(oldp+22,((1U == (3U & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q)))));
        bufp->chgBit(oldp+23,((2U == (3U & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q)))));
        bufp->chgBit(oldp+24,((3U == (3U & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q)))));
        bufp->chgBit(oldp+25,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__0__KET____DOT__vld_q));
        bufp->chgCData(oldp+26,((3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                       >> 2U))),2);
        bufp->chgBit(oldp+27,((0U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 2U)))));
        bufp->chgBit(oldp+28,((1U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 2U)))));
        bufp->chgBit(oldp+29,((2U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 2U)))));
        bufp->chgBit(oldp+30,((3U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 2U)))));
        bufp->chgBit(oldp+31,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__1__KET____DOT__vld_q));
        bufp->chgCData(oldp+32,((3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                       >> 4U))),2);
        bufp->chgBit(oldp+33,((0U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 4U)))));
        bufp->chgBit(oldp+34,((1U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 4U)))));
        bufp->chgBit(oldp+35,((2U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 4U)))));
        bufp->chgBit(oldp+36,((3U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 4U)))));
        bufp->chgBit(oldp+37,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__2__KET____DOT__vld_q));
        bufp->chgCData(oldp+38,((3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                       >> 6U))),2);
        bufp->chgBit(oldp+39,((0U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 6U)))));
        bufp->chgBit(oldp+40,((1U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 6U)))));
        bufp->chgBit(oldp+41,((2U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 6U)))));
        bufp->chgBit(oldp+42,((3U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 6U)))));
        bufp->chgBit(oldp+43,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__3__KET____DOT__vld_q));
        bufp->chgCData(oldp+44,((3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                       >> 8U))),2);
        bufp->chgBit(oldp+45,((0U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 8U)))));
        bufp->chgBit(oldp+46,((1U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 8U)))));
        bufp->chgBit(oldp+47,((2U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 8U)))));
        bufp->chgBit(oldp+48,((3U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 8U)))));
        bufp->chgBit(oldp+49,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__4__KET____DOT__vld_q));
        bufp->chgCData(oldp+50,((3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                       >> 0xaU))),2);
        bufp->chgBit(oldp+51,((0U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 0xaU)))));
        bufp->chgBit(oldp+52,((1U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 0xaU)))));
        bufp->chgBit(oldp+53,((2U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 0xaU)))));
        bufp->chgBit(oldp+54,((3U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 0xaU)))));
        bufp->chgBit(oldp+55,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__5__KET____DOT__vld_q));
        bufp->chgCData(oldp+56,((3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                       >> 0xcU))),2);
        bufp->chgBit(oldp+57,((0U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+58,((1U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+59,((2U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+60,((3U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+61,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__6__KET____DOT__vld_q));
        bufp->chgCData(oldp+62,((3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                       >> 0xeU))),2);
        bufp->chgBit(oldp+63,((0U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 0xeU)))));
        bufp->chgBit(oldp+64,((1U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 0xeU)))));
        bufp->chgBit(oldp+65,((2U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 0xeU)))));
        bufp->chgBit(oldp+66,((3U == (3U & ((IData)(vlSelf->tb__DOT__u_but__DOT__stm_q) 
                                            >> 0xeU)))));
        bufp->chgBit(oldp+67,(vlSelf->tb__DOT__u_but__DOT__u_stm__DOT__genblk1__BRA__7__KET____DOT__vld_q));
        bufp->chgIData(oldp+68,(((0x40U & (vlSelf->tb__DOT__u_rng__DOT__lfsr_q 
                                           >> 0x19U)) 
                                 | ((0x20U & (vlSelf->tb__DOT__u_rng__DOT__lfsr_q 
                                              >> 0x1aU)) 
                                    | (2U & (vlSelf->tb__DOT__u_rng__DOT__lfsr_q 
                                             >> 0x1eU))))),31);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
        bufp->chgBit(oldp+69,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__2__KET____DOT__vld_q));
        bufp->chgBit(oldp+70,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__3__KET____DOT__vld_q));
        bufp->chgBit(oldp+71,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__4__KET____DOT__vld_q));
        bufp->chgBit(oldp+72,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__5__KET____DOT__vld_q));
        bufp->chgBit(oldp+73,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__6__KET____DOT__vld_q));
        bufp->chgBit(oldp+74,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__7__KET____DOT__vld_q));
        bufp->chgBit(oldp+75,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__8__KET____DOT__vld_q));
        bufp->chgBit(oldp+76,(vlSelf->tb__DOT__u_but__DOT__u_ptm__DOT__genblk1__BRA__9__KET____DOT__vld_q));
    }
    bufp->chgBit(oldp+77,(vlSelf->clk_i));
    bufp->chgBit(oldp+78,(vlSelf->rst_ni));
    bufp->chgWData(oldp+79,(vlSelf->led_r_o),120);
    bufp->chgWData(oldp+83,(vlSelf->led_g_o),120);
    bufp->chgWData(oldp+87,(vlSelf->led_b_o),120);
    bufp->chgCData(oldp+91,(vlSelf->sevensegment_1_o),8);
    bufp->chgCData(oldp+92,(vlSelf->sevensegment_2_o),8);
    bufp->chgCData(oldp+93,(vlSelf->sevensegment_3_o),8);
    bufp->chgCData(oldp+94,(vlSelf->sevensegment_4_o),8);
    bufp->chgBit(oldp+95,(vlSelf->button_top_i));
    bufp->chgBit(oldp+96,(vlSelf->button_bottom_i));
    bufp->chgBit(oldp+97,(vlSelf->button_left_i));
    bufp->chgBit(oldp+98,(vlSelf->button_right_i));
    bufp->chgBit(oldp+99,(vlSelf->button_center_i));
    bufp->chgBit(oldp+100,(vlSelf->joystick_up_i));
    bufp->chgBit(oldp+101,(vlSelf->joystick_down_i));
    bufp->chgBit(oldp+102,(vlSelf->joystick_left_i));
    bufp->chgBit(oldp+103,(vlSelf->joystick_right_i));
    bufp->chgBit(oldp+104,(vlSelf->joystick_pressed_i));
    bufp->chgCData(oldp+105,(vlSelf->dip_switches_i),8);
    bufp->chgIData(oldp+106,(vlSelf->tb__DOT__bus_rdata),32);
    bufp->chgBit(oldp+107,((1U & (((IData)(vlSelf->tb__DOT__u_bus__DOT__mem_en_q) 
                                   & (IData)(vlSelf->tb__DOT__u_mem__DOT__err_q)) 
                                  | (((IData)(vlSelf->tb__DOT__u_bus__DOT__rng_en_q) 
                                      & (IData)(vlSelf->tb__DOT__u_rng__DOT__err_q)) 
                                     | (((IData)(vlSelf->tb__DOT__u_bus__DOT__led_en_q) 
                                         & (IData)(vlSelf->tb__DOT__u_led__DOT__err_q)) 
                                        | (((IData)(vlSelf->tb__DOT__u_bus__DOT__lcd_en_q) 
                                            & (IData)(vlSelf->tb__DOT__u_lcd__DOT__err_q)) 
                                           | ((~ ((IData)(vlSelf->tb__DOT__u_bus__DOT__mem_en_q) 
                                                  | ((IData)(vlSelf->tb__DOT__u_bus__DOT__rng_en_q) 
                                                     | ((IData)(vlSelf->tb__DOT__u_bus__DOT__led_en_q) 
                                                        | ((IData)(vlSelf->tb__DOT__u_bus__DOT__lcd_en_q) 
                                                           | ((IData)(vlSelf->tb__DOT__u_bus__DOT__but_en_q) 
                                                              | (IData)(vlSelf->tb__DOT__u_bus__DOT__tmp_en_q))))))) 
                                              | ((~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__u_but__DOT__sel_q)))) 
                                                 & (IData)(vlSelf->tb__DOT__u_bus__DOT__but_en_q))))))))));
    bufp->chgIData(oldp+108,(((vlSelf->tb__DOT__u_lcd__DOT__disp_q
                               [3U] << 0x18U) | ((vlSelf->tb__DOT__u_lcd__DOT__disp_q
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->tb__DOT__u_lcd__DOT__disp_q
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->tb__DOT__u_lcd__DOT__disp_q
                                                    [0U])))),32);
    bufp->chgIData(oldp+109,((((- (IData)((1U & (IData)(vlSelf->tb__DOT__u_but__DOT__sel_q)))) 
                               & (((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                                   << 0x10U) | (IData)(vlSelf->tb__DOT__u_but__DOT__ext_push))) 
                              | (((- (IData)((1U & 
                                              ((IData)(vlSelf->tb__DOT__u_but__DOT__sel_q) 
                                               >> 1U)))) 
                                  & (((IData)(vlSelf->tb__DOT__u_but__DOT____Vcellout__u_stm__src) 
                                      << 0x10U) | (IData)(vlSelf->tb__DOT__u_but__DOT____Vcellout__u_ptm__src))) 
                                 | (((- (IData)((1U 
                                                 & ((IData)(vlSelf->tb__DOT__u_but__DOT__sel_q) 
                                                    >> 2U)))) 
                                     & vlSelf->tb__DOT__u_but__DOT__ptm_q) 
                                    | ((- (IData)((1U 
                                                   & ((IData)(vlSelf->tb__DOT__u_but__DOT__sel_q) 
                                                      >> 3U)))) 
                                       & (IData)(vlSelf->tb__DOT__u_but__DOT__stm_q)))))),32);
    bufp->chgBit(oldp+110,((0U != vlSelf->tb__DOT__u_but__DOT__src)));
    bufp->chgSData(oldp+111,((((IData)(vlSelf->button_top_i) 
                               << 9U) | (((IData)(vlSelf->button_bottom_i) 
                                          << 8U) | 
                                         (((IData)(vlSelf->button_left_i) 
                                           << 7U) | 
                                          (((IData)(vlSelf->button_right_i) 
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
                                                          | (IData)(vlSelf->joystick_pressed_i))))))))))),10);
    bufp->chgBit(oldp+112,(vlSelf->tb__DOT__u_but__DOT__ext_vld_q));
    bufp->chgIData(oldp+113,(vlSelf->tb__DOT__u_but__DOT__ext_val_q),18);
    bufp->chgSData(oldp+114,(vlSelf->tb__DOT__u_but__DOT__ext_push),10);
    bufp->chgCData(oldp+115,(vlSelf->tb__DOT__u_but__DOT__ext_switch),8);
    bufp->chgIData(oldp+116,(vlSelf->tb__DOT__u_but__DOT__src),18);
    bufp->chgBit(oldp+117,((((IData)(vlSelf->tb__DOT__bus_we) 
                             & (0U != vlSelf->tb__DOT__bus_wdata)) 
                            | (IData)(vlSelf->tb__DOT__u_led__DOT__wstrb_incomp))));
    bufp->chgIData(oldp+118,((((IData)(vlSelf->tb__DOT__u_but__DOT__ext_switch) 
                               << 0x10U) | (IData)(vlSelf->tb__DOT__u_but__DOT__ext_push))),32);
    bufp->chgIData(oldp+119,((((IData)(vlSelf->tb__DOT__u_but__DOT____Vcellout__u_stm__src) 
                               << 0x10U) | (IData)(vlSelf->tb__DOT__u_but__DOT____Vcellout__u_ptm__src))),32);
    bufp->chgSData(oldp+120,(vlSelf->tb__DOT__u_but__DOT____Vcellout__u_ptm__src),10);
    bufp->chgCData(oldp+121,(vlSelf->tb__DOT__u_but__DOT____Vcellout__u_stm__src),8);
    bufp->chgCData(oldp+122,(vlSelf->tb__DOT__u_cpu__DOT__st_q),3);
    bufp->chgIData(oldp+123,(vlSelf->tb__DOT__u_cpu__DOT__pc_q),32);
    bufp->chgIData(oldp+124,(((IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_expt_set)
                               ? vlSelf->tb__DOT__u_cpu__DOT__csr_mtvec_q
                               : ((IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_expt_ret)
                                   ? vlSelf->tb__DOT__u_cpu__DOT__csr_mepc_q
                                   : ((((- (IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_jalr))))) 
                                        & vlSelf->tb__DOT__u_cpu__DOT__pc_q) 
                                       | ((- (IData)((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_jalr))) 
                                          & vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_q)) 
                                      + (((- (IData)(
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
                                                                & (~ (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_bru_cmp))))))))))))),32);
    bufp->chgBit(oldp+125,((1U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q))));
    bufp->chgBit(oldp+126,((2U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q))));
    bufp->chgBit(oldp+127,((3U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q))));
    bufp->chgBit(oldp+128,((4U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q))));
    bufp->chgBit(oldp+129,((5U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q))));
    bufp->chgBit(oldp+130,((0U != (3U & vlSelf->tb__DOT__u_cpu__DOT__pc_q))));
    bufp->chgBit(oldp+131,(((3U == (7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                          >> 0xcU))) 
                            | (IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_hff8699ac__0))));
    bufp->chgBit(oldp+132,(((3U == (7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                          >> 0xcU))) 
                            | (IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_hfbc50a14__0))));
    bufp->chgBit(oldp+133,((((~ (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_funct7_eq_v)) 
                             & (0U == (0x7000U & vlSelf->tb__DOT__u_cpu__DOT__de_ins))) 
                            | ((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_hc685467b__0) 
                               | ((IData)(((0x2000U 
                                            == (0x7000U 
                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                           & (0U != 
                                              (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                               >> 0x19U)))) 
                                  | ((IData)(((0x3000U 
                                               == (0x7000U 
                                                   & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                              & (0U 
                                                 != 
                                                 (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                  >> 0x19U)))) 
                                     | ((IData)(((0x4000U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                 & (0U 
                                                    != 
                                                    (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                     >> 0x19U)))) 
                                        | ((IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h91c39851__0) 
                                           | ((0U != 
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
                                                        >> 0xcU)))))))))))));
    bufp->chgBit(oldp+134,((((~ (IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h9b6faebf__0)) 
                             & (0U == (0x7000U & vlSelf->tb__DOT__u_cpu__DOT__de_ins))) 
                            | ((4U == (7U & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                             >> 0xcU))) 
                               | ((~ ((0x300U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                  >> 0x14U)) 
                                      | ((0x304U == 
                                          (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                           >> 0x14U)) 
                                         | ((0x305U 
                                             == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
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
                                     | (IData)(vlSelf->tb__DOT__u_cpu__DOT____VdfgTmp_h541efbc5__0)))))));
    bufp->chgCData(oldp+135,(((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_inv)
                               ? 2U : ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_ecall)
                                        ? 0xbU : 3U))),6);
    bufp->chgIData(oldp+136,((vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_pc 
                              ^ (vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add_op1 
                                 ^ (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sub)))),32);
    bufp->chgIData(oldp+137,(((vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_pc 
                               & (vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add_op1 
                                  | (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sub))) 
                              | (vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add_op1 
                                 & (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_sub)))),32);
    bufp->chgIData(oldp+138,((vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_q 
                              | vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_imm)),32);
    bufp->chgIData(oldp+139,((vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_q 
                              & vlSelf->tb__DOT__u_cpu__DOT__ex_rs2_imm)),32);
    bufp->chgIData(oldp+140,(((0x1000U & vlSelf->tb__DOT__u_cpu__DOT__de_ins)
                               ? (1U & (~ (IData)((vlSelf->tb__DOT__u_cpu__DOT__ex_alu_add 
                                                   >> 0x20U))))
                               : (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_alu_lts))),32);
    bufp->chgIData(oldp+141,((((- (IData)((1U & (~ (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_jalr))))) 
                               & vlSelf->tb__DOT__u_cpu__DOT__pc_q) 
                              | ((- (IData)((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_jalr))) 
                                 & vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_q))),32);
    bufp->chgIData(oldp+142,((((- (IData)((0x6fU == 
                                           (0x7fU & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))) 
                               & (((- (IData)((vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff000U 
                                                 & vlSelf->tb__DOT__u_cpu__DOT__de_ins) 
                                                | ((0x800U 
                                                    & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                         >> 0x14U)))))) 
                              | (((- (IData)((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_jalr))) 
                                  & vlSelf->tb__DOT__u_cpu__DOT__de_ins_imm_i) 
                                 | (((- (IData)(((0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                                 & (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_bru_cmp)))) 
                                     & (((- (IData)(
                                                    (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        ((0x800U & 
                                          (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                           << 4U)) 
                                         | ((0x7e0U 
                                             & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                >> 0x14U)) 
                                            | (0x1eU 
                                               & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                  >> 7U)))))) 
                                    | (4U & (- (IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_bru_cmp)))))))))),32);
    bufp->chgIData(oldp+143,(((((- (IData)((1U & (~ (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_jalr))))) 
                                & vlSelf->tb__DOT__u_cpu__DOT__pc_q) 
                               | ((- (IData)((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_jalr))) 
                                  & vlSelf->tb__DOT__u_cpu__DOT__ex_rs1_q)) 
                              + (((- (IData)((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->tb__DOT__u_cpu__DOT__de_ins)))) 
                                  & (((- (IData)((vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                  >> 0x1fU))) 
                                      << 0x14U) | (
                                                   (0xff000U 
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
                                       | (4U & (- (IData)(
                                                          (1U 
                                                           & (~ (IData)(vlSelf->tb__DOT__u_cpu__DOT__ex_bru_cmp))))))))))),32);
    bufp->chgBit(oldp+144,(((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_lh) 
                            | (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_sh))));
    bufp->chgBit(oldp+145,(vlSelf->tb__DOT__u_cpu__DOT__csr_mie_q));
    bufp->chgBit(oldp+146,(vlSelf->tb__DOT__u_cpu__DOT__csr_mtie_q));
    bufp->chgBit(oldp+147,(vlSelf->tb__DOT__u_cpu__DOT__csr_meie_q));
    bufp->chgBit(oldp+148,(vlSelf->tb__DOT__u_cpu__DOT__csr_mpie_q));
    bufp->chgBit(oldp+149,(vlSelf->tb__DOT__u_cpu__DOT__csr_mcause_i_q));
    bufp->chgCData(oldp+150,(vlSelf->tb__DOT__u_cpu__DOT__csr_mcause_c_q),6);
    bufp->chgIData(oldp+151,(vlSelf->tb__DOT__u_cpu__DOT__csr_mstatus),32);
    bufp->chgIData(oldp+152,(vlSelf->tb__DOT__u_cpu__DOT__csr_mie),32);
    bufp->chgIData(oldp+153,(vlSelf->tb__DOT__u_cpu__DOT__csr_mtvec_q),32);
    bufp->chgIData(oldp+154,(vlSelf->tb__DOT__u_cpu__DOT__csr_mepc_q),32);
    bufp->chgIData(oldp+155,(vlSelf->tb__DOT__u_cpu__DOT__csr_mcause),32);
    bufp->chgIData(oldp+156,(((IData)((0U != vlSelf->tb__DOT__u_but__DOT__src)) 
                              << 0xbU)),32);
    bufp->chgIData(oldp+157,((((- (IData)((IData)((3U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->tb__DOT__u_cpu__DOT__de_ins))))) 
                               & (((- (IData)((1U & 
                                               ((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_lsu_lb) 
                                                >> 7U)))) 
                                   << 8U) | (IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_lsu_lb))) 
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
                                          & vlSelf->tb__DOT__bus_rdata)))))),32);
    bufp->chgBit(oldp+158,(((4U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__st_q)) 
                            & ((~ (IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_inv)) 
                               & ((0x63U != (0x7fU 
                                             & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                  & ((0x23U != (0x7fU 
                                                & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                     & ((0xfU != (0x7fU 
                                                  & vlSelf->tb__DOT__u_cpu__DOT__de_ins)) 
                                        & (~ ((0U == 
                                               (0x1fU 
                                                & (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                                   >> 7U))) 
                                              | (IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_expt))))))))));
    bufp->chgIData(oldp+159,(vlSelf->tb__DOT__u_cpu__DOT__wb_gpr_wdata),32);
    bufp->chgBit(oldp+160,(((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we) 
                            & (0x305U == (vlSelf->tb__DOT__u_cpu__DOT__de_ins 
                                          >> 0x14U)))));
    bufp->chgBit(oldp+161,(((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mepc) 
                            | (IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_expt_set))));
    bufp->chgBit(oldp+162,((((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mstatus) 
                             & (vlSelf->tb__DOT__u_cpu__DOT__wb_csr_wdata 
                                >> 3U)) | ((IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_expt_ret) 
                                           & (IData)(vlSelf->tb__DOT__u_cpu__DOT__csr_mpie_q)))));
    bufp->chgBit(oldp+163,((((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mstatus) 
                             & (vlSelf->tb__DOT__u_cpu__DOT__wb_csr_wdata 
                                >> 7U)) | (((IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_expt_set) 
                                            & (IData)(vlSelf->tb__DOT__u_cpu__DOT__csr_mie_q)) 
                                           | (IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_expt_ret)))));
    bufp->chgIData(oldp+164,(((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mepc)
                               ? vlSelf->tb__DOT__u_cpu__DOT__wb_csr_wdata
                               : vlSelf->tb__DOT__u_cpu__DOT__pc_q)),32);
    bufp->chgBit(oldp+165,((1U & ((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mcause)
                                   ? (vlSelf->tb__DOT__u_cpu__DOT__wb_csr_wdata 
                                      >> 0x1fU) : (IData)(vlSelf->tb__DOT__u_cpu__DOT__if_irq_e)))));
    bufp->chgCData(oldp+166,((0x3fU & ((IData)(vlSelf->tb__DOT__u_cpu__DOT__wb_csr_we_mcause)
                                        ? vlSelf->tb__DOT__u_cpu__DOT__wb_csr_wdata
                                        : ((1U == (IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_q))
                                            ? ((IData)(vlSelf->tb__DOT__u_cpu__DOT__if_irq_e)
                                                ? 0xbU
                                                : 0U)
                                            : ((2U 
                                                == (IData)(vlSelf->tb__DOT__u_cpu__DOT__ie_q))
                                                ? ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_inv)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelf->tb__DOT__u_cpu__DOT__de_ins_is_ecall)
                                                     ? 0xbU
                                                     : 3U))
                                                : (
                                                   (3U 
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
                                                     : 7U))))))),6);
    bufp->chgCData(oldp+167,(vlSelf->tb__DOT__u_lcd__DOT__disp_q[0]),8);
    bufp->chgCData(oldp+168,(vlSelf->tb__DOT__u_lcd__DOT__disp_q[1]),8);
    bufp->chgCData(oldp+169,(vlSelf->tb__DOT__u_lcd__DOT__disp_q[2]),8);
    bufp->chgCData(oldp+170,(vlSelf->tb__DOT__u_lcd__DOT__disp_q[3]),8);
    bufp->chgWData(oldp+171,(vlSelf->tb__DOT__u_led__DOT__led_r_q),120);
    bufp->chgWData(oldp+175,(vlSelf->tb__DOT__u_led__DOT__led_g_q),120);
    bufp->chgWData(oldp+179,(vlSelf->tb__DOT__u_led__DOT__led_b_q),120);
    bufp->chgBit(oldp+183,(((IData)(vlSelf->tb__DOT__mem_en) 
                            & ((IData)(vlSelf->tb__DOT__bus_we) 
                               & (0xf0000000U >= vlSelf->tb__DOT__bus_addr)))));
    bufp->chgBit(oldp+184,(((IData)(vlSelf->tb__DOT__mem_en) 
                            & ((~ (IData)(vlSelf->tb__DOT__bus_we)) 
                               & (0xf0000000U >= vlSelf->tb__DOT__bus_addr)))));
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
    vlSymsp->TOP.__Vm_traceActivity[0x1eU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1fU] = 0U;
}
