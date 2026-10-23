#include <globaldefs.h>

// USA: func_02088964
extern "C" ARM void func_02088964(unsigned char* arg0) {
    *(int*)(arg0 + 0x14) &= ~0x4000000;
    arg0[0x66] = 0;
    arg0[0x89] = 0;
}
