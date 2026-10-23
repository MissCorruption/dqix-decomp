#pragma once

#include "NitroSDK/Matrix.h"
#include "NitroSDK/Memory.h"
#include <globaldefs.h>

struct Struct_020236dc {
    Vector3i unknown_0_;
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned char unknown_e_;
    signed char unknown_f_;
    unsigned char unknown_10_;
    unsigned char unknown_11_;
    unsigned char unknown_12_;
    unsigned char unknown_13_;
    unsigned char unknown_14_;
    unsigned char unknown_15_[3];

    inline Struct_020236dc() {
        VectorizedMemset(this, 0, sizeof(Struct_020236dc));
        unknown_f_     = -1;
        unknown_14_ = 0xff;
    }
};

static inline int inline_02024518(unsigned char arg0) {
    return arg0 >= 0x74;
}

extern int data_020e70f0[][4][2];
extern int data_020e70f4[][4][2];

extern "C" {
int func_020236dc(Struct_020236dc *arg0, unsigned char *arg1, Vector3i *arg2);
void func_02023b5c(void *arg0, int arg1, int arg2, int arg3, int arg4, unsigned char arg5);
void func_02023d84(void *arg0, Struct_020236dc *arg1, int arg2, int arg3, int arg4, int arg5, int arg6,
                   int arg7);
void func_02024e78(void *arg0);
void func_020251bc(void *arg0);
}
