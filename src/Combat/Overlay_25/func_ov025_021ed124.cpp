#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_ov025_021ed124
extern "C" ARM void func_ov025_021ed124(unsigned char* arg0) {
    *(unsigned short*)(arg0 + 0x15e) = 0;
#if defined(jpn)
    *(unsigned short*)(arg0 + 0x1ac) = 0;
#else
    *(unsigned short*)(arg0 + 0x1ae) = 0;
#endif

    *(unsigned short*)(arg0 + 0x160) = 0;
    *(unsigned int*)(arg0 + 0x158) = 0;
    arg0[0x150] = 0;
    arg0[0x151] = 0;
    memset(arg0, 0, 0x20);
    memset(arg0 + 0x20, 0, 0x20);
    memset(arg0 + 0x60, 0, 0x20);
    memset(arg0 + 0xa0, 0, 0x10);
    memset(arg0 + 0xb0, 0, 0x40);
    memset(arg0 + 0x40, 0, 0x20);
    memset(arg0 + 0xf0, 0, 0x40);
    memset(arg0 + 0x130, 0, 0x10);
    *(unsigned short*)(arg0 + 0x152) = 0;
    *(unsigned short*)(arg0 + 0x154) = 0;
    arg0[0x16c] = 0;
#if !defined(jpn)
    *(unsigned short*)(arg0 + 0x1ac) = 0;
#endif
    *(unsigned short*)(arg0 + 0x162) = 0x2ee;
    *(unsigned short*)(arg0 + 0x15c) = 0;
}
