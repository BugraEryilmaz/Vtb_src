#include "dap/io.h"
#include "dap/optional.h"
#include "dap/protocol.h"
#include "dap/session.h"
#include "dap/typeinfo.h"
#include "dap/typeof.h"
#include "dap/variant.h"

#include "dapDefines.h"
namespace dap {

DAP_IMPLEMENT_STRUCT_TYPEINFO(ledArray, "ledArray", DAP_FIELD(r, "r"),
                              DAP_FIELD(g, "g"), DAP_FIELD(b, "b"));

DAP_IMPLEMENT_STRUCT_TYPEINFO(sevenSegment, "sevenSegment",
                              DAP_FIELD(zero, "zero"), DAP_FIELD(one, "one"),
                              DAP_FIELD(two, "two"), DAP_FIELD(three, "three"));

DAP_IMPLEMENT_STRUCT_TYPEINFO(BoardUpdateEvent, "boardUpdate",
                              DAP_FIELD(ledArray, "ledArray"),
                              DAP_FIELD(sevenSegment, "sevenSegment"));

DAP_IMPLEMENT_STRUCT_TYPEINFO(UpdateInputResponse, "updateInput");

DAP_IMPLEMENT_STRUCT_TYPEINFO(JoyStick, "joyStick", DAP_FIELD(up, "up"),
                              DAP_FIELD(down, "down"), DAP_FIELD(left, "left"),
                              DAP_FIELD(right, "right"),
                              DAP_FIELD(pressed, "pressed"));

DAP_IMPLEMENT_STRUCT_TYPEINFO(Buttons, "buttons", DAP_FIELD(top, "top"),
                              DAP_FIELD(bottom, "bottom"),
                              DAP_FIELD(left, "left"),
                              DAP_FIELD(right, "right"),
                              DAP_FIELD(center, "center"));

DAP_IMPLEMENT_STRUCT_TYPEINFO(UpdateInputRequest, "updateInput",
                              DAP_FIELD(joystick, "joystick"),
                              DAP_FIELD(button, "button"),
                              DAP_FIELD(dip_switches, "dip_switches"));

DAP_IMPLEMENT_STRUCT_TYPEINFO(LaunchRequestWithArgs, "launch",
                              DAP_FIELD(program, "program"));

DAP_IMPLEMENT_STRUCT_TYPEINFO(SetMemory, "setMemory",
                              DAP_FIELD(address, "address"),
                              DAP_FIELD(size, "size"),
                              DAP_FIELD(value, "value"));

DAP_IMPLEMENT_STRUCT_TYPEINFO(SetStateRequest, "setState",
                              DAP_FIELD(ledArray, "ledArray"),
                              DAP_FIELD(sevenSegment, "sevenSegment"),
                              DAP_FIELD(dip_switches, "dip_switches"),
                              DAP_FIELD(joystick, "joystick"),
                              DAP_FIELD(buttons, "buttons"),
                              DAP_FIELD(memory, "memory"), DAP_FIELD(pc, "pc"),
                              DAP_FIELD(registers, "registers"));

DAP_IMPLEMENT_STRUCT_TYPEINFO(SetStateResponse, "setState");

DAP_IMPLEMENT_STRUCT_TYPEINFO(getMemory, "getMemory",
                              DAP_FIELD(address, "address"),
                              DAP_FIELD(size, "size"));

DAP_IMPLEMENT_STRUCT_TYPEINFO(GetStateRequest, "getState",
                              DAP_FIELD(memory, "memory"));

DAP_IMPLEMENT_STRUCT_TYPEINFO(GetStateResponse, "getState",
                              DAP_FIELD(ledArray, "ledArray"),
                              DAP_FIELD(sevenSegment, "sevenSegment"),
                              DAP_FIELD(dip_switches, "dip_switches"),
                              DAP_FIELD(joystick, "joystick"),
                              DAP_FIELD(buttons, "buttons"),
                              DAP_FIELD(memory, "memory"), DAP_FIELD(pc, "pc"),
                              DAP_FIELD(registers, "registers"));

} // namespace dap