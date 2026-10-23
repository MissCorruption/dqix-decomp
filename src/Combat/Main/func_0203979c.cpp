#include <globaldefs.h>

// USA: func_0203979c
extern "C" ARM void func_0203979c(unsigned char* arg0, unsigned int arg1) {
#if defined(jpn)
    arg0[0x1c2] |= arg1;
#else
    arg0[0x1ce] |= arg1;
#endif
}
