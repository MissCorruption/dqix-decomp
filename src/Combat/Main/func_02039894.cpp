#include <globaldefs.h>

// USA: func_02039894
extern "C" ARM void func_02039894(unsigned char* obj) {
#if defined(jpn)
    obj[0x1c2] |= 1;
#else
    obj[0x1ce] |= 1;
#endif
}
