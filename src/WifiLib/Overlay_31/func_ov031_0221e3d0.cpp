#include <globaldefs.h>

// USA: func_ov031_0221e3d0
extern "C" THUMB void func_ov031_0221e3d0(int arg0, signed char* arg1, int arg2, const signed char* arg3, int arg4) {
    int var0 = arg2 / 2;
    int var1 = arg0 % arg4;
    int var2 = 0;
    if (var2 < var0) {
        do {
            arg1[var2] = var2;
            arg1[var2] ^= arg3[var1++];
            if (var1 >= arg4) var1 = 0;
            ++var2;
        } while (var2 < var0);
    }
}
