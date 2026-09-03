// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB__SYMS_H_
#define VERILATED_VTB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb.h"

// INCLUDE MODULE CLASSES
#include "Vtb___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using Vtb__Vcb_but_rd_t = void (*) (Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &but_rd__Vfuncrtn);
using Vtb__Vcb_but_wr_t = void (*) (Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ en, IData/*31:0*/ val);
using Vtb__Vcb_cpu_get_csr_t = void (*) (Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ &cpu_get_csr__Vfuncrtn);
using Vtb__Vcb_cpu_get_gpr_t = void (*) (Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ &cpu_get_gpr__Vfuncrtn);
using Vtb__Vcb_cpu_get_ins_t = void (*) (Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &cpu_get_ins__Vfuncrtn);
using Vtb__Vcb_cpu_get_pc_t = void (*) (Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &cpu_get_pc__Vfuncrtn);
using Vtb__Vcb_cpu_get_st_t = void (*) (Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &cpu_get_st__Vfuncrtn);
using Vtb__Vcb_cpu_set_csr_t = void (*) (Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ val);
using Vtb__Vcb_cpu_set_gpr_t = void (*) (Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ val);
using Vtb__Vcb_cpu_set_pc_t = void (*) (Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ val);
using Vtb__Vcb_lcd_rd_t = void (*) (Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ &lcd_rd__Vfuncrtn);
using Vtb__Vcb_lcd_wr_t = void (*) (Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ val);
using Vtb__Vcb_led_rd_t = void (*) (Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ rgb, VlWide<4>/*119:0*/ &val);
using Vtb__Vcb_led_wr_t = void (*) (Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ rgb, VlWide<4>/*119:0*/ val);

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    std::vector<VlEvent*> __Vm_triggeredEvents;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MULTI-THREADING
    VlThreadPool* __Vm_threadPoolp;
    bool __Vm_even_cycle__ico = false;
    bool __Vm_even_cycle__act = false;
    bool __Vm_even_cycle__nba = false;

    // MODULE INSTANCE STATE
    Vtb___024root                  TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb__u_but;
    VerilatedScope __Vscope_tb__u_cpu;
    VerilatedScope __Vscope_tb__u_lcd;
    VerilatedScope __Vscope_tb__u_led;

    // CONSTRUCTORS
    Vtb__Syms(VerilatedContext* contextp, const char* namep, Vtb* modelp);
    ~Vtb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void enqueueTriggeredEventForClearing(VlEvent& event) {
#ifdef VL_DEBUG
        if (VL_UNLIKELY(!event.isTriggered())) {
            VL_FATAL_MT(__FILE__, __LINE__, __FILE__, "event passed to 'enqueueTriggeredEventForClearing' was not triggered");
        }
#endif
        __Vm_triggeredEvents.push_back(&event);
    }
    void clearTriggeredEvents() {
        for (const auto eventp : __Vm_triggeredEvents) eventp->clearTriggered();
        __Vm_triggeredEvents.clear();
    }
};

#endif  // guard
