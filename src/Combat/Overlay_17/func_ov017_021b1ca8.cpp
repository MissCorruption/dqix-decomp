#include <globaldefs.h>

// USA: func_ov017_021b1ca8
extern "C" ARM int func_ov017_021b1ca8(int arg0) {
    volatile unsigned short* var0 = (volatile unsigned short*)0x4000304;
    int var1 = (*var0 & ~0x8000) | (arg0 << 15);
    *var0 = var1;
    return var1;
}
