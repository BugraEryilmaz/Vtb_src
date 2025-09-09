// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// hello_debugger is an example DAP server that provides single line stepping
// through a synthetic file.

#include "dapDefines.h"
#include "hasMember.h"

#include <string>
#include <type_traits>
#include <vector>

#include <condition_variable>
#include <cstdio>
#include <filesystem>
#include <iostream>
#include <mutex>
#include <thread>
#include <unordered_set>

#include "verilator.cpp"

#ifdef _MSC_VER
#define OS_WINDOWS 1
#endif

// Uncomment the line below and change <path-to-log-file> to a file path to
// write all DAP communications to the given path.
//
#define LOG_TO_FILE ("/home/ayan_ch/repos/cs-200/logAyan.txt")

#ifdef OS_WINDOWS
#include <fcntl.h> // _O_BINARY
#include <io.h>    // _setmode
#endif             // OS_WINDOWS

// Event provides a basic wait and signal synchronization primitive.
class Event {
public:
  // wait() blocks until the event is fired.
  void wait();

  // fire() sets signals the event, and unblocks any calls to wait().
  void fire();

private:
  std::mutex mutex;
  std::condition_variable cv;
  bool fired = false;
};

void Event::wait() {
  std::unique_lock<std::mutex> lock(mutex);
  cv.wait(lock, [&] { return fired; });
}

void Event::fire() {
  std::unique_lock<std::mutex> lock(mutex);
  fired = true;
  cv.notify_all();
}

