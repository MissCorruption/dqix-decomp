#include <globaldefs.h>

// USA: func_020e2bac
extern "C" ARM int func_020e2bac() {
    return (*(volatile unsigned int *)0x4001000 & 0xe000) >> 13;
}
