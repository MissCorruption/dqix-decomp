#pragma once

#include <Memory/SafeAllocator.h>

struct GameResources;
struct Struct_02046a3c;

// Prefix initialized by Init021a124c. Allocation extent is not specified here.
struct Struct_ov017_021a120c {
    signed char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    Struct_02046a3c* unknown_4_;
    SafeAllocator unknown_8_;
    void* unknown_1c_;
    unsigned char unknown_20_;
    unsigned char unknown_21_;
    unsigned char unknown_22_;
};

extern "C" void func_ov017_021a120c(GameResources* arg0, int arg1, int arg2);
