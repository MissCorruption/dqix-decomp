#include <globaldefs.h>
#include "GameState/GameState.h"

#define REG_MATRIX_PUSH (*(volatile unsigned int*)0x04000444)
#define REG_MATRIX_POP (*(volatile unsigned int*)0x04000448)
#define REG_MATRIX_SCALE (*(volatile unsigned int*)0x04000470)
#define REG_POLYGON_ATTR (*(volatile unsigned int*)0x04000500)
#define REG_TEXTURE_PARAM (*(volatile unsigned int*)0x04000504)

struct Struct_02000c9c_69 { unsigned char unknown_0_[4]; unsigned short unknown_4_; };
struct Struct_ov023_021e3fc0_3 {
    unsigned char unknown_0_[0x16c];
    short unknown_16c_[0x198];
    unsigned char unknown_49c_0_ : 1;
    unsigned char unknown_49c_1_ : 7;
#if defined(jpn)
    unsigned char unknown_49d_[0x8b8 - 0x49d];
#else
    unsigned char unknown1_49d_[0x4b3];
#endif

    int unknown_950_;
};
struct Struct_ov023_021e3fc0_4 {
    unsigned char unknown_0_[0x130];
    Struct_02000c9c_69* unknown_130_;
#if defined(jpn)
    unsigned char unknown_134_[0x10];
#else
    unsigned char unknown1_134_[0x1c];
#endif

    Struct_ov023_021e3fc0_3* unknown_150_;
    int inline_ov023_021e3fc0_2() const { return unknown_130_->unknown_4_; }
    Struct_ov023_021e3fc0_3* inline_ov023_021e3fc0() const { return unknown_150_; }
};
struct Struct_ov023_021e3fc0 {
    unsigned char unknown_0_[0x14];
    int unknown_14_;
    int unknown_18_;
    unsigned char unknown_1c_[6];
    unsigned char unknown_22_;
    unsigned char unknown_23_[3];
    unsigned char unknown_26_;
    unsigned char unknown_27_;
};
struct Struct_ov023_021e3fc0_2 {
    unsigned char unknown_0_[0x258];
    Struct_ov023_021e3fc0 unknown_258_;
};
#if defined(jpn)
struct Struct_02000c9c_66 { char unknown_0_[0xc]; };
#else
struct Struct_02000c9c_66 { char unknown_0_[0x20]; };
#endif

#if defined(jpn)
struct Struct_02000c9c_67 { char unknown_0_[6]; };
#else
struct Struct_02000c9c_67 { char unknown_0_[0x14]; };
#endif

#if defined(jpn)
struct Struct_02000c9c_68 { char unknown_0_[4]; };
#else
struct Struct_02000c9c_68 { char unknown_0_[0x10]; };
#endif

struct Struct_ov003_02165888 {
    void* unknown_0_;
    unsigned char unknown_4_[0xc4];
    void* unknown_c8_;
    Struct_ov023_021e3fc0_2* unknown_cc_;
#if defined(jpn)
    unsigned char unknown_d0_[0x428];
#else
    unsigned char unknown1_d0_[0x42c];
#endif

    int unknown_4fc_;
    Struct_02000c9c_66 unknown_500_[4];
    int unknown_580_[4];
    Struct_02000c9c_67 unknown_590_[4];
#if defined(jpn)
    char unknown_554_[4];
#else
    char unknown_5e0_[0x10];
#endif

    Struct_02000c9c_68 unknown_5f0_[4];
    unsigned char unknown_630_[0x10];
    char* unknown_640_[2];
};
struct Struct_02000c9c_8;
extern "C" void* func_020421a0();
extern "C" void func_02045f3c(void*, void*, int, int, int, int, int, int, int, int);
#if defined(jpn)
extern "C" void func_02046c78(void*, void*, int, int, int, int, int, int);
#endif
extern "C" int func_020420e8(const char*, int);
extern "C" void func_0205ac40(void*, void*);
extern "C" unsigned char func_ov023_021e4250(char*);
extern "C" char* func_020e51cc(int);
extern "C" unsigned char func_0200fb08(Struct_02000c9c_8*);
extern "C" void func_ov005_02155258(void*, int, int, int, int);

