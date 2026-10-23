#include <globaldefs.h>

// USA: func_ov031_0221e31c
extern "C" THUMB void func_ov031_0221e31c(int, unsigned int* arg1) {
    unsigned int var0;
    int var1;
    int var2;
    var1 = 0;
    do {
        var0 = var1;
        var2 = 0;
        do {
            if (var0 & 1) var0 = (var0 >> 1) ^ 0xEDB88320;
            else var0 >>= 1;
            var2++;
        } while (var2 < 8);
        *arg1++ = var0;
        var1++;
    } while (var1 < 256);
}
