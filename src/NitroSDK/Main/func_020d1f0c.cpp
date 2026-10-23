#include <globaldefs.h>

extern "C" int func_020d217c(int arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_020d2960(int arg0);

// USA: func_020d1f0c
extern "C" ARM int func_020d1f0c(int arg0, int arg1, int arg2, int arg3) {
    int var0;
    unsigned int var1 = arg2;
    for (var0 = 0; var0 < 8 && var1 != 0; var0++, var1 >>= 1) {
        if (var1 & 1) {
            func_020d2960(var0);
        }
    }
    return func_020d217c(0xd, arg0, arg1, arg2, arg3);
}
