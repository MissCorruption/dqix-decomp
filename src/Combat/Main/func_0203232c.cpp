#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int _s32_div_f(int num, int den);

// USA: func_0203232c
extern "C" ARM void func_0203232c(int *arg0, int arg1) {
    for (int var0 = 0; var0 < arg1 / 2; var0++) {
        int var1 = rand() % arg1;
        int var2 = arg0[var0];
        arg0[var0] = arg0[var1];
        arg0[var1] = var2;
    }
}
