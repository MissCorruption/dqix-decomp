#include <globaldefs.h>

// USA: func_02088e64
extern "C" ARM void func_02088e64(unsigned char* arg0) {
    *(int*)(arg0 + 0x18) &= ~0x1000;
    arg0[0x7e] = 0;
    arg0[0xa1] = 0;
}
