#include <globaldefs.h>

struct Struct_02097720 {
    unsigned char unknown_0_[0xe];
    short unknown_e_;
    unsigned char unknown_10_[0x13 - 0x10];
    unsigned char unknown_13_0_ : 1;
    unsigned char unknown_13_1_ : 1;
    unsigned char unknown_13_2_ : 1;
    unsigned char unknown_13_3_ : 5;
    unsigned char unknown_14_[0x20 - 0x14];
};

struct Struct_020976e0_2 {
    unsigned int unknown_0_;
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 20;
    struct Struct_02097720* unknown_8_;
};

// USA: func_02097720
extern "C" ARM struct Struct_02097720* func_02097720(struct Struct_020976e0_2* arg0, int arg1) {
    unsigned short var0 = arg0->unknown_4_0_;
    struct Struct_02097720* var1 = arg0->unknown_8_;
    short var2 = 0x7fff;
    struct Struct_02097720* var3 = 0;
    unsigned short var4;
    for (var4 = 0; var4 < var0; var4++) {
        struct Struct_02097720* var5 = &var1[var4];
        if (!var5->unknown_13_2_ && var5->unknown_13_0_) {
            if (var5->unknown_e_ > arg1 && var2 > var5->unknown_e_) {
                var2 = var5->unknown_e_;
                var3 = var5;
            }
        }
    }
    return var3;
}
