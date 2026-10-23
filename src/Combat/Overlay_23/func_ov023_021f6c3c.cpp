#include <globaldefs.h>

#pragma opt_arithtransformation off

// USA: func_ov023_021f6c3c
extern "C" ARM void func_ov023_021f6c3c(void* arg0, unsigned int arg1, unsigned int arg2,
                                unsigned int arg3) {
    if (arg2 >= 0x80) {
        return;
    }
    unsigned short var0 = 0;
    while (var0 < arg3) {
        unsigned int* var1 = (unsigned int*)((char*)arg0 + 8 + (arg1 << 4));
        unsigned int var2 = var1[arg2 >> 2];
        unsigned int var3 = ~(1u << (arg2 & 3));
        var1[arg2 >> 2] = var2 & var3;
        arg2++;
        var0++;
    }
}
