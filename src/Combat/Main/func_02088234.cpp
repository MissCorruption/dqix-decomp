#include <globaldefs.h>

// USA: func_02088234
extern "C" ARM void func_02088234(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    *(int*)(var0 + 0x14) &= ~0x800000;
    var0[0x24] = 0;
}
