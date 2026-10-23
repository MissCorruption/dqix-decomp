#include <globaldefs.h>

// USA: func_020daf3c
extern "C" ARM void func_020daf3c(int arg0) {
    volatile unsigned int* var0 = (volatile unsigned int*)0x4000000;
    *var0 = (*var0 & ~0x1f00) | (arg0 << 8);
}
