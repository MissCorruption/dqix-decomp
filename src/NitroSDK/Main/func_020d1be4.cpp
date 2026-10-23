#include <globaldefs.h>

// USA: func_020d1be4
extern "C" ARM void func_020d1be4(const unsigned short* arg0, unsigned short* arg1, const unsigned char* arg2, unsigned int arg3) {
    unsigned int var0 = *arg1;
    unsigned int var1 = 0;
    if (var1 < arg3) {
        do {
            var0 = arg0[((var0 ^ *arg2++) << 24) >> 24] ^ (var0 >> 8);
            var1++;
        } while (var1 < arg3);
    }
    *arg1 = (unsigned short)var0;
}
