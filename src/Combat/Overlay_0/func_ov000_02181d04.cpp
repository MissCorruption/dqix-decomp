#include <globaldefs.h>

extern "C" int func_ov000_0215ec1c(int arg0, short* arg1, int arg2, int arg3);

// USA: func_ov000_02181d04
extern "C" ARM void func_ov000_02181d04(int arg0, int arg1, int* arg2) {
    short var0[12];
    arg0 = func_ov000_0215ec1c(arg0, var0, 12, 0);
    for (int var1 = 0; var1 < arg0; var1++) {
        arg2[var1] = var0[var1];
    }
}
