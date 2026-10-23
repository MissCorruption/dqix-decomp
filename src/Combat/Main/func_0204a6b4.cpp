#include <globaldefs.h>

// USA: func_0204a6b4
extern "C" ARM int func_0204a6b4(int arg0) {
    volatile unsigned short* var0 = (volatile unsigned short*)0x400000a;
    int var1 = (*var0 & ~3) | arg0;
    *var0 = var1;
    return var1;
}
