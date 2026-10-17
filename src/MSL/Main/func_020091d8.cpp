#include <globaldefs.h>

extern "C" int func_0200aa74(double x);
extern "C" double func_02008da4(double x, double y);

static const double two54 = 1.80143985094819840000e+16;
static const double twom54 = 5.55111512312578270212e-17;
static const double big = 1.0e+300;
static const double tiny = 1.0e-300;

// USA: func_020091d8  (semantic: ldexp)
extern "C" ARM double func_020091d8(double x, int n) {
    int k, hx, lx;
    if (!(func_0200aa74(x) > 2) || x == 0.0) {
        return x;
    }

    hx = ((int*)&x)[1];
    lx = ((int*)&x)[0];
    k = (hx & 0x7ff00000) >> 20;
    if (k == 0) {
        if ((lx | (hx & 0x7fffffff)) == 0) {
            return x;
        }
        x *= two54;
        hx = ((int*)&x)[1];
        k = ((hx & 0x7ff00000) >> 20) - 54;
        if (n < -50000) {
            return tiny * x;
        }
    }
    if (k == 0x7ff) {
        return x + x;
    }
    k = k + n;
    if (k > 0x7fe) {
        return big * func_02008da4(big, x);
    }
    if (k > 0) {
        ((int*)&x)[1] = (hx & 0x800fffff) | (k << 20);
        return x;
    }
    if (k <= -54) {
        if (n > 50000) {
            return big * func_02008da4(big, x);
        } else {
            return tiny * func_02008da4(tiny, x);
        }
    }
    k += 54;
    ((int*)&x)[1] = (hx & 0x800fffff) | (k << 20);
    return x * twom54;
}
