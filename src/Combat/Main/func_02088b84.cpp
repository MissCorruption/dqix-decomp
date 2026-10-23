#include <globaldefs.h>

// USA: func_02088b84
extern "C" ARM void func_02088b84(unsigned char* arg0) {
    ((int*)arg0)[5] &= ~0x40000000;
    arg0[0x68] = 0;
    arg0[0x8b] = 0;
}
