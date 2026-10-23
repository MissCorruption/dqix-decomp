#include <globaldefs.h>
#include "Combat/FormationPosition.h"

static inline int inline_02061c04_5(int arg0, int arg1) { return (int)(((long long)arg0 * arg1 + 0x800) >> 12); }

static inline Struct_02048cf0 inline_02048e2c_2(const int& arg0) {
    return func_ov000_0216f74c(const_cast<int*>(&arg0));
}

// USA: func_ov025_021e1480
extern "C" ARM unsigned char func_ov025_021e1480(unsigned char arg0, unsigned char* arg1, int arg2) {
    unsigned char var0 = 0;
    Struct_02048cf0 var1 = inline_02048e2c_2(arg0);
    int var2 = 0x400000;
    for (int var3 = 0; var3 < arg2; var3++) {
        Struct_02048cf0 var4 = inline_02048e2c_2(arg1[var3]);
        int var5 = inline_02061c04_5(var1.unknown_0_ - var4.unknown_0_, var1.unknown_0_ - var4.unknown_0_) + inline_02061c04_5(var1.unknown_4_ - var4.unknown_4_, var1.unknown_4_ - var4.unknown_4_);
        if (var5 < var2) {
            var0 = arg1[var3];
            var2 = var5;
        }
    }
    return var0;
}
