#include <globaldefs.h>

// USA: func_020889e4
extern "C" ARM void func_020889e4(unsigned char* arg0) {
    arg0[0x63] = 4;
    arg0[0x86] = 0;
    ((int*)arg0)[5] |= 0x10000000;
}
