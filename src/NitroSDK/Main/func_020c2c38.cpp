#include <globaldefs.h>

// USA: func_020c2c38
extern "C" ARM long long GetHardwareDividerResult(void) {
    volatile unsigned short* var0 = (volatile unsigned short*)0x4000280;
    while (*var0 & 0x8000) ;
    return *(long long*)0x40002a0;
}
