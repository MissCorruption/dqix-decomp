#pragma once

#include "Resource/QuestScriptOwner.h"

// Existing 20-byte script state at data_02109404.
struct Struct_02109404 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned char unknown_a_[2];
    SafeAllocator* unknown_c_;
    unsigned char* unknown_10_;
};

extern Struct_02109404 data_02109404;
