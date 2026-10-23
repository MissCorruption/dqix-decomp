#include <globaldefs.h>

// USA: func_020d6c9c
extern "C" ARM unsigned short func_020d6c9c(void) {
    volatile unsigned short* var0 = (volatile unsigned short*)0x4000208;
    unsigned short var1 = *var0;
    *var0 = 1;
    return var1;
}
