#include <globaldefs.h>

// USA: func_02088560
extern "C" ARM void func_02088560(unsigned char* arg0) {
    *(int*)(arg0 + 0x14) &= ~0x2;
    *(unsigned short*)(arg0 + 0x22) &= ~0x3;
    *(int*)(arg0 + 0x14) |= 0x2;
    *(unsigned short*)(arg0 + 0x22) = (*(unsigned short*)(arg0 + 0x22) & ~0x3) | 0x2;
}
