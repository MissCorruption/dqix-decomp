#pragma once

#include "std_library_functions.h"

// Shared text layout and display mode state. The first halfword is also
// initialized by func_02029568; the following two bytes remain unidentified.
struct Struct_020ef74c {
    unsigned short unknown_0_;
    unsigned char unknown_2_[2];
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
};

extern Struct_020ef74c data_020ef74c;

