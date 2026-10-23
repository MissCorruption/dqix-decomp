#include <globaldefs.h>

struct Struct_021e12cc {
    int unknown_0_;
    int unknown_4_;
    short unknown_8_;
    unsigned short unknown_a_;
    unsigned short unknown_c_;
    unsigned char unknown_e_0_ : 1;
    unsigned char unknown_e_1_ : 1;
    unsigned char unknown_e_2_ : 6;
    unsigned char unknown_f_;
};

struct Struct_ov023_021e1604 {
    char unknown_0_[4];
    struct Struct_021e12cc* unknown_4_;
    short unknown_8_;
};

// USA: func_ov023_021e1604
extern "C" ARM struct Struct_021e12cc* func_ov023_021e1604(struct Struct_ov023_021e1604* arg0, int arg1, int arg2, int arg3) {
    unsigned short var0 = 0xffff;
    struct Struct_021e12cc* var1;
    struct Struct_021e12cc* var2 = 0;
    struct Struct_021e12cc* var3 = arg0->unknown_4_;
    short var4 = arg0->unknown_8_;
    for (short var5 = 0; var5 < var4; var5++) {
        var1 = &var3[var5];
        if (var1->unknown_e_0_) {
            continue;
        }
        unsigned short var6 = var1->unknown_a_;
        if (var0 < var6) {
            continue;
        }
        if (!var1->unknown_e_1_) {
            continue;
        }
        if (arg1 == 0) {
            int var7 = (var1->unknown_e_2_ <= 7) ? 1 : 0;
            if (!var7) {
                continue;
            }
        } else {
            if (arg2 >= 0 && arg3 >= 0) {
                if (var1->unknown_f_ == arg3) {
                    if (var1->unknown_e_2_ != arg2) {
                        continue;
                    }
                } else {
                    continue;
                }
            } else if (arg2 >= 0) {
                if (var1->unknown_e_2_ != arg2) {
                    continue;
                }
            } else if (arg3 >= 0) {
                if (var1->unknown_f_ != arg3) {
                    continue;
                }
            }
        }
        var0 = var6;
        var2 = var1;
    }
    if (var2 != 0) {
        var2->unknown_e_0_ = 1;
    }
    return var2;
}
