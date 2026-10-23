#include <globaldefs.h>

#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#include "World/ZoneLootableRecord.h"
#include <GameState/GameState.h>
#include "Resource/GameResources.h"
#include "Input/Input.h"

struct Struct_02108760;
struct Struct_02012fa4;

struct Struct_ov005_02153ba4_2 {
    char unknown_0_[LOW_REGION(0x4f8, 0x4fc)];
    int unknown_4fc_;
    char unknown_500_[LOW_REGION(0x56c - 0x4fc, 0x634 - 0x500)];
    unsigned short unknown_634_;
};

struct Struct_ov005_02153ba4 {
    short unknown_0_;
    signed char unknown_2_;
    unsigned char unknown_3_;
    void* unknown_4_;
    void* unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    short unknown_18_;
};

struct Struct_ov005_02153954 {
    char unknown_0_[LOW_REGION(0x2d08, 0x2d90)];
    Struct_ov005_02153ba4 unknown_2d90_[24];
    char unknown_3030_[0x3cf0 - 0x3030];
    char unknown_3cf0_[0x88];
    short unknown_3d78_;
    char unknown_3d7a_[0x3db8 - 0x3d7a];
    unsigned char unknown_3db8_;
    unsigned char unknown_3db9_;
    unsigned char unknown_3dba_;
    signed char unknown_3dbb_;
    unsigned char unknown_3dbc_;
    signed char unknown_3dbd_;
    unsigned char unknown_3dbe_;
    signed char unknown_3dbf_;
    signed char unknown_3dc0_;
    char unknown_3dc1_[0x3dcc - 0x3dc1];
    unsigned int unknown_3dcc_;
    char unknown_3dd0_[0x3e05 - 0x3dd0];
    signed char unknown_3e05_;
    signed char unknown_3e06_;
    signed char unknown_3e07_;
    short unknown_3e08_;
    short unknown_3e0a_;
};

extern int data_02108760;

extern "C" Struct_ov005_02153ba4_2* func_ov017_021a193c(int* arg0);
extern "C" void func_0205eaa0(Struct_02108760* arg0, int arg1, int arg2);
extern "C" void func_ov005_0215792c(Struct_ov005_02153954* arg0, unsigned char arg1);
extern "C" void func_ov005_02156658(Struct_ov005_02153954* arg0, int arg1, int arg2);
extern "C" void func_ov005_021567ac(Struct_ov005_02153954* arg0, int arg1, int arg2);
extern "C" void func_ov005_0215690c(Struct_ov005_02153954* arg0, int arg1, int arg2);
extern "C" void func_ov005_021579ec(Struct_ov005_02153954* arg0, unsigned int arg1, unsigned char arg2);
extern "C" void func_02047230(Struct_02012fa4* arg0);
extern "C" void func_ov005_02156e1c(Struct_ov005_02153954* arg0, int arg1, int arg2);
extern "C" void func_ov005_02156ecc(Struct_ov005_02153954* arg0, int arg1, int arg2);

// USA: func_ov005_021562b8
extern "C" ARM void func_ov005_021562b8(Struct_ov005_02153954* arg0) {
    int var0;
    int var1;
    g_touchInput.GetTouchPoint(&var0, &var1);
    int var2 = GameState::GetInstance()->GetTickCount();
    if (var2 == 0)
        var2 = 1;
    if (g_touchInput.pressed_) {
        if (var0 == 0 || var1 == 0)
            return;
        Struct_ov005_02153ba4_2* var3 = func_ov017_021a193c((int*)GetGameResources()->unknown_ptr_array_36fc[3]);
        if (!(arg0->unknown_3dcc_ & 0x400) && (var3->unknown_634_ & 0x800)) {
            func_0205eaa0((Struct_02108760*)&data_02108760, 0x1b, 0);
            func_ov005_0215792c(arg0, 1);
            return;
        }
        func_ov005_02156658(arg0, var0, var1);
        if (!(arg0->unknown_3dcc_ & 0x400) && var0 >= 0x80 && var1 >= 0xb0) {
            func_ov005_0215792c(arg0, 7);
            arg0->unknown_3dcc_ |= 0x80000;
            return;
        }
        if (arg0->unknown_3dc0_ != -1)
            return;
        func_ov005_021567ac(arg0, var0, var1);
        func_ov005_0215690c(arg0, var0, var1);
        if (var0 > 0x83 && var1 > 0x15 && var1 < 0x2e) {
            func_ov005_0215792c(arg0, 3);
            arg0->unknown_3dbb_ = arg0->unknown_3dbc_;
            func_ov005_021579ec(arg0, arg0->unknown_3db8_, 0);
        }
        if (arg0->unknown_3d78_ < 0)
            return;
        if (arg0->unknown_3e07_ == arg0->unknown_3d78_) {
            if (arg0->unknown_3e06_ > 0) {
                if (arg0->unknown_2d90_[arg0->unknown_3dbb_].unknown_0_ >= 0) {
                    func_ov005_0215792c(arg0, 5);
                    func_0205eaa0((Struct_02108760*)&data_02108760, 1, 0);
                    var3->unknown_634_ &= ~1;
                    var3->unknown_634_ &= ~0x80;
                }
                func_02047230((Struct_02012fa4*)arg0->unknown_3cf0_);
                arg0->unknown_3d78_ = -1;
                arg0->unknown_3dc0_ = -1;
                arg0->unknown_3e05_ = 0;
                arg0->unknown_3e07_ = -2;
                arg0->unknown_3e06_ = 0;
                return;
            }
            arg0->unknown_3e07_ = -2;
            arg0->unknown_3e06_ = 0;
        }
        arg0->unknown_3e05_ = 0;
        arg0->unknown_3e08_ = var0;
        arg0->unknown_3e0a_ = var1;
    } else if (g_touchInput.isRepeatValid_ != 0 && g_touchInput.currentReading_.isHeld != 0) {
        func_ov005_02156e1c(arg0, var0, var1);
        if (arg0->unknown_3d78_ >= 0)
            arg0->unknown_3e05_ += var2;
    } else if (g_touchInput.released_ != 0) {
        if (arg0->unknown_3d78_ >= 0) {
            int var4 = arg0->unknown_3e08_ - (short)var0;
            int var5 = arg0->unknown_3e0a_ - (short)var1;
            int var6 = 0;
            if (var4 * var4 + var5 * var5 >= 25)
                var6 = 1;
            if (arg0->unknown_3e05_ <= 20 && var6 == 0) {
                arg0->unknown_3e06_ = 20;
                arg0->unknown_3e07_ = arg0->unknown_3d78_;
            } else {
                arg0->unknown_3e05_ = 0;
                arg0->unknown_3e07_ = -2;
                arg0->unknown_3e06_ = 0;
            }
            arg0->unknown_3e08_ = -1;
            arg0->unknown_3e0a_ = -1;
        }
        func_ov005_02156ecc(arg0, var0, var1);
        func_02047230((Struct_02012fa4*)arg0->unknown_3cf0_);
        arg0->unknown_3d78_ = -1;
        arg0->unknown_3dc0_ = -1;
    }
}
