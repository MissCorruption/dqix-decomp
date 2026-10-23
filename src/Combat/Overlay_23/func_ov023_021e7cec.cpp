#include <globaldefs.h>

struct Struct_ov023_021fd7fc { unsigned char unknown_0_; unsigned char unknown_1_; unsigned char unknown_2_; signed char unknown_3_; signed char unknown_4_; unsigned char unknown_5_; unsigned char unknown_6_; };
extern Struct_ov023_021fd7fc data_ov023_021fd7fc[];

struct Struct_ov023_021e7cec {
    char unknown_0_[0x118];
    unsigned short unknown_118_;
    unsigned short unknown_11a_;
    unsigned short unknown_11c_;
    unsigned short unknown_11e_;
    unsigned short unknown_120_;
    unsigned short unknown_122_;
    unsigned short unknown_124_;
    unsigned short unknown_126_;
    char unknown_128_[0x129 - 0x128];
    unsigned char unknown_129_;
    char unknown_12a_[0x12d - 0x12a];
    unsigned char unknown_12d_;
    unsigned char unknown_12e_;
};

// USA: func_ov023_021e7cec
extern "C" ARM void func_ov023_021e7cec(struct Struct_ov023_021e7cec* arg0, unsigned char arg1, unsigned short arg2, unsigned short arg3) {
    int var0 = 0;
    struct Struct_ov023_021fd7fc* var1;
    while (data_ov023_021fd7fc[var0].unknown_0_ != 0xff) {
        var1 = &data_ov023_021fd7fc[var0];
        if (var1->unknown_0_ == arg1) {
            arg0->unknown_129_ = var1->unknown_0_;
            arg0->unknown_11c_ = arg2;
            arg0->unknown_11e_ = arg3;
            unsigned char var2 = var1->unknown_2_;
            unsigned char var3 = var1->unknown_1_;
            arg0->unknown_120_ = var3;
            arg0->unknown_122_ = var2;
            signed char var4 = var1->unknown_4_;
            signed char var5 = var1->unknown_3_;
            arg0->unknown_118_ = var5;
            arg0->unknown_11a_ = var4;
            unsigned char var6 = var1->unknown_6_;
            unsigned char var7 = var1->unknown_5_;
            arg0->unknown_124_ = var7;
            arg0->unknown_126_ = var6;
            arg0->unknown_12d_ = 0;
            arg0->unknown_12e_ = 0;
            if (var1->unknown_0_ == 0x10) {
                arg0->unknown_12d_ = 1;
                arg0->unknown_12e_ = 1;
            }
            return;
        }
        var0++;
    }
}
