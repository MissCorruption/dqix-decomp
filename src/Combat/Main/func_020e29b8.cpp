#include <globaldefs.h>

// USA: func_020e29b8
extern "C" ARM void func_020e29b8(int arg0, int arg1, int arg2, int arg3) {
    volatile unsigned short* var0 = (volatile unsigned short*)0x4001042;
    var0[0] = ((arg0 << 8) & 0xff00) | (arg2 & 0xff);
    var0[2] = ((arg1 << 8) & 0xff00) | (arg3 & 0xff);
}
