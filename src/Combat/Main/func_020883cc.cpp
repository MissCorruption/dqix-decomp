#include <globaldefs.h>

// USA: func_020883cc
extern "C" ARM void func_020883cc(unsigned char* arg0) {
    arg0[0x21] = 0;
    *(int*)(arg0 + 0x18) &= ~0x20;
    arg0[0x5e] = 3;
    arg0[0x81] = 0;
    *(int*)(arg0 + 0x14) |= 0x20;
}
