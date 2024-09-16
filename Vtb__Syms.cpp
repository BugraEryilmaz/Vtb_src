// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb__pch.h"
#include "Vtb.h"
#include "Vtb___024root.h"

void Vtb___024root____Vdpiexp_tb__DOT__u_but__DOT__but_rd_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &but_rd__Vfuncrtn);
void Vtb___024root____Vdpiexp_tb__DOT__u_but__DOT__but_wr_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ en, IData/*31:0*/ val);
void Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_get_csr_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ &cpu_get_csr__Vfuncrtn);
void Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_get_gpr_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ &cpu_get_gpr__Vfuncrtn);
void Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_get_ins_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &cpu_get_ins__Vfuncrtn);
void Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_get_pc_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &cpu_get_pc__Vfuncrtn);
void Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_get_st_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &cpu_get_st__Vfuncrtn);
void Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ val);
void Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_gpr_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ val);
void Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_pc_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ val);
void Vtb___024root____Vdpiexp_tb__DOT__u_lcd__DOT__lcd_rd_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ &lcd_rd__Vfuncrtn);
void Vtb___024root____Vdpiexp_tb__DOT__u_lcd__DOT__lcd_wr_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ val);
void Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_rd_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ rgb, VlWide<4>/*119:0*/ &val);
void Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_wr_TOP(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ rgb, VlWide<4>/*119:0*/ val);

// FUNCTIONS
Vtb__Syms::~Vtb__Syms()
{
}

Vtb__Syms::Vtb__Syms(VerilatedContext* contextp, const char* namep, Vtb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_threadPoolp{static_cast<VlThreadPool*>(contextp->threadPoolp())}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(594);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-9);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb__u_but.configure(this, name(), "tb.u_but", "u_but", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb__u_cpu.configure(this, name(), "tb.u_cpu", "u_cpu", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb__u_lcd.configure(this, name(), "tb.u_lcd", "u_lcd", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb__u_led.configure(this, name(), "tb.u_led", "u_led", -9, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_tb__u_but.exportInsert(__Vfinal, "but_rd", (void*)(&Vtb___024root____Vdpiexp_tb__DOT__u_but__DOT__but_rd_TOP));
        __Vscope_tb__u_but.exportInsert(__Vfinal, "but_wr", (void*)(&Vtb___024root____Vdpiexp_tb__DOT__u_but__DOT__but_wr_TOP));
        __Vscope_tb__u_cpu.exportInsert(__Vfinal, "cpu_get_csr", (void*)(&Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_get_csr_TOP));
        __Vscope_tb__u_cpu.exportInsert(__Vfinal, "cpu_get_gpr", (void*)(&Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_get_gpr_TOP));
        __Vscope_tb__u_cpu.exportInsert(__Vfinal, "cpu_get_ins", (void*)(&Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_get_ins_TOP));
        __Vscope_tb__u_cpu.exportInsert(__Vfinal, "cpu_get_pc", (void*)(&Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_get_pc_TOP));
        __Vscope_tb__u_cpu.exportInsert(__Vfinal, "cpu_get_st", (void*)(&Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_get_st_TOP));
        __Vscope_tb__u_cpu.exportInsert(__Vfinal, "cpu_set_csr", (void*)(&Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_csr_TOP));
        __Vscope_tb__u_cpu.exportInsert(__Vfinal, "cpu_set_gpr", (void*)(&Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_gpr_TOP));
        __Vscope_tb__u_cpu.exportInsert(__Vfinal, "cpu_set_pc", (void*)(&Vtb___024root____Vdpiexp_tb__DOT__u_cpu__DOT__cpu_set_pc_TOP));
        __Vscope_tb__u_lcd.exportInsert(__Vfinal, "lcd_rd", (void*)(&Vtb___024root____Vdpiexp_tb__DOT__u_lcd__DOT__lcd_rd_TOP));
        __Vscope_tb__u_lcd.exportInsert(__Vfinal, "lcd_wr", (void*)(&Vtb___024root____Vdpiexp_tb__DOT__u_lcd__DOT__lcd_wr_TOP));
        __Vscope_tb__u_led.exportInsert(__Vfinal, "led_rd", (void*)(&Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_rd_TOP));
        __Vscope_tb__u_led.exportInsert(__Vfinal, "led_wr", (void*)(&Vtb___024root____Vdpiexp_tb__DOT__u_led__DOT__led_wr_TOP));
    }
}
