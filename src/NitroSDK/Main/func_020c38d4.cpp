#include <globaldefs.h>

extern unsigned short data_020f226c;
extern unsigned short data_02111220;

// USA: func_020c38d4
extern "C" ARM void func_020c38d4(void) {
    volatile unsigned int* var0 = (volatile unsigned int*)0x4000000;
    data_020f226c = 1;
    unsigned short var1 = data_02111220;
    if (var1 != 0) {
        *var0 = (*var0 & ~0x30000) | ((unsigned int)var1 << 16);
        return;
    }
    *var0 |= 0x10000;
}
