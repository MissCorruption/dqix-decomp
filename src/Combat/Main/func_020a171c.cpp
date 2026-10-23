#include <globaldefs.h>

struct Struct_020a171c_2 {
    unsigned int unknown_0_0_ : 9;
    unsigned int unknown_1_1_ : 9;
    unsigned int unknown_2_2_ : 9;
    unsigned int unknown_3_3_ : 5;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
};

struct Struct_020a171c {
    Struct_020a171c_2* unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned int unknown_8_;
    unsigned char* unknown_c_;
};

// USA: func_020a171c
extern "C" ARM Struct_020a171c_2* func_020a171c(Struct_020a171c* arg0, int arg1, int arg2) {
    unsigned short var0 = 0xffff;
    unsigned short var1 = 0;
    int var2;

    for (var2 = 0; var2 < arg0->unknown_6_; var2++) {
        Struct_020a171c_2* var3;
        unsigned short var4;
        if (arg0->unknown_c_[var2 / 8] & (unsigned char)(1 << (var2 % 8))) {
            continue;
        }
        var3 = &arg0->unknown_0_[var2];
        var4 = 0xffff;
        if (arg1 == 1) {
            var4 = var3->unknown_0_0_;
        } else if (arg1 == 2) {
            if (arg2 == 0) {
                var4 = var3->unknown_1_1_;
            } else {
                var4 = var3->unknown_2_2_;
            }
        }
        if (var0 > var4 && var4 != 0) {
            var1 = var2;
            var0 = var4;
        }
    }

    if (var0 == 0xffff) {
        return 0;
    }
    arg0->unknown_c_[var1 / 8] |= (unsigned char)(1 << (var1 % 8)) & 0xff;
    return &arg0->unknown_0_[var1];
}
