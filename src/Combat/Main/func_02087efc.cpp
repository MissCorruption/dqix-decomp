#include <globaldefs.h>

// USA: func_02087efc
extern "C" ARM void func_02087efc(unsigned char* arg0) {
    *(int*)(arg0 + 0x14) &= ~0x20000;
    *(int*)(arg0 + 0x58) &= ~0xe00000;
    arg0[0x75] = 0;
    arg0[0x98] = 0;
}
