#include <globaldefs.h>

// USA: func_02088944
extern "C" ARM void func_02088944(unsigned char* arg0) {
    arg0[0x66] = 5;
    arg0[0x89] = 0;
    ((int*)arg0)[5] |= 0x4000000;
}
