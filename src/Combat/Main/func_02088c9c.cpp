#include <globaldefs.h>

// USA: func_02088c9c
extern "C" ARM void func_02088c9c(unsigned char* arg0) {
    ((int*)arg0)[6] &= ~0x4;
    arg0[0x6d] = 0;
    arg0[0x90] = 0;
}
