#include <globaldefs.h>

// USA: func_02039dcc
extern "C" ARM unsigned int func_02039dcc(unsigned char* arg0) {
#if defined(jpn)
    return arg0[0x1c2] & 0x8;
#else
    return arg0[0x1ce] & 0x8;
#endif
}
