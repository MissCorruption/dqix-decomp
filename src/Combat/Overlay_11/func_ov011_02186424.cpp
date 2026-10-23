#include <globaldefs.h>

// USA: func_ov011_02186424
extern "C" ARM int func_ov011_02186424(int arg0) {
    volatile unsigned short* var0 = (volatile unsigned short*)0x4000008;
    int var1 = (*var0 & ~3) | arg0;
    *var0 = var1;
    return var1;
}
