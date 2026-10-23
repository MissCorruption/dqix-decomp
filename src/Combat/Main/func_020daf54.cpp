#include <globaldefs.h>

// USA: func_020daf54
extern "C" ARM int func_020daf54(void) {
    volatile unsigned int* var0 = (volatile unsigned int*)0x4001000;
    return (*var0 & 0x1f00) >> 8;
}
