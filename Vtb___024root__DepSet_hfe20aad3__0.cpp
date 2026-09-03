// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb___024root.h"

void Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_get_ins_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &cpu_get_ins__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_get_ins_TOP\n"); );
    // Init
    // Body
    cpu_get_ins__Vfuncrtn = vlSymsp->TOP.tb__DOT__u_cpu__DOT__de_ins;
}

void Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_get_gpr_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ &cpu_get_gpr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_get_gpr_TOP\n"); );
    // Init
    // Body
    {
        if (((0U < idx) & (0x20U > idx))) {
            cpu_get_gpr__Vfuncrtn = vlSymsp->TOP.tb__DOT__u_cpu__DOT__gpr_q
                [(0x1fU & idx)];
            goto __Vlabel1;
        } else {
            cpu_get_gpr__Vfuncrtn = 0U;
            goto __Vlabel1;
        }
        __Vlabel1: ;
    }
}

void Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_get_csr_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ &cpu_get_csr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_get_csr_TOP\n"); );
    // Init
    // Body
    {
        if ((0x300U == idx)) {
            cpu_get_csr__Vfuncrtn = vlSymsp->TOP.tb__DOT__u_cpu__DOT__csr_mstatus;
            goto __Vlabel2;
        } else if ((0x304U == idx)) {
            cpu_get_csr__Vfuncrtn = vlSymsp->TOP.tb__DOT__u_cpu__DOT__csr_mie;
            goto __Vlabel2;
        } else if ((0x305U == idx)) {
            cpu_get_csr__Vfuncrtn = vlSymsp->TOP.tb__DOT__u_cpu__DOT__csr_mtvec_q;
            goto __Vlabel2;
        } else if ((0x341U == idx)) {
            cpu_get_csr__Vfuncrtn = vlSymsp->TOP.tb__DOT__u_cpu__DOT__csr_mepc_q;
            goto __Vlabel2;
        } else if ((0x342U == idx)) {
            cpu_get_csr__Vfuncrtn = vlSymsp->TOP.tb__DOT__u_cpu__DOT__csr_mcause;
            goto __Vlabel2;
        } else if ((0x344U == idx)) {
            cpu_get_csr__Vfuncrtn = ((IData)((0U != vlSymsp->TOP.tb__DOT__u_but__DOT__src)) 
                                     << 0xbU);
            goto __Vlabel2;
        } else {
            cpu_get_csr__Vfuncrtn = 0U;
            goto __Vlabel2;
        }
        __Vlabel2: ;
    }
}

void Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_get_pc_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &cpu_get_pc__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_get_pc_TOP\n"); );
    // Init
    // Body
    cpu_get_pc__Vfuncrtn = vlSymsp->TOP.tb__DOT__u_cpu__DOT__pc_q;
}

void Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_get_st_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &cpu_get_st__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_get_st_TOP\n"); );
    // Init
    // Body
    cpu_get_st__Vfuncrtn = vlSymsp->TOP.tb__DOT__u_cpu__DOT__st_q;
}

VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_gpr_TOP____Vfork_1__2(Vtb___024root* vlSelf, IData/*31:0*/ __Vintraval_he48e540a__0, CData/*4:0*/ __Vintraidx_h804109ab__0);

void Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_gpr_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_gpr_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((0U < idx) & (0x20U > idx))) {
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*4:0*/ __Vintraidx_h804109ab__0;
        __Vintraidx_h804109ab__0 = 0;
        IData/*31:0*/ __Vintraval_he48e540a__0;
        __Vintraval_he48e540a__0 = 0;
        __Vintraidx_h804109ab__0 = (0x1fU & idx);
        __Vintraval_he48e540a__0 = val;
        Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_gpr_TOP____Vfork_1__2((&vlSymsp->TOP), __Vintraval_he48e540a__0, (IData)(__Vintraidx_h804109ab__0));
        vlSymsp->TOP.__Vm_traceActivity[1U] = 1U;
    }
}

VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_2__1(Vtb___024root* vlSelf, CData/*0:0*/ __Vintraval_h5b6de35f__0);
VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_3__1(Vtb___024root* vlSelf, CData/*0:0*/ __Vintraval_h13901da6__0);
VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_4__1(Vtb___024root* vlSelf, CData/*0:0*/ __Vintraval_h9eec91ef__0);
VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_5__1(Vtb___024root* vlSelf, CData/*0:0*/ __Vintraval_hdaf54fc7__0);
VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_6__1(Vtb___024root* vlSelf, IData/*31:0*/ __Vintraval_h13126a6f__0);
VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_7__1(Vtb___024root* vlSelf, IData/*31:0*/ __Vintraval_h7d1ca584__0);
VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_8__1(Vtb___024root* vlSelf, CData/*0:0*/ __Vintraval_ha2266db0__0);
VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_9__1(Vtb___024root* vlSelf, CData/*5:0*/ __Vintraval_h8b1804a3__0);

void Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if ((0x300U == idx)) {
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_h5b6de35f__0;
        __Vintraval_h5b6de35f__0 = 0;
        __Vintraval_h5b6de35f__0 = (1U & (val >> 3U));
        Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_2__1((&vlSymsp->TOP), __Vintraval_h5b6de35f__0);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_h13901da6__0;
        __Vintraval_h13901da6__0 = 0;
        __Vintraval_h13901da6__0 = (1U & (val >> 7U));
        Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_3__1((&vlSymsp->TOP), __Vintraval_h13901da6__0);
    } else if ((0x304U == idx)) {
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_h9eec91ef__0;
        __Vintraval_h9eec91ef__0 = 0;
        __Vintraval_h9eec91ef__0 = (1U & (val >> 0xbU));
        Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_4__1((&vlSymsp->TOP), __Vintraval_h9eec91ef__0);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_hdaf54fc7__0;
        __Vintraval_hdaf54fc7__0 = 0;
        __Vintraval_hdaf54fc7__0 = (1U & (val >> 7U));
        Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_5__1((&vlSymsp->TOP), __Vintraval_hdaf54fc7__0);
    } else if ((0x305U == idx)) {
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        IData/*31:0*/ __Vintraval_h13126a6f__0;
        __Vintraval_h13126a6f__0 = 0;
        __Vintraval_h13126a6f__0 = val;
        Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_6__1((&vlSymsp->TOP), __Vintraval_h13126a6f__0);
    } else if ((0x341U == idx)) {
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        IData/*31:0*/ __Vintraval_h7d1ca584__0;
        __Vintraval_h7d1ca584__0 = 0;
        __Vintraval_h7d1ca584__0 = val;
        Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_7__1((&vlSymsp->TOP), __Vintraval_h7d1ca584__0);
    } else if ((0x342U == idx)) {
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_ha2266db0__0;
        __Vintraval_ha2266db0__0 = 0;
        __Vintraval_ha2266db0__0 = (val >> 0x1fU);
        Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_8__1((&vlSymsp->TOP), __Vintraval_ha2266db0__0);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*5:0*/ __Vintraval_h8b1804a3__0;
        __Vintraval_h8b1804a3__0 = 0;
        __Vintraval_h8b1804a3__0 = (0x3fU & val);
        Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP____Vfork_9__1((&vlSymsp->TOP), __Vintraval_h8b1804a3__0);
    }
}

VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_pc_TOP____Vfork_10__1(Vtb___024root* vlSelf, IData/*31:0*/ __Vintraval_hd75fb222__0);
VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_pc_TOP____Vfork_11__1(Vtb___024root* vlSelf, CData/*2:0*/ __Vintraval_hc7f976d7__0);

void Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_pc_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_pc_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if ((1U & (~ (IData)((0U != (3U & val)))))) {
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        IData/*31:0*/ __Vintraval_hd75fb222__0;
        __Vintraval_hd75fb222__0 = 0;
        __Vintraval_hd75fb222__0 = val;
        Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_pc_TOP____Vfork_10__1((&vlSymsp->TOP), __Vintraval_hd75fb222__0);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*2:0*/ __Vintraval_hc7f976d7__0;
        __Vintraval_hc7f976d7__0 = 0;
        __Vintraval_hc7f976d7__0 = 0U;
        Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_pc_TOP____Vfork_11__1((&vlSymsp->TOP), __Vintraval_hc7f976d7__0);
    }
}

extern "C" unsigned int mem_rd(unsigned int addr);

