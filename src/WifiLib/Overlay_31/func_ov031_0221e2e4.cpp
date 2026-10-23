#include <globaldefs.h>

extern "C" void func_ov031_0221e31c(int, unsigned int*);

// USA: func_ov031_0221e2e4
extern "C" THUMB unsigned int func_ov031_0221e2e4(unsigned int arg0, const unsigned char* arg1, int arg2, int arg3, unsigned int* arg4) {
    if (arg3 == 0) func_ov031_0221e31c(arg3, arg4);
    int var0 = 0;
    if (arg2 > 0) do {
        arg0 = (arg0 >> 8) ^ arg4[(unsigned char)(arg1[var0] ^ arg0)];
        var0++;
    } while (var0 < arg2);
    return arg0;
}
