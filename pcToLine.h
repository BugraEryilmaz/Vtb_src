#pragma once
#include <elfutils/libdwfl.h>

static const Dwfl_Callbacks callbacks = {
    .find_elf = dwfl_build_id_find_elf,
    .find_debuginfo = dwfl_standard_find_debuginfo,
    .section_address = dwfl_offline_section_address,
};

class PcToLine {
public:
  Dwfl *dwfl = NULL;
  PcToLine();

  ~PcToLine();

  void registerFile(const char *file_name);

  int getLine(unsigned long pc);

  const char *getFileName(unsigned long pc);
};