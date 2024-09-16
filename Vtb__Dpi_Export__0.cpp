// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vtb.h"
#include "Vtb__Syms.h"
#include "verilated_dpi.h"


unsigned int Vtb::cpu_get_ins() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root::cpu_get_ins\n"); );
    // Init
    IData/*31:0*/ cpu_get_ins__Vfuncrtn__Vcvt;
    cpu_get_ins__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("cpu_get_ins");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtb__Vcb_cpu_get_ins_t __Vcb = (Vtb__Vcb_cpu_get_ins_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtb__Syms*)(__Vscopep->symsp()), cpu_get_ins__Vfuncrtn__Vcvt);
    unsigned int cpu_get_ins__Vfuncrtn;
    for (size_t cpu_get_ins__Vfuncrtn__Vidx = 0; cpu_get_ins__Vfuncrtn__Vidx < 1; ++cpu_get_ins__Vfuncrtn__Vidx) cpu_get_ins__Vfuncrtn = cpu_get_ins__Vfuncrtn__Vcvt;
    return cpu_get_ins__Vfuncrtn;
}

unsigned int Vtb::cpu_get_gpr(unsigned int idx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root::cpu_get_gpr\n"); );
    // Init
    IData/*31:0*/ idx__Vcvt;
    idx__Vcvt = 0;
    IData/*31:0*/ cpu_get_gpr__Vfuncrtn__Vcvt;
    cpu_get_gpr__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("cpu_get_gpr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtb__Vcb_cpu_get_gpr_t __Vcb = (Vtb__Vcb_cpu_get_gpr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    idx__Vcvt = idx;
    (*__Vcb)((Vtb__Syms*)(__Vscopep->symsp()), idx__Vcvt, cpu_get_gpr__Vfuncrtn__Vcvt);
    unsigned int cpu_get_gpr__Vfuncrtn;
    for (size_t cpu_get_gpr__Vfuncrtn__Vidx = 0; cpu_get_gpr__Vfuncrtn__Vidx < 1; ++cpu_get_gpr__Vfuncrtn__Vidx) cpu_get_gpr__Vfuncrtn = cpu_get_gpr__Vfuncrtn__Vcvt;
    return cpu_get_gpr__Vfuncrtn;
}

unsigned int Vtb::cpu_get_csr(unsigned int idx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root::cpu_get_csr\n"); );
    // Init
    IData/*31:0*/ idx__Vcvt;
    idx__Vcvt = 0;
    IData/*31:0*/ cpu_get_csr__Vfuncrtn__Vcvt;
    cpu_get_csr__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("cpu_get_csr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtb__Vcb_cpu_get_csr_t __Vcb = (Vtb__Vcb_cpu_get_csr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    idx__Vcvt = idx;
    (*__Vcb)((Vtb__Syms*)(__Vscopep->symsp()), idx__Vcvt, cpu_get_csr__Vfuncrtn__Vcvt);
    unsigned int cpu_get_csr__Vfuncrtn;
    for (size_t cpu_get_csr__Vfuncrtn__Vidx = 0; cpu_get_csr__Vfuncrtn__Vidx < 1; ++cpu_get_csr__Vfuncrtn__Vidx) cpu_get_csr__Vfuncrtn = cpu_get_csr__Vfuncrtn__Vcvt;
    return cpu_get_csr__Vfuncrtn;
}

unsigned int Vtb::cpu_get_pc() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root::cpu_get_pc\n"); );
    // Init
    IData/*31:0*/ cpu_get_pc__Vfuncrtn__Vcvt;
    cpu_get_pc__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("cpu_get_pc");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtb__Vcb_cpu_get_pc_t __Vcb = (Vtb__Vcb_cpu_get_pc_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtb__Syms*)(__Vscopep->symsp()), cpu_get_pc__Vfuncrtn__Vcvt);
    unsigned int cpu_get_pc__Vfuncrtn;
    for (size_t cpu_get_pc__Vfuncrtn__Vidx = 0; cpu_get_pc__Vfuncrtn__Vidx < 1; ++cpu_get_pc__Vfuncrtn__Vidx) cpu_get_pc__Vfuncrtn = cpu_get_pc__Vfuncrtn__Vcvt;
    return cpu_get_pc__Vfuncrtn;
}

unsigned int Vtb::cpu_get_st() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root::cpu_get_st\n"); );
    // Init
    IData/*31:0*/ cpu_get_st__Vfuncrtn__Vcvt;
    cpu_get_st__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("cpu_get_st");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtb__Vcb_cpu_get_st_t __Vcb = (Vtb__Vcb_cpu_get_st_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtb__Syms*)(__Vscopep->symsp()), cpu_get_st__Vfuncrtn__Vcvt);
    unsigned int cpu_get_st__Vfuncrtn;
    for (size_t cpu_get_st__Vfuncrtn__Vidx = 0; cpu_get_st__Vfuncrtn__Vidx < 1; ++cpu_get_st__Vfuncrtn__Vidx) cpu_get_st__Vfuncrtn = cpu_get_st__Vfuncrtn__Vcvt;
    return cpu_get_st__Vfuncrtn;
}

