#include <globaldefs.h>

// USA: func_02088bd4
extern "C" ARM void func_02088bd4(unsigned char* arg0) {
    ((int*)arg0)[5] &= ~0x80000000;
    arg0[0x69] = 0;
    arg0[0x8c] = 0;
}
