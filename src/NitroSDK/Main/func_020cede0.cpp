#include <globaldefs.h>

// USA: func_020cede0
extern "C" ARM int func_020cede0(void) {
    return (*(volatile unsigned short*)0x4000304 & 1) != 0;
}
