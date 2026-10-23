#include <globaldefs.h>

// USA: func_020e2ab0
extern "C" ARM void func_020e2ab0(int arg0, int arg1) {
    volatile unsigned short* var0 = (volatile unsigned short*)0x4001048;
    int var1 = (*var0 & ~0x3f) | arg0;
    if (arg1) var1 |= 0x20;
    *var0 = var1;
}
