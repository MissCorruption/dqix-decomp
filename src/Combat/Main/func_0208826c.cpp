#include <globaldefs.h>

extern "C" void func_02088390(void* arg0);
extern "C" void func_020883fc(void* arg0);

// USA: func_0208826c
extern "C" ARM void func_0208826c(unsigned char* arg0) {
    *(int*)(arg0 + 0x14) &= ~0x800000;
    arg0[0x24] = 0;
    func_02088390(arg0);
    *(int*)(arg0 + 0x14) &= ~0x80000;
    *(unsigned short*)(arg0 + 0x22) &= ~0x3c;
    func_020883fc(arg0);
    arg0[0x21] = 0;
    *(int*)(arg0 + 0x18) &= ~0x20;
    arg0[0x5c] = 3;
    arg0[0x7f] = 0;
    *(int*)(arg0 + 0x14) |= 0x8;
}
