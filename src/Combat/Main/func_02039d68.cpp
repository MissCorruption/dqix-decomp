#include <globaldefs.h>

// USA: func_02039d68
extern "C" ARM int func_02039d68(unsigned char* arg0) {
#if defined(jpn)
    return (arg0[0x1c2] & 4) != 0;
#else
    return (arg0[0x1ce] & 4) != 0;
#endif
}
