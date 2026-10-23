#include <globaldefs.h>

// USA: func_02088d7c
extern "C" ARM void func_02088d7c(unsigned char* arg0) {
    arg0[0x7d] = 5;
    arg0[0xa0] = 0;
    *(int*)(arg0 + 0x18) |= 0x100;
}
