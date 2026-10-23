#pragma once

#include <globaldefs.h>

struct Struct_020420e8 {
    const char* unknown_0_;
    signed char unknown_4_;
    signed char unknown_5_0_ : 6;
    signed char unknown_5_6_ : 1;
    signed char unknown_5_7_ : 1;
    char unknown_6_[2];
};




struct Struct_0204166c {
    unsigned char* unknown_0_;
    unsigned int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
#if defined(jpn)
    int unknown_14_;
    union {
        unsigned char unknown_18_[2];
        unsigned short unknown1_18_;
    };
    unsigned char unknown_1a_;
    unsigned char unknown_16_0_ : 1;
    unsigned char unknown_16_1_ : 1;
    unsigned char unknown_16_2_ : 1;
    unsigned char unknown_1b_3_ : 5;
#else
    unsigned short unknown_14_;
    unsigned char unknown_16_0_ : 1;
    unsigned char unknown_16_1_ : 1;
    unsigned char unknown_16_2_ : 1;
    unsigned char unknown_16_3_ : 1;
    unsigned char unknown_16_4_ : 4;
    unsigned char unknown_17_;
    Struct_020420e8* unknown2_18_;
#endif
};

typedef Struct_0204166c Struct_0204166c;

extern "C" void func_0204166c(Struct_0204166c* arg0);
