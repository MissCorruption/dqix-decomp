#include <globaldefs.h>

extern unsigned char data_02114e00;
extern unsigned int data_02114e50;

struct Struct_0204724c {
    void* unknown_0_;
    unsigned char* unknown_4_;
};

struct Struct_0201730c {
    unsigned char unknown_0_[0xc];
    struct Struct_0204724c* unknown_c_;
    unsigned char unknown_10_[0x70 - 0x10];
    unsigned int unknown_70_;
    unsigned int unknown_74_;
    unsigned int unknown_78_;
    unsigned int unknown_7c_;
    unsigned char unknown_80_[0x84 - 0x80];
    unsigned char unknown_84_0_ : 1;
    unsigned char unknown_84_1_ : 1;
    unsigned char unknown_84_2_ : 6;
};

// USA: func_0204724c
extern "C" ARM void func_0204724c(struct Struct_0201730c* arg0) {
    unsigned char* var0;
    unsigned int var1;

    if (!arg0->unknown_84_0_) return;
    if (!arg0->unknown_84_1_) return;

    if (data_02114e00 != 0) {
        arg0->unknown_78_ = data_02114e50;
        return;
    }

    if (arg0->unknown_7c_ >= (data_02114e50 - arg0->unknown_78_)) return;

    var1 = arg0->unknown_70_ * 0xc;
    var0 = arg0->unknown_c_[arg0->unknown_74_].unknown_4_;
    arg0->unknown_70_ = *(unsigned int*)(var0 + var1);
    var0 = var0 + var1;
    arg0->unknown_78_ = data_02114e50;
    arg0->unknown_7c_ = *(unsigned int*)(var0 + 4);
}
