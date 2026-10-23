#include <globaldefs.h>

extern "C" int func_0200aa74(double arg0);
extern "C" double func_02008da4(double arg0, double arg1);

static const double two54 = 1.80143985094819840000e+16;
static const double twom54 = 5.55111512312578270212e-17;
static const double big = 1.0e+300;
static const double tiny = 1.0e-300;

// USA: func_020091d8
extern "C" ARM double func_020091d8(double arg0, int arg1) {
    int var0, var1, var2;
    if (!(func_0200aa74(arg0) > 2) || arg0 == 0.0) {
        return arg0;
    }

    var1 = ((int*)&arg0)[1];
    var2 = ((int*)&arg0)[0];
    var0 = (var1 & 0x7ff00000) >> 20;
    if (var0 == 0) {
        if ((var2 | (var1 & 0x7fffffff)) == 0) {
            return arg0;
        }
        arg0 *= two54;
        var1 = ((int*)&arg0)[1];
        var0 = ((var1 & 0x7ff00000) >> 20) - 54;
        if (arg1 < -50000) {
            return tiny * arg0;
        }
    }
    if (var0 == 0x7ff) {
        return arg0 + arg0;
    }
    var0 = var0 + arg1;
    if (var0 > 0x7fe) {
        return big * func_02008da4(big, arg0);
    }
    if (var0 > 0) {
        ((int*)&arg0)[1] = (var1 & 0x800fffff) | (var0 << 20);
        return arg0;
    }
    if (var0 <= -54) {
        if (arg1 > 50000) {
            return big * func_02008da4(big, arg0);
        } else {
            return tiny * func_02008da4(tiny, arg0);
        }
    }
    var0 += 54;
    ((int*)&arg0)[1] = (var1 & 0x800fffff) | (var0 << 20);
    return arg0 * twom54;
}
