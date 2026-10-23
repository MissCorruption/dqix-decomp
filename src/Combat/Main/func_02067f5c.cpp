#include <globaldefs.h>

// USA: func_02067f5c
extern "C" ARM void func_02067f5c(signed char* arg0, int arg1) {
    if (arg0 == NULL) {
        return;
    }
    int var0 = 0;
    while (var0 < arg1) {
        int var1 = *arg0;
        if (var1 == 0) {
            return;
        }
        if (var1 >= 0x61 && var1 <= 0x7a) {
            var1 = var1 - 0x20;
        }
        *arg0 = (signed char)var1;
        arg0++;
        var0++;
    }
}
