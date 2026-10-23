#include <globaldefs.h>

// USA: func_020daf20
extern "C" ARM void func_020daf20(int arg0) {
    volatile unsigned int* var0 = (volatile unsigned int*)0x4001000;
    *var0 = (*var0 & ~0x1f00) | (arg0 << 8);
}
