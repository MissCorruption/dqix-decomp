#include "Combat/TryApplyElemFields.h"
#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#include <globaldefs.h>

#if defined(jpn)
#define func_ov005_02158878 func_ov005_02159e70
#endif
#include <std_library_functions.h>
#include "Input/Input.h"

struct Struct_0205d5d0;
struct Struct_0205d81c;
struct Struct_0205d6a0;
struct Struct_ov005_02158e04;
struct Struct_02108760;

struct Struct_ov005_02158ed0 {
    int unknown_0_;
    char unknown_4_[0x38 - 4];
    char unknown_38_[0xb0 - 0x38];
    unsigned char unknown_b0_;
};

struct Struct_ov005_02153954 {
    char unknown_0_[0xe10];
    unsigned short* unknown_e10_;
    char unknown_e14_[LOW_REGION(0xee0, 0xee4) - 0xe14];
    Struct_ov005_02158ed0 unknown_ee4_;
    char unknown_f98_[LOW_REGION(0x3d44, 0x3dcc) - LOW_REGION(0xf94, 0xf98)];
    unsigned int unknown_3dcc_;
    unsigned char unknown_3dd0_;
    unsigned char unknown_3dd1_;
    unsigned char unknown_3dd2_;
    char unknown_3dd3_[LOW_REGION(0x3d54, 0x3ddc) - LOW_REGION(0x3d4b, 0x3dd3)];
};

extern "C" char data_02108760[];

extern "C" void func_0205d0e0(void* arg0);
extern "C" void func_ov005_021589f4(Struct_ov005_02153954* arg0);
extern "C" int func_ov005_02158b3c(void* arg0, void* arg1);
extern "C" Struct_ov005_02158e04* func_0205d81c(Struct_0205d81c* arg0, int arg1);
extern "C" int func_0204c7cc(unsigned char*);
extern "C" int func_ov005_02157190(void* arg0);
extern "C" void func_0205eaa0(Struct_02108760* arg0, int arg1, int arg2);
extern "C" void func_0205d6a0(Struct_0205d6a0* arg0, int arg1);
// USA: func_ov005_02158878
extern "C" ARM void func_ov005_02158878(Struct_ov005_02153954* arg0) {
    func_0205d0e0(&arg0->unknown_ee4_);
    if (arg0->unknown_3dd0_ == 0) {
        func_ov005_021589f4(arg0);
        arg0->unknown_3dd0_++;
        return;
    }
    if (arg0->unknown_3dd0_ == 1) {
        if (func_0204c7cc((unsigned char*)(func_0205d81c((Struct_0205d81c*)&arg0->unknown_ee4_, 0)))) {
            if (arg0->unknown_3dd1_ == 0xc || arg0->unknown_3dd1_ == 0xd)
                arg0->unknown_3dcc_ |= 0x10000;
        }
        arg0->unknown_3dd0_++;
        return;
    }
    if (arg0->unknown_3dd0_ != 2)
        return;
    int var0;
    unsigned char var1;
    var1 = g_touchInput.pressed_;
    var0 = 0;
    int var2 = func_ov005_02157190(arg0);
    if (var2 | var1) {
        func_0205eaa0((Struct_02108760*)data_02108760, 1, var0);
        if (arg0->unknown_3dd2_ != 0) {
            arg0->unknown_3dd1_ = arg0->unknown_3dd2_;
            arg0->unknown_3dd2_ = 0;
            memset(arg0->unknown_e10_, var0, LOW_REGION(0x800, 0x960));
            func_ov005_02158b3c(arg0, arg0->unknown_e10_);
#if defined(jpn)
            func_0205d5d0((Struct_0205d5d0*)&arg0->unknown_ee4_, var0, (int)arg0->unknown_e10_, 1);
#else
            func_0205d5d0((Struct_0205d5d0*)&arg0->unknown_ee4_, var0, (int)arg0->unknown_e10_, 1, var0);
#endif
            return;
        }
        var0 = 1;
    } else if (g_keyManager.TestKeysPressed(2)) {
        var0 = 1;
    }
    if (var0) {
        func_0205d6a0((Struct_0205d6a0*)&arg0->unknown_ee4_, 0);
        arg0->unknown_3dd0_ = 0;
        arg0->unknown_3dd1_ = 0;
    }
}
