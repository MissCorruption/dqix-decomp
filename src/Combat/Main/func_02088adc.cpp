#include <globaldefs.h>

// USA: func_02088adc
extern "C" ARM void func_02088adc(unsigned char* arg0) {
    unsigned int* var0 = (unsigned int*)(arg0 + 0x14);
    *var0 = (*var0 | 0x200000) & ~0x100000;
}
