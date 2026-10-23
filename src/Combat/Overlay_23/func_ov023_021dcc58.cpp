#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" unsigned int GetSubBG0ScreenBase(void);
extern "C" unsigned int GetSubBG2ScreenBase(void);

// USA: func_ov023_021dcc58
extern "C" ARM void func_ov023_021dcc58(void* arg0) {
#if defined(jpn)
    if (*(signed char*)((char*)arg0 + 0x6f8) != 1) return;
#else
    if (*(signed char*)((char*)arg0 + 0x77c) != 1) return;
#endif

    unsigned short* var0 = (unsigned short*)0x4001008;
    var0[0] = (var0[0] & 0x43) | 0xf00;
    var0[1] = (var0[1] & 0x43) | 0xe00;
    var0[0] = var0[0] & ~3;
    var0[1] = (var0[1] & ~3) | 1;
    var0[2] = (var0[2] & ~3) | 2;
    var0[3] = (var0[3] & ~3) | 3;
    *(unsigned int*)((char*)var0 + 8) = 0;
    *(unsigned int*)((char*)var0 + 0xc) = 0;

    memset((void*)GetSubBG0ScreenBase(), 0, 0x800);
    memset((void*)GetSubBG2ScreenBase(), 0, 0x800);

    unsigned int* var1 = (unsigned int*)0x4001000;
    *var1 = (*var1 & ~0x1f00) | 0x1300;
}
