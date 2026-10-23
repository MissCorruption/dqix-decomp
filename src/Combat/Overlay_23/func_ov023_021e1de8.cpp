#include <globaldefs.h>

struct Struct_ov023_021e1de8_2 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 5;
};

struct Struct_ov023_021e1de8 {
    int unknown_0_;
    struct Struct_ov023_021e1de8_2* unknown_4_;
    short unknown_8_;
    unsigned short unknown_a_;
    unsigned short unknown_c_;
    unsigned char unknown_e_0_ : 1;
    unsigned char unknown_e_1_ : 1;
    unsigned char unknown_e_2_ : 6;
    unsigned char unknown_f_;
};

struct Struct_ov023_021e1de8_3 {
    char unknown_0_[4];
    struct Struct_ov023_021e1de8* unknown_4_;
    short unknown_8_;
};

// USA: func_ov023_021e1de8
extern "C" ARM short func_ov023_021e1de8(struct Struct_ov023_021e1de8_3* arg0, int arg1, int arg2, int arg3) {
    short var0 = arg0->unknown_8_;
    short var1 = 0;
    switch (arg1) {
    case 0: {
        for (short var2 = 0; var2 <= 7; var2++) {
            var1 = var1 + func_ov023_021e1de8(arg0, -1, var2, -1);
        }
        return var1;
    }
    case 1:
    case 2:
    default: {
        struct Struct_ov023_021e1de8* var3 = arg0->unknown_4_;
        for (short var4 = 0; var4 < var0; var4++) {
            struct Struct_ov023_021e1de8* var5 = &var3[var4];
            if (var5->unknown_e_1_ && var5->unknown_4_ != 0) {
                if (arg2 >= 0 && arg3 >= 0) {
                    if (var5->unknown_4_->unknown_8_0_ == arg2 && var5->unknown_4_->unknown_8_4_ == arg3) {
                        var1 = var1 + 1;
                    }
                } else if (arg2 >= 0) {
                    if (var5->unknown_4_->unknown_8_0_ == arg2) {
                        var1 = var1 + 1;
                    }
                } else if (arg3 >= 0) {
                    if (var5->unknown_4_->unknown_8_4_ == arg3) {
                        var1 = var1 + 1;
                    }
                }
            }
        }
        return var1;
    }
    }
}
