#include <globaldefs.h>
#include "Resource/TextEncoding.h"

extern "C" void* memset(void* arg0, int arg1, unsigned long arg2);
extern "C" void func_020c99c8(void* arg0);

struct Struct_0202aec0 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned char unknown_e_;
    unsigned char unknown_f_;
    unsigned char unknown_10_;
    unsigned char unknown_11_;
    unsigned char unknown_12_[2];
    unsigned char unknown_14_[0x14];
    unsigned char unknown_28_;
    unsigned char unknown_29_;
    unsigned char unknown_2a_[10];
    int unknown_34_;
    unsigned char unknown_38_[0x10];
    unsigned char unknown_48_[0x10];
};

struct Struct_0202aec0_2 {
    int unknown_0_;
    short unknown_4_;
    short unknown_6_;
    int unknown_8_;
    int unknown_c_;
    unsigned char unknown_10_[0x780];
    unsigned char unknown_790_[0x28];
    unsigned char unknown_7b8_[8];
    unsigned char unknown_7c0_[0x400];
    unsigned char unknown_bc0_[0x400];
    int unknown_fc0_;
    unsigned char unknown_fc4_[0x3c];
    Struct_0202aec0 unknown_1000_;
};

struct Struct_0202aec0_3 {
    int unknown_0_;
    unsigned short unknown_4_[11];
    unsigned short unknown_1a_;
    unsigned char unknown_1c_[0x38];
};

extern "C" int _ZZ15inline_0202c04cvE1s;

// USA: func_0202aec0
extern "C" ARM void func_0202aec0(Struct_0202aec0_2* arg0) {
    Struct_0202aec0_3 var0;

    arg0->unknown_0_ = 0;
    arg0->unknown_4_ = 0;
    arg0->unknown_8_ = 0;
    arg0->unknown_c_ = 0;
    arg0->unknown_fc0_ = 0;
    arg0->unknown_1000_.unknown_4_ = 0;
    arg0->unknown_1000_.unknown_8_ = -1;
    memset(arg0->unknown_1000_.unknown_14_, 0, 0x24);
    memset(arg0->unknown_10_, 0, 0x780);
    memset(arg0->unknown_790_, 0, 0x28);
    memset(arg0->unknown_7c0_, 0, 0x400);
    memset(arg0->unknown_bc0_, 0, 0x400);
    memset(arg0->unknown_fc4_, 0, 0x40);

    func_020c99c8(&var0);
    arg0->unknown_1000_.unknown_28_ = var0.unknown_1a_;
    func_020328bc(arg0->unknown_1000_.unknown_14_, var0.unknown_4_, arg0->unknown_1000_.unknown_28_);

    arg0->unknown_1000_.unknown_29_ = arg0->unknown_1000_.unknown_29_ & ~8;
    arg0->unknown_1000_.unknown_34_ = 0;
    arg0->unknown_1000_.unknown_c_ = 1;
    arg0->unknown_1000_.unknown_d_ = 1;
    arg0->unknown_1000_.unknown_e_ = 0;
    arg0->unknown_1000_.unknown_f_ = 0;
    arg0->unknown_1000_.unknown_10_ = 0;
    (&_ZZ15inline_0202c04cvE1s)[1] = 0;
    memset(arg0->unknown_1000_.unknown_38_, 0, 0x10);
    memset(arg0->unknown_1000_.unknown_48_, 0, 0x10);
    arg0->unknown_1000_.unknown_11_ = 1;
}
