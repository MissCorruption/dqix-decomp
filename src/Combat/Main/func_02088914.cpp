#include <globaldefs.h>

// USA: func_02088914
extern "C" ARM void func_02088914(unsigned char* arg0) {
    *(int*)(arg0 + 0x14) &= ~0x200;
    arg0[0x61] = 0;
    arg0[0x84] = 0;
}
