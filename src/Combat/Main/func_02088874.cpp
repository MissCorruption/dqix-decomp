#include <globaldefs.h>

// USA: func_02088874
extern "C" ARM void func_02088874(unsigned char* arg0) {
    *(int*)(arg0 + 0x14) &= ~0x40;
    arg0[0x5f] = 0;
    arg0[0x82] = 0;
}
