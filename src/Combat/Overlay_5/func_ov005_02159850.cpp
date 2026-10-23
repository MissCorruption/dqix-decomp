#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Struct_ov005_02153954 {
    char unknown_0_[R(0xee0, 0xee4)];
    char unknown_ee4_[R(0x3d33 - 0xee0, 0x3dbb - 0xee4)];
    signed char unknown_3dbb_;
    char unknown_3dbc_[0x3dcc - 0x3dbc];
    unsigned int unknown_3dcc_;
    char unknown_3dd0_[0x3ddc - 0x3dd0];
    unsigned char unknown_3ddc_;
    unsigned char unknown_3ddd_;
    signed char unknown_3dde_;
    unsigned char unknown_3ddf_;
};

struct Struct_ov005_02153ba4_2 {
    char unknown_0_[R(0x56c, 0x634)];
    unsigned short unknown_634_;
};

struct Struct_ov005_02159850 {
    char unknown_0_[R(0x34f8, 0x3708)];
    int* unknown_3708_;
};

struct Struct_0205d6a0;

extern "C" Struct_ov005_02153ba4_2* func_ov017_021a193c(int* arg0);
extern "C" void func_0205d6a0(Struct_0205d6a0* arg0, int arg1);
extern "C" void func_ov005_0215792c(Struct_ov005_02153954* arg0, unsigned char arg1);

// USA: func_ov005_02159850
extern "C" ARM void func_ov005_02159850(Struct_ov005_02153954* arg0) {
    if (arg0->unknown_3ddc_ != 0)
        return;
    func_0205d6a0((Struct_0205d6a0*)arg0->unknown_ee4_, 1);
    if (arg0->unknown_3dbb_ >= 0 && arg0->unknown_3dbb_ < 8)
        func_ov005_0215792c(arg0, 3);
    else if (arg0->unknown_3dbb_ >= 8 && arg0->unknown_3dbb_ < 24)
        func_ov005_0215792c(arg0, 4);
    arg0->unknown_3ddc_ = 0;
    arg0->unknown_3dde_ = 0;
    arg0->unknown_3ddf_ = 0;
    Struct_ov005_02153ba4_2* var0 = func_ov017_021a193c(((Struct_ov005_02159850*)GetGameResources())->unknown_3708_);
    var0->unknown_634_ |= 0x81;
    arg0->unknown_3dcc_ |= 0xc;
}
