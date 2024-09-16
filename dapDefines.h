#pragma once
#include "dap/io.h"
#include "dap/optional.h"
#include "dap/protocol.h"
#include "dap/session.h"
#include "dap/typeinfo.h"
#include "dap/typeof.h"
#include "dap/variant.h"

namespace dap {

/**
 * @brief Structure to represent 10x12 RGB LED array.
 * Each element in the array is a 12-bit RGB value representing a row.
 * Red, green and blue values are sent in separate arrays.
 */
struct ledArray {
  dap::optional<dap::array<dap::integer>> r;
  dap::optional<dap::array<dap::integer>> g;
  dap::optional<dap::array<dap::integer>> b;
};
DAP_DECLARE_STRUCT_TYPEINFO(ledArray);

/**
 * @brief Structure to represent four 7-segment displays.
 * Each element is a 8-bit value representing a digit and comma.
 */
struct sevenSegment {
  dap::optional<dap::integer> zero;
  dap::optional<dap::integer> one;
  dap::optional<dap::integer> two;
  dap::optional<dap::integer> three;
};
DAP_DECLARE_STRUCT_TYPEINFO(sevenSegment);

struct BoardUpdateEvent : public Event {
  dap::ledArray ledArray;
  dap::sevenSegment sevenSegment;
};
DAP_DECLARE_STRUCT_TYPEINFO(BoardUpdateEvent);

struct UpdateInputResponse : public Response {};
DAP_DECLARE_STRUCT_TYPEINFO(UpdateInputResponse);

struct JoyStick {
  dap::optional<dap::boolean> up;
  dap::optional<dap::boolean> down;
  dap::optional<dap::boolean> left;
  dap::optional<dap::boolean> right;
  dap::optional<dap::boolean> pressed;
};
DAP_DECLARE_STRUCT_TYPEINFO(JoyStick);

struct Buttons {
  dap::optional<dap::boolean> top;
  dap::optional<dap::boolean> bottom;
  dap::optional<dap::boolean> left;
  dap::optional<dap::boolean> right;
  dap::optional<dap::boolean> center;
};
DAP_DECLARE_STRUCT_TYPEINFO(Buttons);

struct UpdateInputRequest : public Request {
  using Response = UpdateInputResponse;
  JoyStick joystick;
  Buttons button;
  dap::optional<dap::integer> dip_switches;
};
DAP_DECLARE_STRUCT_TYPEINFO(UpdateInputRequest);

struct LaunchRequestWithArgs : public LaunchRequest {
  dap::string program;
};
DAP_DECLARE_STRUCT_TYPEINFO(LaunchRequestWithArgs);

/**
 * @brief Structure to represent memory part of set state request.
 * Address is the starting address of the memory block.
 * Size is the number of 32-bit chunks to write.
 * Value is the array of values to write. Each element is 32-bits.
 */
struct SetMemory {
  dap::integer address;
  dap::integer size;
  dap::array<dap::integer> value;
};
DAP_DECLARE_STRUCT_TYPEINFO(SetMemory);

struct SetStateResponse : public Response {};
DAP_DECLARE_STRUCT_TYPEINFO(SetStateResponse);

/**
 * @brief Structure to represent set state request.
 * This request is used to set the state of the board.
 * It can be used to set the state of LEDs, 7-segment displays, dip switches,
 * joystick, buttons, memory, PC and registers.
 */
struct SetStateRequest : public Request {
  using Response = dap::SetStateResponse;
  // board state
  dap::ledArray ledArray;
  dap::sevenSegment sevenSegment;
  dap::optional<dap::integer> dip_switches;
  dap::JoyStick joystick;
  dap::Buttons buttons;
  // memory state
  dap::array<SetMemory> memory;
  // cpu state
  dap::optional<dap::integer> pc;
  dap::array<dap::optional<dap::integer>> registers;
};
DAP_DECLARE_STRUCT_TYPEINFO(SetStateRequest);

/**
 * @brief Structure to represent memory regions of interest for get state
 * request. Address is the starting address of the memory block. Size is the
 * number of 32-bit chunks to read.
 */
struct getMemory {
  dap::integer address;
  dap::integer size;
};
DAP_DECLARE_STRUCT_TYPEINFO(getMemory);

struct GetStateResponse : public Response {
  // board state
  dap::ledArray ledArray;
  dap::sevenSegment sevenSegment;
  dap::optional<dap::integer> dip_switches;
  dap::JoyStick joystick;
  dap::Buttons buttons;
  // memory state
  dap::array<dap::SetMemory> memory;
  // cpu state
  dap::optional<dap::integer> pc;
  dap::array<dap::optional<dap::integer>> registers;
};
DAP_DECLARE_STRUCT_TYPEINFO(GetStateResponse);

/**
 * @brief Structure to represent get state request.
 * This request is used to get the state of the board.
 * It can be used to get the state of LEDs, 7-segment displays, dip switches,
 * joystick, buttons, memory, PC and registers.
 */
struct GetStateRequest : public Request {
  using Response = dap::GetStateResponse;
  dap::array<getMemory> memory;
};
DAP_DECLARE_STRUCT_TYPEINFO(GetStateRequest);

} // namespace dap