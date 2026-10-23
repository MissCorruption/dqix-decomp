#include <globaldefs.h>
// USA: func_0207d9f4
extern "C" ARM void* func_0207d9f4(unsigned char *arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < 4; var0++) {
        unsigned char *var1 = arg0 + var0 * 12;
        if (*(signed char*)(var1 + arg1 + 8) == 1) return var1;
    }
    return NULL;
}
