#include <globaldefs.h>

// USA: func_02039d48
extern "C" ARM void func_02039d48(unsigned char* arg0) {
#if defined(jpn)
    arg0[0x1c2] |= 4;
#else
    arg0[0x1ce] |= 4;
#endif
}
