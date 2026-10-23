#include <globaldefs.h>

extern "C" void func_02088c38(unsigned char* arg0);

// USA: func_02088c74
extern "C" ARM void func_02088c74(unsigned char* arg0) {
    arg0[0x6d] = 5;
    arg0[0x90] = 0;
    *(int*)(arg0 + 0x18) |= 0x4;
    func_02088c38(arg0);
}
