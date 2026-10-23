#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov005_021567ac_1276 = 0x4f8 };
enum { Enum_ov005_021567ac_1588 = 0x56c, Enum_ov005_021567ac_6644 = 0x196c };
#else
enum { Enum_ov005_021567ac_1276 = 0x4fc };
enum { Enum_ov005_021567ac_1588 = 0x634, Enum_ov005_021567ac_6644 = 0x19f4 };
#endif

#include <GameState/GameState.h>
#include "Resource/GameResources.h"

struct Struct_02108760;

struct Struct_ov005_02153ba4_2 {
    char unknown_0_[Enum_ov005_021567ac_1276];
    int unknown_4fc_;
    char unknown_500_[Enum_ov005_021567ac_1588 - Enum_ov005_021567ac_1276 - 4];
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
    char unknown_0_[Enum_ov005_021567ac_6644];
    char unknown_19f4_[0x2d90 - 0x19f4];
    Struct_ov005_02153ba4 unknown_2d90_[24];
    char unknown_3030_[0x3d78 - 0x3030];
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
    char unknown_3dd0_[0x3de0 - 0x3dd0];
    short unknown_3de0_;
};

extern int data_02108760;

extern "C" void func_ov005_0215792c(Struct_ov005_02153954* arg0, unsigned char arg1);
extern "C" Struct_ov005_02153ba4_2* func_ov017_021a193c(int* arg0);
extern "C" void func_0205eaa0(Struct_02108760* arg0, int arg1, int arg2);
extern "C" void func_ov005_021579ec(Struct_ov005_02153954* arg0, unsigned int arg1, unsigned char arg2);
extern "C" int func_ov005_02157ae8(Struct_ov005_02153954* arg0, int arg1);
extern "C" void func_0205bb04(void* arg0, int arg1);
extern "C" int func_ov005_02155670(Struct_ov005_02153954* arg0, int arg1, int arg2);

// USA: func_ov005_021567ac
extern "C" ARM void func_ov005_021567ac(Struct_ov005_02153954* arg0, int arg1, int arg2) {
    GameState::GetInstance();
    Struct_ov005_02153ba4_2* var0 = func_ov017_021a193c((int*)GetGameResources()->unknown_ptr_array_36fc[3]);
    if (!func_ov005_02157ae8(arg0, var0->unknown_4fc_))
        return;
    arg0->unknown_3d78_ = func_ov005_02155670(arg0, arg1, arg2);
    if (arg0->unknown_3d78_ >= 8 && arg0->unknown_3d78_ < 24) {
        if (arg0->unknown_2d90_[arg0->unknown_3d78_].unknown_0_ == -1) {
            arg0->unknown_3d78_ = -1;
            arg0->unknown_3dc0_ = -1;
            return;
        }
        func_ov005_0215792c(arg0, 4);
        arg0->unknown_3dbb_ = arg0->unknown_3d78_;
        func_ov005_021579ec(arg0, arg0->unknown_3db8_, arg0->unknown_3dbb_);
        func_0205bb04(arg0->unknown_19f4_, arg0->unknown_3dbb_ - 8);
        arg0->unknown_3de0_ = (arg0->unknown_3dbb_ - 8) + arg0->unknown_3dbd_ * 16;
        arg0->unknown_3dc0_ = 0;
        arg0->unknown_3dcc_ |= 0x80;
        func_0205eaa0((Struct_02108760*)&data_02108760, 2, 0);
        var0->unknown_634_ &= ~1;
        var0->unknown_634_ &= ~0x80;
        arg0->unknown_3dcc_ &= ~4;
        arg0->unknown_3dcc_ &= ~8;
        return;
    }
    arg0->unknown_3d78_ = -1;
    arg0->unknown_3dc0_ = -1;
}
