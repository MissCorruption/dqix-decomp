#include <globaldefs.h>

struct Struct_ov016_0218feb4 {
    int unknown_0_;
    int unknown_4_;
};

extern const short data_ov016_0219cef0[];
extern const signed char data_ov016_0219cee0[];

// USA: func_ov016_0218feb4
extern "C" ARM void func_ov016_0218feb4(Struct_ov016_0218feb4* arg0, unsigned char* arg1, int arg2, unsigned int* arg3) {
    int var0 = 0;
    if (arg2 <= 0) return;
    do {
        int var1 = arg1[var0];
        int var2;
        int var3 = data_ov016_0219cef0[arg0->unknown_4_];
        arg0->unknown_4_ += data_ov016_0219cee0[var1 & 7];
        if (arg0->unknown_4_ < 0) arg0->unknown_4_ = 0;
        if (arg0->unknown_4_ > 88) arg0->unknown_4_ = 88;
        int var4 = var3 >> 3;
        if (var1 & 4) var4 += var3;
        if (var1 & 2) var4 += var3 >> 1;
        if (var1 & 1) var4 += var3 >> 2;
        if (var1 & 8) arg0->unknown_0_ -= var4;
        else arg0->unknown_0_ += var4;
        if (arg0->unknown_0_ < -0x8000) arg0->unknown_0_ = -0x8000;
        if (arg0->unknown_0_ > 0x7fff) arg0->unknown_0_ = 0x7fff;

        var1 >>= 4;
        var2 = arg0->unknown_0_;
        int var5 = data_ov016_0219cef0[arg0->unknown_4_];
        arg0->unknown_4_ += data_ov016_0219cee0[var1 & 7];
        if (arg0->unknown_4_ < 0) arg0->unknown_4_ = 0;
        if (arg0->unknown_4_ > 88) arg0->unknown_4_ = 88;
        int var6 = var5 >> 3;
        if (var1 & 4) var6 += var5;
        if (var1 & 2) var6 += var5 >> 1;
        if (var1 & 1) var6 += var5 >> 2;
        if (var1 & 8) arg0->unknown_0_ -= var6;
        else arg0->unknown_0_ += var6;
        if (arg0->unknown_0_ < -0x8000) arg0->unknown_0_ = -0x8000;
        if (arg0->unknown_0_ > 0x7fff) arg0->unknown_0_ = 0x7fff;

        *arg3++ = (unsigned short)var2 | (arg0->unknown_0_ << 16);
        var0++;
    } while (var0 < arg2);
}
