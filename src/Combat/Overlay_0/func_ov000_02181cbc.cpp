#include <globaldefs.h>

extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);

// USA: func_ov000_02181cbc
extern "C" ARM void func_ov000_02181cbc(int arg0, int arg1, int* arg2) {
    short var0[4];
    arg0 = func_ov000_0215e9fc(arg0, var0, 4, 0);
    for (int var1 = 0; var1 < arg0; var1++) {
        arg2[var1] = var0[var1];
    }
}
