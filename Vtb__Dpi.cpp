// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vtb::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vtb__Dpi.h"
#include "Vtb.h"

#ifndef VL_DPIDECL_but_rd_
#define VL_DPIDECL_but_rd_
int but_rd() {
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/but.sv:145:19
    return Vtb::but_rd();
}
#endif

#ifndef VL_DPIDECL_but_wr_
#define VL_DPIDECL_but_wr_
void but_wr(unsigned int en, unsigned int val) {
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/but.sv:149:19
    return Vtb::but_wr(en, val);
}
#endif

#ifndef VL_DPIDECL_cpu_get_csr_
#define VL_DPIDECL_cpu_get_csr_
unsigned int cpu_get_csr(unsigned int idx) {
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv:728:27
    return Vtb::cpu_get_csr(idx);
}
#endif

#ifndef VL_DPIDECL_cpu_get_gpr_
#define VL_DPIDECL_cpu_get_gpr_
unsigned int cpu_get_gpr(unsigned int idx) {
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv:721:27
    return Vtb::cpu_get_gpr(idx);
}
#endif

#ifndef VL_DPIDECL_cpu_get_ins_
#define VL_DPIDECL_cpu_get_ins_
unsigned int cpu_get_ins() {
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv:717:27
    return Vtb::cpu_get_ins();
}
#endif

#ifndef VL_DPIDECL_cpu_get_pc_
#define VL_DPIDECL_cpu_get_pc_
unsigned int cpu_get_pc() {
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv:747:27
    return Vtb::cpu_get_pc();
}
#endif

#ifndef VL_DPIDECL_cpu_get_st_
#define VL_DPIDECL_cpu_get_st_
unsigned int cpu_get_st() {
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv:751:27
    return Vtb::cpu_get_st();
}
#endif

#ifndef VL_DPIDECL_cpu_set_csr_
#define VL_DPIDECL_cpu_set_csr_
void cpu_set_csr(unsigned int idx, unsigned int val) {
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv:761:19
    return Vtb::cpu_set_csr(idx, val);
}
#endif

#ifndef VL_DPIDECL_cpu_set_gpr_
#define VL_DPIDECL_cpu_set_gpr_
void cpu_set_gpr(unsigned int idx, unsigned int val) {
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv:755:19
    return Vtb::cpu_set_gpr(idx, val);
}
#endif

#ifndef VL_DPIDECL_cpu_set_pc_
#define VL_DPIDECL_cpu_set_pc_
void cpu_set_pc(unsigned int val) {
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/cpu.sv:783:19
    return Vtb::cpu_set_pc(val);
}
#endif

#ifndef VL_DPIDECL_lcd_rd_
#define VL_DPIDECL_lcd_rd_
int lcd_rd(unsigned int idx) {
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/lcd.sv:46:19
    return Vtb::lcd_rd(idx);
}
#endif

#ifndef VL_DPIDECL_lcd_wr_
#define VL_DPIDECL_lcd_wr_
void lcd_wr(unsigned int idx, unsigned int val) {
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/lcd.sv:53:19
    return Vtb::lcd_wr(idx, val);
}
#endif

#ifndef VL_DPIDECL_led_rd_
#define VL_DPIDECL_led_rd_
void led_rd(unsigned int rgb, svBitVecVal* val) {
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/led.sv:94:19
    return Vtb::led_rd(rgb, val);
}
#endif

#ifndef VL_DPIDECL_led_wr_
#define VL_DPIDECL_led_wr_
void led_wr(unsigned int rgb, const svBitVecVal* val) {
    // DPI export at /home/bugra/TA/CS200/cs-200/src/DebugAdapter/../cpu/led.sv:108:19
    return Vtb::led_wr(rgb, val);
}
#endif

