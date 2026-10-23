#include <globaldefs.h>

// USA: func_02088390
extern "C" ARM void func_02088390(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    *(int*)(var0 + 0x14) &= ~0x10;
    var0[0x5d] = 0;
    var0[0x80] = 0;
}
