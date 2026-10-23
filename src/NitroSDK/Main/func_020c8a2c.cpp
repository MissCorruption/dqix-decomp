#include <globaldefs.h>

// USA: func_020c8a2c
extern "C" ARM void func_020c8a2c(unsigned int arg0) {
    asm {
        mcr p15, 0, arg0, c6, c1, 0
    }
}
