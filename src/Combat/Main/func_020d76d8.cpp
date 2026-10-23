#include <globaldefs.h>

// USA: func_020d76d8
extern "C" ARM void func_020d76d8(unsigned char* arg0, int arg1) {
    arg0 += 0xa00;
    if (arg1 >= 0xc0) {
        arg1 -= 0xbc;
    }
    *(unsigned short*)(arg0 + 0x26) &= ~(1 << arg1);
}
