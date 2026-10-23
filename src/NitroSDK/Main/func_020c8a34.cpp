#include <globaldefs.h>

// USA: func_020c8a34
extern "C" ARM void func_020c8a34(unsigned int arg0) {
    asm {
        mcr p15, 0, arg0, c6, c2, 0
    }
}
