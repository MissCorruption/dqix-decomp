#include <globaldefs.h>

// USA: func_02088994
extern "C" ARM void func_02088994(unsigned char* arg0) {
    arg0[0x62] = 5;
    arg0[0x85] = 0;
    ((int*)arg0)[5] |= 0x8000000;
}
