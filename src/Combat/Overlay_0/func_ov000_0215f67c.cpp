#include <globaldefs.h>
#include "Util/Random.h"

struct Struct_ov000_0215f67c {
    struct Random unknown_0_;
    char unknown_20_[0x8df8];
    int* unknown_8e18_;
};

extern unsigned short data_ov000_02182bb4[8];

extern "C" int func_020a3694(int* arg0);
extern "C" int func_ov000_0215e9fc(struct Struct_ov000_0215f67c* arg0, unsigned short* arg1, int arg2, int arg3);
extern "C" int func_ov000_0215eb1c(struct Struct_ov000_0215f67c* arg0, unsigned short* arg1, int arg2, int arg3);

// USA: func_ov000_0215f67c
extern "C" ARM unsigned short func_ov000_0215f67c(struct Struct_ov000_0215f67c* arg0, int arg1) {
    int var0 = NextRandomMax(&arg0->unknown_0_, 2);
    unsigned short var1[8];
    int var2 = 8;
    unsigned short* var3 = var1;
    unsigned short* var4 = data_ov000_02182bb4;
    do {
        *var3 = *var4;
        var3++;
        var4++;
    } while (--var2);
    unsigned short var5[6] = {0};
    unsigned short* var6 = var5;
    int var7 = (arg1 >= 0 && arg1 <= 3);
    int var8;
    if (var7) {
        if (func_ov000_0215e9fc(arg0, var1, 4, 1) < 2) {
            var0 = 1;
        }
        var5[0] = 0xdd;
        var5[1] = 0x393;
        var5[2] = 0xde;
        var5[3] = 0x396;
        var8 = 4;
    } else {
        if (func_ov000_0215eb1c(arg0, var1, 8, 1) < 2) {
            var0 = 1;
        }
        var5[0] = 0xdd;
        var5[1] = 0x393;
        var5[2] = 0xde;
        var5[3] = 0x394;
        var8 = 4;
        if (!func_020a3694(arg0->unknown_8e18_)) {
            var5[4] = 0x395;
            var8 = 5;
        }
    }
    switch (var0) {
    case 0:
        return 0xdb;
    default:
        return var6[NextRandomMax(&arg0->unknown_0_, var8)];
    }
}
