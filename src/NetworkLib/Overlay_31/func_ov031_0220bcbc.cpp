#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" int func_ov031_0220bb24(unsigned short*, int);

// USA: func_ov031_0220bcbc
extern "C" ARM void func_ov031_0220bcbc(unsigned short* arg0, unsigned short* arg1, unsigned short* arg2, int arg3) {
    int var0 = func_ov031_0220bb24(arg1, arg3);
    int var1 = func_ov031_0220bb24(arg2, arg3);
    int var2 = var0;
    if (var2 < var1) var2 = var1;
    int var3;
    int var4;
    if (var2 != arg3) var2++;
    var3 = var4 = 0;
    while (var3 < var2 || (var3 < arg3 && var4 != 0)) {
        int var5 = arg1[var3] - arg2[var3] + var4;
        arg0[var3] = var5;
        var4 = var5 >> 16;
        var3++;
    }
    if (arg0 == arg1 || arg0 == arg2) return;
    VectorizedMemset(arg0 + var3, 0, (arg3 - var3) * 2);
}
