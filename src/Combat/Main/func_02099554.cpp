#include <globaldefs.h>

// USA: func_02099554
extern "C" ARM void func_02099554(unsigned short* arg0, unsigned short arg1) {
    int var0;
    int var1;
    for (var0 = 0; var0 < 0x18; var0++) {
        if (arg0[var0] == 0) {
            arg0[var0] = arg1;
            return;
        }
    }
    for (var1 = 0; var1 < 0x17; var1++) {
        arg0[var1] = arg0[var1 + 1];
    }
    arg0[0x17] = arg1;
}
