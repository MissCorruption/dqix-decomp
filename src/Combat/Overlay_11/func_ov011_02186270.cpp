#include <globaldefs.h>

// USA: func_ov011_02186270
extern "C" ARM void func_ov011_02186270(int arg0, int arg1, int arg2, int arg3, int arg4) {
    unsigned short* var0 = (unsigned short*)0x4000008;
    *var0 = (*var0 & 0x43) | (arg0 << 0xe) | (arg1 << 0x7) | (arg2 << 0x8) | (arg3 << 0x2) | (arg4 << 0xd);
}
