#include <globaldefs.h>

// USA: func_020c89d4
extern "C" ARM void func_020c89d4(void) {
    unsigned int var0;
    asm {
        mrc p15, 0, var0, c1, c0, 0
        orr var0, var0, #0x10000
        mcr p15, 0, var0, c1, c0, 0
    }
}
