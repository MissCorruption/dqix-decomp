#include <globaldefs.h>

// USA: func_020c3984
extern "C" ARM void func_020c3984(unsigned int arg0) {
    volatile unsigned int* var0 = (volatile unsigned int*)0x4001000;
    *var0 = (*var0 & ~7) | arg0;
}
