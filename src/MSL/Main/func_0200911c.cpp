#include <globaldefs.h>

extern "C" double _dmul(double a, double b);

// USA: func_0200911c
extern "C" ARM double func_0200911c(double arg0, int* arg1, int arg2) {
    int var0 = ((int*)&arg0)[1];
    int var1 = ((int*)&arg0)[0];
    int var2 = var0 & 0x7fffffff;
    *arg1 = 0;

    if (var2 >= 0x7ff00000 || (var2 | var1) == 0) {
        return arg0;
    }

    if (var2 < 0x100000) {
        arg0 = _dmul(arg0, 18014398509481984.0);
        *arg1 = -0x36;
        var0 = ((int*)&arg0)[1];
        var2 = var0 & 0x7fffffff;
    }

    *arg1 += -0x3fe + (var2 >> 20);
    ((int*)&arg0)[1] = (var0 & 0x800fffff) | 0x3fe00000;
    return arg0;
}
