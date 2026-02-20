#pragma once

#include "Engine/Userdefined/Offsets.h"

using Byte = unsigned char;

struct Signature {
    std::string name;
    std::vector<Byte> pattern;
    std::string mask;
};

class GSpot
{
public:
	static std::vector<Offset> findOffsets();
	static std::vector<Signature> getSignatures();
private:
    static uint64_t adjustFoundOffsetForGroup(uint64_t offset, const std::string& group);
};