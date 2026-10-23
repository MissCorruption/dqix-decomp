#include <globaldefs.h>

// USA: func_02088b34
extern "C" ARM void func_02088b34(unsigned char* arg0) {
    ((int*)arg0)[5] &= ~0x400000;
    arg0[0x67] = 0;
    arg0[0x8a] = 0;
}
