#include <globaldefs.h>
#include <NitroSDK/Memory/SignedAllocator.h>

struct Struct_02056d80_6 {
    int unknown_0_;
    union {
        float unknown_4_;
        unsigned int unknown1_4_;
    };
    float unknown_8_;
    float unknown_c_;
};
struct Struct_020557a4 {
    Struct_02056d80_6* unknown_0_;
};
struct Struct_020546c8 {
    unsigned char unknown_0_[8];
    SignedAllocatorList unknown_8_[3];
    SignedAllocatorList unknown_2c_[3];
    SignedAllocatorList unknown_50_[3];
    SignedAllocatorList unknown_74_;
    SignedAllocatorList unknown_80_[3];
    SignedAllocatorList unknown_a4_;
    SignedAllocatorList unknown_b0_[4];
    unsigned char unknown_e0_[12];
    SignedAllocatorList unknown_ec_[4];
    SignedAllocatorList unknown_11c_;
};
struct Struct_02056d80_5 {
    unsigned char unknown_0_[16];
    unsigned char unknown_10_[4];
};
struct Struct_02056d80_7 {
    unsigned char unknown_0_[0x24];
    unsigned char unknown_24_[3];
    unsigned char unknown_27_[3];
    unsigned char unknown_2a_[3];
};
struct Struct_02056d80_8 {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_;
};
struct Struct_02056d80 {
    unsigned char unknown_0_[16];
    unsigned char unknown_10_[3];
    unsigned char unknown_13_;
};
struct Struct_02056d80_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
};
struct Struct_02056d80_3 {
    unsigned char unknown_0_[12];
    unsigned short unknown_c_;
};
struct Struct_02056d80_4 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    unsigned char unknown_c_;
    unsigned char unknown_d_[0x1b];
    void* unknown_28_;
    int unknown_2c_;
    Struct_020546c8* unknown_30_;
    unsigned char unknown_34_[4];
    unsigned char unknown_38_;
    unsigned char unknown_39_[0x13];
    float unknown_4c_[4];
    unsigned short unknown_5c_[4];
    float unknown_64_[3];
    float unknown_70_[3];
    float unknown_7c_[3];
    unsigned short unknown_88_[3];
    unsigned short unknown_8e_[3];
    unsigned short unknown_94_[3];
    unsigned char unknown_9a_[2];
    float unknown_9c_;
    unsigned short unknown_a0_;
    unsigned char unknown_a2_[2];
    float unknown_a4_[3];
    float unknown_b0_[3];
    unsigned short unknown_bc_[3];
    unsigned short unknown_c2_;
    unsigned char unknown_c4_[0x54];
    float unknown_118_[4];
    float unknown_128_[3];
    float unknown_134_[3];
    float unknown_140_[3];
    float unknown_14c_;
    int unknown_150_;
    int unknown_154_;
    float unknown_158_[3];
    float unknown_164_[3];
};

extern "C" int func_02055168(Struct_020546c8*);
extern "C" void* func_020550a8(Struct_020546c8*);
extern "C" void* func_020550c0(Struct_020546c8*);
extern "C" void* func_020550d8(Struct_020546c8*);
extern "C" void* func_020550f0(Struct_020546c8*);
extern "C" void* func_02055090(Struct_020546c8*);
extern "C" float func_020578e8(Struct_020557a4*, Struct_020557a4*);

