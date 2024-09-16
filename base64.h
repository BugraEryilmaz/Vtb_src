#ifndef _BASE64_H_
#define _BASE64_H_

#include <vector>
#include <string>
#include <cstdint>
typedef unsigned char BYTE;

std::vector<BYTE> uint32_to_bytes(uint32_t num);
uint32_t bytes_to_uint32(std::vector<BYTE> bytes);
std::string base64_encode(BYTE const* buf, unsigned int bufLen);
std::vector<BYTE> base64_decode(std::string const&);

#endif