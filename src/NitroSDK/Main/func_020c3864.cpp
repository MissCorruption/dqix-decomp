#include <globaldefs.h>

// USA: func_020c3864
extern "C" ARM int func_020c3864(int arg0) {
    volatile unsigned short* var0 = (volatile unsigned short*)0x4000004;
    int var1 = *var0 & 8;
    if (arg0 != 0) {
        *var0 |= 8;
    } else {
        *var0 &= ~8;
    }
    return var1;
}
