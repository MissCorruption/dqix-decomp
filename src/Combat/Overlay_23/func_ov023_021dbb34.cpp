#include <globaldefs.h>

struct Struct_ov023_021dbb34_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    struct {
        unsigned int unknown_0_0_ : 10;
        unsigned int unknown_1_2_ : 10;
        unsigned int unknown_2_4_ : 12;
    } unknown_c_;
    int unknown_10_;
    int unknown_14_;
};

struct Struct_ov023_021dbb34 {
    float unknown_0_, unknown_4_, unknown_8_, unknown_c_, unknown_10_, unknown_14_, unknown_18_, unknown_1c_, unknown_20_, unknown_24_, unknown_28_, unknown_2c_;
};

// USA: func_ov023_021dbb34
extern "C" ARM void func_ov023_021dbb34(void* arg0, struct Struct_ov023_021dbb34* arg1) {
    if (arg0 == 0 || arg1 == 0) return;
    struct Struct_ov023_021dbb34_2* var0 = *(struct Struct_ov023_021dbb34_2**)arg0;
    if (var0 == 0) return;
    arg1->unknown_0_ = (float)((var0->unknown_8_ << 22) >> 22);
    arg1->unknown_4_ = (float)((var0->unknown_8_ << 12) >> 22);
    arg1->unknown_8_ = (float)(unsigned int)((unsigned int)var0->unknown_8_ << 2 >> 22) / 10.0f;
    arg1->unknown_c_ = (float)(unsigned int)var0->unknown_c_.unknown_0_0_ / 10.0f;
    arg1->unknown_10_ = (float)(unsigned int)var0->unknown_c_.unknown_1_2_ / 10.0f;
    arg1->unknown_14_ = 0;
    arg1->unknown_18_ = (float)((var0->unknown_10_ << 22) >> 22);
    arg1->unknown_1c_ = (float)((var0->unknown_10_ << 12) >> 22);
    arg1->unknown_20_ = (float)((var0->unknown_10_ << 2) >> 22);
    arg1->unknown_24_ = (float)((var0->unknown_14_ << 22) >> 22);
    arg1->unknown_28_ = (float)((var0->unknown_14_ << 12) >> 22);
    arg1->unknown_2c_ = (float)((var0->unknown_14_ << 2) >> 22);
}