// USA: func_ov023_021e3fc0
extern "C" ARM void func_ov023_021e3fc0(Struct_ov003_02165888* arg0) {
    int var0;
    GameState* var1 = GameState::GetInstance();
    void* var2 = func_020421a0();
    int var3 = 0x7fff;
    Struct_ov023_021e3fc0_4* var4 = (Struct_ov023_021e3fc0_4*)func_0200ff1c(var1, arg0->unknown_4fc_);
    if (var4->inline_ov023_021e3fc0_2() <= 0) var3 = 0x1f;
    REG_MATRIX_PUSH = 0;
    REG_POLYGON_ATTR = 1;
    REG_MATRIX_SCALE = 0;
    REG_MATRIX_SCALE = 0;
    REG_MATRIX_SCALE = 0xffc01000;
#if defined(jpn)
    func_02046c78(var2, &arg0->unknown_500_[arg0->unknown_4fc_], arg0->unknown_580_[arg0->unknown_4fc_], 0xa3, var3, 10, 0, 0);
    short var5 = 0x2f;
    if (func_ov023_021e4250((char*)var4)) var5 += 7;
    if (var4->inline_ov023_021e3fc0_2() <= 0) var5 = 0x14;
    var5 = ((0x3b - var5) >> 1) + 0x40;
    func_02046c78(var2, &arg0->unknown_590_[arg0->unknown_4fc_], var5, 0xa3, var3, 10, 0, 0);
    if (var4->inline_ov023_021e3fc0_2() > 0) {
        var5 += 0x14;
        if (func_ov023_021e4250((char*)var4)) {
            unsigned short var6 = 0xf0a;
            short var7 = 0xa4;
            if (func_ov023_021e4250((char*)var4) >= 10) {
                var7--;
                var6 = 0x31f;
            }
            func_02046c78(var2, &arg0->unknown_5f0_[arg0->unknown_4fc_], var5, var7, var6, 10, 0, 0);
            var5 += 7;
        }
        var5 += 2;
        func_02046c78(var2, arg0->unknown_554_, var5, 0xa3, var3, 10, 0, 0);
        if (arg0->unknown_0_) {
            Struct_ov023_021e3fc0_3* var8 = var4->inline_ov023_021e3fc0();
            var0 = var3;
            var3 = var8->unknown_16c_[var8->unknown_950_];
            func_ov005_02155258(arg0->unknown_0_, var3, (short)(var5 + 9), 0xa5, var0);
        }
    }

#else
    func_02045f3c(var2, &arg0->unknown_500_[arg0->unknown_4fc_], arg0->unknown_580_[arg0->unknown_4fc_], 0xa1, var3, 10, 0, 0, 0, 0x11);
    if (var4->inline_ov023_021e3fc0_2() <= 0) {
        short var9 = func_020420e8(arg0->unknown_640_[var4->unknown_150_->unknown_49c_0_], 0);
        short var10 = ((0x3b - var9) >> 1) + 0x40;
        func_02045f3c(var2, &arg0->unknown_590_[arg0->unknown_4fc_], var10, 0xa1, var3, 10, 0, 0, 0, 0x11);
    } else {
        Struct_ov023_021e3fc0_2* var11 = arg0->unknown_cc_;
        var11->unknown_258_.unknown_14_ = 0x44000;
        var11->unknown_258_.unknown_18_ = 0xa2000;
        var11->unknown_258_.unknown_22_ = 0x70;
        var11->unknown_258_.unknown_26_ = 2;
        func_0205ac40(arg0->unknown_c8_, &var11->unknown_258_);
        if (func_ov023_021e4250((char*)var4)) {
            unsigned short var12 = 0xf0a;
            if (func_ov023_021e4250((char*)var4) >= 10)
                var12 = 0x31f;
            func_02045f3c(var2, &arg0->unknown_5f0_[arg0->unknown_4fc_], 0x50, 0xa1, var12, 10, 0, 0, 0, 0x11);
        }
        func_02045f3c(var2, arg0->unknown_5e0_, 0x5c, 0xa1, var3, 10, 0, 0, 0, 0x11);
        short var13 = func_020420e8(func_020e51cc(0x3f3), 0) + 0x5e;
        if (func_0200fb08((Struct_02000c9c_8*)var1) == 1) var13 += 2;
        Struct_ov023_021e3fc0_3* var14 = var4->inline_ov023_021e3fc0();
        var0 = var3;
        var3 = var14->unknown_16c_[var14->unknown_950_];
        func_ov005_02155258(arg0->unknown_0_, var3, var13, 0xa1, var0);
    }

#endif
    REG_TEXTURE_PARAM = 0;
    REG_MATRIX_POP = 1;
}
