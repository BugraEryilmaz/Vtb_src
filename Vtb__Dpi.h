// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTB__DPI_H_
#define VERILATED_VTB__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/but.sv:145:19
    extern int but_rd();
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/but.sv:149:19
    extern void but_wr(unsigned int en, unsigned int val);
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv:728:27
    extern unsigned int cpu_get_csr(unsigned int idx);
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv:721:27
    extern unsigned int cpu_get_gpr(unsigned int idx);
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv:717:27
    extern unsigned int cpu_get_ins();
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv:747:27
    extern unsigned int cpu_get_pc();
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv:751:27
    extern unsigned int cpu_get_st();
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv:761:19
    extern void cpu_set_csr(unsigned int idx, unsigned int val);
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv:755:19
    extern void cpu_set_gpr(unsigned int idx, unsigned int val);
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv:783:19
    extern void cpu_set_pc(unsigned int val);
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/lcd.sv:46:19
    extern int lcd_rd(unsigned int idx);
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/lcd.sv:53:19
    extern void lcd_wr(unsigned int idx, unsigned int val);
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/led.sv:94:19
    extern void led_rd(unsigned int rgb, svBitVecVal* val);
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/led.sv:108:19
    extern void led_wr(unsigned int rgb, const svBitVecVal* val);

    // DPI IMPORTS
    // DPI import at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/mem.sv:15:42
    extern unsigned int mem_rd(unsigned int addr);
    // DPI import at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/mem.sv:17:42
    extern void mem_wr(unsigned int addr, unsigned int data, unsigned int strb);

#ifdef __cplusplus
}
#endif

#endif  // guard
