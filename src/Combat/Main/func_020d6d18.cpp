#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void func_02059cc8(unsigned char* arg0);

struct Struct_020d6d18 {
    unsigned char unknown_0_[0xd4];
    int unknown_d4_;
};

struct Struct_020d6d18_2 {
    Struct_020d6d18 unknown_0_[12];
    int unknown_a20_;
    short unknown_a24_;
    short unknown_a26_;
    SafeAllocator unknown_a28_;
    unsigned char unknown_a3c_;
    unsigned char unknown_a3d_;
    float unknown_a40_;
    float unknown_a44_;
};

// USA: func_020d6d18
extern "C" ARM void func_020d6d18(Struct_020d6d18_2* arg0) {
    for (int var0 = 0; var0 < 12; var0++) {
        func_02059cc8((unsigned char*)&arg0->unknown_0_[var0]);
        arg0->unknown_0_[var0].unknown_d4_ = 0;
    }
    arg0->unknown_a28_.ResetAllocatorPointer();
    arg0->unknown_a20_ = 0;
    arg0->unknown_a24_ = 0;
    arg0->unknown_a26_ = 0;
    arg0->unknown_a3c_ = 0;
    arg0->unknown_a3d_ = 0;
    arg0->unknown_a40_ = 1.0f;
    arg0->unknown_a44_ = -0.2f;
}
