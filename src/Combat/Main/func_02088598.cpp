#include <globaldefs.h>

// USA: func_02088598
extern "C" ARM void func_02088598(unsigned char* arg0) {
    *(int*)(arg0 + 0x14) &= ~0x2;
    *(unsigned short*)(arg0 + 0x22) &= ~0x3;
}
