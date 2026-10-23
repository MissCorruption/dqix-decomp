#include <globaldefs.h>

// USA: func_020d1c24
extern "C" ARM void func_020d1c24(unsigned int* arg0, unsigned int arg1) {
    unsigned int var0;
    unsigned int var1;
    unsigned int var2;
    var1 = 0;
    do {
        var0 = var1;
        var2 = 0;
        do {
            if (var0 & 1) {
                var0 = arg1 ^ (var0 >> 1);
            } else {
                var0 = var0 >> 1;
            }
            var2++;
        } while (var2 < 8);
        arg0[var1] = var0;
        var1++;
    } while (var1 < 0x100);
}
