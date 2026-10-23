#include <globaldefs.h>

// USA: func_02039894
extern "C" ARM void func_02039894(unsigned char* arg0) {
#if defined(jpn)
    arg0[0x1c2] |= 1;
#else
    arg0[0x1ce] |= 1;
#endif
}
