#include <globaldefs.h>

extern "C" double func_02008f3c(double arg0);

static const double data_020e6cc4[] = {
    2.26987774529616870924e-17,
    3.06161699786838301793e-17,
    1.39033110312309984516e-17,
    6.12323399573676603587e-17,
};

static const double data_020e6ce4[] = {
    4.63647609000806093515e-01,
    7.85398163397448278999e-01,
    9.82793723247329054082e-01,
    1.57079632679489655800e+00,
};

extern const double data_020e6d04[];

// USA: func_02008848
extern "C" ARM double func_02008848(double arg0) {
    double var0, var1, var2, var3;
    int var4, var5, var6;

    var5 = ((int*)&arg0)[1];
    var4 = var5 & 0x7fffffff;
    if (var4 >= 0x44100000) {
        if (var4 > 0x7ff00000 || (var4 == 0x7ff00000 && (((int*)&arg0)[0] != 0)))
            return arg0 + arg0;
        if (var5 > 0)
            return data_020e6ce4[3] + data_020e6cc4[3];
        else
            return -data_020e6ce4[3] - data_020e6cc4[3];
    }
    if (var4 < 0x3fdc0000) {
        if (var4 < 0x3e200000) {
            if (1.0e300 + arg0 > 1.0)
                return arg0;
        }
        var6 = -1;
    } else {
        arg0 = func_02008f3c(arg0);
        if (var4 < 0x3ff30000) {
            if (var4 < 0x3fe60000) {
                var6 = 0;
                arg0 = (2.0 * arg0 - 1.0) / (2.0 + arg0);
            } else {
                var6 = 1;
                arg0 = (arg0 - 1.0) / (arg0 + 1.0);
            }
        } else {
            if (var4 < 0x40038000) {
                var6 = 2;
                arg0 = (arg0 - 1.5) / (1.0 + 1.5 * arg0);
            } else {
                var6 = 3;
                arg0 = -1.0 / arg0;
            }
        }
    }
    var3 = arg0 * arg0;
    var0 = var3 * var3;
    var1 = var3 * (data_020e6d04[0] + var0 * (data_020e6d04[2] + var0 * (data_020e6d04[4] + var0 * (data_020e6d04[6] + var0 * (data_020e6d04[8] + var0 * data_020e6d04[10])))));
    var2 = var0 * (data_020e6d04[1] + var0 * (data_020e6d04[3] + var0 * (data_020e6d04[5] + var0 * (data_020e6d04[7] + var0 * data_020e6d04[9]))));
    if (var6 < 0)
        return arg0 - arg0 * (var1 + var2);
    else {
        var3 = data_020e6ce4[var6] - ((arg0 * (var1 + var2) - data_020e6cc4[var6]) - arg0);
        return (var5 < 0) ? -var3 : var3;
    }
}
