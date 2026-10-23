#include <globaldefs.h>

// USA: func_020d1b68
extern "C" ARM void func_020d1b68(const unsigned char* arg0, unsigned char* arg1, const unsigned char* arg2, unsigned int arg3) {
    unsigned char var0 = *arg1;
    unsigned int var1 = 0;
    if (var1 < arg3) {
        do {
            var0 = arg0[(unsigned char)(var0 ^ *arg2++)];
            var1++;
        } while (var1 < arg3);
    }
    *arg1 = var0;
}
