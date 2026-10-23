#include <globaldefs.h>

static const double huge = 1.0e300;

// USA: func_02008f5c
extern "C" ARM double func_02008f5c(double arg0) {
    int var0, var1, var2;
    unsigned int var3, var4;
    var0 = ((int*)&arg0)[1];
    var1 = ((int*)&arg0)[0];
    var2 = ((var0 >> 20) & 0x7ff) - 0x3ff;
    if (var2 < 20) {
        if (var2 < 0) {
            if (huge + arg0 > 0.0) {
                if (var0 >= 0) {
                    var0 = var1 = 0;
                } else if (((var0 & 0x7fffffff) | var1) != 0) {
                    var0 = 0xbff00000;
                    var1 = 0;
                }
            }
        } else {
            var3 = (0x000fffff) >> var2;
            if (((var0 & var3) | var1) == 0) {
                return arg0;
            }
            if (huge + arg0 > 0.0) {
                if (var0 < 0) {
                    var0 += (0x00100000) >> var2;
                }
                var0 &= (~var3);
                var1 = 0;
            }
        }
    } else if (var2 > 51) {
        if (var2 == 0x400) {
            return arg0 + arg0;
        } else {
            return arg0;
        }
    } else {
        var3 = ((unsigned int)(0xffffffff)) >> (var2 - 20);
        if ((var1 & var3) == 0) {
            return arg0;
        }
        if (huge + arg0 > 0.0) {
            if (var0 < 0) {
                if (var2 == 20) {
                    var0 += 1;
                } else {
                    var4 = var1 + (1 << (52 - var2));
                    if (var4 < var1) {
                        var0 += 1;
                    }
                    var1 = var4;
                }
            }
            var1 &= (~var3);
        }
    }
    ((int*)&arg0)[1] = var0;
    ((int*)&arg0)[0] = var1;
    return arg0;
}
