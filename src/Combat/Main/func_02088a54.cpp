#include <globaldefs.h>

// USA: func_02088a54
extern "C" ARM void func_02088a54(unsigned char* arg0) {
    *(int*)(arg0 + 0x14) &= ~0x20000000;
    arg0[0x64] = 0;
    arg0[0x87] = 0;
}
