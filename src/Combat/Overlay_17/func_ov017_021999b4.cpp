#include <globaldefs.h>

// USA: func_ov017_021999b4
extern "C" ARM int func_ov017_021999b4(int arg0, int arg1, int arg2, int arg3) {
    volatile unsigned short* var0 = (volatile unsigned short*)0x400000c;
    int var1 = (*var0 & 0x43) | (arg0 << 14);
    var1 |= (arg1 << 7);
    var1 |= (arg2 << 8);
    var1 |= (arg3 << 2);
    *var0 = var1;
    return var1;
}
