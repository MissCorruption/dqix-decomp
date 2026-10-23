#include <globaldefs.h>

struct Struct_0203a48c_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_0203a48c {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
};

struct Struct_0203a48c_3 {
    char unknown_0_[0x550];
    struct Struct_0203a48c unknown_550_[16];
    char unknown_6d0_[4];
    int unknown_6d4_;
};

// USA: func_0203a48c
extern "C" ARM void func_0203a48c(Struct_0203a48c_3* arg0, int arg1, Struct_0203a48c_2* arg2, int arg3, int arg4, int arg5) {
    int var0;
    int var1;
    struct Struct_0203a48c* var2;

    var0 = arg1;
    var1 = 0;
    while (var0 > 0) {
        var0 = var0 / 10;
        var1++;
    }
    if (var1 == 0) {
        return;
    }

    var2 = &arg0->unknown_550_[arg0->unknown_6d4_];
    var2->unknown_5_ = 0x25;
    var2->unknown_0_ = arg1;
    var2->unknown_c_ = arg2->unknown_0_;
    var2->unknown_10_ = arg2->unknown_4_;
    var2->unknown_14_ = arg2->unknown_8_;
    var2->unknown_4_ = arg4;
    var2->unknown_2_ = arg5;
    var2->unknown_6_ = var1;
    var2->unknown_8_ = 0x358 - 0x25;
    var2->unknown_a_ = 0x1333;
    var2->unknown_7_ = arg3;

    arg0->unknown_6d4_ = arg0->unknown_6d4_ + 1;
    if (arg0->unknown_6d4_ >= 0x10) {
        arg0->unknown_6d4_ = 0;
    }
}
