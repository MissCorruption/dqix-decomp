#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Input/Input.h"
#include "Resource/GameResources.h"

struct Struct_02109bf4_5;
struct Struct_0205d0e0_2;
struct Struct_0205d6a0;
struct Struct_0205def8;
struct Struct_ov000_02179cdc_2 {
    unsigned char unknown_0_[0xc4];
    unsigned char unknown_c4_;
};
struct Struct_ov000_0217e870 {
    unsigned char unknown_0_[0x10];
    signed char unknown_10_[8];
    signed char unknown_18_;
    unsigned char unknown_19_[0xb];
    unsigned char unknown_24_;
#if defined(jpn)
    unsigned char unknown_25_[0xa2];
#else
    unsigned char unknown1_25_[0x62];
#endif
    unsigned char unknown_87_;
};
struct Struct_ov004_021707e8 {
    unsigned char unknown_0_[0x70];
    signed char unknown_70_[4];
    unsigned char unknown_74_[0x108];
    int unknown_17c_;
    unsigned char unknown_180_[8];
#if defined(jpn)
    unsigned char unknown_188_[0x1f98 - 0x188];
#else
    unsigned char unknown_188_[0x1bd8];
#endif
    signed char unknown_1d60_[8];
    signed char unknown_1d68_;
    unsigned char unknown_1d69_[2];
    signed char unknown_1d6b_;
    unsigned char unknown_1d6c_[3];
    unsigned char unknown_1d6f_;
    unsigned char unknown_1d70_[0xa];
    unsigned char unknown_1d7a_;
};
struct Struct_ov000_0217e870_2 {
    unsigned char unknown_0_[0xf7c];
    unsigned char unknown_f7c_;
};
extern Struct_02109bf4_5 data_02109bf4;
extern "C" int func_0209ca2c(void*);
extern "C" void func_0209c73c(Struct_02109bf4_5*);
extern "C" int func_0205d97c(void*);
extern "C" int func_ov000_021815c8(void*);
extern "C" int* func_0202ae18();
extern "C" int func_0202b7d8(int*);
extern "C" void func_ov017_021c3fb4(int, int);
extern "C" void func_ov017_0218f5a4(GameResources*, int, int, int, int);
extern "C" Struct_ov000_0217e870* func_ov000_02161318(Struct_ov004_021707e8*, int);
extern "C" int func_ov000_021719f8(int*);
extern "C" void func_ov000_02171c04(Struct_ov000_0217e870*);
extern "C" Struct_ov000_02179cdc_2* func_0205d888(Struct_0205d0e0_2*);
extern "C" void func_0205d6a0(Struct_0205d6a0*, int);
extern "C" void func_ov000_0217c638(Struct_ov004_021707e8*, int, int);
extern "C" void func_0205def8(Struct_0205def8*, int, int);

// USA: func_ov000_0217eb28
extern "C" ARM void func_ov000_0217eb28(Struct_ov004_021707e8* arg0, int arg1, int arg2) {
    if (arg0->unknown_1d7a_) {
        if (func_0209ca2c(&data_02109bf4)) return;
        func_0209c73c(&data_02109bf4);
    }
    int var0 = g_keyManager.TestKeysPressed(0x601);
    var0 |= g_keyManager.TestKeysPressed(0x802);
    var0 |= func_0205d97c(arg0->unknown_188_) == 2;
    if (!var0) return;
    if (arg0->unknown_1d60_[arg0->unknown_1d68_] == 0x20) {
        arg0->unknown_1d7a_ = 0;
        while (arg0->unknown_1d60_[arg0->unknown_1d68_] != 2) {
            arg0->unknown_1d60_[arg0->unknown_1d68_] = 0;
            arg0->unknown_1d68_--;
        }
        int var1 = func_ov000_021815c8(arg0);
        if (func_0202b7d8(func_0202ae18()))
            func_ov017_021c3fb4(var1, 1);
        GameResources* var2 = GetGameResources();
        BackgroundLoader::GetInstance();
        func_ov017_0218f5a4(var2, var1, 1, 0, 0);
        Struct_ov000_0217e870* var3 = func_ov000_02161318(arg0, var1);
        if (!var3) return;
        if (func_ov000_021719f8((int*)var3)) {
            var3->unknown_10_[var3->unknown_18_] = 0x64;
            var3->unknown_24_ &= ~4;
        }
        func_ov000_02171c04(var3);
        Struct_ov000_02179cdc_2* var4 = func_0205d888((Struct_0205d0e0_2*)arg0->unknown_188_);
        while (var4) {
            if (var4->unknown_c4_ == 2) break;
            func_0205d6a0((Struct_0205d6a0*)arg0->unknown_188_, 0);
            var4 = func_0205d888((Struct_0205d0e0_2*)arg0->unknown_188_);
        }
        unsigned char var5 = ((Struct_ov000_0217e870_2*)func_02010828(GameState::GetInstance()))->unknown_f7c_;
        for (unsigned char var6 = 0; var6 < var5; var6++) {
            int var7 = arg0->unknown_70_[var6];
            Struct_ov000_0217e870* var8 = func_ov000_02161318(arg0, var7);
            if (var8 && !func_ov000_021719f8((int*)var8) && var8->unknown_87_) {
                arg0->unknown_17c_ = var7;
                break;
            }
        }
        func_ov000_0217c638(arg0, arg1, arg2);
        func_0205def8((Struct_0205def8*)arg0->unknown_188_, 1, 1);
        func_0205def8((Struct_0205def8*)arg0->unknown_188_, 1, 2);
        func_0205def8((Struct_0205def8*)arg0->unknown_188_, 1, 5);
        arg0->unknown_1d6b_ = -1;
        arg0->unknown_1d6f_ = 0;
    } else {
        func_0205d6a0((Struct_0205d6a0*)arg0->unknown_188_, 0);
        arg0->unknown_1d60_[arg0->unknown_1d68_] = 0;
        arg0->unknown_1d68_--;
        func_ov000_0217c638(arg0, arg1, arg2);
    }
}