void Vtb::cpu_set_gpr(unsigned int idx, unsigned int val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root::cpu_set_gpr\n"); );
    // Init
    IData/*31:0*/ idx__Vcvt;
    idx__Vcvt = 0;
    IData/*31:0*/ val__Vcvt;
    val__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("cpu_set_gpr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtb__Vcb_cpu_set_gpr_t __Vcb = (Vtb__Vcb_cpu_set_gpr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    idx__Vcvt = idx;
    val__Vcvt = val;
    (*__Vcb)((Vtb__Syms*)(__Vscopep->symsp()), idx__Vcvt, val__Vcvt);
}

void Vtb::cpu_set_csr(unsigned int idx, unsigned int val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root::cpu_set_csr\n"); );
    // Init
    IData/*31:0*/ idx__Vcvt;
    idx__Vcvt = 0;
    IData/*31:0*/ val__Vcvt;
    val__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("cpu_set_csr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtb__Vcb_cpu_set_csr_t __Vcb = (Vtb__Vcb_cpu_set_csr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    idx__Vcvt = idx;
    val__Vcvt = val;
    (*__Vcb)((Vtb__Syms*)(__Vscopep->symsp()), idx__Vcvt, val__Vcvt);
}

void Vtb::cpu_set_pc(unsigned int val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root::cpu_set_pc\n"); );
    // Init
    IData/*31:0*/ val__Vcvt;
    val__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("cpu_set_pc");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtb__Vcb_cpu_set_pc_t __Vcb = (Vtb__Vcb_cpu_set_pc_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    val__Vcvt = val;
    (*__Vcb)((Vtb__Syms*)(__Vscopep->symsp()), val__Vcvt);
}

void Vtb::led_rd(unsigned int rgb, svBitVecVal* val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root::led_rd\n"); );
    // Init
    IData/*31:0*/ rgb__Vcvt;
    rgb__Vcvt = 0;
    VlWide<4>/*119:0*/ val__Vcvt;
    VL_ZERO_W(120, val__Vcvt);
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("led_rd");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtb__Vcb_led_rd_t __Vcb = (Vtb__Vcb_led_rd_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    rgb__Vcvt = rgb;
    (*__Vcb)((Vtb__Syms*)(__Vscopep->symsp()), rgb__Vcvt, val__Vcvt);
    for (size_t val__Vidx = 0; val__Vidx < 1; ++val__Vidx) VL_SET_SVBV_W(120, val + 4 * val__Vidx, val__Vcvt);
}

void Vtb::led_wr(unsigned int rgb, const svBitVecVal* val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root::led_wr\n"); );
    // Init
    IData/*31:0*/ rgb__Vcvt;
    rgb__Vcvt = 0;
    VlWide<4>/*119:0*/ val__Vcvt;
    VL_ZERO_W(120, val__Vcvt);
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("led_wr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtb__Vcb_led_wr_t __Vcb = (Vtb__Vcb_led_wr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    rgb__Vcvt = rgb;
    VL_SET_W_SVBV(120,val__Vcvt,val + 0);
(*__Vcb)((Vtb__Syms*)(__Vscopep->symsp()), rgb__Vcvt, val__Vcvt);
}

int Vtb::lcd_rd(unsigned int idx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root::lcd_rd\n"); );
    // Init
    IData/*31:0*/ idx__Vcvt;
    idx__Vcvt = 0;
    IData/*31:0*/ lcd_rd__Vfuncrtn__Vcvt;
    lcd_rd__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("lcd_rd");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtb__Vcb_lcd_rd_t __Vcb = (Vtb__Vcb_lcd_rd_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    idx__Vcvt = idx;
    (*__Vcb)((Vtb__Syms*)(__Vscopep->symsp()), idx__Vcvt, lcd_rd__Vfuncrtn__Vcvt);
    int lcd_rd__Vfuncrtn;
    for (size_t lcd_rd__Vfuncrtn__Vidx = 0; lcd_rd__Vfuncrtn__Vidx < 1; ++lcd_rd__Vfuncrtn__Vidx) lcd_rd__Vfuncrtn = lcd_rd__Vfuncrtn__Vcvt;
    return lcd_rd__Vfuncrtn;
}

void Vtb::lcd_wr(unsigned int idx, unsigned int val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root::lcd_wr\n"); );
    // Init
    IData/*31:0*/ idx__Vcvt;
    idx__Vcvt = 0;
    IData/*31:0*/ val__Vcvt;
    val__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("lcd_wr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtb__Vcb_lcd_wr_t __Vcb = (Vtb__Vcb_lcd_wr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    idx__Vcvt = idx;
    val__Vcvt = val;
    (*__Vcb)((Vtb__Syms*)(__Vscopep->symsp()), idx__Vcvt, val__Vcvt);
}

int Vtb::but_rd() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root::but_rd\n"); );
    // Init
    IData/*31:0*/ but_rd__Vfuncrtn__Vcvt;
    but_rd__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("but_rd");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtb__Vcb_but_rd_t __Vcb = (Vtb__Vcb_but_rd_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtb__Syms*)(__Vscopep->symsp()), but_rd__Vfuncrtn__Vcvt);
    int but_rd__Vfuncrtn;
    for (size_t but_rd__Vfuncrtn__Vidx = 0; but_rd__Vfuncrtn__Vidx < 1; ++but_rd__Vfuncrtn__Vidx) but_rd__Vfuncrtn = but_rd__Vfuncrtn__Vcvt;
    return but_rd__Vfuncrtn;
}

void Vtb::but_wr(unsigned int en, unsigned int val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root::but_wr\n"); );
    // Init
    IData/*31:0*/ en__Vcvt;
    en__Vcvt = 0;
    IData/*31:0*/ val__Vcvt;
    val__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("but_wr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtb__Vcb_but_wr_t __Vcb = (Vtb__Vcb_but_wr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    en__Vcvt = en;
    val__Vcvt = val;
    (*__Vcb)((Vtb__Syms*)(__Vscopep->symsp()), en__Vcvt, val__Vcvt);
}
