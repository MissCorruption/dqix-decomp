#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov031_0220963c_2 {
    unsigned char unknown_0_[0x32];
    unsigned short unknown_32_;
    unsigned char unknown_34_[0x88];
    unsigned char* unknown_bc_;
    unsigned char unknown_c0_[8];
    unsigned char unknown_c8_[0x104];
    unsigned char unknown_1cc_[8];
    unsigned char unknown_1d4_[8];
    unsigned char unknown_1dc_[0x16c];
    unsigned int unknown_348_[23];
    unsigned char unknown_3a4_[0x58];
    unsigned int unknown_3fc_[22];
};

struct Struct_ov031_0220963c {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned char unknown_4_;
    unsigned char unknown_5_[1];
};

extern "C" void func_ov031_0220afe0(void*);
extern "C" void func_ov031_0220b0e0(void*, void*);
extern "C" void func_ov031_0220b8a0(unsigned int*);
extern "C" void func_ov031_0220b9ac(void*, void*);
extern "C" void func_ov031_022093d0(unsigned char*);
extern "C" void func_ov031_0220b028(void*, const void*, unsigned int);
extern "C" void func_ov031_0220b8f4(void*, const void*, unsigned int);
extern "C" void func_ov031_0220bab8(void*, void*, unsigned int);

// USA: func_ov031_0220963c
extern "C" ARM int func_ov031_0220963c(Struct_ov031_0220963c_2* arg0, Struct_ov031_0220963c* arg1) {
    unsigned char var0[0x30];
    unsigned char* var1 = arg1->unknown_5_;
    int var2 = (arg1->unknown_3_ << 8) + arg1->unknown_4_;
    switch (arg0->unknown_32_) {
    case 4:
        func_ov031_0220afe0(arg0->unknown_3fc_);
        func_ov031_0220b028(arg0->unknown_3fc_, arg0->unknown_bc_, 16);
        VectorizedMemset(var0, 0x36, 0x30);
        func_ov031_0220b028(arg0->unknown_3fc_, var0, 0x30);
        func_ov031_0220b028(arg0->unknown_3fc_, arg0->unknown_1cc_, 8);
        func_ov031_0220b028(arg0->unknown_3fc_, arg1, 1);
        func_ov031_0220b028(arg0->unknown_3fc_, &arg1->unknown_3_, var2 + 2);
        func_ov031_0220b0e0(arg0->unknown_3fc_, var1 + var2);
        func_ov031_0220afe0(arg0->unknown_3fc_);
        func_ov031_0220b028(arg0->unknown_3fc_, arg0->unknown_bc_, 16);
        VectorizedMemset(var0, 0x5c, 0x30);
        func_ov031_0220b028(arg0->unknown_3fc_, var0, 0x30);
        func_ov031_0220b028(arg0->unknown_3fc_, var1 + var2, 16);
        func_ov031_0220b0e0(arg0->unknown_3fc_, var1 + var2);
        var2 += 16;
        break;
    case 5:
        func_ov031_0220b8a0(arg0->unknown_348_);
        func_ov031_0220b8f4(arg0->unknown_348_, arg0->unknown_bc_, 20);
        VectorizedMemset(var0, 0x36, 0x28);
        func_ov031_0220b8f4(arg0->unknown_348_, var0, 0x28);
        func_ov031_0220b8f4(arg0->unknown_348_, arg0->unknown_1cc_, 8);
        func_ov031_0220b8f4(arg0->unknown_348_, arg1, 1);
        func_ov031_0220b8f4(arg0->unknown_348_, &arg1->unknown_3_, var2 + 2);
        func_ov031_0220b9ac(arg0->unknown_348_, var1 + var2);
        func_ov031_0220b8a0(arg0->unknown_348_);
        func_ov031_0220b8f4(arg0->unknown_348_, arg0->unknown_bc_, 20);
        VectorizedMemset(var0, 0x5c, 0x28);
        func_ov031_0220b8f4(arg0->unknown_348_, var0, 0x28);
        func_ov031_0220b8f4(arg0->unknown_348_, var1 + var2, 20);
        func_ov031_0220b9ac(arg0->unknown_348_, var1 + var2);
        var2 += 20;
        break;
    }
    arg1->unknown_3_ = var2 >> 8;
    arg1->unknown_4_ = var2;
    func_ov031_0220bab8(arg0->unknown_c8_, arg1->unknown_5_, var2);
    func_ov031_022093d0(arg0->unknown_1d4_);
    return var2 + 5;
}
