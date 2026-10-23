#include <globaldefs.h>

typedef struct Struct_020026b4 {
    char unknown_0_;
    char unknown_1_;
    short unknown_2_;
    struct {
        unsigned char unknown_0_;
        unsigned char unknown_1_[32];
        unsigned char unknown_21_;
    } unknown_4_;
} Struct_020026b4;

// USA: func_02009edc
ARM void func_02009edc(Struct_020026b4* arg0, const Struct_020026b4* arg1, const Struct_020026b4* arg2) {
    int var0, var1;
    unsigned char *var2, *var3, *var4;
    const unsigned char *var5, *var6, *var7;

    *arg0 = *arg1;

    if (arg2->unknown_4_.unknown_1_[0] == 0)
        return;

    var0 = arg0->unknown_4_.unknown_0_;
    if (var0 < arg2->unknown_4_.unknown_0_)
        var0 = arg2->unknown_4_.unknown_0_;

    var1 = arg0->unknown_2_ - arg2->unknown_2_;
    var0 += var1;

    if (var0 > 32)
        var0 = 32;

    while (arg0->unknown_4_.unknown_0_ < var0)
        arg0->unknown_4_.unknown_1_[arg0->unknown_4_.unknown_0_++] = 0;

    var2 = arg0->unknown_4_.unknown_1_;
    var3 = var2 + var0;

    if (arg2->unknown_4_.unknown_0_ + var1 < var0)
        var3 = var2 + (arg2->unknown_4_.unknown_0_ + var1);

    var5 = arg2->unknown_4_.unknown_1_;
    var6 = var5 + (var3 - var2 - var1);
    var7 = var6;

    while (var3 > var2 && var6 > var5) {
        --var3;
        --var6;
        if (*var3 < *var6) {
            unsigned char* var8 = var3 - 1;
            while (*var8 == 0)
                --var8;
            while (var8 != var3) {
                --*var8;
                ++var8;
                *var8 += 10;
            }
        }
        *var3 -= *var6;
    }

    if (var7 - var5 < arg2->unknown_4_.unknown_0_) {
        int var9 = 0;
        if (*var7 < 5)
            var9 = 1;
        else if (*var7 == 5) {
            const unsigned char* var10 = arg2->unknown_4_.unknown_1_ + arg2->unknown_4_.unknown_0_;

            for (var6 = var7 + 1; var6 < var10; ++var6)
                if (*var6 != 0)
                    goto done;

            var3 = var2 + (var7 - var5) + var1 - 1;

            if (*var3 & 1)
                var9 = 1;
        }
        if (var9) {
            if (*var3 < 1) {
                unsigned char* var11 = var3 - 1;
                while (*var11 == 0)
                    --var11;
                while (var11 != var3) {
                    --*var11;
                    ++var11;
                    *var11 += 10;
                }
            }
            *var3 -= 1;
        }
    }

done:
    for (var3 = var2; *var3 == 0; ++var3) {
    }

    if (var3 > var2) {
        unsigned char var12 = (unsigned char)(var3 - var2);
        arg0->unknown_2_ -= var12;
        var4 = var2 + arg0->unknown_4_.unknown_0_;
        for (; var3 < var4; ++var3, ++var2)
            *var2 = *var3;
        arg0->unknown_4_.unknown_0_ -= var12;
    }

    var2 = arg0->unknown_4_.unknown_1_;
    for (var3 = var2 + arg0->unknown_4_.unknown_0_; var3 > var2;) {
        --var3;
        if (*var3 != 0)
            break;
    }
    arg0->unknown_4_.unknown_0_ = (unsigned char)(var3 - var2 + 1);
}
