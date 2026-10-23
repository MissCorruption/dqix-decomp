#include <globaldefs.h>

extern "C" ARM int func_020a35e0(unsigned char* arg0, unsigned char arg1);

// USA: func_020a3634
extern "C" ARM int func_020a3634(unsigned char* arg0, short* arg1) {
    int var0;
    int var1 = 0;
    for (var0 = 0; var0 < 4; var0++) {
        if (func_020a35e0(arg0, var0)) {
            arg1[var1] = var0;
            var1++;
        }
    }
    return var1;
}
