#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int _s32_div_f(int a, int b);
extern const char* data_ov025_021ef520[];

// USA: func_ov025_021e278c
extern "C" ARM void func_ov025_021e278c(int arg0, char* arg1) {
    int var0 = _s32_div_f(arg0, 1000000);
    int var1 = arg0 - var0 * 1000000;
    sprintf(arg1, data_ov025_021ef520[var0], var1);
}
