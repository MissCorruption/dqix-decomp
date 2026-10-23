#include <globaldefs.h>

// USA: func_020b2054
extern "C" ARM int func_020b2054(int arg0, int arg1) {
    const unsigned int var0 = (unsigned int)arg0;
    const unsigned int var1 = (unsigned int)arg1;
    const unsigned int var2 = var0 / 8;
    const unsigned int var3 = var1 / 8;
    const unsigned int var4 = (var0 & 4) >> 2;
    const unsigned int var5 = (var1 & 4) >> 2;
    const unsigned int var6 = ((var0 & 2) >> 1) + (var0 & 1);
    const unsigned int var7 = ((var1 & 2) >> 1) + (var1 & 1);
    int var8 = 0;

    var8 += var2 * var3;
    var8 += (var6 * 2 + var4) * var3;
    var8 += (var7 * 2 + var5) * var2;
    var8 += (var6 + var4) * (var7 + var5);

    return var8;
}
