#include <globaldefs.h>

// USA: func_02088bb4
extern "C" ARM void func_02088bb4(unsigned char* arg0) {
    arg0[0x69] = 6;
    arg0[0x8c] = 0;
    ((int*)arg0)[5] |= 0x80000000;
}
