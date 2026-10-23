#include <globaldefs.h>

// USA: func_02088b64
extern "C" ARM void func_02088b64(unsigned char* arg0) {
    arg0[0x68] = 6;
    arg0[0x8b] = 0;
    ((int*)arg0)[5] |= 0x40000000;
}
