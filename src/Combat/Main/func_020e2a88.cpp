#include <globaldefs.h>

// USA: func_020e2a88
extern "C" ARM void func_020e2a88(int arg0, int arg1) {
    volatile unsigned short* var0 = (volatile unsigned short*)0x4001048;
    int var1 = (*var0 & ~0x3f00) | (arg0 << 8);
    if (arg1) var1 |= 0x2000;
    *var0 = var1;
}
