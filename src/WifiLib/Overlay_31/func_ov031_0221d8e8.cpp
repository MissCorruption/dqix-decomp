#include <globaldefs.h>

// USA: func_ov031_0221d8e8
extern "C" THUMB unsigned int func_ov031_0221d8e8(unsigned char *arg0, int arg1) {
    unsigned int var0 = 0;
    unsigned char *var1 = arg0 + (arg1 - 1);
    int var2 = 0;
    if (arg1 > 0) {
        do {
            var0 = (var0 << 8) + *var1--;
            var2++;
        } while (var2 < arg1);
    }
    return var0;
}
