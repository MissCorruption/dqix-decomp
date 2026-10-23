#include <globaldefs.h>

// USA: func_ov017_021999e0
extern "C" ARM int func_ov017_021999e0(int arg0) {
    volatile unsigned short* var0 = (volatile unsigned short*)0x400000c;
    int var1 = (*var0 & ~3) | arg0;
    *var0 = var1;
    return var1;
}
