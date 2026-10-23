#include <globaldefs.h>

// USA: func_020890a4
extern "C" ARM void func_020890a4(unsigned char* arg0) {
    ((int*)arg0)[6] &= ~0x40;
    arg0[0x7a] = 0;
    arg0[0x9d] = 0;
}
