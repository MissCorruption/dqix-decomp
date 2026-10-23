#include <globaldefs.h>

// USA: func_ov011_021861e4
extern "C" ARM void func_ov011_021861e4(int arg0, int arg1, int arg2, int arg3) {
    unsigned short* var0 = (unsigned short*)0x400000e;
    *var0 = (*var0 & 0x43) | (arg0 << 0xe) | (arg1 << 0x7) | (arg2 << 0x8) | (arg3 << 0x2);
}