VL_INLINE_OPT void Vtb___024root____Vdpiimwrap_tb__DOT__u_mem__DOT__mem_rd_TOP(IData/*31:0*/ addr, IData/*31:0*/ &mem_rd__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiimwrap_tb__DOT__u_mem__DOT__mem_rd_TOP\n"); );
    // Body
    unsigned int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    unsigned int mem_rd__Vfuncrtn__Vcvt;
    mem_rd__Vfuncrtn__Vcvt = mem_rd(addr__Vcvt);
    mem_rd__Vfuncrtn = mem_rd__Vfuncrtn__Vcvt;
}

extern "C" void mem_wr(unsigned int addr, unsigned int data, unsigned int strb);

VL_INLINE_OPT void Vtb___024root____Vdpiimwrap_tb__DOT__u_mem__DOT__mem_wr_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ strb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiimwrap_tb__DOT__u_mem__DOT__mem_wr_TOP\n"); );
    // Body
    unsigned int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    unsigned int data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    unsigned int strb__Vcvt;
    for (size_t strb__Vidx = 0; strb__Vidx < 1; ++strb__Vidx) strb__Vcvt = strb;
    mem_wr(addr__Vcvt, data__Vcvt, strb__Vcvt);
}

void Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_rd_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ rgb, VlWide<4>/*119:0*/ &val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_rd_TOP\n"); );
    // Init
    // Body
    if ((0U == rgb)) {
        val[0U] = vlSymsp->TOP.tb__DOT__u_led__DOT__led_r_q[0U];
        val[1U] = vlSymsp->TOP.tb__DOT__u_led__DOT__led_r_q[1U];
        val[2U] = vlSymsp->TOP.tb__DOT__u_led__DOT__led_r_q[2U];
        val[3U] = vlSymsp->TOP.tb__DOT__u_led__DOT__led_r_q[3U];
    } else if ((1U == rgb)) {
        val[0U] = vlSymsp->TOP.tb__DOT__u_led__DOT__led_g_q[0U];
        val[1U] = vlSymsp->TOP.tb__DOT__u_led__DOT__led_g_q[1U];
        val[2U] = vlSymsp->TOP.tb__DOT__u_led__DOT__led_g_q[2U];
        val[3U] = vlSymsp->TOP.tb__DOT__u_led__DOT__led_g_q[3U];
    } else if ((2U == rgb)) {
        val[0U] = vlSymsp->TOP.tb__DOT__u_led__DOT__led_b_q[0U];
        val[1U] = vlSymsp->TOP.tb__DOT__u_led__DOT__led_b_q[1U];
        val[2U] = vlSymsp->TOP.tb__DOT__u_led__DOT__led_b_q[2U];
        val[3U] = vlSymsp->TOP.tb__DOT__u_led__DOT__led_b_q[3U];
    } else {
        val[0U] = 0U;
        val[1U] = 0U;
        val[2U] = 0U;
        val[3U] = 0U;
    }
}

VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_wr_TOP____Vfork_12__1(Vtb___024root* vlSelf, VlWide<4>/*119:0*/ __Vintraval_hac066018__0);
VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_wr_TOP____Vfork_13__1(Vtb___024root* vlSelf, VlWide<4>/*119:0*/ __Vintraval_h850b8780__0);
VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_wr_TOP____Vfork_14__1(Vtb___024root* vlSelf, VlWide<4>/*119:0*/ __Vintraval_had264813__0);

void Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_wr_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ rgb, VlWide<4>/*119:0*/ val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_wr_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if ((0U == rgb)) {
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        VlWide<4>/*119:0*/ __Vintraval_hac066018__0;
        VL_ZERO_W(120, __Vintraval_hac066018__0);
        __Vintraval_hac066018__0[0U] = val[0U];
        __Vintraval_hac066018__0[1U] = val[1U];
        __Vintraval_hac066018__0[2U] = val[2U];
        __Vintraval_hac066018__0[3U] = val[3U];
        Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_wr_TOP____Vfork_12__1((&vlSymsp->TOP), __Vintraval_hac066018__0);
    } else if ((1U == rgb)) {
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        VlWide<4>/*119:0*/ __Vintraval_h850b8780__0;
        VL_ZERO_W(120, __Vintraval_h850b8780__0);
        __Vintraval_h850b8780__0[0U] = val[0U];
        __Vintraval_h850b8780__0[1U] = val[1U];
        __Vintraval_h850b8780__0[2U] = val[2U];
        __Vintraval_h850b8780__0[3U] = val[3U];
        Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_wr_TOP____Vfork_13__1((&vlSymsp->TOP), __Vintraval_h850b8780__0);
    } else if ((2U == rgb)) {
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        VlWide<4>/*119:0*/ __Vintraval_had264813__0;
        VL_ZERO_W(120, __Vintraval_had264813__0);
        __Vintraval_had264813__0[0U] = val[0U];
        __Vintraval_had264813__0[1U] = val[1U];
        __Vintraval_had264813__0[2U] = val[2U];
        __Vintraval_had264813__0[3U] = val[3U];
        Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_wr_TOP____Vfork_14__1((&vlSymsp->TOP), __Vintraval_had264813__0);
    }
}

void Vtb___024root____Vdpiexp_tb__DOT__u_lcd__DOT__lcd_rd_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ &lcd_rd__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_lcd__DOT__lcd_rd_TOP\n"); );
    // Init
    // Body
    {
        if ((4U > idx)) {
            lcd_rd__Vfuncrtn = vlSymsp->TOP.tb__DOT__u_lcd__DOT__disp_q
                [(3U & idx)];
            goto __Vlabel3;
        } else {
            lcd_rd__Vfuncrtn = 0U;
            goto __Vlabel3;
        }
        __Vlabel3: ;
    }
}

VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_lcd__DOT__lcd_wr_TOP____Vfork_15__2(Vtb___024root* vlSelf, CData/*7:0*/ __Vintraval_h9d398220__0, CData/*1:0*/ __Vintraidx_h1089d523__0);

void Vtb___024root____Vdpiexp_tb__DOT__u_lcd__DOT__lcd_wr_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_lcd__DOT__lcd_wr_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if ((4U > idx)) {
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*1:0*/ __Vintraidx_h1089d523__0;
        __Vintraidx_h1089d523__0 = 0;
        CData/*7:0*/ __Vintraval_h9d398220__0;
        __Vintraval_h9d398220__0 = 0;
        __Vintraidx_h1089d523__0 = (3U & idx);
        __Vintraval_h9d398220__0 = (0xffU & val);
        Vtb___024root____Vdpiexp_tb__DOT__u_lcd__DOT__lcd_wr_TOP____Vfork_15__2((&vlSymsp->TOP), __Vintraval_h9d398220__0, (IData)(__Vintraidx_h1089d523__0));
    }
}

void Vtb___024root____Vdpiexp_tb__DOT__u_but__DOT__but_rd_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &but_rd__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_but__DOT__but_rd_TOP\n"); );
    // Init
    // Body
    but_rd__Vfuncrtn = (((IData)(vlSymsp->TOP.tb__DOT__u_but__DOT__ext_switch) 
                         << 0xaU) | (IData)(vlSymsp->TOP.tb__DOT__u_but__DOT__ext_push));
}

VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_but__DOT__but_wr_TOP____Vfork_16__1(Vtb___024root* vlSelf, CData/*0:0*/ __Vintraval_h47565c34__0);
VlCoroutine Vtb___024root____Vdpiexp_tb__DOT__u_but__DOT__but_wr_TOP____Vfork_17__1(Vtb___024root* vlSelf, IData/*17:0*/ __Vintraval_ha6ff6a63__0);

