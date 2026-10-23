#include <globaldefs.h>

// USA: func_02088a04
extern "C" ARM void func_02088a04(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    *(int*)(var0 + 0x14) &= ~0x10000000;
    var0[0x63] = 0;
    var0[0x86] = 0;
}
