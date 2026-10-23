#include <globaldefs.h>

// USA: func_ov017_02199964
extern "C" ARM void func_ov017_02199964(int arg0, int arg1, int arg2, int arg3, int arg4) {
    volatile unsigned short* var0 = (volatile unsigned short*)0x400000a;
    unsigned short var1 = (*var0 & 0x43) | (arg0 << 14) | (arg1 << 7) | (arg2 << 8) | (arg3 << 2) | (arg4 << 13);
    *var0 = var1;
}
