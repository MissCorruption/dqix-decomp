#include <globaldefs.h>

struct Struct_020974b0_2 {
    struct Struct_020974b0_2* unknown_0_;
    unsigned char unknown_4_[0xf];
    unsigned char unknown_13_0_ : 1;
    unsigned char unknown_13_1_ : 1;
    unsigned char unknown_13_2_ : 6;
};

// USA: func_02097844
extern "C" ARM void func_02097844(struct Struct_020974b0_2** arg0, int arg1) {
    int var0;
    int var1;
    struct Struct_020974b0_2* var2;
    int var3;
    struct Struct_020974b0_2* var4;
    struct Struct_020974b0_2* var5;
    struct Struct_020974b0_2* var6;
    struct Struct_020974b0_2* var7;

    if (arg1 <= 0) {
        return;
    }
    var4 = *arg0;
    var0 = 0;
    var1 = 0;
    var3 = 0;
    var5 = NULL;
    var6 = NULL;
    var7 = var4;
    while (var7 != NULL) {
        var0++;
        if (var7->unknown_13_1_) {
            var1++;
        }
        var2 = var7;
        var7 = var7->unknown_0_;
        if (var0 == arg1 || var7 == NULL) {
            if (var1 > 0) {
                var3++;
                if (var5 != NULL) {
                    var5->unknown_0_ = var4;
                } else {
                    *arg0 = var4;
                }
                var5 = var2;
            }
            var0 = 0;
            var1 = 0;
            var4 = var7;
            if (var6 == NULL) {
                var6 = var2;
            }
        }
    }
    if (var3 == 0) {
        if (var6 != NULL) {
            var6->unknown_0_ = NULL;
        }
    } else {
        if (var5 != NULL) {
            var5->unknown_0_ = NULL;
        }
    }
}
