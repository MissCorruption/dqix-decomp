#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

struct Struct_ov024_021fb490 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_0_ : 8;
    unsigned int unknown_9_0_ : 2;
    unsigned int unknown_9_2_ : 4;
    unsigned int unknown_9_6_ : 8;
    unsigned int unknown_a_6_ : 10;
    unsigned int unknown_c_;
    unsigned int unknown_10_;
    unsigned int unknown_14_0_ : 28;
    unsigned int unknown_17_4_ : 4;
    unsigned int unknown_18_;
    unsigned int unknown_1c_0_ : 14;
    unsigned int unknown_1d_6_ : 5;
    unsigned int unknown_1e_3_ : 13;
};
struct Struct_ov024_021fb490_7 {
    unsigned char unknown_0_0_ : 6;
    unsigned char unknown_0_6_ : 1;
    unsigned char unknown_0_7_ : 1;
};
struct Struct_ov024_021fb490_8 {
    float unknown_0_;
    unsigned char unknown_4_, unknown_5_, unknown_6_, unknown_7_, unknown_8_;
    Struct_ov024_021fb490_7 unknown_9_;
    unsigned char unknown_a_[2];
};
struct Struct_ov024_021f6a1c {
    Struct_ov024_021fb490_8 unknown_0_[16];
    int unknown_c0_;
    float unknown_c4_;
    Struct_ov024_021f6a1c() { memset(this, 0, sizeof(*this)); }
};
struct Struct_ov024_021fb490_2 {
    unsigned char unknown_0_[0xa];
    unsigned short unknown_a_0_ : 12;
    unsigned short unknown_b_4_ : 1;
};
struct Struct_ov024_021fb490_3 {
    unsigned char unknown_0_[4];
    short unknown_4_;
    unsigned char unknown_6_[0x138 - 6];
    unsigned int* unknown_138_;
    unsigned char unknown_13c_[0x144 - 0x13c];
    struct Struct_ov024_021fb490_2* unknown_144_;
    unsigned char unknown_148_[0x17c - 0x148];
    unsigned char unknown_17c_;
    unsigned char inline_ov024_021fb490() const { return unknown_17c_; }
};
struct Struct_ov024_021fb490_4 {
    unsigned char unknown_0_[0x3ec];
    int unknown_3ec_;
    Struct_ov024_021fb490* unknown_3f0_;
    unsigned char unknown_3f4_[5];
    unsigned char unknown_3f9_;
    unsigned char unknown_3fa_[2];
    Struct_ov024_021f6a1c* unknown_3fc_;
    Struct_ov024_021fb490_8 unknown_400_;
    Struct_ov024_021fb490_3* unknown_40c_;
    int unknown_410_;
};
struct Struct_ov024_021fb490_5 {
    unsigned char unknown_0_[8];
    unsigned char* unknown_8_;
    unsigned char unknown_c_[0x2c - 0xc];
    unsigned char unknown_2c_;
    unsigned char unknown_2d_[0x34 - 0x2d];
    unsigned char unknown_34_;
    unsigned char unknown_35_[0x7c - 0x35];
    Struct_ov024_021fb490_3* unknown_7c_[8];
    int unknown_9c_;
    unsigned char unknown_a0_[0x25c - 0xa0];
    Struct_ov024_021fb490_4 unknown_25c_;
};
struct Struct_ov024_021fb490_6 { unsigned int unknown_0_0_ : 1; unsigned int unknown_0_1_ : 1; };
struct Struct_ov024_021da670_6;
struct Struct_ov024_021dd028_5;

extern "C" int func_02053c6c(unsigned char*);
extern "C" void* func_020797dc();
extern "C" void* func_02079ee0(void*, int);
extern "C" float func_02074948(int);
extern "C" float _fmul(float, float);
extern "C" int _fgeq(float, float);
extern "C" int func_ov024_021da998(Struct_ov024_021da670_6*);
extern "C" int func_ov024_021dd260(Struct_ov024_021dd028_5*);
extern "C" void func_ov024_021f6a1c(Struct_ov024_021f6a1c*, void*);
extern "C" void func_ov024_021f8938(void*, float*, float*, int, void*, void*);
extern "C" void func_ov024_021fa7ec(void*, float*, float*, float*, int*, float, float, void*, void*, int);
extern "C" void func_ov024_021f8d80(void*, int*, void*, void*, int, float*, float*, int, void*);
extern "C" void func_ov024_021f6a4c(void*, void*);
extern "C" void func_ov024_021fd858(void*);
extern "C" void func_ov024_021f9874(void*, void*, int, int);

struct Struct_ov024_021ff002 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
};
extern const Struct_ov024_021ff002 data_ov024_021ff002[];

