#include <globaldefs.h>
#include <std_library_functions.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov023_021dad8c {
    unsigned int unknown_0_0_ : 7; unsigned int unknown_0_7_ : 4; unsigned int unknown_1_3_ : 18;
    unsigned int unknown_3_5_ : 1; unsigned int unknown_3_6_ : 2;
    unsigned int unknown_4_0_ : 12; unsigned int unknown_5_4_ : 15;
    unsigned int unknown_7_3_ : 1; unsigned int unknown_7_4_ : 1; unsigned int unknown_7_5_ : 1;
    unsigned int unknown_7_6_ : 2;
};
struct Struct_ov000_021700dc {
    Struct_ov023_021dad8c* unknown_0_; void* unknown_4_;
    unsigned int unknown_8_0_ : 4; unsigned int unknown_8_4_ : 28;
    char unknown_c_[12]; short unknown_18_; char unknown_1a_[6];
};
struct Struct_ov005_02154da8 {
    unsigned short unknown_0_; unsigned short unknown_2_0_ : 15; unsigned short unknown_3_7_ : 1;
    int unknown_4_; unsigned int unknown_8_0_ : 31; unsigned int unknown_b_7_ : 1;
};
struct Struct_020de5b0 { Struct_ov005_02154da8 unknown_0_; Struct_ov000_021700dc* unknown_c_; void* unknown_10_; };
struct Struct_ov023_021dad8c_3 {
    short unknown_0_; unsigned short unknown_2_0_ : 4; unsigned short unknown_2_4_ : 12;
    unsigned int unknown_4_0_ : 7; unsigned int unknown_4_7_ : 4; unsigned int unknown_5_3_ : 12;
    unsigned int unknown_6_7_ : 1; unsigned int unknown_7_0_ : 2;
    unsigned int unknown_7_2_ : 1; unsigned int unknown_7_3_ : 1; unsigned int unknown_7_4_ : 1;
    unsigned int unknown_7_5_ : 3;
};
struct Struct_ov023_021dad8c_2 { Struct_ov023_021dad8c_3* unknown_0_; unsigned short unknown_4_; unsigned short unknown_6_; };
extern "C" int func_020de574(Struct_020de5b0*, Struct_ov000_021700dc*);
extern "C" int func_020de5b0(Struct_020de5b0*);

// USA: func_ov023_021dad8c
extern "C" ARM void func_ov023_021dad8c(Struct_ov023_021dad8c_2* arg0, SafeAllocator* arg1, Struct_ov005_02154da8* arg2, void* arg3) {
    if (!arg1 || !arg2 || !arg3) return;
    arg0->unknown_4_ = 0;
    arg0->unknown_6_ = 0;
    Struct_020de5b0 var0;
    memset(&var0, 0, sizeof(var0));
    int var1 = 0;
    if (arg2) {
        memcpy(&var0, arg2, sizeof(Struct_ov005_02154da8));
        var0.unknown_c_ = (Struct_ov000_021700dc*)(arg2 + 1);
        unsigned short var2 = var0.unknown_0_.unknown_2_0_;
        unsigned short var3 = var0.unknown_0_.unknown_0_;
        int var4 = var0.unknown_0_.unknown_3_7_ ? 88 : 0;
        int var5 = var4 + var2 * 32 + var3 * 32;
        var0.unknown_10_ = (char*)arg2 + (var5 + 12);
        if (var0.unknown_0_.unknown_b_7_) var1 = 1;
        else {
            Struct_ov000_021700dc* var6 = var0.unknown_c_;
            int var7;
            unsigned short var8;
            if (var6 && (var8 = var0.unknown_0_.unknown_0_) && (unsigned int)func_020de574) {
                for (var7 = 0; var7 < var8; ++var7, ++var6) func_020de574(&var0, var6);
            }
            var0.unknown_0_.unknown_b_7_ = 1;
            arg2->unknown_b_7_ = 1;
        }
    }
    if (!var1) func_020de5b0(&var0);
    int var9 = var0.unknown_0_.unknown_0_;
    {
        Struct_ov000_021700dc* var10 = var0.unknown_c_;
        for (int var11 = 0; var11 < var9; ++var11, ++var10) {
            int var12 = var10->unknown_8_0_ <= 7 ? 1 : 0;
            if (var12) ++arg0->unknown_4_;
        }
    }
    Struct_ov023_021dad8c_3* var13 = (Struct_ov023_021dad8c_3*)arg1->Allocate(arg0->unknown_4_ * sizeof(Struct_ov023_021dad8c_3));
    arg0->unknown_0_ = var13;
    if (!var13) return;
    Struct_ov000_021700dc* var14 = var0.unknown_c_;
    for (int var15 = 0; var15 < var9; ++var15, ++var14) {
        int var16 = var14->unknown_8_0_ <= 7 ? 1 : 0;
        Struct_ov023_021dad8c* var17;
        if (var16 && (var17 = var14->unknown_0_) != 0) {
            ++arg0->unknown_6_;
            var13->unknown_0_ = var14->unknown_18_;
            var13->unknown_2_0_ = (unsigned short)var14->unknown_8_0_;
            var13->unknown_4_0_ = var17->unknown_0_0_;
            var13->unknown_4_7_ = var17->unknown_0_7_;
            var13->unknown_5_3_ = var17->unknown_4_0_;
            var13->unknown_6_7_ = var17->unknown_3_5_;
            var13->unknown_7_0_ = var17->unknown_3_6_;
            var13->unknown_7_2_ = var17->unknown_7_3_;
            var13->unknown_7_3_ = var17->unknown_7_4_;
            var13->unknown_7_4_ = var17->unknown_7_5_;
            ++var13;
        }
    }
}
