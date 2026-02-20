#include "GSpot.h"
#include "Memory.h"

std::vector<Signature> GSpot::getSignatures() {
    std::vector<Signature> sigs;
    // ----------------------------------------------
    // START GNAMES
    // ----------------------------------------------
    sigs.push_back({ "GNames (Variant 1)",
        {0x48, 0x8D, 0x0D, 0x00, 0x00, 0x00,
         0x00, 0xE8, 0x00, 0x00, 0xFE, 0xFF,
         0x4C, 0x8B, 0xC0, 0xC6, 0x05, 0x00,
         0x00, 0x00, 0x00, 0x01},
        "xxx????x??xxxxxxx????x"
        });

    sigs.push_back({ "GNames (Variant 2)",
        {0x48, 0x8D, 0x0D, 0x00, 0x00, 0x00,
         0x03, 0xE8, 0x00, 0x00, 0xFF, 0xFF,
         0x4C, 0x00, 0xC0},
        "xxx???xx??xxx?x"
        });

    sigs.push_back({ "GNames (Variant 3)",
        {0x48, 0x8D, 0x0D, 0x00, 0x00, 0x00,
         0x00, 0xE8, 0x00, 0x00, 0xFF, 0xFF,
         0x48, 0x8B, 0xD0, 0xC6, 0x05, 0x00,
         0x00, 0x00, 0x00, 0x01},
        "xxx????x??xxxxxxx????x"
        });

    sigs.push_back({ "GNames (Variant 4)",
        {0x48, 0x8B, 0X05, 0X00, 0x00, 0x00,
         0x02, 0x48, 0x85, 0xC0, 0x75, 0x5F,
         0xB9, 0x08, 0x08, 0x00},
        "xxx???xxxxxxxxx?"
        });
    // ----------------------------------------------
    // END GNAMES
    // ----------------------------------------------

    // ----------------------------------------------
    // START GOBJECTS
    // ----------------------------------------------
    sigs.push_back({ "GObjects (Variant 1)",
        {0x4C, 0x8B, 0x0D, 0x00, 0x00, 0x00,
         0x00, 0x99, 0x0F, 0xB7, 0xD2},
        "xxx????xxxx"
        });

    sigs.push_back({ "GObjects (Variant 2)",
        {0x4C, 0x8B, 0x0D, 0x00, 0x00, 0x00,
         0x00, 0x41, 0x3B, 0xC0, 0x7D, 0x17},
        "xxx????xxxxx"
        });

    sigs.push_back({ "GObjects (Variant 3)",
        {0x4C, 0x8B, 0x0D, 0x00, 0x00, 0x00,
         0x04, 0x90, 0x0F, 0xB7, 0xC6, 0x8B,
         0xD6},
        "xxx???xxxxxxx"
        });

    sigs.push_back({ "GObjects (Variant 4)",
        {0x4C, 0x8B, 0x0D, 0x00, 0x00, 0x00, 0x00,
         0x48, 0x98, 0x48, 0x8D, 0x0C, 0x40, 0x49},
        "xxx????xxxxxxx"
        }); // WUCHANG: Fallen Feathers

    sigs.push_back({ "GObjects (Variant 5)",
        {0x4C, 0x8B, 0x0D, 0x00, 0x00, 0x00,
         0x00, 0x8B, 0xD0, 0xC1, 0xEA, 0x10},
        "xxx????xxxxx"
        });

    sigs.push_back({ "GObjects (Variant 6)",
        {0x48, 0x8B, 0x05, 0x00, 0x00, 0x00, 0x00,
         0x4A, 0x8B, 0x0C, 0xC0, 0x48, 0x8D, 0x04,
         0xD1, 0xEB, 0x00, 0x48, 0x8B, 0xC6, 0x81,
         0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48,
         0x8D, 0x4D, 0x00, 0xFF, 0x15},
        "xxx????xxxxxxxxx?xxxxx?????xxx?xx"
        }); //Farlight 84 (Aug. 2025 Update)
    // ----------------------------------------------
    // END GOBJECTS
    // ----------------------------------------------

    return sigs;
}

uint64_t GSpot::adjustFoundOffsetForGroup(uint64_t offset, const std::string& group)
{
    std::vector<std::vector<Byte>> prefixes;
    if (group == "GNames") {
        prefixes.push_back({ 0x48, 0x8D, 0x0D }); // <= 4.27
        prefixes.push_back({ 0x48, 0x8B, 0x05 }); // > 4.27
    }
    else if (group == "GObjects") {
        prefixes.push_back({ 0x4C, 0x8B, 0x0D });
    }
    else {
        return offset;
    }
    size_t searchLimit = 30;
    size_t limit = offset + searchLimit;
    for (size_t i = offset; i <= limit; i++) {
        for (const auto& prefix : prefixes) {
            bool match = true;
            for (size_t j = 0; j < prefix.size(); j++) {

				uint8_t byte = Memory::read<uint8_t>(i + j);
                if (byte != prefix[j]) {
                    match = false;
                    break;
                }
            }
            if (match)
                return i;
        }
    }
    return offset;
}

std::vector<Offset> GSpot::findOffsets()
{
	std::vector<Offset> offsets;
    bool gNamesFound = false;
    bool gObjectsFound = false;
    for (const Signature& sig : getSignatures())
    {
        bool isGNames = sig.name.find("GNames") != std::string::npos;
        bool isGObjects = sig.name.find("GObjects") != std::string::npos;
        if ((isGNames && gNamesFound) || (isGObjects && gObjectsFound))
            continue;
        uint64_t offset = Memory::patternScan(0, reinterpret_cast<const char*>(sig.pattern.data()), sig.mask);
        if (offset == 0)
            continue;
        if (isGNames)
            offset = adjustFoundOffsetForGroup(offset, "GNames");
        else if (isGObjects)
			offset = adjustFoundOffsetForGroup(offset, "GObjects");
		int32_t disp = Memory::read<int32_t>(offset + 3);
		uint64_t nextInstruction = offset + 7;
		uint64_t address = nextInstruction + disp - Memory::getBaseAddress();
        if (isGNames) {
            offsets.push_back({ OFFSET_ADDRESS | OFFSET_DS, "OFFSET_GNAMES", address });
            gNamesFound = true;
        } else if (isGObjects) {
            offsets.push_back({ OFFSET_ADDRESS | OFFSET_DS, "OFFSET_GOBJECTS", address });
            gObjectsFound = true;
        }

    }
	return offsets;
}