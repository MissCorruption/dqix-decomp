#include <globaldefs.h>

// USA: func_020888a4
extern "C" ARM void func_020888a4(unsigned char* arg0) {
    arg0[0x60] = 6;
    arg0[0x83] = 0;
    *(int*)(arg0 + 0x14) |= 0x100;
}
