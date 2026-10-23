#include <globaldefs.h>

#include "std_library_functions.h"

// USA: func_0206dfe8
extern "C" ARM void func_0206dfe8(void *arg0, int arg1, int arg2) {
    int var0  = arg1 / 8 + 1;
    int var1 = 8 - arg1 % 8;
    int var2  = arg2 - var1;
    int var3 = var2 / 8;
    int var4  = var2 % 8;
    if (var3 > 0) {
        memset((unsigned char *) arg0 + 0x8c + var0, 0, var3);
    }
    int var5         = var0 + var3;
    unsigned char *var6 = (unsigned char *) arg0 + 0x8c;
    var6[var5] >>= var4;
    var6[var5] <<= var4;
    var6[var0 - 1] <<= var1;
    var6[var0 - 1] >>= var1;
}
