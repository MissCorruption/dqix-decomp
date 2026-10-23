#include <globaldefs.h>

extern "C" void func_02088cf4(unsigned char* arg0);

// USA: func_02088d24
extern "C" ARM void func_02088d24(unsigned char* arg0) {
    arg0[0x7b] = 5;
    arg0[0x9e] = 0;
    *(int*)(arg0 + 0x18) |= 0x10;
    func_02088cf4(arg0);
}
