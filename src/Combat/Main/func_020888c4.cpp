#include <globaldefs.h>

// USA: func_020888c4
extern "C" ARM void func_020888c4(unsigned char* arg0) {
    *(int*)(arg0 + 0x14) &= ~0x100;
    arg0[0x60] = 0;
    arg0[0x83] = 0;
}
