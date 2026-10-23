#pragma once

#include "Resource/Script.h"
#include "World/ZoneFeatures.h"

struct Struct_020fdc20 {
    Struct_020134e0::Struct_02018300 *unknown_0_;
    SafeAllocator *unknown_4_;
    Struct_020134e0 *unknown_8_;
    // Float accumulators at +0x0c..+0x1c, initialized by __sinit_020e5a74.
    float unknown_c_[5];
};

extern Struct_020fdc20 data_020fdc20;

extern "C" void func_0201e1d0(const void* arg0, unsigned int arg1, Struct_020134e0* arg2, SafeAllocator* arg3);

extern "C" bool func_0201cb60(Script::Parameter *arg0, int arg1, Struct_020134e0::Struct_0201cb60_3 &arg2);
extern "C" int func_0201ccc8(Script::Parameter *arg0, int arg1);
extern "C" int func_0201ce80(Script::Parameter *arg0, int arg1);
extern "C" int func_0201c96c(Script::Parameter *arg0, int arg1);
