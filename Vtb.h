// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTB_H_
#define VERILATED_VTB_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "svdpi.h"

class Vtb__Syms;
class Vtb___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtb VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtb__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&rst_n,0,0);
    VL_IN8(&button_top,0,0);
    VL_IN8(&button_bottom,0,0);
    VL_IN8(&button_left,0,0);
    VL_IN8(&button_right,0,0);
    VL_IN8(&button_center,0,0);
    VL_IN8(&joystick_up,0,0);
    VL_IN8(&joystick_down,0,0);
    VL_IN8(&joystick_left,0,0);
    VL_IN8(&joystick_right,0,0);
    VL_IN8(&joystick_pressed,0,0);
    VL_OUT8(&sevensegment_1,7,0);
    VL_OUT8(&sevensegment_2,7,0);
    VL_OUT8(&sevensegment_3,7,0);
    VL_OUT8(&sevensegment_4,7,0);
    VL_IN8(&dip_switches,7,0);
    VL_OUTW(&led_r,119,0,4);
    VL_OUTW(&led_g,119,0,4);
    VL_OUTW(&led_b,119,0,4);
    VL_IN8(&clk,0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtb___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtb(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtb(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtb();
  private:
    VL_UNCOPYABLE(Vtb);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    /// DPI Export functions
    static int but_rd();
    static void but_wr(unsigned int en, unsigned int val);
    static unsigned int cpu_get_csr(unsigned int idx);
    static unsigned int cpu_get_gpr(unsigned int idx);
    static unsigned int cpu_get_ins();
    static unsigned int cpu_get_pc();
    static unsigned int cpu_get_st();
    static void cpu_set_csr(unsigned int idx, unsigned int val);
    static void cpu_set_gpr(unsigned int idx, unsigned int val);
    static void cpu_set_pc(unsigned int val);
    static int lcd_rd(unsigned int idx);
    static void lcd_wr(unsigned int idx, unsigned int val);
    static void led_rd(unsigned int rgb, svBitVecVal* val);
    static void led_wr(unsigned int rgb, const svBitVecVal* val);

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
