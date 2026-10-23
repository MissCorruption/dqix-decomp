#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "World/Object3D.h"

struct Struct_02020cb8;
extern "C" void func_0204af64(Struct_02020cb8* arg0);

struct Struct_ov003_02173c40 {
    int unknown_0_;
    class SafeAllocator unknown_4_;
    class SafeAllocator unknown_18_;
    class SafeAllocator unknown_2c_;
    unsigned char unknown_40_[0x20];
    unsigned char unknown_60_[0x20];
    unsigned char unknown_80_[0xac];
    unsigned char unknown_12c_;
    signed char unknown_12d_;
    int unknown_130_;
    int unknown_134_;
    int unknown_138_;
    int unknown_13c_;
    unsigned char unknown_140_;
    unsigned char unknown_141_;
    unsigned char unknown_142_;
    unsigned char unknown_143_;
    unsigned char unknown_144_[0x160 - 0x144];
    int unknown_160_;
};

// USA: func_ov003_0217bcb8
extern "C" ARM void func_ov003_0217bcb8(Struct_ov003_02173c40* arg0) {
    arg0->unknown_0_ = 0;
    arg0->unknown_4_.ResetAllocatorPointer();
    arg0->unknown_18_.ResetAllocatorPointer();
    arg0->unknown_2c_.ResetAllocatorPointer();
    func_0204af64((Struct_02020cb8*)arg0->unknown_40_);
    func_0204af64((Struct_02020cb8*)arg0->unknown_60_);
    ((Object3D*)arg0->unknown_80_)->Initialize();
    arg0->unknown_12c_ = 0;
    int var0 = arg0->unknown_12c_ - 1;
    arg0->unknown_12d_ = var0;
    arg0->unknown_130_ = var0;
    arg0->unknown_134_ = var0;
    arg0->unknown_138_ = var0;
    arg0->unknown_13c_ = var0;
    arg0->unknown_140_ = 0;
    arg0->unknown_141_ = 0;
    arg0->unknown_143_ = 0;
    arg0->unknown_142_ = 0;
    arg0->unknown_160_ = 0;
    *(short*)((char*)arg0 + 0x15c) = 0;
}
