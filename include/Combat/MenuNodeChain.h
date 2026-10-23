#pragma once

#include <globaldefs.h>

struct Struct_02020cb8;
struct Struct_0207f7f0_2 {
    Struct_0207f7f0_2* unknown_0_;
    Struct_02020cb8* unknown_4_;
    unsigned char unknown_8_[0xd8];
};

struct Struct_0207f7f0 {
    int unknown_0_;
    unsigned char unknown_4_[8];
    unsigned char unknown_c_[8];
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
#if !defined(jpn)
    int unknown_20_[3];
#endif
    Struct_02020cb8* unknown_2c_;
    Struct_0207f7f0_2* unknown_30_;
    short unknown_34_;
    short unknown_36_;
    unsigned char unknown_38_;
    unsigned char unknown_39_;
    unsigned char unknown_3a_;
    unsigned char unknown_3b_;
    unsigned char unknown_3c_;
};

extern "C" void func_0207f84c(Struct_0207f7f0*);
extern "C" void func_0207f7f0(Struct_0207f7f0*, Struct_0207f7f0_2*, int);

extern "C" void func_0207f8bc(Struct_0207f7f0*);
