#include <globaldefs.h>

extern "C" ARM double _dadd(double arg0, double arg1);
extern "C" ARM double _dsub(double arg0, double arg1);
extern "C" ARM double _ddiv(double arg0, double arg1);
extern "C" ARM double func_02008f3c(double arg0);
extern "C" ARM double func_02008848(double arg0);

// USA: func_02005ac4
extern "C" ARM double func_02005ac4(double arg0, double arg1) {
    int var0 = ((int*)&arg1)[1];
    int var1 = ((int*)&arg0)[1];
    int var2 = var1 & 0x7fffffff;
    unsigned var3 = ((unsigned*)&arg1)[0];
    int var4 = var0 & 0x7fffffff;
    unsigned var5 = ((int*)&arg0)[0];

    if (((var4 | ((var3 | -var3) >> 31)) > 0x7ff00000) ||
        ((var2 | ((var5 | -var5) >> 31)) > 0x7ff00000)) {
        return _dadd(arg1, arg0);
    }
    if (((var0 - 0x3ff00000) | (int)var3) == 0) return func_02008848(arg0);

    int var6 = ((var1 >> 31) & 1) | ((var0 >> 30) & 2);

    if ((var2 | var5) == 0) {
        switch (var6) {
            case 0:
            case 1: return arg0;
            case 2: return 3.1415926535897931160e+00 + 1.0e-300;
            case 3: return -3.1415926535897931160e+00 - 1.0e-300;
        }
    }
    if ((var4 | var3) == 0) {
        return (var1 < 0) ? -1.5707963267948965580e+00 - 1.0e-300
                         : 1.5707963267948965580e+00 + 1.0e-300;
    }

    if (var4 == 0x7ff00000) {
        if (var2 == 0x7ff00000) {
            switch (var6) {
                case 0: return 7.8539816339744827900e-01 + 1.0e-300;
                case 1: return -7.8539816339744827900e-01 - 1.0e-300;
                case 2: return 3.0 * 7.8539816339744827900e-01 + 1.0e-300;
                case 3: return -3.0 * 7.8539816339744827900e-01 - 1.0e-300;
            }
        } else {
            switch (var6) {
                case 0: return 0.0;
                case 1: return -0.0;
                case 2: return 3.1415926535897931160e+00 + 1.0e-300;
                case 3: return -3.1415926535897931160e+00 - 1.0e-300;
            }
        }
    }
    if (var2 == 0x7ff00000) {
        return (var1 < 0) ? -1.5707963267948965580e+00 - 1.0e-300
                         : 1.5707963267948965580e+00 + 1.0e-300;
    }

    int var7 = (var2 - var4) >> 20;
    double var8;
    if (var7 > 60) {
        var8 = 1.5707963267948965580e+00 + 0.5 * 1.2246467991473531772e-16;
    } else if (var0 < 0 && var7 < -60) {
        var8 = 0.0;
    } else {
        var8 = func_02008848(func_02008f3c(_ddiv(arg0, arg1)));
    }

    switch (var6) {
        case 0: return var8;
        case 1: {
            int *var9 = (int*)&var8 + 1;
            *var9 = *var9 ^ 0x80000000;
            return var8;
        }
        case 2: return _dsub(3.1415926535897931160e+00,
                             _dsub(var8, 1.2246467991473531772e-16));
        default: return _dsub(_dsub(var8, 1.2246467991473531772e-16),
                              3.1415926535897931160e+00);
    }
}
