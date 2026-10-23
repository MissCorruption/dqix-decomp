#include <globaldefs.h>

// USA: func_02088b14
extern "C" ARM void func_02088b14(unsigned char* arg0) {
    arg0[0x67] = 6;
    arg0[0x8a] = 0;
    ((int*)arg0)[5] |= 0x400000;
}
