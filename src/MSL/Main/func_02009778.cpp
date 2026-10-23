#include <globaldefs.h>

struct Struct_020026b4 {
    unsigned char unknown_0_;
    char unknown_1_;
    short unknown_2_;
    struct {
        unsigned char unknown_0_;
        unsigned char unknown_1_[32];
        unsigned char unknown_21_;
    } unknown_4_;
};

extern "C" void func_0200961c(Struct_020026b4* arg0, int arg1);

// USA: func_02009778
extern "C" ARM void func_02009778(Struct_020026b4* arg0, const Struct_020026b4* arg1, const Struct_020026b4* arg2) {
    unsigned int var0 = 0;
    unsigned char var1[32 * 2];
    int var2 = arg1->unknown_4_.unknown_0_ + arg2->unknown_4_.unknown_0_ - 1;
    unsigned char* var3 = var1 + var2 + 1;
    unsigned char* var4 = var3;

    arg0->unknown_0_ = 0;

    for (; var2 > 0; var2--) {
        int var5 = arg2->unknown_4_.unknown_0_ - 1;
        int var6 = var2 - var5 - 1;
        int var7;
        int var8;
        const unsigned char* var9;
        const unsigned char* var10;

        if (var6 < 0) {
            var6 = 0;
            var5 = var2 - 1;
        }

        var9 = arg1->unknown_4_.unknown_1_ + var6;
        var10 = arg2->unknown_4_.unknown_1_ + var5;
        var7 = var5 + 1;
        var8 = arg1->unknown_4_.unknown_0_ - var6;

        if (var7 > var8) {
            var7 = var8;
        }

        for (; var7 > 0; var7--, var9++, var10--) {
            var0 += *var9 * *var10;
        }

        *--var3 = (unsigned char)(var0 % 10);
        var0 /= 10;
    }

    arg0->unknown_2_ = (short)(arg1->unknown_2_ + arg2->unknown_2_);

    if (var0) {
        *--var3 = (unsigned char)(var0);
        arg0->unknown_2_++;
    }

    for (var2 = 0; var2 < 32 && var3 < var4; var2++, var3++) {
        arg0->unknown_4_.unknown_1_[var2] = *var3;
    }
    arg0->unknown_4_.unknown_0_ = (unsigned char)(var2);

    if (var3 < var4 && *var3 >= 5) {
        if (*var3 == 5) {
            unsigned char* var11 = var3 + 1;
            for (; var11 < var4; var11++) {
                if (*var11 != 0) {
                    goto round;
                }
            }
            if ((var3[-1] & 1) == 0) {
                return;
            }
        }
    round:
        func_0200961c(arg0, arg0->unknown_4_.unknown_0_);
    }
}
