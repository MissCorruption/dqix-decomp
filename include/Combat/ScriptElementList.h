#pragma once

class SafeAllocator;

struct Struct_0208d550 {
    void* unknown_0_;
    short unknown_4_;
    short unknown_6_;
    const short* unknown_8_;
    short unknown_c_;
    unsigned short unknown_e_;
};

struct Struct_02108fc0 {
    SafeAllocator* unknown_0_;
    Struct_0208d550* unknown_4_;
};

extern Struct_02108fc0 data_02108fc0;

extern "C" void func_0208d860(Struct_0208d550* arg0, SafeAllocator* arg1,
                                           const void* arg2, unsigned int arg3,
                                           const short* arg4, short arg5,
                                           unsigned short arg6);
