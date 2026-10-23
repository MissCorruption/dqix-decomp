#include <globaldefs.h>

extern "C" double func_0200911c(double arg0, int* arg1);
extern "C" double func_020091d8(double arg0, int arg1);

// USA: func_0200aae4
extern "C" ARM double func_0200aae4(double arg0, int arg1) {
    int var0;
    double var1 = func_0200911c(arg0, &var0);
    var0 = var0 + arg1;
    return func_020091d8(var1, var0);
}
