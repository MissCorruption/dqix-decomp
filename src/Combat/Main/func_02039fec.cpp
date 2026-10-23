#include <globaldefs.h>

struct Struct_02039fec {
    unsigned char unknown_0_[5];
    signed char unknown_5_;
    unsigned char unknown_6_[2];
    short unknown_8_;
    short unknown_a_;
    unsigned char unknown_c_[0xc];
};

struct Struct_02039fec_2 {
    unsigned char unknown_0_[0x550];
    struct Struct_02039fec unknown_550_[16];
    int unknown_6d0_;
    int unknown_6d4_;
};

extern "C" void func_0203a5e8(struct Struct_02039fec_2* arg0, int arg1);

// USA: func_02039fec
extern "C" ARM void func_02039fec(struct Struct_02039fec_2* arg0) {
    int var0 = arg0->unknown_6d0_;
    while (var0 != arg0->unknown_6d4_) {
        struct Struct_02039fec* var1 = &arg0->unknown_550_[var0];
        var1->unknown_a_ += var1->unknown_8_;
        var1->unknown_8_ = var1->unknown_8_ + ((0x1000 - var1->unknown_a_) >> 1);
        var1->unknown_8_ = (short)(0.8f * var1->unknown_8_);
        var1->unknown_5_--;
        if (var1->unknown_5_ <= 0) {
            int var2 = var0 + 1;
            arg0->unknown_6d0_ = var2;
            if (var2 >= 16) arg0->unknown_6d0_ = 0;
        } else if (var1->unknown_5_ == 0x22) {
            func_0203a5e8(arg0, var0);
        }
        var0++;
        if (var0 >= 16) var0 = 0;
    }
}
