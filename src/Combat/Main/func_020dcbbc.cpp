#include <globaldefs.h>

extern "C" int func_020dc920(int arg0, int arg1, int arg2, int arg3);

// USA: func_020dcbbc
extern "C" ARM int func_020dcbbc(unsigned char* arg0, int arg1, int arg2, int arg3, int arg4) {
    bool var0 = false;
    for (signed char var1 = 0; var1 < arg1; var1++) {
        var0 = var0 | func_020dc920(arg0[var1], arg2, arg3, arg4);
    }
    return var0;
}
