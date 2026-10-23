#include <globaldefs.h>

// USA: func_ov001_02162678
extern "C" ARM void func_ov001_02162678(int arg0, int arg1, int arg2, int arg3) {
    unsigned short *var0 = (unsigned short*)0x400000e;
    *var0 = (unsigned short)((*var0 & 0x43) | (arg0 << 14) | (arg1 << 7) | (arg2 << 8) | (arg3 << 2));
}
