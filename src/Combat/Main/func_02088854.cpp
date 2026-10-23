#include <globaldefs.h>

// USA: func_02088854
extern "C" ARM void func_02088854(unsigned char* arg0) {
    arg0[0x5f] = 4;
    arg0[0x82] = 0;
    *(int*)(arg0 + 0x14) |= 0x40;
}
