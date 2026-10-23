#include <globaldefs.h>

// USA: func_ov025_021e1010
extern "C" ARM void* func_ov025_021e1010(unsigned char* arg0, int arg1, int arg2) {
    for (int var0 = 0; var0 < arg1; var0++) {
        unsigned char* var1 = arg0 + var0*0xc;
        if (arg2 == var1[0]) {
            return var1;
        }
    }
    return 0;
}
