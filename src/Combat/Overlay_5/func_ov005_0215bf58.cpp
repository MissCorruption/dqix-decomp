#include <globaldefs.h>
#include "Resource/GameResources.h"
#include "Input/Input.h"

#if defined(jpn)
enum { Enum_ov005_0215bf58_1276 = 0x4f8 };
enum { Enum_ov005_0215bf58_6584 = 0x1930, Enum_ov005_0215bf58_11664 = 0x2d08, Enum_ov005_0215bf58_15803 = 0x3d33 };
#else
enum { Enum_ov005_0215bf58_1276 = 0x4fc };
enum { Enum_ov005_0215bf58_6584 = 0x19b8, Enum_ov005_0215bf58_11664 = 0x2d90, Enum_ov005_0215bf58_15803 = 0x3dbb };
#endif

struct Struct_ov005_02153ba4_2
{
    char unknown_0_[Enum_ov005_0215bf58_1276];
    int unknown_4fc_;
};

struct Struct_0201099c_10;
struct Struct_0201099c_9;

struct Struct_ov005_02153ba4
{
    short unknown_0_;
    char unknown_2_[0x1c - 2];
};

struct Struct_ov005_02153954
{
    char unknown_0_[0xdf4];
    Struct_0201099c_10* unknown_df4_;
    char unknown_df8_[Enum_ov005_0215bf58_6584 - 0xdf8];
    unsigned short unknown_19b8_;
    char unknown_19ba_[Enum_ov005_0215bf58_11664 - Enum_ov005_0215bf58_6584 - 2];
    Struct_ov005_02153ba4 unknown_2d90_[24];
    char unknown_3030_[Enum_ov005_0215bf58_15803 - Enum_ov005_0215bf58_11664 - 24 * sizeof(Struct_ov005_02153ba4)];
    signed char unknown_3dbb_;
};

extern "C" void func_ov005_021562b8(Struct_ov005_02153954* arg0);
extern "C" void func_ov005_0215730c(Struct_ov005_02153954* arg0);
extern "C" Struct_ov005_02153ba4_2* func_ov017_021a193c(int* arg0);
extern "C" Struct_0201099c_9* func_020dedd0(Struct_0201099c_10* arg0, int arg1);
extern "C" int func_020dd4c4(signed char arg0, Struct_0201099c_9* arg1);
extern "C" void func_ov005_021551fc(char*, int, int);

// USA: func_ov005_0215bf58
extern "C" ARM void func_ov005_0215bf58(Struct_ov005_02153954* arg0)
{
    int var0 = 0;
    if (g_touchInput.pressed_ || (g_touchInput.isRepeatValid_ != 0 && g_touchInput.currentReading_.isHeld != 0) ||
        g_touchInput.released_ != 0)
    {
        func_ov005_021562b8(arg0);
        var0 = 1;
    }
    if (!var0)
        func_ov005_0215730c(arg0);
    int var1 = func_ov017_021a193c((int*)GetGameResources()->unknown_ptr_array_36fc[3])->unknown_4fc_;
    Struct_0201099c_9* var2 = func_020dedd0(arg0->unknown_df4_, arg0->unknown_2d90_[arg0->unknown_3dbb_].unknown_0_);
    if (var2 != NULL)
    {
        if (func_020dd4c4(var1, var2))
            arg0->unknown_19b8_ |= 0x100;
        else
            arg0->unknown_19b8_ &= ~0x100;
    }
    func_ov005_021551fc((char*)arg0, var1, 0);
}
