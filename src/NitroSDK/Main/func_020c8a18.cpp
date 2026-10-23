#include <globaldefs.h>

// USA: func_020c8a18
extern "C" ARM void func_020c8a18(unsigned int arg0, unsigned int arg1) {
    unsigned int var0;
    asm {
        mrc p15, 0, var0, c5, c0, 2
        bic var0, var0, arg0
        orr var0, var0, arg1
        mcr p15, 0, var0, c5, c0, 2
    }
}
