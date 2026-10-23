#include <globaldefs.h>

unsigned long long GetCurrentTimestamp(void);
extern "C" unsigned long long _ll_udiv(unsigned long long arg0, unsigned int arg1, unsigned int arg2);

struct Struct_020fdc60_4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned long long unknown_8_;
    float unknown_10_;
};

// USA: func_0201fa2c
extern "C" ARM void func_0201fa2c(Struct_020fdc60_4* arg0, unsigned int arg1) {
    if (arg0->unknown_0_ == 1) {
        if (arg0->unknown_1_ == 3) {
            arg0->unknown_0_ = 3;
            arg0->unknown_1_ = 0;
            return;
        } else {
            arg0->unknown_10_ = 176.0f;
            arg0->unknown_1_ = 0;
            return;
        }
    }
    if (arg0->unknown_0_ == 2) {
        if (arg0->unknown_2_ != 0) return;
        if (arg0->unknown_4_ != 0) {
            unsigned long long var0 = GetCurrentTimestamp() - arg0->unknown_8_;
            unsigned long long var1 = _ll_udiv(var0 << 6, 0x82ea, 0);
            if (var1 >= arg0->unknown_4_) arg0->unknown_1_ = 4;
        }
        if (arg0->unknown_1_ == 4) {
            arg0->unknown_0_ = 4;
            arg0->unknown_1_ = 4;
            arg0->unknown_4_ = 0;
        }
        arg0->unknown_10_ = 136.0f;
        return;
    }
    if (arg0->unknown_0_ == 3) {
        arg0->unknown_10_ = arg0->unknown_10_ - 6.0f * ((float)arg1 / 33.333332f);
        if (arg0->unknown_10_ < 136.0f) {
            arg0->unknown_10_ = 136.0f;
            arg0->unknown_0_ = 2;
        }
        return;
    }
    if (arg0->unknown_0_ != 4) return;
    arg0->unknown_10_ = arg0->unknown_10_ + 6.0f * ((float)arg1 / 33.333332f);
    if (176.0f < arg0->unknown_10_) {
        arg0->unknown_10_ = 176.0f;
        arg0->unknown_0_ = 1;
    }
}
