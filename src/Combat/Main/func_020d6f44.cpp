#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void func_02059cc8(unsigned char* arg0);

struct Struct_020d6f44 {
    unsigned char unknown_0_[0xd4];
    int unknown_d4_;
};

struct Struct_020d6ec8 {
    Struct_020d6f44 unknown_0_[12];
    unsigned char unknown_a20_[4];
    short unknown_a24_;
    short unknown_a26_;
    SafeAllocator unknown_a28_;
};

// USA: func_020d6f44
extern "C" ARM void func_020d6f44(Struct_020d6ec8* arg0) {
    arg0->unknown_a28_.Reset();
    for (int var0 = 0; var0 < 12; var0++) {
        func_02059cc8((unsigned char*)&arg0->unknown_0_[var0]);
        arg0->unknown_0_[var0].unknown_d4_ = 0;
    }
    arg0->unknown_a24_ = 0;
    arg0->unknown_a26_ = 0;
}
