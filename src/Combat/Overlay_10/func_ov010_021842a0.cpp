#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_020727d8 {
    void* unknown_0_;
    void* unknown_4_;
};

extern "C" void func_020727d8(Struct_020727d8* arg0);

struct Struct_ov010_021842a0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    int unknown_4_;
    char unknown_8_[0xc - 0x8];
    Struct_020727d8 unknown_c_;
    SafeAllocator unknown_14_;
};

// USA: func_ov010_021842a0
extern "C" ARM void func_ov010_021842a0(Struct_ov010_021842a0* arg0) {
    arg0->unknown_0_ = 0;
    arg0->unknown_2_ = 0;
    arg0->unknown_4_ = -1;
    func_020727d8(&arg0->unknown_c_);
    arg0->unknown_14_.ResetAllocatorPointer();
    arg0->unknown_1_ = 0;
}
