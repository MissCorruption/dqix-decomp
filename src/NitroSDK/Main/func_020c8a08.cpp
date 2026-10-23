#include <globaldefs.h>

// USA: func_020c8a08
extern "C" ARM void func_020c8a08(void) {
    unsigned int var0;
    asm {
        mrc p15, 0, var0, c1, c0, 0
        bic var0, var0, #0x1
        mcr p15, 0, var0, c1, c0, 0
    }
}
