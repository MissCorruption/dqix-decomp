#include <globaldefs.h>

static const double
half = 5.00000000000000000000e-01,
S1 = -1.66666666666666324348e-01,
S2 = 8.33333333332248946124e-03,
S3 = -1.98412698298579493134e-04,
S4 = 2.75573137070700676789e-06,
S5 = -2.50507602534068634195e-08,
S6 = 1.58969099521155010221e-10;

// USA: func_020085cc
extern "C" ARM double func_020085cc(double arg0, double arg1, int arg2) {
    double var0, var1, var2;
    int var3;

    var3 = ((int*)&arg0)[1] & 0x7fffffff;
    if (var3 < 0x3e400000) {
        if ((int)arg0 == 0) return arg0;
    }
    var0 = arg0 * arg0;
    var2 = var0 * arg0;
    var1 = S2 + var0 * (S3 + var0 * (S4 + var0 * (S5 + var0 * S6)));
    if (arg2 == 0) return arg0 + var2 * (S1 + var0 * var1);
    else return arg0 - ((var0 * (half * arg1 - var2 * var1) - arg1) - var2 * S1);
}
