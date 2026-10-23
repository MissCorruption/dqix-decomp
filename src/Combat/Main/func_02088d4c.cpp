#include <globaldefs.h>

// USA: func_02088d4c
extern "C" ARM void func_02088d4c(unsigned char* arg0) {
    *(int*)(arg0 + 0x18) &= ~0x10;
    arg0[0x7b] = 0;
    arg0[0x9e] = 0;
}
