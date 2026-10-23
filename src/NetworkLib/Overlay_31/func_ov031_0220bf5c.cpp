#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" int func_ov031_0220bb24(unsigned short*, int);
extern "C" void func_ov031_0220be04(unsigned short*, int, int, int);

// USA: func_ov031_0220bf5c
extern "C" ARM void func_ov031_0220bf5c(unsigned short* arg0, unsigned short* arg1, int arg2) {
    int var0;
    int var1;
    int var2;
    int var3;
    unsigned int var4;
    int var5;
    var5 = func_ov031_0220bb24(arg1, arg2);
    if (arg2 > var5 * 2) VectorizedMemset(arg0 + var5 * 2, 0, (arg2 - var5 * 2) * 2);
    for (var0 = 0; var0 < var5; var0++) {
        var2 = var0 * 2;
        if (var2 >= arg2) break;
        var4 = arg1[var0] * arg1[var0];
        arg0[var2] = var4;
        if (var2 == arg2 - 1) break;
        arg0[var2 + 1] = var4 >> 16;
    }
    for (var3 = 0; var3 < var5; var3++) {
        for (var1 = var3 + 1; var1 < var5 && (var2 = var3 + var1) < arg2; var1++) {
            var4 = arg1[var1] * arg1[var3];
            if (var4 <= 0x7fff8000u) {
                func_ov031_0220be04(arg0, var4 * 2, var2, arg2);
            } else {
                func_ov031_0220be04(arg0, var4, var2, arg2);
                func_ov031_0220be04(arg0, var4, var2, arg2);
            }
        }
    }
}
