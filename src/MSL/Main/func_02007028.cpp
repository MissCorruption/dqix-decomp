#include <globaldefs.h>

extern "C" double func_02008f3c(double arg0);
extern "C" int func_02007a10(double*, double*, int, int, int, const int*);

extern const int data_020e6aec[];
extern const int data_020e6b6c[];

static const double zero = 0.00000000000000000000e+00;
static const double half = 5.00000000000000000000e-01;
static const double two24 = 1.67772160000000000000e+07;
static const double invpio2 = 6.36619772367581382433e-01;
static const double pio2_1 = 1.57079632673412561417e+00;
static const double pio2_1t = 6.07710050650619224932e-11;
static const double pio2_2 = 6.07710050630396597660e-11;
static const double pio2_2t = 2.02226624879595063154e-21;
static const double pio2_3 = 2.02226624871116645580e-21;
static const double pio2_3t = 8.47842766036889956997e-32;

// USA: func_02007028
extern "C" ARM int func_02007028(double arg0, double* arg1) {
    double var0, var1, var2, var3, var4;
    double var5[3];
    int var6, var7, var8, var9, var10, var11, var12;

    var12 = ((int*)&arg0)[1];
    var11 = var12 & 0x7fffffff;
    if (var11 <= 0x3fe921fb) {
        arg1[0] = arg0;
        arg1[1] = 0;
        return 0;
    }
    if (var11 < 0x4002d97c) {
        if (var12 > 0) {
            var0 = arg0 - pio2_1;
            if (var11 != 0x3ff921fb) {
                arg1[0] = var0 - pio2_1t;
                arg1[1] = (var0 - arg1[0]) - pio2_1t;
            } else {
                var0 -= pio2_2;
                arg1[0] = var0 - pio2_2t;
                arg1[1] = (var0 - arg1[0]) - pio2_2t;
            }
            return 1;
        } else {
            var0 = arg0 + pio2_1;
            if (var11 != 0x3ff921fb) {
                arg1[0] = var0 + pio2_1t;
                arg1[1] = (var0 - arg1[0]) + pio2_1t;
            } else {
                var0 += pio2_2;
                arg1[0] = var0 + pio2_2t;
                arg1[1] = (var0 - arg1[0]) + pio2_2t;
            }
            return -1;
        }
    }
    if (var11 <= 0x413921fb) {
        var2 = func_02008f3c(arg0);
        var10 = (int)(var2 * invpio2 + half);
        var4 = (double)var10;
        var3 = var2 - var4 * pio2_1;
        var1 = var4 * pio2_1t;
        if (var10 < 32 && var11 != data_020e6aec[var10 - 1]) {
            arg1[0] = var3 - var1;
        } else {
            var8 = var11 >> 20;
            arg1[0] = var3 - var1;
            var7 = var8 - ((((int*)arg1)[1] >> 20) & 0x7ff);
            if (var7 > 16) {
                var2 = var3;
                var1 = var4 * pio2_2;
                var3 = var2 - var1;
                var1 = var4 * pio2_2t - ((var2 - var3) - var1);
                arg1[0] = var3 - var1;
                var7 = var8 - ((((int*)arg1)[1] >> 20) & 0x7ff);
                if (var7 > 49) {
                    var2 = var3;
                    var1 = var4 * pio2_3;
                    var3 = var2 - var1;
                    var1 = var4 * pio2_3t - ((var2 - var3) - var1);
                    arg1[0] = var3 - var1;
                }
            }
        }
        arg1[1] = (var3 - arg1[0]) - var1;
        if (var12 < 0) {
            arg1[0] = -arg1[0];
            arg1[1] = -arg1[1];
            return -var10;
        } else {
            return var10;
        }
    }
    if (var11 >= 0x7ff00000) {
        arg1[0] = arg1[1] = arg0 - arg0;
        return 0;
    }
    ((int*)&var0)[0] = ((int*)&arg0)[0];
    var6 = (var11 >> 20) - 1046;
    ((int*)&var0)[1] = var11 - (var6 << 20);
    for (var7 = 0; var7 < 2; var7++) {
        var5[var7] = (double)((int)(var0));
        var0 = (var0 - var5[var7]) * two24;
    }
    var5[2] = var0;
    var9 = 3;
    while (var5[var9 - 1] == zero) {
        var9--;
    }
    var10 = func_02007a10(var5, arg1, var6, var9, 2, data_020e6b6c);
    if (var12 < 0) {
        arg1[0] = -arg1[0];
        arg1[1] = -arg1[1];
        return -var10;
    }
    return var10;
}
