#if defined(jpn)
#define R(j,u) (j)
#define data_ov005_0215cbd4 data_ov005_0215dfb4
#define data_ov005_0215cd60 data_ov005_0215e140
#define data_ov014_02189480 data_ov014_0218a2c0
#define data_ov014_02189498 data_ov014_0218a2d8
#define data_ov015_02193fe0 data_ov015_02194b20
#define data_ov015_02194564 data_ov015_02195184
#define data_ov015_02194570 data_ov015_02195190
#define data_ov015_021945a0 data_ov015_021951c0
#define data_ov015_021945d0 data_ov015_021951f0
#define data_ov024_021ff17c data_ov023_021ff17c
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_02108760;
struct Struct_0205bb84;

struct Struct_ov005_02153954 {
    char unknown_0_[R(0x196c, 0x19f4)];
    char unknown_19f4_[0x3db8 - 0x19f4];
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
extern "C" void func_0205eaa0(Struct_02108760* arg0, int arg1, int arg2);
extern "C" int func_ov005_02157190(void* arg0);
extern "C" void func_ov005_021579ec(Struct_ov005_02153954* arg0, unsigned int arg1, unsigned char arg2);
extern "C" int func_0205bb84(Struct_0205bb84* arg0);
extern "C" int func_ov005_02158560(Struct_ov005_02153954* arg0, unsigned char arg1, int arg2);
extern "C" void func_ov005_021555c0(Struct_ov005_02153954* arg0);

// USA: func_ov005_0215742c
extern "C" ARM void func_ov005_0215742c(Struct_ov005_02153954* arg0) {
    if (g_keyManager.TestKeysPressed(0x80)) {
        func_ov005_0215792c(arg0, 3);
        arg0->unknown_3dbb_ = arg0->unknown_3dbc_;
        if (g_keyManager.TestKeysPressed(0x80))
            func_0205eaa0((Struct_02108760*)&data_02108760, 2, 0);
        else if (func_ov005_02157190(arg0))
            func_0205eaa0((Struct_02108760*)&data_02108760, 1, 0);
        func_ov005_021579ec(arg0, arg0->unknown_3db8_, arg0->unknown_3dbb_);
        return;
    }
    if (!func_ov005_02158560(arg0, func_0205bb84((Struct_0205bb84*)arg0->unknown_19f4_), 0))
        return;
    arg0->unknown_3dcc_ |= 0x100;
    func_ov005_021579ec(arg0, arg0->unknown_3db8_, arg0->unknown_3dbc_);
    func_ov005_021555c0(arg0);
}
