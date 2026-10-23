#include <globaldefs.h>

// USA: func_02088338
extern "C" ARM void func_02088338(unsigned char* arg0) {
    *(int*)(arg0 + 0x14) &= ~0x800000;
    arg0[0x24] = 0;
    *(int*)(arg0 + 0x14) &= ~0x80000;
    *(unsigned short*)(arg0 + 0x22) &= ~0x3c;
    arg0[0x21] = 0;
    *(int*)(arg0 + 0x18) &= ~0x20;
    arg0[0x5d] = 1;
    arg0[0x80] = 0;
    *(int*)(arg0 + 0x14) |= 0x10;
}
