#include <globaldefs.h>

// USA: func_02039dcc
extern "C" ARM unsigned int func_02039dcc(unsigned char* obj) {
#if defined(jpn)
    return obj[0x1c2] & 0x8;
#else
    return obj[0x1ce] & 0x8;
#endif
}
