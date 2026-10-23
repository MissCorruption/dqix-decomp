#include <globaldefs.h>

// USA: func_02027bbc
extern "C" ARM void func_02027bbc(unsigned char* arg0, int arg1) {
#if defined(jpn)
    arg0[0x9cb] &= ~arg1;
#else
    arg0[0xa97] &= ~arg1;
#endif
}
