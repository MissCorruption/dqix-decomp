#include <globaldefs.h>

// USA: func_020c383c
extern "C" ARM void func_020c383c(int arg0) {
    volatile unsigned short* var0 = (volatile unsigned short*)0x4000004;
    *var0 = (*var0 & 0x3f) | ((arg0 & 0xff) << 8) | ((arg0 & 0x100) >> 1);
}
