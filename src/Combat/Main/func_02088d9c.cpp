#include <globaldefs.h>

// USA: func_02088d9c
extern "C" ARM void func_02088d9c(unsigned char* arg0) {
    *(int*)(arg0 + 0x18) &= ~0x100;
    arg0[0x7d] = 0;
    arg0[0xa0] = 0;
}
