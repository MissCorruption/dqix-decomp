#include <globaldefs.h>

// USA: func_02088150
extern "C" ARM void func_02088150(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    *(int*)(var0 + 0x14) &= ~0x800000;
    var0[0x24] = 0;
    *(int*)(var0 + 0x14) &= ~0x2;
    *(unsigned short*)(var0 + 0x22) &= ~0x3;
    *(int*)(var0 + 0x14) &= ~0x2;
    *(unsigned short*)(var0 + 0x22) &= ~0x3;
    *(int*)(var0 + 0x14) |= 0x1000000;
    var0[0x24] = 4;
}
