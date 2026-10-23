#pragma once

#include "Memory/SafeAllocator.h"
#include "Graphics/Vector.h"

struct Struct_0201bdac;
struct Struct_02012fa4;

struct Struct_ov017_021986fc {
    signed char unknown_0_;
    unsigned char unknown_1_, unknown_2_, unknown_3_;
    Struct_0201bdac* unknown_4_;
    unsigned char unknown_8_, unknown_9_;
    unsigned short unknown_a_;
    short unknown_c_, unknown_e_;
    int unknown_10_;
    Vector3fix unknown_14_;
    int unknown_20_, unknown_24_;
    Struct_02012fa4* unknown_28_;
    SafeAllocator unknown_2c_;
};

extern "C" void func_ov017_021ae800(Struct_ov017_021986fc* arg0);

