// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb___024root.h"

void Vtb___024root___ctor_var_reset(Vtb___024root* vlSelf);

Vtb___024root::Vtb___024root(Vtb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __Vm_mtaskstate_7(1U)
    , __Vm_mtaskstate_13(2U)
    , __Vm_mtaskstate_15(2U)
    , __Vm_mtaskstate_8(1U)
    , __Vm_mtaskstate_14(2U)
    , __Vm_mtaskstate_22(1U)
    , __Vm_mtaskstate_16(1U)
    , __Vm_mtaskstate_11(3U)
    , __Vm_mtaskstate_20(1U)
    , __Vm_mtaskstate_23(1U)
    , __Vm_mtaskstate_12(3U)
    , __Vm_mtaskstate_21(1U)
    , __Vm_mtaskstate_17(1U)
    , __Vm_mtaskstate_final__nba(4U)
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb___024root___ctor_var_reset(this);
}

void Vtb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb___024root::~Vtb___024root() {
}
