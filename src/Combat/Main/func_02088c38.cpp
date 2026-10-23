#include <globaldefs.h>

// USA: func_02088c38
extern "C" ARM void func_02088c38(unsigned char* arg0) {
    ((int*)arg0)[6] &= ~0x2;
    arg0[0x6c] = 0;
    arg0[0x8f] = 0;
}
