#include <globaldefs.h>

// USA: func_02053ec0
extern "C" ARM void func_02053ec0(unsigned char* arg0, int arg1) {
#if defined(jpn)
    arg0[0x19b] = arg1;
#else
    arg0[0x1a7] = arg1;
#endif
}
