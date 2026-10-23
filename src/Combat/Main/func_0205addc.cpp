#include <globaldefs.h>

struct Struct_0205a254_2 {
    char unknown_0_[8];
    unsigned short unknown_8_;
    char unknown_a_[0x18 - 0xa];
};

struct Struct_0205a254 {
    struct Struct_0205a254_2* unknown_0_;
    unsigned short unknown_4_;
};

extern "C" struct Struct_0205a254_2* func_0205a3d0(struct Struct_0205a254* arg0, int arg1);

struct Struct_0205addc {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
};

struct Struct_0205addc_2 {
    char unknown_0_[4];
    short unknown_4_;
    short unknown_6_;
    char unknown_8_[4];
    struct Struct_0205addc* unknown_c_;
    unsigned short unknown_10_;
    char unknown_12_[2];
    unsigned char unknown_14_;
    unsigned char unknown_15_;
};

struct Struct_0205addc_3 {
    char unknown_0_[0x14];
    int unknown_14_;
    int unknown_18_;
    char unknown_1c_[0x22 - 0x1c];
    unsigned char unknown_22_;
    char unknown_23_[0x28 - 0x23];
};

struct Struct_0205addc_4 {
    char unknown_0_[0x3c];
    struct Struct_0205a254* unknown_3c_;
    struct Struct_0205addc_3* unknown_40_;
    char unknown_44_[0x4c - 0x44];
    unsigned short unknown_4c_;
};

extern "C" int func_0205ac40(struct Struct_0205addc_4* arg0, struct Struct_0205addc_3* arg1, int arg2);

// USA: func_0205addc
extern "C" ARM int func_0205addc(struct Struct_0205addc_4* arg0, int arg1) {
    struct Struct_0205addc_2* var0;
    struct Struct_0205addc_2* var1;
    int var2;
    unsigned short var3;

    if (arg0->unknown_3c_ == 0) {
        return (int)arg0->unknown_3c_;
    }
    var0 = (struct Struct_0205addc_2*)func_0205a3d0(arg0->unknown_3c_, arg1);
    if (var0 == 0) {
        return (int)var0;
    }
    var1 = (struct Struct_0205addc_2*)func_0205a3d0(arg0->unknown_3c_, arg1);
    if (var1 != 0) {
        var2 = (var1->unknown_15_ & 8) ? 1 : 0;
    } else {
        var2 = 0;
    }
    if (!var2) {
        return var2;
    }
    var3 = var0->unknown_c_[var0->unknown_10_].unknown_2_;
    if (var3 >= arg0->unknown_4c_) {
        return arg0->unknown_4c_;
    }
    struct Struct_0205addc_3* var4 = &arg0->unknown_40_[var3];
    int var5 = var0->unknown_4_, var6 = var0->unknown_6_;
    var4->unknown_14_ = var5 << 0xc;
    var4->unknown_18_ = var6 << 0xc;
    if (var0->unknown_14_ != 0xff) {
        var4->unknown_22_ = var0->unknown_14_;
    }
    return func_0205ac40(arg0, var4, var6);
}
