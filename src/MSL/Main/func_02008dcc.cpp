#include <globaldefs.h>

extern "C" double func_020085cc(double arg0, double arg1, int arg2);
extern "C" int func_02007028(double arg0, double* arg1);
extern "C" double func_020076f0(double arg0, double arg1);

// USA: func_02008dcc
extern "C" ARM double func_02008dcc(double arg0) {
    double var0[2];
    double var1 = 0.0;
    int var2;
    int var3;

    var3 = ((int*)&arg0)[1];

    var3 &= 0x7fffffff;
    if (var3 <= 0x3fe921fb) {
        return func_020076f0(arg0, var1);
    } else if (var3 >= 0x7ff00000) {
        return arg0 - arg0;
    } else {
        var2 = func_02007028(arg0, var0);
        switch (var2 & 3) {
        case 0:
            return func_020076f0(var0[0], var0[1]);
        case 1:
            return -func_020085cc(var0[0], var0[1], 1);
        case 2:
            return -func_020076f0(var0[0], var0[1]);
        default:
            return func_020085cc(var0[0], var0[1], 1);
        }
    }
}
