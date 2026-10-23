#include <globaldefs.h>

struct Struct_ov023_021e170c_2 {
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

struct Struct_ov023_021e170c {
    char unknown_0_[4];
    struct Struct_ov023_021e170c_2* unknown_4_;
    short unknown_8_;
    short unknown_a_;
};

// USA: func_ov023_021e170c
extern "C" ARM struct Struct_ov023_021e170c_2* func_ov023_021e170c(struct Struct_ov023_021e170c* arg0, int arg1, int arg2, int arg3) {
    unsigned short var0 = 0xffff;
    struct Struct_ov023_021e170c_2* var1;
    struct Struct_ov023_021e170c_2* var2 = 0;
    struct Struct_ov023_021e170c_2* var3 = arg0->unknown_4_;
    short var4 = arg0->unknown_8_;
    for (short var5 = 0; var5 < var4; var5++) {
        var1 = &var3[var5];
        if (var1->unknown_e_0_) continue;
        if (var0 < var1->unknown_c_) continue;
        if (!var1->unknown_e_1_) continue;
        if (arg1 == 0) {
            int var6 = var1->unknown_e_2_ <= 7;
            if (!var6) continue;
        } else if (arg2 >= 0 && arg3 >= 0) {
            if (var1->unknown_f_ != arg3) continue;
            if (!(var1->unknown_e_2_ == arg2)) continue;
        } else if (arg2 >= 0) {
            if (var1->unknown_e_2_ != arg2) continue;
        } else if (arg3 >= 0) {
            if (var1->unknown_f_ != arg3) continue;
        }
        var0 = var1->unknown_c_;
        var2 = var1;
    }
    if (var2) {
        var2->unknown_e_0_ = 1;
    }
    return var2;
}
