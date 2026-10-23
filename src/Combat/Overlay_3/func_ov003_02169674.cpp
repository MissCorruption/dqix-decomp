#include <globaldefs.h>

struct Struct_ov003_02169674 {
    short unknown_0_;
    short unknown_2_;
    signed char unknown_4_;
    char unknown_5_;
    short* unknown_8_;
    short* unknown_c_;
    short* unknown_10_;
    short* unknown_14_;
};

// USA: func_ov003_02169674
extern "C" ARM int func_ov003_02169674(int arg0, int arg1, int arg2, Struct_ov003_02169674* arg3) {
    int var0 = arg1 - arg3->unknown_0_;
    int var1 = arg2 - arg3->unknown_2_;
    short* var2 = arg3->unknown_8_;
    short* var3 = arg3->unknown_c_;
    short* var4 = arg3->unknown_10_;
    short* var5 = arg3->unknown_14_;
    int var6 = arg3->unknown_4_;
    for (int var7 = 0; var7 < var6; var7++) {
        int var8 = var2[var7] + var4[var7];
        int var9 = var3[var7] + var5[var7];
        if (var0 < var2[var7]) continue;
        if (var0 > var8) continue;
        if (var1 < var3[var7]) continue;
        if (var1 <= var9) return var7;
    }
    return -1;
}
