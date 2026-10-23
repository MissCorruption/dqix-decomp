#include <globaldefs.h>

struct Struct_0207c378;
extern "C" int func_0207caa4(struct Struct_0207c378* arg0, int arg1, int arg2);

struct Struct_020732cc {
    char unknown_0_[0xbd0];
    short* unknown_bd0_[8];
    signed char* unknown_bf0_[8];
    short unknown_c10_[8];
    unsigned char unknown_c20_[8];
};

// USA: func_0207c378
extern "C" ARM int func_0207c378(struct Struct_020732cc* arg0, int arg1, int arg2, int arg3) {
    int var0;
    signed char* var1;
    int var2;
    int var3;
    int var4;
    short* var5;
    short var6;
    short var7;

    if (arg2 <= 0) {
        return 0;
    }

    var4 = func_0207caa4((struct Struct_0207c378*)arg0, arg1, arg3);
    if (var4 == -2) {
        return 0;
    }

    var2 = -1;
    for (var3 = 0; var3 < 8; var3++) {
        if (arg3 == arg0->unknown_c20_[var3]) {
            var2 = var3;
            break;
        }
    }
    if (var2 < 0) {
        return 0;
    }

    var1 = arg0->unknown_bf0_[var2];
    var0 = 0;
    if (var4 >= 0) {
        var1[var4] += arg2;
        var0 = 1;
        if (var1[var4] > 0x63) {
            var1[var4] = 0x63;
        }
    } else {
        var5 = arg0->unknown_bd0_[var2];
        var6 = arg0->unknown_c10_[var2];
        for (var7 = 0; var7 < var6; var7++) {
            if (var5[var7] < 0) {
                var5[var7] = arg1;
                var1[var7] = arg2;
                var0 = 1;
                if (var1[var7] > 0x63) {
                    var1[var7] = 0x63;
                }
                break;
            }
        }
    }
    return var0;
}
