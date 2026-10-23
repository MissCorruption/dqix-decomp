#include <globaldefs.h>

struct Struct_020999f0_2 { char unknown_0_[7]; };

struct Struct_020995f8_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_;
    struct Struct_020999f0_2 unknown_5_;
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned char unknown_e_;
    unsigned char unknown_f_;
};

struct Struct_020999f0 {
    struct Struct_020995f8_2* unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

// USA: func_020999f0
extern "C" ARM void func_020999f0(struct Struct_020999f0* arg0, struct Struct_020995f8_2* arg1) {
    int var0 = arg0->unknown_4_;
    if (arg0->unknown_8_ <= var0) return;
    arg0->unknown_4_ = var0 + 1;
    {
        struct Struct_020995f8_2* var1 = &arg0->unknown_0_[var0];
        var1->unknown_0_ = arg1->unknown_0_;
        var1->unknown_2_ = arg1->unknown_2_;
        var1->unknown_4_ = arg1->unknown_4_;
        var1->unknown_5_ = arg1->unknown_5_;
        var1->unknown_c_ = arg1->unknown_c_;
        var1->unknown_d_ = arg1->unknown_d_;
        var1->unknown_e_ = arg1->unknown_e_;
    }
}
