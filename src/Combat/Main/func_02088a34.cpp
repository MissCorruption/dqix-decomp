#include <globaldefs.h>

// USA: func_02088a34
extern "C" ARM void func_02088a34(unsigned char* arg0) {
    arg0[0x64] = 4;
    arg0[0x87] = 0;
    *(int*)(arg0 + 0x14) |= 0x20000000;
}
