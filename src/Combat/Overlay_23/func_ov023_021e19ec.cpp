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

struct Struct_ov023_021e19ec {
    char unknown_0_[4];
    struct Struct_021e12cc* unknown_4_;
    short unknown_8_;
};

// USA: func_ov023_021e19ec
extern "C" ARM struct Struct_021e12cc* func_ov023_021e19ec(struct Struct_ov023_021e19ec* arg0, int arg1, int arg2, int arg3, int arg4) {
    unsigned short var0 = 0xffff;
    int var1;
    struct Struct_021e12cc* var2;
    struct Struct_021e12cc* var3 = 0;
    struct Struct_021e12cc* var4 = arg0->unknown_4_;
    short var5 = arg0->unknown_8_;
    for (short var6 = 0; var6 < var5; var6++) {
        var2 = &var4[var6];
        if (var2->unknown_e_0_) {
            continue;
        }
        if (var0 < var2->unknown_c_) {
            continue;
        }
        if (arg4 && !var2->unknown_e_1_) {
            continue;
        }
        if (arg1 == 0) {
            var1 = (var2->unknown_e_2_ >= 8 && var2->unknown_e_2_ <= 9) ? 1 : 0;
            if (!var1) {
                continue;
            }
        } else {
            if (arg2 >= 0 && arg3 >= 0) {
                if (var2->unknown_f_ == arg3) {
                    if (var2->unknown_e_2_ != arg2) {
                        continue;
                    }
                } else {
                    continue;
                }
            } else if (arg2 >= 0) {
                if (var2->unknown_e_2_ != arg2) {
                    continue;
                }
            } else if (arg3 >= 0) {
                if (var2->unknown_f_ != arg3) {
                    continue;
                }
            }
        }
        var0 = var2->unknown_c_;
        var3 = var2;
    }
    if (var3 != 0) {
        var3->unknown_e_0_ = 1;
    }
    return var3;
}
