#include <globaldefs.h>
#include "NitroSDK/Cache.h"

// USA: func_0203b97c
extern "C" ARM void func_0203b97c(void*, unsigned short* arg1, int arg2, int arg3, int arg4, int arg5, const unsigned short* arg6, unsigned int arg7, unsigned int arg8, unsigned short arg9) {
    int var0;
    unsigned int var1;
    int var2;
    if (arg2 <= arg4 || arg3 <= arg5) return;
    var1 = (unsigned int)arg2 >> 5;
    for (unsigned int var3 = 0; var3 < arg8; var3++) {
        var2 = arg5 + var3;
        for (unsigned int var4 = 0; var4 < arg7; var4++) {
            var0 = (var2 / 32) * var1;
            int var5 = arg4 + var4;
            if (var5 >= 0 && var2 >= 0 && arg2 > var5 && arg3 > var2) {
                int var6 = var0 + var5 / 32;
                unsigned int var7 = var5 + (var2 << 5) + var6 * 0x3e0;
                unsigned short var8 = arg6[var4 + var3 * arg7];
                arg1[var7] = var8;
                arg1[var7] += arg9;
            }
        }
    }
    CleanInvalidateCacheRange(arg1, arg3 * (arg2 << 1));
}
