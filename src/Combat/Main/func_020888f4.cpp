#include <globaldefs.h>

// USA: func_020888f4
extern "C" ARM void func_020888f4(unsigned char* arg0) {
    arg0[0x61] = 5;
    arg0[0x84] = 0;
    ((int*)arg0)[5] |= 0x200;
}