void Vtb___024root____Vdpiexp_tb__DOT__u_but__DOT__but_wr_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ en, IData/*31:0*/ val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vdpiexp_tb__DOT__u_but__DOT__but_wr_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*0:0*/ __Vintraval_h47565c34__0;
    __Vintraval_h47565c34__0 = 0;
    __Vintraval_h47565c34__0 = (1U & en);
    Vtb___024root____Vdpiexp_tb__DOT__u_but__DOT__but_wr_TOP____Vfork_16__1((&vlSymsp->TOP), __Vintraval_h47565c34__0);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    IData/*17:0*/ __Vintraval_ha6ff6a63__0;
    __Vintraval_ha6ff6a63__0 = 0;
    __Vintraval_ha6ff6a63__0 = (0x3ffffU & val);
    Vtb___024root____Vdpiexp_tb__DOT__u_but__DOT__but_wr_TOP____Vfork_17__1((&vlSymsp->TOP), __Vintraval_ha6ff6a63__0);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__ico(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval_triggers__ico(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))) 
                                     | ((~ (IData)(vlSelf->rst_ni)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_ni__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->clk_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))));
    vlSelf->__VactTriggered.set(3U, vlSelf->__VnbaEvent.isFired());
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = vlSelf->rst_ni;
    if (vlSelf->__VnbaEvent.isFired()) {
        vlSelf->__VnbaEvent.clearFired();
        vlSymsp->enqueueTriggeredEventForClearing(vlSelf->__VnbaEvent);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtb___024root____Vthread__nba__0(void* voidSelf, bool even_cycle);
void Vtb___024root____Vthread__nba__1(void* voidSelf, bool even_cycle);
void Vtb___024root____Vthread__nba__2(void* voidSelf, bool even_cycle);
void Vtb___024root____Vthread__nba__3(void* voidSelf, bool even_cycle);

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    // Body
    vlSymsp->__Vm_even_cycle__nba = !vlSymsp->__Vm_even_cycle__nba;
    vlSymsp->__Vm_threadPoolp->workerp(0)->addTask(&Vtb___024root____Vthread__nba__0, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(1)->addTask(&Vtb___024root____Vthread__nba__1, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(2)->addTask(&Vtb___024root____Vthread__nba__2, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    Vtb___024root____Vthread__nba__3(vlSelf, vlSymsp->__Vm_even_cycle__nba);
    Verilated::mtaskId(0);
    vlSelf->__Vm_mtaskstate_final__nba.waitUntilUpstreamDone(vlSymsp->__Vm_even_cycle__nba);
}

void Vtb___024root___nba_sequent__TOP__10(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__8(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__11(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__12(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__13(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__25(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__28(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__20(Vtb___024root* vlSelf);

void Vtb___024root____Vthread__nba__0(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vthread__nba__0\n"); );
    // Body
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Verilated::mtaskId(3);
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__10(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_16.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_18.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_13.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(13);
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_25.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(11);
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__11(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_27.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(12);
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_26.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(26);
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__25(vlSelf);
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_17.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(17);
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__28(vlSelf);
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_20.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(20);
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__20(vlSelf);
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vtb___024root___nba_sequent__TOP__11(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__9(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__17(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__16(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__21(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__24(Vtb___024root* vlSelf);

void Vtb___024root____Vthread__nba__1(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vthread__nba__1\n"); );
    // Body
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Verilated::mtaskId(4);
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__11(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_25.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(25);
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_26.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_18.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(18);
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__17(vlSelf);
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_19.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_20.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_22.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_23.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_14.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_17.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_16.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(16);
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__16(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(21);
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__21(vlSelf);
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(24);
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__24(vlSelf);
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vtb___024root___nba_sequent__TOP__12(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__26(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__18(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__19(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__22(Vtb___024root* vlSelf);

void Vtb___024root____Vthread__nba__2(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vthread__nba__2\n"); );
    // Body
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Verilated::mtaskId(5);
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__12(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_16.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_18.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_27.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(27);
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__26(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_19.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(19);
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__18(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__19(vlSelf);
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_22.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(22);
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__22(vlSelf);
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vtb___024root___nba_sequent__TOP__15(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__16(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__17(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__19(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__20(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__21(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__3(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__24(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__2(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__3(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__4(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__5(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__0(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__1(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__6(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__8(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__2(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__25(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__26(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__4(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__5(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__6(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__29(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__7(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__10(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__14(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__15(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__27(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__23(Vtb___024root* vlSelf);

void Vtb___024root____Vthread__nba__3(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vthread__nba__3\n"); );
    // Body
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Verilated::mtaskId(6);
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__15(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__16(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(8);
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__17(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__19(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__20(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__21(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__24(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(2);
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__2(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(9);
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__25(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__26(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(10);
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__29(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_13.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(7);
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_16.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_18.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_26.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_27.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_15.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(15);
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__14(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__15(vlSelf);
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_14.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(14);
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__27(vlSelf);
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_23.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(23);
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__23(vlSelf);
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}