// USA: func_02056d80
extern "C" ARM void func_02056d80(Struct_02056d80_4* arg0) {
    if (!arg0->unknown_30_ || !arg0->unknown_28_) return;
    Struct_02056d80_5* var0 = (Struct_02056d80_5*)func_02055168(arg0->unknown_30_);
    Struct_020557a4* var1;
    Struct_020557a4* var2;
    var1 = (Struct_020557a4*)arg0->unknown_30_->unknown_ec_[0].ElementAfter(0);
    arg0->unknown_118_[0] = var1->unknown_0_->unknown_4_;
    if (var0->unknown_10_[0] > 1) {
        arg0->unknown_5c_[0] = 1;
        var2 = (Struct_020557a4*)arg0->unknown_30_->unknown_b0_[0].GetNthElement(1);
        if (var2) arg0->unknown_4c_[0] = func_020578e8(var1, var2);
    }
    var1 = (Struct_020557a4*)arg0->unknown_30_->unknown_ec_[1].ElementAfter(0);
    arg0->unknown_118_[1] = var1->unknown_0_->unknown_4_;
    if (var0->unknown_10_[1] > 1) {
        arg0->unknown_5c_[1] = 1;
        var2 = (Struct_020557a4*)arg0->unknown_30_->unknown_b0_[1].GetNthElement(1);
        if (var2) arg0->unknown_4c_[1] = func_020578e8(var1, var2);
    }
    var1 = (Struct_020557a4*)arg0->unknown_30_->unknown_ec_[2].ElementAfter(0);
    arg0->unknown_118_[2] = var1->unknown_0_->unknown_4_;
    if (var0->unknown_10_[2] > 1) {
        arg0->unknown_5c_[2] = 1;
        var2 = (Struct_020557a4*)arg0->unknown_30_->unknown_b0_[2].GetNthElement(1);
        if (var2) arg0->unknown_4c_[2] = func_020578e8(var1, var2);
    }
    var1 = (Struct_020557a4*)arg0->unknown_30_->unknown_ec_[3].ElementAfter(0);
    arg0->unknown_118_[3] = var1->unknown_0_->unknown_4_;
    if (var0->unknown_10_[3] > 1) {
        arg0->unknown_5c_[3] = 1;
        var2 = (Struct_020557a4*)arg0->unknown_30_->unknown_b0_[3].GetNthElement(1);
        if (var2) arg0->unknown_4c_[3] = func_020578e8(var1, var2);
    }
    Struct_02056d80_7* var3 = (Struct_02056d80_7*)func_020550a8(arg0->unknown_30_);
    for (int var4 = 0; var4 < 3; var4++) {
        var1 = (Struct_020557a4*)arg0->unknown_30_->unknown_8_[var4].ElementAfter(0);
        arg0->unknown_128_[var4] = var1->unknown_0_->unknown_4_;
        if (var3->unknown_24_[var4] > 1) {
            arg0->unknown_88_[var4] = 1;
            var2 = (Struct_020557a4*)arg0->unknown_30_->unknown_8_[var4].GetNthElement(arg0->unknown_88_[var4]);
            if (var2) arg0->unknown_64_[var4] = func_020578e8(var1, var2);
        }
    }
    for (int var5 = 0; var5 < 3; var5++) {
        var1 = (Struct_020557a4*)arg0->unknown_30_->unknown_2c_[var5].ElementAfter(0);
        arg0->unknown_134_[var5] = var1->unknown_0_->unknown_4_;
        if (var3->unknown_27_[var5] > 1) {
            arg0->unknown_8e_[var5] = 1;
            var2 = (Struct_020557a4*)arg0->unknown_30_->unknown_2c_[var5].GetNthElement(arg0->unknown_8e_[var5]);
            if (var2) arg0->unknown_70_[var5] = func_020578e8(var1, var2);
        }
    }
    for (int var6 = 0; var6 < 3; var6++) {
        var1 = (Struct_020557a4*)arg0->unknown_30_->unknown_50_[var6].ElementAfter(0);
        arg0->unknown_140_[var6] = var1->unknown_0_->unknown_4_;
        if (var3->unknown_2a_[var6] > 1) {
            arg0->unknown_94_[var6] = 1;
            var2 = (Struct_020557a4*)arg0->unknown_30_->unknown_50_[var6].GetNthElement(arg0->unknown_94_[var6]);
            if (var2) arg0->unknown_7c_[var6] = func_020578e8(var1, var2);
        }
    }
    Struct_02056d80_8* var7 = (Struct_02056d80_8*)func_020550c0(arg0->unknown_30_);
    var1 = (Struct_020557a4*)arg0->unknown_30_->unknown_74_.ElementAfter(0);
    arg0->unknown_14c_ = (float)var1->unknown_0_->unknown1_4_;
    if (var7->unknown_4_ > 1) {
        arg0->unknown_a0_ = 1;
        var2 = (Struct_020557a4*)arg0->unknown_30_->unknown_74_.GetNthElement(1);
        if (var2) arg0->unknown_9c_ = func_020578e8(var1, var2);
    }
    Struct_02056d80* var8 = (Struct_02056d80*)func_020550d8(arg0->unknown_30_);
    for (int var9 = 0; var9 < 3; var9++) {
        var1 = (Struct_020557a4*)arg0->unknown_30_->unknown_80_[var9].ElementAfter(0);
        arg0->unknown_158_[var9] = var1->unknown_0_->unknown_4_;
        if (var8->unknown_10_[var9] > 1) {
            arg0->unknown_bc_[var9] = 1;
            var2 = (Struct_020557a4*)arg0->unknown_30_->unknown_80_[var9].GetNthElement(arg0->unknown_bc_[var9]);
            if (var2) arg0->unknown_a4_[var9] = func_020578e8(var1, var2);
        }
    }
    var1 = (Struct_020557a4*)arg0->unknown_30_->unknown_a4_.ElementAfter(0);
    arg0->unknown_164_[0] = var1->unknown_0_->unknown_4_;
    arg0->unknown_164_[1] = var1->unknown_0_->unknown_8_;
    arg0->unknown_164_[2] = var1->unknown_0_->unknown_c_;
    if (var8->unknown_13_ > 1) {
        arg0->unknown_c2_ = 1;
        var2 = (Struct_020557a4*)arg0->unknown_30_->unknown_a4_.GetNthElement(1);
        if (var2) {
            arg0->unknown_b0_[0] = (var2->unknown_0_->unknown_4_ - var1->unknown_0_->unknown_4_) / (float)(var2->unknown_0_->unknown_0_ - var1->unknown_0_->unknown_0_);
            arg0->unknown_b0_[1] = (var2->unknown_0_->unknown_8_ - var1->unknown_0_->unknown_8_) / (float)(var2->unknown_0_->unknown_0_ - var1->unknown_0_->unknown_0_);
            arg0->unknown_b0_[2] = (var2->unknown_0_->unknown_c_ - var1->unknown_0_->unknown_c_) / (float)(var2->unknown_0_->unknown_0_ - var1->unknown_0_->unknown_0_);
        }
    }
    Struct_02056d80_2* var10 = (Struct_02056d80_2*)func_020550f0(arg0->unknown_30_);
    arg0->unknown_4_ = 0;
    arg0->unknown_8_ = var10->unknown_0_ + var10->unknown_1_;
    arg0->unknown_c_ = var10->unknown_2_;
    arg0->unknown_38_ = var10->unknown_3_;
    arg0->unknown_154_ = var10->unknown_1_;
    if (var10->unknown_2_) arg0->unknown_c_ = 1;
    if (((Struct_02056d80_3*)func_02055090(arg0->unknown_30_))->unknown_c_ == 0) return;
    var1 = (Struct_020557a4*)arg0->unknown_30_->unknown_11c_.ElementAfter(0);
    arg0->unknown_150_ = var1->unknown_0_->unknown_0_;
}
