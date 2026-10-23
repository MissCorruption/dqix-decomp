#include <globaldefs.h>

struct Struct_02097798 {
    unsigned char unknown_0_[0x13];
    unsigned char unknown_13_0_ : 1;
    unsigned char unknown_13_1_ : 1;
    unsigned char unknown_13_2_ : 1;
    unsigned char unknown_13_3_ : 5;
    unsigned char unknown_14_[0x1a - 0x14];
    short unknown_1a_;
    unsigned char unknown_1c_[0x20 - 0x1c];
};

struct Struct_020972e0_2 {
    unsigned int unknown_0_;
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 20;
    struct Struct_02097798* unknown_8_;
};

// USA: func_02097798
extern "C" ARM void func_02097798(struct Struct_020972e0_2* arg0) {
    unsigned short var0 = arg0->unknown_4_0_;
    struct Struct_02097798* var1 = arg0->unknown_8_;
    short var2;
    unsigned short var3;
    unsigned short var4;
    unsigned short var5 = var0 - 1;
    for (var3 = 0; var3 < var5; var3++) {
        struct Struct_02097798* var6 = &var1[var3];
        if (var6->unknown_1a_ <= 0) {
            var6->unknown_13_2_ = 1;
        }
        if (!var6->unknown_13_2_) {
            var2 = var6->unknown_1a_;
            for (var4 = var3 + 1; var4 < var0; var4++) {
                if (var1[var4].unknown_1a_ == var2) {
                    var1[var4].unknown_13_2_ = 1;
                }
            }
        }
    }
}
