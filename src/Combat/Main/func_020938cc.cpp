#include <globaldefs.h>

// USA: func_020938cc
extern "C" ARM int func_020938cc() {
    return ((*(unsigned short*)0x4000304 & 0x8000) >> 15) != 1;
}
