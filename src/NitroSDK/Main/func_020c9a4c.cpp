#include <globaldefs.h>

// USA: func_020c9a4c
extern "C" ARM unsigned int func_020c9a4c(unsigned int arg0) {
    asm {
        clz arg0, arg0
    }
    return arg0;
}
