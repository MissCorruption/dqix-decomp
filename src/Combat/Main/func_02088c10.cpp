#include <globaldefs.h>

extern "C" void func_02088c9c(unsigned char* arg0);

// USA: func_02088c10
extern "C" ARM void func_02088c10(unsigned char* arg0) {
    arg0[0x6c] = 5;
    arg0[0x8f] = 0;
    *(int*)(arg0 + 0x18) |= 0x2;
    func_02088c9c(arg0);
}