// main() entry point to the DAP server.
int main(int argc, char *argv[]) {
#ifdef OS_WINDOWS
  // Change stdin & stdout from text mode to binary mode.
  // This ensures sequences of \r\n are not changed to \n.
  _setmode(_fileno(stdin), _O_BINARY);
  _setmode(_fileno(stdout), _O_BINARY);
#endif // OS_WINDOWS

  std::shared_ptr<dap::Writer> log;
  if (argc == 2) {
    std::filesystem::path logFile = argv[1];
    logFile.replace_filename("log.txt");
    log = dap::file(logFile.c_str());
    // Move std:err to err.log file if debugging
    std::filesystem::path errFile = argv[1];
    errFile.replace_filename("err.log");
    auto file_ptr = fopen(errFile.c_str(), "w");
    if (!file_ptr) {
        throw std::runtime_error{"Unable to open file"};
    }
    dup2(fileno(file_ptr), fileno(stderr));
  }

  // Create the DAP session.
  // This is used to implement the DAP server.
  auto session = dap::Session::create();

  // Hard-coded identifiers for the one thread, frame, variable and source.
  // These numbers have no meaning, and just need to remain constant for the
  // duration of the service.
  const dap::integer threadId = 100;
  const dap::integer frameId = 200;
  const dap::integer variablesReferenceId = 300;
  const dap::integer sysvariablesReferenceId = 310;
  const dap::integer sourceReferenceId = 400;

  // Signal events
  Event configured;
  Event terminate;

  // Construct the debugger.
  sim_t sim(log ? true: false);
  std::thread *t = NULL;

  // Event handlers from the Debugger.
  sim_t::EventHandler onsim_tEvent = [&](sim_t::Event onEvent, std::optional<std::string> message) {
    switch (onEvent) {
    case sim_t::Event::Stepped: {
      // The debugger has single-line stepped. Inform the client.
      dap::StoppedEvent event;
      event.reason = "step";
      event.threadId = threadId;
      session->send(event);
      break;
    }
    case sim_t::Event::BreakpointHit: {
      // The debugger has hit a breakpoint. Inform the client.
      dap::StoppedEvent event;
      event.reason = "breakpoint";
      event.threadId = threadId;
      session->send(event);
      break;
    }
    case sim_t::Event::Paused: {
      // The debugger has been suspended. Inform the client.
      dap::StoppedEvent event;
      event.reason = "pause";
      event.threadId = threadId;
      session->send(event);
      break;
    }
    case sim_t::Event::BoardUpdate: {
      // The debugger has updated the board. Inform the client.
      dap::BoardUpdateEvent event;
      event.ledArray = sim.ledArray;
      event.sevenSegment = sim.sevenSegment;
      session->send(event);
      break;
    }
    case sim_t::Event::Output: {
      if (message) {
        dap::OutputEvent event;
        event.category = "console";
        event.output = message.value();
        session->send(event);
      }
      break;
    }
  }
  };

  // set the event handlers.
  sim.registerEventHandlers(onsim_tEvent);

  // Handle errors reported by the Session. These errors include protocol
  // parsing errors and receiving messages with no handler.
  session->onError([&](const char *msg) {
    if (log) {
      dap::writef(log, "dap::Session error: %s\n", msg);
      log->close();
    }
    terminate.fire();
  });

  // The Initialize request is the first message sent from the client and
  // the response reports debugger capabilities.
  // https://microsoft.github.io/debug-adapter-protocol/specification#Requests_Initialize
  session->registerHandler([](const dap::InitializeRequest &) {
    dap::InitializeResponse response;
    response.supportsConfigurationDoneRequest = true;
    response.supportsReadMemoryRequest = true;
    response.supportsSetVariable = true;
    response.supportsWriteMemoryRequest = true;
    return response;
  });

  // When the Initialize response has been sent, we need to send the initialized
  // event.
  // We use the registerSentHandler() to ensure the event is sent *after* the
  // initialize response.
  // https://microsoft.github.io/debug-adapter-protocol/specification#Events_Initialized
  session->registerSentHandler(
      [&](const dap::ResponseOrError<dap::InitializeResponse> &) {
        session->send(dap::InitializedEvent());
      });

  // The Threads request queries the debugger's list of active threads.
  // This example debugger only exposes a single thread.
  // https://microsoft.github.io/debug-adapter-protocol/specification#Requests_Threads
  session->registerHandler([&](const dap::ThreadsRequest &) {
    dap::ThreadsResponse response;
    dap::Thread thread;
    thread.id = threadId;
    thread.name = "TheThread";
    response.threads.push_back(thread);
    return response;
  });

  // The StackTrace request reports the stack frames (call stack) for a given
  // thread. This example debugger only exposes a single stack frame for the
  // single thread.
  // https://microsoft.github.io/debug-adapter-protocol/specification#Requests_StackTrace
  session->registerHandler(
      [&](const dap::StackTraceRequest &request)
          -> dap::ResponseOrError<dap::StackTraceResponse> {
        if (request.threadId != threadId) {
          return dap::Error("Unknown threadId '%d'", int(request.threadId));
        }

        dap::Source source;
        source.sourceReference = 0;
        source.name = sim.getFile();
        source.path = sim.getFile();

        dap::StackFrame frame;
        frame.line = sim.getLine();
        frame.column = 1;
        frame.name = "HelloDebugger";
        frame.id = frameId;
        frame.source = source;

        dap::StackTraceResponse response;
        response.stackFrames.push_back(frame);
        return response;
      });

  // The Scopes request reports all the scopes of the given stack frame.
  // This example debugger only exposes a single 'Locals' scope for the single
  // frame.
  // https://microsoft.github.io/debug-adapter-protocol/specification#Requests_Scopes
  session->registerHandler([&](const dap::ScopesRequest &request)
                               -> dap::ResponseOrError<dap::ScopesResponse> {
    if (request.frameId != frameId) {
      return dap::Error("Unknown frameId '%d'", int(request.frameId));
    }

    dap::Scope locals;
    locals.name = "Locals";
    locals.presentationHint = "locals";
    locals.variablesReference = variablesReferenceId;
    dap::Scope system;
    system.name = "System";
    system.presentationHint = "system";
    system.variablesReference = sysvariablesReferenceId;

    dap::ScopesResponse response;
    response.scopes.push_back(locals);
    response.scopes.push_back(system);
    return response;
  });

  // The Variables request reports all the variables for the given scope.
  // This example debugger only exposes a single 'currentLine' variable for the
  // single 'Locals' scope.
  // https://microsoft.github.io/debug-adapter-protocol/specification#Requests_Variables
  session->registerHandler([&](const dap::VariablesRequest &request)
                               -> dap::ResponseOrError<dap::VariablesResponse> {
    if (request.variablesReference == variablesReferenceId) {
      dap::VariablesResponse response;
      if (isValid_cpu_get_pc(*sim.g_top)) {
        dap::Variable pcVar;
        pcVar.name = "PC";
        std::stringstream sstream;
        sstream << "0x" << std::hex << sim.pc();
        pcVar.value = sstream.str();
        pcVar.type = "int";
        response.variables.push_back(pcVar);
      }
      auto regs = sim.regs();
      response.variables.insert(response.variables.end(), regs.begin(),
                                regs.end());
      return response;
    } else if (request.variablesReference == sysvariablesReferenceId) {
      dap::VariablesResponse response;
      auto regs = sim.sysRegs();
      response.variables.insert(response.variables.end(), regs.begin(),
                                regs.end());
      return response;
    } else {
      return dap::Error("Unknown variablesReference '%d'",
                        int(request.variablesReference));
    }
  });

  session->registerHandler(
      [&](const dap::SetVariableRequest &request)
          -> dap::ResponseOrError<dap::SetVariableResponse> {
        if (request.variablesReference == variablesReferenceId) {
          // Special case PC
          if (request.name == "PC") {
            sim.setPC(std::stoul(request.value, 0, 0));
          } else {
            // General purpose registers
            auto regID = sim.getRegIDFromName(request.name);
            if (regID == -1) {
              return dap::Error("Unknown variable '%s'", request.name.c_str());
            }
            sim.setReg(regID, std::stoul(request.value, 0, 0));
          }
        } else if (request.variablesReference == sysvariablesReferenceId) {
          // Sys variables
          auto regID = sim.getSysRegIDFromName(request.name);
          if (regID == -1) {
            return dap::Error("Unknown variable '%s'", request.name.c_str());
          }
          sim.setSysReg(regID, std::stoul(request.value, 0, 0));
        } else {
          return dap::Error("Unknown variablesReference '%d'",
                            int(request.variablesReference));
        }

        dap::SetVariableResponse response;
        response.value = request.value;
        response.type = "int";
        response.variablesReference = variablesReferenceId;
        return response;
      });

  // The UpdateInput request updates the value of an input.
  session->registerHandler([&](const dap::UpdateInputRequest &request) {
    sim.updateInputs(request.joystick, request.button, request.dip_switches);
    return dap::UpdateInputResponse();
  });

  // The Pause request instructs the debugger to pause execution of one or all
  // threads.
  // https://microsoft.github.io/debug-adapter-protocol/specification#Requests_Pause
  session->registerHandler([&](const dap::PauseRequest &) {
    sim.pause();
    if (t != NULL) {
      t->join();
      t = NULL;
    }
    return dap::PauseResponse();
  });

  // The Continue request instructs the debugger to resume execution of one or
  // all threads.
  // https://microsoft.github.io/debug-adapter-protocol/specification#Requests_Continue
  session->registerHandler([&](const dap::ContinueRequest &) {
    t = new std::thread([&]() { sim.run(); });
    return dap::ContinueResponse();
  });

  // The Next request instructs the debugger to single line step for a specific
  // thread.
  // https://microsoft.github.io/debug-adapter-protocol/specification#Requests_Next
  session->registerHandler([&](const dap::NextRequest &) {
    sim.runinsn();
    return dap::NextResponse();
  });

  // The StepIn request instructs the debugger to step-in for a specific thread.
  // https://microsoft.github.io/debug-adapter-protocol/specification#Requests_StepIn
  session->registerHandler([&](const dap::StepInRequest &) {
    // Step-in treated as step-over as there's only one stack frame.
    sim.runclk();
    sim.onEvent(sim_t::Event::Stepped, std::nullopt);
    return dap::StepInResponse();
  });

  // The StepOut request instructs the debugger to step-out for a specific
  // thread.
  // https://microsoft.github.io/debug-adapter-protocol/specification#Requests_StepOut
  session->registerHandler([&](const dap::StepOutRequest &) {
    // Step-out is not supported as there's only one stack frame.
    return dap::StepOutResponse();
  });

  session->registerHandler(
      [&](const dap::ReadMemoryRequest &request)
          -> dap::ResponseOrError<dap::ReadMemoryResponse> {
        uint32_t base = std::stoul(request.memoryReference);
        uint32_t count = request.count;
        uint32_t offset = 0;
        if (request.offset)
          offset = request.offset.value();

        uint32_t address = base + offset;
        dap::ReadMemoryResponse response;
        response.address = std::to_string(address);
        auto result = sim.readMemory(address, count);
        response.unreadableBytes = std::get<0>(result);
        response.data = std::get<1>(result);
        return response;
      });

  session->registerHandler(
      [&](const dap::WriteMemoryRequest &request)
          -> dap::ResponseOrError<dap::WriteMemoryResponse> {
        uint32_t base = std::stoul(request.memoryReference);
        std::string data = request.data;
        bool allowPartial = false;
        uint32_t offset = 0;
        if (request.offset)
          offset = request.offset.value();

        uint32_t address = base + offset;
        sim.writeMemory(address, allowPartial, data);
        dap::WriteMemoryResponse response;
        return response;
      });

  session->registerHandler([&](const dap::GetStateRequest &request)
                               -> dap::ResponseOrError<dap::GetStateResponse> {
    return sim.getState(request);
  });

  session->registerHandler([&](const dap::SetStateRequest &request)
                               -> dap::ResponseOrError<dap::SetStateResponse> {
    sim.setState(request);
    return dap::SetStateResponse();
  });

  // The SetBreakpoints request instructs the debugger to clear and set a number
  // of line breakpoints for a specific source file.
  // This example debugger only exposes a single source file.
  // https://microsoft.github.io/debug-adapter-protocol/specification#Requests_SetBreakpoints
  session->registerHandler([&](const dap::SetBreakpointsRequest &request) {
    dap::SetBreakpointsResponse response;

    auto breakpoints = request.breakpoints.value({});
    sim.clearBreakpoints();
    response.breakpoints.resize(breakpoints.size());
    for (size_t i = 0; i < breakpoints.size(); i++) {
      response.breakpoints[i].verified = sim.addBreakpoint(
          request.source.path.value(sim.file), breakpoints[i].line);
    }

    return response;
  });

  // The SetExceptionBreakpoints request configures the debugger's handling of
  // thrown exceptions.
  // This example debugger does not use any exceptions, so this is a no-op.
  // https://microsoft.github.io/debug-adapter-protocol/specification#Requests_SetExceptionBreakpoints
  session->registerHandler([&](const dap::SetExceptionBreakpointsRequest &) {
    return dap::SetExceptionBreakpointsResponse();
  });

  // The Source request retrieves the source code for a given source file.
  // This example debugger only exposes one synthetic source file.
  // https://microsoft.github.io/debug-adapter-protocol/specification#Requests_Source
  session->registerHandler([&](const dap::SourceRequest &request)
                               -> dap::ResponseOrError<dap::SourceResponse> {
    return dap::Error("Unknown source reference '%d'",
                      int(request.sourceReference));
  });

  // The Launch request is made when the client instructs the debugger adapter
  // to start the debuggee. This request contains the launch arguments.
  // This example debugger does nothing with this request.
  // https://microsoft.github.io/debug-adapter-protocol/specification#Requests_Launch
  session->registerHandler([&](const dap::LaunchRequestWithArgs &req) {
    std::filesystem::path program = req.program;
    std::filesystem::path outFolder = req.program;
    outFolder.remove_filename();
    outFolder /= "out";
    std::filesystem::path bin = outFolder;
    bin /= program.filename();
    bin.replace_extension(".bin");
    std::filesystem::path exe = outFolder;
    exe /= program.filename();
    exe.replace_extension("");
    if (log) {
      dap::writef(log, "\nbin: %s exe: %s\n", bin.c_str(), exe.c_str());
    }
    sim.load(req.program, bin.c_str(), exe.c_str());
    return dap::LaunchResponse();
  });

  // Handler for disconnect requests
  session->registerHandler([&](const dap::DisconnectRequest &request) {
    if (request.terminateDebuggee.value(false)) {
      terminate.fire();
    }
    return dap::DisconnectResponse();
  });

  // The ConfigurationDone request is made by the client once all configuration
  // requests have been made.
  // This example debugger uses this request to 'start' the debugger.
  // https://microsoft.github.io/debug-adapter-protocol/specification#Requests_ConfigurationDone
  session->registerHandler([&](const dap::ConfigurationDoneRequest &) {
    configured.fire();
    return dap::ConfigurationDoneResponse();
  });

  // All the handlers we care about have now been registered.
  // We now bind the session to stdin and stdout to connect to the client.
  // After the call to bind() we should start receiving requests, starting with
  // the Initialize request.
  std::shared_ptr<dap::Reader> in = dap::file(stdin, false);
  std::shared_ptr<dap::Writer> out = dap::file(stdout, false);
  std::shared_ptr<dap::Writer> err = dap::file(stderr, false);
  if (log) {
    session->bind(spy(in, log), spy(out, log));
    spy(err, log);
  } else {
    session->bind(in, out);
  }

  // Wait for the ConfigurationDone request to be made.
  configured.wait();

  // Broadcast the existance of the single thread to the client.
  dap::ThreadEvent threadStartedEvent;
  threadStartedEvent.reason = "started";
  threadStartedEvent.threadId = threadId;
  session->send(threadStartedEvent);

  // Start the debugger in a paused state.
  // This sends a stopped event to the client.
  sim.pause();

  // Block until we receive a 'terminateDebuggee' request or encounter a session
  // error.
  terminate.wait();
  sleep(1);
  exit(0);
}