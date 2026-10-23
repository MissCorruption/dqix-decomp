#include <globaldefs.h>

struct Struct_ov023_021e1f0c_2 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 5;
};

struct Struct_ov023_021e1f0c {
    char unknown_0_[4];
    struct Struct_ov023_021e1f0c_2* unknown_4_;
    char unknown_8_[6];
    unsigned char unknown_e_0_ : 1;
    unsigned char unknown_e_1_ : 1;
    unsigned char unknown_e_2_ : 6;
    char unknown_f_[1];
};

struct Struct_ov023_021e1f0c_3 {
    char unknown_0_[4];
    struct Struct_ov023_021e1f0c* unknown_4_;
    short unknown_8_;
};

// USA: func_ov023_021e1f0c
extern "C" ARM int func_ov023_021e1f0c(Struct_ov023_021e1f0c_3* arg0, short arg1, short arg2, short arg3) {
    short var0 = arg0->unknown_8_;
    short var1 = 0;
    switch (arg1) {
    case 0:
        for (short var2 = 8; var2 <= 9; var2++) {
            var1 += func_ov023_021e1f0c(arg0, -1, var2, -1);
        }
        return var1;
    case 1:
    case 2:
    default:
        break;
    }

    struct Struct_ov023_021e1f0c* var3 = arg0->unknown_4_;
    for (short var4 = 0; var4 < var0; var4++) {
        struct Struct_ov023_021e1f0c* var5 = &var3[var4];
        if (var5->unknown_e_1_) {
            struct Struct_ov023_021e1f0c_2* var6 = var5->unknown_4_;
            if (var6 != 0) {
                if (arg2 >= 0 && arg3 >= 0) {
                    if (arg2 == (short)var6->unknown_8_0_ && arg3 == (short)var6->unknown_8_4_) var1++;
                } else if (arg2 >= 0) {
                    if (arg2 == (short)var6->unknown_8_0_) var1++;
                } else if (arg3 >= 0) {
                    if (arg3 == (short)var6->unknown_8_4_) var1++;
                }
            }
        }
    }
    return var1;
}
