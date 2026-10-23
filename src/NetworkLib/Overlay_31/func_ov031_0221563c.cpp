#include <globaldefs.h>

// USA: func_ov031_0221563c
extern "C" ARM unsigned int func_ov031_0221563c(int arg0) {
    unsigned int var0 = 0xffffffff;
    int var1 = 0;
    int var2 = 0x20 - arg0;
    if (var2 > 0) {
        do {
            var1++;
            var0 = var0 << 1;
        } while (var1 < var2);
    }
    return ((var0 >> 24) & 0xff) | ((var0 >> 8) & 0xff00) | ((var0 << 8) & 0xff0000) | ((var0 << 24) & 0xff000000);
}
