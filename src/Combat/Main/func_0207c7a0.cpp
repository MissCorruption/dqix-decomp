#include <globaldefs.h>

struct Struct_0207c7a0 {
    char unknown_0_[0xbd0];
    short *unknown_bd0_[8];
    signed char *unknown_bf0_[8];
    short unknown_c10_[8];
    unsigned char unknown_c20_[8];
};
extern const short data_020e8a14[8];

// USA: func_0207c7a0
extern "C" ARM int func_0207c7a0(void *arg0, int arg1, int arg2) {
    Struct_0207c7a0 *var0 = static_cast<Struct_0207c7a0 *>(arg0);
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
            int var4 = data_020e8a14[var3];
            short *var5 = var0->unknown_bd0_[var3];
            for (int var6 = 0; var6 < var4; var6++) {
                if (arg1 == var5[var6]) {
                    signed char *var7 = var0->unknown_bf0_[var3];
                    return var7[var6];
                }
            }
        }
    } else {
        int var8 = data_020e8a14[var1];
        short *var9 = var0->unknown_bd0_[var1];
        for (int var10 = 0; var10 < var8; var10++) {
            if (arg1 == var9[var10]) {
                signed char *var11 = var0->unknown_bf0_[var1];
                return var11[var10];
            }
        }
    }
    return 0;
}