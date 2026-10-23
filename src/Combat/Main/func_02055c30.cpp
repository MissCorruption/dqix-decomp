#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

struct Struct_020546c8;
extern "C" void* func_020550c0(struct Struct_020546c8* arg0);

struct Struct_020557a4;
extern "C" float func_020578e8(Struct_020557a4* arg0, Struct_020557a4* arg1);

struct Struct_02055c30 {
    char unknown_0_[4];
    int unknown_4_;
    char unknown_8_[0x28];
    void* unknown_30_;
    char unknown_34_[0x68];
    float unknown_9c_;
    unsigned short unknown_a0_;
};

// USA: func_02055c30
extern "C" ARM void func_02055c30(struct Struct_02055c30* arg0) {
    void* var0 = func_020550c0((struct Struct_020546c8*)arg0->unknown_30_);
    if (*(unsigned char*)((char*)var0 + 4) <= 1) return;
    if (*(unsigned char*)((char*)var0 + 4) <= arg0->unknown_a0_) return;

    SignedAllocatorHeader* var1 = ((SignedAllocatorList*)((char*)arg0->unknown_30_ + 0x74))->GetNthElement(arg0->unknown_a0_);
    if (var1 == NULL) return;
    if ((unsigned int)(**(int**)var1) >= (unsigned int)arg0->unknown_4_) return;

    arg0->unknown_a0_ = arg0->unknown_a0_ + 1;
    if (arg0->unknown_a0_ >= *(unsigned char*)((char*)var0 + 4)) {
        arg0->unknown_9c_ = 0;
        return;
    }
    SignedAllocatorHeader* var2 = ((SignedAllocatorList*)((char*)arg0->unknown_30_ + 0x74))->GetNthElement(arg0->unknown_a0_);
    if (var2 == NULL) return;
    arg0->unknown_9c_ = func_020578e8((Struct_020557a4*)var1, (Struct_020557a4*)var2);
}
