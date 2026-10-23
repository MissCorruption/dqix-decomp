#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0201099c_16;
struct Struct_02086e50;
struct Struct_ov003_02167b34_2;

extern "C" ARM void func_ov003_02167e28(void* arg0, void* arg1, int arg2, unsigned char arg3,
                                        int arg4, int arg5, int arg6);
extern "C" ARM void func_ov003_02167fa4(void* arg0, int arg1, unsigned char* arg2);
extern "C" void func_ov003_02168088(struct Struct_ov003_02167b34_2* arg0, int* arg1);
extern "C" int func_020813ec(void* arg0, int arg1);
extern "C" void func_02042764(unsigned char* arg0, char* arg1, int arg2);
extern "C" void* func_02086e50(Struct_02086e50* arg0, int arg1);
extern "C" int func_020865b0(Struct_0201099c_16* arg0);

struct Struct_ov003_02167ca8_3 {
    unsigned char unknown_0_[2];
    unsigned char unknown_2_[13];
    unsigned char unknown_f_[13];
    int unknown_1c_[13];
    unsigned char unknown_50_[0xf6 - 0x50];
    unsigned char unknown_f6_[0x14c - 0xf6];
    struct { unsigned int unknown_0_0_ : 10; unsigned int unknown_1_2_ : 10; unsigned int unknown_2_4_ : 10; } unknown_14c_;
    struct { unsigned int unknown_0_0_ : 10; unsigned int unknown_1_2_ : 10; unsigned int unknown_2_4_ : 10; } unknown_150_;
    struct { unsigned int unknown_0_0_ : 10; } unknown_154_;
    struct { unsigned int unknown_0_0_ : 10; unsigned int unknown_1_2_ : 10; unsigned int unknown_2_4_ : 10; } unknown_158_;
    struct { unsigned int unknown_0_0_ : 10; unsigned int unknown_1_2_ : 10; } unknown_15c_;
    unsigned char unknown_160_[0x174 - 0x160];
    unsigned char unknown_174_0_ : 1;
};

struct Struct_ov003_02167ca8 {
    void* unknown_0_[4];
    void* unknown_10_;
    char unknown_14_[0x2e - 0x14];
    char unknown_2e_[0x30];
    char unknown_5e_[0x76 - 0x5e];
    signed char unknown_76_;
};

// USA: func_ov003_02167ca8
#if defined(jpn)
struct Struct_ov003_02167ca8_2 {
    void* unknown_0_[4];
    void* unknown_10_;
    char unknown_14_[0x46 - 0x14];
    signed char unknown_46_;
};

extern "C" ARM void func_ov003_02167ca8(Struct_ov003_02167ca8_2* arg0) {
    Struct_ov003_02167ca8_3* var0 = (Struct_ov003_02167ca8_3*)func_02086e50(
        (Struct_02086e50*)func_02010828(GameState::GetInstance()),
        arg0->unknown_46_);
    if (var0 == 0) {
        return;
    }
    int var1 = func_020865b0((Struct_0201099c_16*)var0);
    func_ov003_02167e28(arg0, (unsigned char*)var0 + 0x140, var0->unknown_174_0_, (unsigned char)var1,
                        var0->unknown_f_[var1], var0->unknown_2_[var1], var0->unknown_1c_[var1]);
    func_ov003_02167fa4(arg0, func_020865b0((Struct_0201099c_16*)var0) & 0xff, var0->unknown_f6_);
    int var2[12];
    int var3 = var0->unknown_14c_.unknown_0_0_;
    int var4 = var3;
    var2[0] = var4;
    int var5 = var0->unknown_14c_.unknown_1_2_;
    int var6 = var5;
    var2[1] = var6;
    int var7 = var0->unknown_14c_.unknown_2_4_;
    int var8 = var7;
    var2[2] = var8;
    int var9 = var0->unknown_150_.unknown_0_0_;
    int var10 = var9;
    var2[3] = var10;
    int var11 = var0->unknown_150_.unknown_1_2_;
    var2[4] = var11;
    int var12 = var0->unknown_150_.unknown_2_4_;
    var2[5] = var12;
    int var13 = var0->unknown_154_.unknown_0_0_;
    var2[6] = var13;
    int var14 = var0->unknown_158_.unknown_0_0_;
    var2[7] = var14;
    int var15 = var0->unknown_158_.unknown_1_2_;
    var2[8] = var15;
    int var16 = var0->unknown_158_.unknown_2_4_;
    var2[9] = var16;
    int var17 = var0->unknown_15c_.unknown_0_0_;
    var2[10] = var17;
    int var18 = var0->unknown_15c_.unknown_1_2_;
    var2[11] = var18;
    func_ov003_02168088((Struct_ov003_02167b34_2*)arg0, var2);
    func_020813ec(arg0->unknown_10_, 0);
}
#else
extern "C" ARM void func_ov003_02167ca8(Struct_ov003_02167ca8* arg0) {
    Struct_ov003_02167ca8_3* var19 = (Struct_ov003_02167ca8_3*)func_02086e50(
        (Struct_02086e50*)func_02010828(GameState::GetInstance()),
        arg0->unknown_76_);
    if (var19 == 0) {
        return;
    }
    int var20 = func_020865b0((Struct_0201099c_16*)var19);
    memset(arg0->unknown_2e_, 0, 0x30);
    func_02042764((unsigned char*)var19 + 0x140, arg0->unknown_2e_, 1);
    func_ov003_02167e28(arg0, arg0->unknown_2e_, var19->unknown_174_0_, (unsigned char)var20,
                        var19->unknown_f_[var20], var19->unknown_2_[var20], var19->unknown_1c_[var20]);
    func_ov003_02167fa4(arg0, func_020865b0((Struct_0201099c_16*)var19) & 0xff, var19->unknown_f6_);
    int var21[12];
    int var22 = var19->unknown_14c_.unknown_0_0_;
    int var23 = var22;
    var21[0] = var23;
    int var24 = var19->unknown_14c_.unknown_1_2_;
    int var25 = var24;
    var21[1] = var25;
    int var26 = var19->unknown_14c_.unknown_2_4_;
    int var27 = var26;
    var21[2] = var27;
    int var28 = var19->unknown_150_.unknown_0_0_;
    int var29 = var28;
    var21[3] = var29;
    int var30 = var19->unknown_150_.unknown_1_2_;
    var21[4] = var30;
    int var31 = var19->unknown_150_.unknown_2_4_;
    var21[5] = var31;
    int var32 = var19->unknown_154_.unknown_0_0_;
    var21[6] = var32;
    int var33 = var19->unknown_158_.unknown_0_0_;
    var21[7] = var33;
    int var34 = var19->unknown_158_.unknown_1_2_;
    var21[8] = var34;
    int var35 = var19->unknown_158_.unknown_2_4_;
    var21[9] = var35;
    int var36 = var19->unknown_15c_.unknown_0_0_;
    var21[10] = var36;
    int var37 = var19->unknown_15c_.unknown_1_2_;
    var21[11] = var37;
    func_ov003_02168088((Struct_ov003_02167b34_2*)arg0, var21);
    func_020813ec(arg0->unknown_10_, 0);
}
#endif
