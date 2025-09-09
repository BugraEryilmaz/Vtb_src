#pragma once
/**
 * defines to generate a class that checks if a class has a member
 * For more information see:
 * https://en.wikibooks.org/wiki/More_C%2B%2B_Idioms/Member_Detector Usage:
 * GENERATE_HAS_MEMBER(memberName)
 * HAS_MEMBER(memberName, className)
 * HAS_FUNCTION(functionName, className)
 */
#include "verilated.h"
#include <svdpi.h>
#include <type_traits>
#define GENERATE_HAS_MEMBER(Member)                                            \
  template <typename T, typename = void>                                       \
  struct has_member_##Member : std::false_type {};                             \
  template <typename T>                                                        \
  struct has_member_##Member<T,                                                \
                             std::void_t<decltype(std::declval<T>().Member)>>  \
      : std::true_type {};

#define HAS_MEMBER(member, className) (has_member_##member<className>::value)

#define GENERATE_GETTER_VAL(Member, Type)                                      \
  GENERATE_HAS_MEMBER(Member)                                                  \
  template <typename T>                                                        \
  std::enable_if_t<HAS_MEMBER(Member, T), Type> get_##Member(T &obj) {         \
    return obj.Member;                                                         \
  }                                                                            \
  template <typename T>                                                        \
  std::enable_if_t<!HAS_MEMBER(Member, T), Type> get_##Member(T &obj) {        \
    return Type();                                                             \
  }                                                                            \
  template <typename T>                                                        \
  std::enable_if_t<HAS_MEMBER(Member, T), void> set_##Member(T &obj,           \
                                                             Type value) {     \
    obj.Member = value;                                                        \
  }                                                                            \
  template <typename T>                                                        \
  std::enable_if_t<!HAS_MEMBER(Member, T), void> set_##Member(T &obj,          \
                                                              Type value) {}   \
  template <typename T>                                                        \
  std::enable_if_t<HAS_MEMBER(Member, T), bool> isValid_##Member(T &obj) {     \
    return true;                                                               \
  }                                                                            \
  template <typename T>                                                        \
  std::enable_if_t<!HAS_MEMBER(Member, T), bool> isValid_##Member(T &obj) {    \
    return false;                                                              \
  }

#define GENERATE_GETTER_FN(Member, Scope, ReturnType, args...)                 \
  GENERATE_HAS_MEMBER(Member)                                                  \
  template <typename T>                                                        \
  std::enable_if_t<HAS_MEMBER(Member, T), ReturnType (*)(args)> get_##Member(  \
      T &obj) {                                                                \
    if (svGetScopeFromName(Scope)) {                                           \
      svSetScope(svGetScopeFromName(Scope));                                   \
      return obj.Member;                                                       \
    }                                                                          \
    return defaultFn;                                                          \
  }                                                                            \
  template <typename T>                                                        \
  std::enable_if_t<!HAS_MEMBER(Member, T), ReturnType(*)(args)> get_##Member(  \
      T &obj) {                                                                \
    return defaultFn;                                                          \
  }                                                                            \
  template <typename T>                                                        \
  std::enable_if_t<HAS_MEMBER(Member, T), bool> isValid_##Member(T &obj) {     \
    if (svGetScopeFromName(Scope)) {                                           \
      svSetScope(svGetScopeFromName(Scope));                                   \
      return true;                                                             \
    }                                                                          \
    return false;                                                              \
  }                                                                            \
  template <typename T>                                                        \
  std::enable_if_t<!HAS_MEMBER(Member, T), bool> isValid_##Member(T &obj) {    \
    return false;                                                              \
  }

template <typename ReturnType, typename... Args>
ReturnType defaultFn(Args... args) {
  return ReturnType();
}

// For our interface we need the following members
GENERATE_GETTER_VAL(led_r_o, VlWide<4>);
GENERATE_GETTER_VAL(led_g_o, VlWide<4>);
GENERATE_GETTER_VAL(led_b_o, VlWide<4>);
GENERATE_GETTER_VAL(sevensegment_1_o, uint);
GENERATE_GETTER_VAL(sevensegment_2_o, uint);
GENERATE_GETTER_VAL(sevensegment_3_o, uint);
GENERATE_GETTER_VAL(sevensegment_4_o, uint);
GENERATE_GETTER_VAL(button_top_i, uint);
GENERATE_GETTER_VAL(button_bottom_i, uint);
GENERATE_GETTER_VAL(button_left_i, uint);
GENERATE_GETTER_VAL(button_right_i, uint);
GENERATE_GETTER_VAL(button_center_i, uint);
GENERATE_GETTER_VAL(joystick_up_i, uint);
GENERATE_GETTER_VAL(joystick_down_i, uint);
GENERATE_GETTER_VAL(joystick_left_i, uint);
GENERATE_GETTER_VAL(joystick_right_i, uint);
GENERATE_GETTER_VAL(joystick_pressed_i, uint);
GENERATE_GETTER_VAL(dip_switches_i, uint);
GENERATE_GETTER_VAL(irq_e_i, uint);
GENERATE_GETTER_VAL(irq_t_i, uint);
GENERATE_GETTER_VAL(rst_ni, uint);
GENERATE_GETTER_VAL(clk_i, uint);

// For our interface we need the following functions
GENERATE_GETTER_FN(cpu_get_ins, "TOP.tb.u_cpu", uint, void)
GENERATE_GETTER_FN(cpu_get_pc, "TOP.tb.u_cpu", uint, void)
GENERATE_GETTER_FN(cpu_get_st, "TOP.tb.u_cpu", uint, void)
GENERATE_GETTER_FN(cpu_get_csr, "TOP.tb.u_cpu", uint, uint)
GENERATE_GETTER_FN(cpu_get_gpr, "TOP.tb.u_cpu", uint, uint)
GENERATE_GETTER_FN(cpu_set_pc, "TOP.tb.u_cpu", void, uint)
GENERATE_GETTER_FN(cpu_set_csr, "TOP.tb.u_cpu", void, uint, uint)
GENERATE_GETTER_FN(cpu_set_gpr, "TOP.tb.u_cpu", void, uint, uint)
GENERATE_GETTER_FN(mem_init, "TOP.tb.u_mem", void, const char *)
GENERATE_GETTER_FN(mem_rd, "TOP.tb.u_mem", uint32_t, uint32_t)
GENERATE_GETTER_FN(mem_wr, "TOP.tb.u_mem", void, uint32_t, uint32_t, uint32_t)
GENERATE_GETTER_FN(lcd_rd, "TOP.tb.u_lcd", int, uint)
GENERATE_GETTER_FN(lcd_wr, "TOP.tb.u_lcd", void, uint, uint)
GENERATE_GETTER_FN(led_rd, "TOP.tb.u_led", void, uint, svBitVecVal *)
GENERATE_GETTER_FN(led_wr, "TOP.tb.u_led", void, uint, const svBitVecVal *)
GENERATE_GETTER_FN(but_rd, "TOP.tb.u_but", int, void)
GENERATE_GETTER_FN(but_wr, "TOP.tb.u_but", void, uint, uint)
