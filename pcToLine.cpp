#include "pcToLine.h"
#include <elfutils/libdwfl.h>
#include <fcntl.h>
#include <iostream>
#include <libelf.h>

PcToLine::PcToLine() {
  // Create a Dwfl handle
  dwfl = dwfl_begin(&callbacks);
  if (!dwfl) {
    std::cerr << "dwfl_begin failed" << std::endl;
    return;
  }
}

PcToLine::~PcToLine() { dwfl_end(dwfl); }

void PcToLine::registerFile(const char *file_name) {
  // Report the ELF file to Dwfl
  if (dwfl_report_offline(dwfl, file_name, file_name, -1) == NULL) {
    std::cerr << "dwfl_report_offline failed" << std::endl;
    dwfl_end(dwfl);
    exit(-1);
  }

  // Report modules
  dwfl_report_end(dwfl, NULL, NULL);
}

int PcToLine::getLine(unsigned long pc) {
  // Get the line information
  int lineno = 0;
  Dwfl_Line *line = dwfl_getsrc(dwfl, pc);
  if (!line) {
    std::cerr << "Failed to get source line information" << std::endl;
  } else {
    const char *filename;
    filename = dwfl_lineinfo(line, NULL, &lineno, NULL, NULL, NULL);
    // std::cout << "PC: 0x" << std::hex << pc << " corresponds to " <<
    // filename
    //           << ":" << std::dec << lineno << std::endl;
  }
  return lineno;
}

const char *PcToLine::getFileName(unsigned long pc) {
  // Get the line information
  Dwfl_Line *line = dwfl_getsrc(dwfl, pc);
  if (!line) {
    std::cerr << "Failed to get source line information" << std::endl;
  } else {
    const char *filename;
    int lineno;
    filename = dwfl_lineinfo(line, NULL, &lineno, NULL, NULL, NULL);
    return filename;
  }
  return NULL;
}