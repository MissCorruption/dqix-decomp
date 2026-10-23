#include <globaldefs.h>

// USA: func_02088e48
extern "C" ARM void func_02088e48(unsigned char* arg0, unsigned char arg1) {
    arg0[0x7e] = arg1;
    arg0[0xa1] = 0;
    *(int*)(arg0 + 0x18) |= 0x1000;
}
