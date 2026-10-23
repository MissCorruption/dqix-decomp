#include <globaldefs.h>

struct Struct_020ee958 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[2];
    unsigned int unknown_4_;
};

struct Struct_020e1438 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned char unknown_a_;
    unsigned char unknown_b_;
};

extern Struct_020ee958 data_020ee958[];

#pragma opt_common_subs off

// USA: func_020e1438
extern "C" ARM unsigned int func_020e1438(Struct_020e1438* arg0, unsigned int arg1,
                                                      unsigned int arg2, unsigned int arg3,
                                                      unsigned int arg4, unsigned int arg5) {
    unsigned int var0;
    unsigned int var1;
    unsigned char var2;

    if (arg1 == 0) {
        return 0;
    }
    var0 = 0;
    var1 = 0;
    var2 = (unsigned char)arg2;

    while (var1 < arg5) {
        Struct_020ee958* var3 = 0;
        Struct_020ee958* var4 = data_020ee958;
        unsigned int var5 = 0;
        unsigned int var6 = arg5 - var1;

        while (var5 < 12) {
            if (var4->unknown_0_ == arg4 && var4->unknown_1_ <= var6) {
                var3 = var4;
                break;
            }
            var5++;
            var4++;
        }

        if (var3 != 0) {
            arg0[var0].unknown_8_ = var2;
            arg0[var0].unknown_9_ = (unsigned char)(var1 + arg3);
            arg0[var0].unknown_a_ = var3->unknown_0_;
            arg0[var0].unknown_b_ = var3->unknown_1_;
            arg0[var0].unknown_0_ = var3->unknown_4_;
            var0++;
            var1 += var3->unknown_1_;
        } else {
            unsigned int var7 = arg4 >> 1;
            unsigned int var8 = arg5 - var1;
            var0 += func_020e1438(arg0 + var0, arg1 - var0, arg2, var1, var7, var8);
            var0 += func_020e1438(arg0 + var0, arg1 - var0, arg2 + (arg4 >> 1), var1,
                                               var7, var8);
            break;
        }

        if (var0 >= arg1) {
            break;
        }
    }
    return var0;
}
