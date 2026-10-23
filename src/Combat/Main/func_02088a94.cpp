#include <globaldefs.h>

// USA: func_02088a94
extern "C" ARM void func_02088a94(unsigned char* arg0) {
    *(int*)(arg0 + 0x14) = (*(int*)(arg0 + 0x14) | 0x100000) & ~0x200000;
}
