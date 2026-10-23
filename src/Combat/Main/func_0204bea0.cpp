#include <globaldefs.h>

// USA: func_0204bea0
extern "C" ARM int func_0204bea0(unsigned short* arg0) {
    unsigned short var0 = arg0[0];
    unsigned short var1 = var0 & 0x1f;
    unsigned short var2 = (var0 & 0x3e0) >> 5;
    unsigned short var3 = (var0 & 0x7c00) >> 10;
    return var1 * 100 + 20000 + var2 * 10 + var3;
}
