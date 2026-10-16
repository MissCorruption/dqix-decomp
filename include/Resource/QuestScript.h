#pragma once

#include "Resource/QuestScriptOwner.h"

// Existing 20-byte script state at data_02109404.
struct QuestScriptState {
    unsigned char f0;
    unsigned char skip;
    unsigned char selected;
    unsigned char f3;
    unsigned char f4;
    unsigned char pad5;
    unsigned short index;
    unsigned short f8;
    unsigned char padA[2];
    SafeAllocator* allocator;
    unsigned char* table;
};

extern QuestScriptState data_02109404;
