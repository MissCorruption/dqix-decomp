#include <globaldefs.h>

// USA: func_020397ac
extern "C" ARM void func_020397ac(unsigned char* arg0, unsigned int arg1) {
#if defined(jpn)
    arg0[0x1c2] &= ~arg1;
#else
    arg0[0x1ce] &= ~arg1;
#endif
}
