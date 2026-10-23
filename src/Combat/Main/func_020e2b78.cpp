#include <globaldefs.h>

// USA: func_020e2b78
extern "C" ARM void func_020e2b78(int arg0) {
    volatile unsigned int* var0 = (volatile unsigned int*)0x4001000;
    *var0 = (*var0 & ~0xe000) | (arg0 << 13);
}
