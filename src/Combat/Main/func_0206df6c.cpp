#include <globaldefs.h>

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

// USA: func_0206df6c
extern "C" ARM void func_0206df6c(void* arg0, unsigned char* arg1, int arg2, int arg3) {
    int var0 = arg2 / 8;
    unsigned char var1 = 1 << (arg2 % 8);
    unsigned int var2 = arg1[var0];
    if (arg3 != 0) {
        var2 |= var1;
    } else {
        var2 &= ~var1;
    }
    arg1[var0] = var2;
}
