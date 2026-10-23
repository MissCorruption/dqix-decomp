#pragma once

#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

struct Struct_0205ac40_3 {
    fix32_t unknown_0_[4];
};

struct Struct_0205ac40 {
    char unknown_0_[0x50];
    unsigned char unknown_50_;
};

struct Struct_0205b174 {
    unsigned short unknown_0_;
};

struct Struct_0205ac40_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    Struct_0205b174* unknown_4_;
    char unknown_8_[4];
    fix32_t unknown_c_;
    fix32_t unknown_10_;
    fix32_t unknown_14_[2];
    unsigned short unknown_1c_;
    unsigned short unknown_1e_;
    unsigned short unknown_20_;
    unsigned char unknown_22_;
    unsigned char unknown_23_;
    unsigned char unknown_24_;
    signed char unknown_25_;
    signed char unknown_26_;
};


extern "C" void func_020c111c(Struct_0205ac40_3* arg0, fix32_t arg1, fix32_t arg2);
extern "C" void func_020c1128(const Struct_0205ac40_3* arg0, Struct_0205ac40_3* arg1,
                           fix32_t arg2, fix32_t arg3);
extern "C" void func_0205b0d8(Struct_0205ac40* arg0, Struct_0205ac40_3* arg1,
                             Struct_0205ac40_3* arg2, Struct_0205ac40_2* arg3);
extern "C" int func_0205b174(Struct_0205ac40* arg0, Struct_0205ac40_2* arg1);
