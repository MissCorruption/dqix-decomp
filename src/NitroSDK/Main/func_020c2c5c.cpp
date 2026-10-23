#include <globaldefs.h>

// USA: func_020c2c5c
extern "C" ARM int fix32_GetDivisionResult(void) {
    volatile unsigned short* var0 = (volatile unsigned short*)0x4000280;
    long long var1;
    while (*var0 & 0x8000) ;
    var1 = *(long long*)0x40002a0;
    return (int)((var1 + 0x80000) >> 20);
}
