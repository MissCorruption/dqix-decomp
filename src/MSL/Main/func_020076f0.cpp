#include <globaldefs.h>

static const double one = 1.00000000000000000000e+00;
static const double C1 = 4.16666666666666019037e-02;
static const double C2 = -1.38888888888741095749e-03;
static const double C3 = 2.48015872894767294178e-05;
static const double C4 = -2.75573143513906633035e-07;
static const double C5 = 2.08757232129817482790e-09;
static const double C6 = -1.13596475577881948265e-11;

// USA: func_020076f0
extern "C" ARM double func_020076f0(double arg0, double arg1) {
    double var0, var1, var2, var3, var4;
    int var5;

    var5 = ((int*)&arg0)[1] & 0x7fffffff;
    if (var5 < 0x3e400000) {
        if ((int)arg0 == 0) {
            return one;
        }
    }
    var2 = arg0 * arg0;
    var3 = var2 * (C1 + var2 * (C2 + var2 * (C3 + var2 * (C4 + var2 * (C5 + var2 * C6)))));
    if (var5 < 0x3fd33333) {
        return one - (0.5 * var2 - (var2 * var3 - arg0 * arg1));
    } else {
        if (var5 > 0x3fe90000) {
            var4 = 0.28125;
        } else {
            ((int*)&var4)[1] = var5 - 0x00200000;
            ((int*)&var4)[0] = 0;
        }
        var1 = 0.5 * var2 - var4;
        var0 = one - var4;
        return var0 - (var1 - (var2 * var3 - arg0 * arg1));
    }
}
