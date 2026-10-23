#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_ov005_02153954 {
    char unknown_0_[LOW_REGION(0xee0, 0xee4)];
    char unknown_ee4_[LOW_REGION(0x3d33, 0x3dbb) - LOW_REGION(0xee0, 0xee4)];
    signed char unknown_3dbb_;
    char unknown_3dbc_[LOW_REGION(0x3d54, 0x3ddc) - LOW_REGION(0x3d34, 0x3dbc)];
    unsigned char unknown_3ddc_;
    unsigned char unknown_3ddd_;
    signed char unknown_3dde_;
    unsigned char unknown_3ddf_;
};

struct Struct_02108760;
struct Struct_0205c570;
struct Struct_0205cf1c;
struct Struct_0205d6a0;

extern "C" char data_02108760[];

extern "C" void func_ov005_02159904(Struct_ov005_02153954* arg0);
extern "C" void func_0205cef8(void* arg0);
extern "C" void func_0205cf04(void* arg0);
extern "C" int func_0205d794(Struct_0205c570* arg0);
extern "C" int func_ov005_02157190(void* arg0);
struct Struct_0205da38;
extern "C" int func_0205da38(struct Struct_0205da38* arg0, int arg1);
extern "C" void func_0205eaa0(Struct_02108760* arg0, int arg1, int arg2);
extern "C" void func_0205cf10(void* arg0);
extern "C" void func_0205cf1c(Struct_0205cf1c* arg0);
extern "C" void func_0205d6a0(Struct_0205d6a0* arg0, int arg1);

// USA: func_ov005_02158f80
extern "C" ARM void func_ov005_02158f80(Struct_ov005_02153954* arg0) {
    if (arg0->unknown_3ddc_ == 0) {
        func_ov005_02159904(arg0);
        func_0205cef8(arg0->unknown_ee4_);
        func_0205cf04(arg0->unknown_ee4_);
        arg0->unknown_3ddc_++;
    } else if (arg0->unknown_3ddc_ == 1) {
        arg0->unknown_3dde_ = func_0205d794((Struct_0205c570*)arg0->unknown_ee4_);
        if (func_ov005_02157190(arg0) | func_0205da38((struct Struct_0205da38*)arg0->unknown_ee4_, 0x14)) {
            func_0205eaa0((Struct_02108760*)data_02108760, 1, 0);
            func_0205cf10(arg0->unknown_ee4_);
            func_0205cf1c((Struct_0205cf1c*)arg0->unknown_ee4_);
            func_0205d6a0((Struct_0205d6a0*)arg0->unknown_ee4_, 0);
            if (arg0->unknown_3dbb_ >= 0 && arg0->unknown_3dbb_ < 8) {
                switch (arg0->unknown_3dde_) {
                case 0:
                    arg0->unknown_3ddf_ = 1;
                    break;
                case 1:
                    arg0->unknown_3ddf_ = 3;
                    break;
                case 2:
                    arg0->unknown_3ddf_ = 4;
                    break;
                }
            } else {
                switch (arg0->unknown_3dde_) {
                case 0:
                    arg0->unknown_3ddf_ = 1;
                    break;
                case 1:
                    arg0->unknown_3ddf_ = 2;
                    break;
                case 2:
                    arg0->unknown_3ddf_ = 3;
                    break;
                case 3:
                    arg0->unknown_3ddf_ = 4;
                    break;
                }
            }
            arg0->unknown_3ddc_ = 0;
            return;
        }
        if (!g_keyManager.TestKeysPressed(2))
            return;
        func_0205cf10(arg0->unknown_ee4_);
        func_0205cf1c((Struct_0205cf1c*)arg0->unknown_ee4_);
        func_0205d6a0((Struct_0205d6a0*)arg0->unknown_ee4_, 0);
        arg0->unknown_3ddf_ = 4;
        arg0->unknown_3ddc_ = 0;
    }
}
