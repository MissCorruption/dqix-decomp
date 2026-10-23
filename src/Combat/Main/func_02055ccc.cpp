#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

struct Struct_020546c8;
extern "C" void* func_020550d8(struct Struct_020546c8* arg0);

struct Struct_02055ccc {
    int unknown_0_;
    float unknown_4_;
    float unknown_8_;
    float unknown_c_;
};

struct Struct_020557a4;
extern "C" float func_020578e8(Struct_020557a4* arg0, Struct_020557a4* arg1);

struct Struct_02055ccc_2 {
    Struct_02055ccc* unknown_0_;
};

struct Struct_02055ccc_3 {
    char unknown_0_[0x10];
    unsigned char unknown_10_[3];
    unsigned char unknown_13_;
};

struct Struct_02055ccc_4 {
    char unknown_0_[4];
    int unknown_4_;
    char unknown_8_[0x28];
    void* unknown_30_;
    char unknown_34_[0x70];
    float unknown_a4_[3];
    float unknown_b0_;
    float unknown_b4_;
    float unknown_b8_;
    unsigned short unknown_bc_[3];
    unsigned short unknown_c2_;
};

// USA: func_02055ccc
extern "C" ARM void func_02055ccc(struct Struct_02055ccc_4* arg0) {
    Struct_02055ccc_3* var0 = (Struct_02055ccc_3*)func_020550d8((struct Struct_020546c8*)arg0->unknown_30_);

    for (int var1 = 0; var1 < 3; var1++) {
        if (var0->unknown_10_[var1] <= 1)
            continue;
        if (var0->unknown_10_[var1] <= arg0->unknown_bc_[var1])
            continue;
        Struct_02055ccc_2* var2 = (Struct_02055ccc_2*)((SignedAllocatorList*)((char*)arg0->unknown_30_ + 0x80 + var1 * 12))->GetNthElement(arg0->unknown_bc_[var1]);
        if (var2 == 0)
            continue;
        if ((unsigned int)var2->unknown_0_->unknown_0_ >= (unsigned int)arg0->unknown_4_)
            continue;
        *(unsigned short*)((char*)arg0 + 0xbc + var1 * 2) = *(unsigned short*)((char*)arg0 + 0xbc + var1 * 2) + 1;
        if (arg0->unknown_bc_[var1] >= var0->unknown_10_[var1]) {
            arg0->unknown_a4_[var1] = 0;
            continue;
        }
        Struct_02055ccc_2* var3 = (Struct_02055ccc_2*)((SignedAllocatorList*)((char*)arg0->unknown_30_ + 0x80 + var1 * 12))->GetNthElement(arg0->unknown_bc_[var1]);
        if (var3 == 0)
            continue;
        arg0->unknown_a4_[var1] = func_020578e8((Struct_020557a4*)var2, (Struct_020557a4*)var3);
    }

    if (var0->unknown_13_ <= 1)
        return;
    if (var0->unknown_13_ <= arg0->unknown_c2_)
        return;
    Struct_02055ccc_2* var4 = (Struct_02055ccc_2*)((SignedAllocatorList*)((char*)arg0->unknown_30_ + 0xa4))->GetNthElement(arg0->unknown_c2_);
    if (var4 == 0)
        return;
    if ((unsigned int)var4->unknown_0_->unknown_0_ >= (unsigned int)arg0->unknown_4_)
        return;
    arg0->unknown_c2_ = arg0->unknown_c2_ + 1;
    if (arg0->unknown_c2_ >= var0->unknown_13_) {
        arg0->unknown_b0_ = arg0->unknown_b4_ = arg0->unknown_b8_ = 0;
        return;
    }
    Struct_02055ccc_2* var5 = (Struct_02055ccc_2*)((SignedAllocatorList*)((char*)arg0->unknown_30_ + 0xa4))->GetNthElement(arg0->unknown_c2_);
    if (var5 == 0)
        return;
    arg0->unknown_b0_ = (var5->unknown_0_->unknown_4_ - var4->unknown_0_->unknown_4_) / (float)(var5->unknown_0_->unknown_0_ - var4->unknown_0_->unknown_0_);
    arg0->unknown_b4_ = (var5->unknown_0_->unknown_8_ - var4->unknown_0_->unknown_8_) / (float)(var5->unknown_0_->unknown_0_ - var4->unknown_0_->unknown_0_);
    arg0->unknown_b8_ = (var5->unknown_0_->unknown_c_ - var4->unknown_0_->unknown_c_) / (float)(var5->unknown_0_->unknown_0_ - var4->unknown_0_->unknown_0_);
}
