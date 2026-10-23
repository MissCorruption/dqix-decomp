#pragma once

class SafeAllocator;
struct Struct_02094d88;
struct Struct_020951d8;

struct Struct_020956b8 {
    char unknown_0_[0xa0];
    Struct_02094d88* unknown_a0_;
    Struct_020951d8* unknown_a4_;
};

extern "C" void func_020956b8(Struct_020956b8* arg0, SafeAllocator* arg1);
extern "C" void func_0209576c(Struct_020956b8* arg0, SafeAllocator* arg1,
                             const void* arg2, unsigned int arg3, unsigned char arg4);
