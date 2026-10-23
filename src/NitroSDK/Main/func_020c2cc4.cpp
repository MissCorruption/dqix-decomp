#include <globaldefs.h>

// USA: func_020c2cc4
extern "C" ARM int fix32_GetSqrtResult(void) {
    volatile unsigned short* var0 = (volatile unsigned short*)0x40002b0;
    volatile unsigned int* var1 = (volatile unsigned int*)0x40002b4;
    while (*var0 & 0x8000) ;
    return (*var1 + 0x200) >> 10;
}
