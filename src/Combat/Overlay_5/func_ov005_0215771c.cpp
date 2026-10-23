#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include <GameState/GameState.h>
#include "Input/Input.h"
#include "Resource/GameResources.h"

struct Struct_02108760;
struct Struct_0205bb84;

struct Struct_ov005_02153ba4_2 {
    char unknown_0_[R(0x4f8, 0x4fc)];
    int unknown_4fc_;
    char unknown_500_[R(0x56c - 0x4fc, 0x634 - 0x500)];
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
    char unknown_0_[R(0x196c, 0x19f4)];
    char unknown_19f4_[0x2d90 - 0x19f4];
    Struct_ov005_02153ba4 unknown_2d90_[24];
    char unknown_3030_[0x3db8 - 0x3030];
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
};

extern int data_02108760;

extern "C" void func_ov005_0215792c(Struct_ov005_02153954* arg0, unsigned char arg1);
extern "C" Struct_ov005_02153ba4_2* func_ov017_021a193c(int* arg0);
extern "C" void func_0205eaa0(Struct_02108760* arg0, int arg1, int arg2);
extern "C" int func_ov005_02157190(void* arg0);
extern "C" void func_ov005_021579ec(Struct_ov005_02153954* arg0, unsigned int arg1, unsigned char arg2);
extern "C" int func_0205bb84(Struct_0205bb84* arg0);
extern "C" void func_ov005_021555c0(Struct_ov005_02153954* arg0);
extern "C" int func_ov005_02157ae8(Struct_ov005_02153954* arg0, int arg1);
extern "C" int func_ov005_021585fc(Struct_ov005_02153954* arg0, int arg1);

// USA: func_ov005_0215771c
extern "C" ARM void func_ov005_0215771c(Struct_ov005_02153954* arg0) {
    signed char var0;
    int var1 = arg0->unknown_3dbb_ - 8;
    int var2;
    if (var1 < 4 && g_keyManager.TestKeysPressed(0x40)) {
        func_ov005_0215792c(arg0, 3);
        arg0->unknown_3dbb_ = arg0->unknown_3dbc_;
        func_ov005_021579ec(arg0, arg0->unknown_3db8_, func_0205bb84((Struct_0205bb84*)arg0->unknown_19f4_));
        return;
    }
    int var3 = var1 % 4;
    int var4 = 0;
    if (var3 == 0) {
        if (g_keyManager.TestKeysPressed(0x20)) {
            var4 = func_ov005_021585fc(arg0, -1);
            arg0->unknown_3dcc_ |= 0x20000;
        }
    } else if (var3 == 3 && g_keyManager.TestKeysPressed(0x10)) {
        var4 = func_ov005_021585fc(arg0, 1);
        arg0->unknown_3dcc_ |= 0x40000;
    }
    if (var4 != 0)
        func_ov005_021555c0(arg0);
    else {
        arg0->unknown_3dcc_ &= ~0x20000;
        arg0->unknown_3dcc_ &= ~0x40000;
    }
    var2 = func_0205bb84((Struct_0205bb84*)arg0->unknown_19f4_) + 8;
    var0 = arg0->unknown_3dbb_;
    if (var2 != var0) {
        arg0->unknown_3dbb_ = var2;
        func_0205eaa0((Struct_02108760*)&data_02108760, 2, 0);
        func_ov005_021579ec(arg0, arg0->unknown_3db8_, arg0->unknown_3dbb_);
        return;
    }
    if (var2 != var0)
        return;
    GameState::GetInstance();
    Struct_ov005_02153ba4_2* var5 = func_ov017_021a193c((int*)GetGameResources()->unknown_ptr_array_36fc[3]);
    if (!func_ov005_02157ae8(arg0, var5->unknown_4fc_))
        return;
    if (!func_ov005_02157190(arg0))
        return;
    if (arg0->unknown_2d90_[arg0->unknown_3dbb_].unknown_0_ < 0)
        return;
    func_ov005_0215792c(arg0, 5);
    func_0205eaa0((Struct_02108760*)&data_02108760, 1, 0);
    var5->unknown_634_ &= ~1;
    var5->unknown_634_ &= ~0x80;
}
