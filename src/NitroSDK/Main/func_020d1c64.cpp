#include <globaldefs.h>

// USA: func_020d1c64
extern "C" ARM void func_020d1c64(const unsigned int* arg0, unsigned int* arg1, const unsigned char* arg2, unsigned int arg3) {
    unsigned int var0 = *arg1;
    unsigned int var1 = 0;
    if (var1 < arg3) {
        do {
            var0 = arg0[(unsigned char)(var0 ^ *arg2++)] ^ (var0 >> 8);
            var1++;
        } while (var1 < arg3);
    }
    *arg1 = var0;
}
