#include <globaldefs.h>

// USA: func_ov001_021628d4
extern "C" ARM void func_ov001_021628d4(int arg0, int arg1, int arg2, int arg3) {
    unsigned short *var0 = (unsigned short*)0x400100e;
    *var0 = (unsigned short)((*var0 & 0x43) | (arg0 << 14) | (arg1 << 7) | (arg2 << 8) | (arg3 << 2));
}
