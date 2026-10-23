#include <globaldefs.h>

// USA: func_02088cf4
extern "C" ARM void func_02088cf4(unsigned char* arg0) {
    *(int*)(arg0 + 0x18) &= ~0x8;
    arg0[0x6b] = 0;
    arg0[0x8e] = 0;
}