// USA: func_ov024_021fb490
extern "C" ARM void func_ov024_021fb490(Struct_ov024_021fb490_5* arg0) {
#if defined(jpn)
    enum { Enum_ov024_021fb490_336 = 0x144 };
#else
    enum { Enum_ov024_021fb490_336 = 0x150 };
#endif
    float var0[8];
    float var1[8];
    float var2[8];
    Struct_ov024_021fb490* var3;
    void* var4;
    int var5;
    void* var6;
    unsigned char* var7;
    Struct_ov024_021fb490_3** var8;
    var7 = arg0->unknown_8_;
    func_02053c6c(arg0->unknown_8_);
    var4 = func_020797dc();
    var3 = arg0->unknown_25c_.unknown_3f0_;
    int var9 = arg0->unknown_25c_.unknown_3ec_;
    if (var3->unknown_9_0_ == 2) return;
    float var10;
    float var11;
    int var12;
    var10 = 0;
    var11 = 0;
    var12 = -1;
    func_ov024_021f8938(arg0, &var10, &var11, var9, var3, var7);
    var8 = arg0->unknown_7c_;
    var5 = arg0->unknown_9c_;
    var6 = func_02079ee0(var4, var3->unknown_9_6_);
    for (int var13 = 0; var13 < var5; var13++) {
        var1[var13] = 0;
        var2[var13] = 0;
        var0[var13] = 0;
        float* var14 = &var0[var13];
        float* var15 = &var1[var13];
        float* var16 = &var2[var13];
        Struct_ov024_021fb490_3* var17 = var8[var13];
        if (!var17->unknown_144_ || !var17->unknown_144_->unknown_b_4_ || (var3->unknown_10_ & 0x1000000)) {
            func_ov024_021fa7ec(arg0, var14, var15, var16, &var12, var10, var11, var6, var17, var13);
        }
    }
    int var18 = var3->unknown_17_4_;
    if (var18 == 5) {
        char* var19 = (char*)(*(int**)(var7 + Enum_ov024_021fb490_336)) + 0x2f4;
        if (var19) {
            Struct_ov024_021fb490_6* var20 = (Struct_ov024_021fb490_6*)var19;
            if (var20->unknown_0_1_) var18 = 3;
            else if (var20->unknown_0_0_) var18 = 4;
            else var18 = 2;
        }
    }
    if (var18 != 2 && var18 != 4 && var18 != 3) return;
    unsigned int var21 = var3->unknown_1d_6_;
    short var22;
    short var23;
    unsigned char var24;
    int var25;
    if (var21 <= 11) {
        var22 = data_ov024_021ff002[var21].unknown_0_;
        var23 = data_ov024_021ff002[var21].unknown_1_;
        var25 = var22 * var23;
        var24 = data_ov024_021ff002[var21].unknown_2_;
    } else {
        return;
    }
    int var26 = -1;
    if (var18 == 2 && var22 == 1) {
        func_ov024_021f8d80(arg0, &var26, var3, arg0->unknown_7c_, arg0->unknown_9c_, var2, var1, var25, var7);
    }
    Struct_ov024_021f6a1c var27;
    memset(&var27, 0, sizeof(var27));
    int var28 = 0;
    int var29 = 0;
    int var30 = 0;
    int var31 = 0;
    unsigned char var32 = var25;
    for (; var31 < arg0->unknown_9c_; var31++) {
        arg0->unknown_2c_ = 0;
        if (var26 >= 0 && var26 != var31) continue;
        if (var12 == var31) arg0->unknown_34_ = 1;
        var28++;
        Struct_ov024_021fb490_3* var33 = var8[var31];
        if (var3->unknown_10_ & 0x400) {
            if (var33->unknown_138_[0x14 / 4] & 0x200) var29 = 1;
        }
        if (var18 != 2 && (arg0->unknown_25c_.unknown_3f0_->unknown_10_ & 0x20000)) {
            var2[var31] = _fmul(var2[var31], func_02074948((signed char)var30));
            var30++;
        }
        Struct_ov024_021fb490_8 var34;
        var34.unknown_5_ = 1;
        var34.unknown_7_ = 100;
        var34.unknown_8_ = 0;
        var34.unknown_0_ = var2[var31];
        var34.unknown_6_ = var31;
        var34.unknown_9_.unknown_0_0_ = var32;
        var34.unknown_9_.unknown_0_6_ = var24;
        func_ov024_021f6a1c(&var27, &var34);
        if (var0[var31] >= 0.1f && !func_ov024_021da998((Struct_ov024_021da670_6*)var7) &&
            !func_ov024_021dd260((Struct_ov024_021dd028_5*)var7)) {
            arg0->unknown_25c_.unknown_3fc_ = &var27;
            func_ov024_021f6a4c(&arg0->unknown_25c_.unknown_400_, &var34);
            arg0->unknown_25c_.unknown_40c_ = var33;
            arg0->unknown_25c_.unknown_410_ = var31;
            func_ov024_021fd858(arg0);
        }
        int var35 = 0;
        if (var31 == arg0->unknown_9c_ - 1) var35 = 1;
        else if (var18 == 2) var35 = 1;
        else if (var18 == 4) {
            if (var33->inline_ov024_021fb490() != var8[var31 + 1]->inline_ov024_021fb490()) var35 = 1;
        }
        if (!var35) continue;
        if (var28 >= 2) {
            if (var24) var29 = 1;
        }
        if (var28 <= 1) var24 = 0;
        if (!var29) {
            int var36 = (unsigned char)var33->unknown_4_;
            int var37 = var33->inline_ov024_021fb490();
            if (var18 == 4) var36 = 0xff;
            else if (var18 == 3) { var36 = 0xff; var37 = var36; }
            func_ov024_021f9874(arg0, &var27, var37, var36);
        }
        memset(&var27, 0, sizeof(var27));
        var28 = 0;
        var29 = 0;
        var30 = 0;
    }
}
