#include <globaldefs.h>

// USA: func_ov031_0221e404
extern "C" THUMB void func_ov031_0221e404(const signed char* arg0, unsigned char* arg1, int arg2) {
    int var0;
    int var1 = arg2 / 2;
    var0 = 0;
    if (var0 < var1) {
        unsigned char* var2 = arg1 + var1;
        do {
            *var2 ^= arg0[var0];
            var0++;
            var2++;
        } while (var0 < var1);
    }
}
