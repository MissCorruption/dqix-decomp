#include <globaldefs.h>

struct Struct_0207c484 {
    char unknown_0_[0xbd0];
    short *unknown_bd0_[8];
    signed char *unknown_bf0_[8];
    short unknown_c10_[8];
    unsigned char unknown_c20_[8];
};
extern "C" int func_0207c484(Struct_0207c484 *, int, int, int);
extern const short data_020e8a04[8];

// USA: func_0207c894
extern "C" ARM int func_0207c894(void *arg0, int arg1, int arg2) {
    Struct_0207c484 *var0 = static_cast<Struct_0207c484 *>(arg0);
    if (arg1 < 0) {
        return 0;
    }
    int var1 = -1;
    for (int var2 = 0; var2 < 8; var2++) {
        if (arg2 == var0->unknown_c20_[var2]) {
            var1 = var2;
            break;
        }
    }
    if (var1 < 0) {
        for (int var3 = 0; var3 < 8; var3++) {
            int var4  = data_020e8a04[var3];
            short *var5 = var0->unknown_bd0_[var3];
            for (int var6 = 0; var6 < var4; var6++) {
                if (arg1 == var5[var6]) {
                    signed char *var7 = var0->unknown_bf0_[var3];
                    if (var7[var6] != 0) {
                        var7[var6]--;
                    }
                    if (var7[var6] == 0) {
                        var5[var6] = -1;
                    }
                    return 1;
                }
            }
        }
    } else {
        return func_0207c484(var0, arg1, 1, var1) != 0;
    }
    return 0;
}
