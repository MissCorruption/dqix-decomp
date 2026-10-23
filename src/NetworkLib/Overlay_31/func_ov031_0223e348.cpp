#include <globaldefs.h>

extern int data_ov031_02290dc8[3];
extern void (*data_ov031_02290dc0)(void*);

// USA: func_ov031_0223e348
extern "C" ARM void func_ov031_0223e348(void) {
    int var0 = 0;
    do {
        int var1 = data_ov031_02290dc8[var0];
        if (var1 != 0) {
            data_ov031_02290dc0((void*)var1);
            data_ov031_02290dc8[var0] = 0;
        }
        var0++;
    } while (var0 < 3);
}
