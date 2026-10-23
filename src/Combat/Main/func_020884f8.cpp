#include <globaldefs.h>

// USA: func_020884f8
extern "C" ARM void func_020884f8(unsigned char* arg0) {
    *(int*)(arg0 + 0x14) &= ~0x80000;
    *(unsigned short*)(arg0 + 0x22) &= ~0x3c;
}
