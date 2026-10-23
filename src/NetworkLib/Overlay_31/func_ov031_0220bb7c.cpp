#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" int func_ov031_0220bb24(unsigned short* arg0, int arg1);

// USA: func_ov031_0220bb7c
extern "C" ARM void func_ov031_0220bb7c(unsigned short* arg0, unsigned short* arg1, unsigned short* arg2, int arg3) {
    int var0 = func_ov031_0220bb24(arg1, arg3);
    int var1 = func_ov031_0220bb24(arg2, arg3);
    int var2 = var0;
    if (var2 < var1)
        var2 = var1;
    if (var2 != arg3)
        var2 = var2 + 1;
    int var3;
    unsigned int var4;
    var4 = 0;
    var3 = 0;
    if (var2 > 0) {
        do {
            unsigned int var5 = arg1[var3] + arg2[var3] + var4;
            arg0[var3] = (unsigned short)var5;
            var4 = var5 >> 16;
        } while (++var3 < var2);
    }
    if (arg0 == arg1 || arg0 == arg2)
        return;
    VectorizedMemset(arg0 + var3, 0, (arg3 - var3) * 2);
}
