#include <globaldefs.h>

// USA: func_02026bc8
extern "C" ARM void func_02026bc8(unsigned char* arg0, int arg1) {
#if defined(jpn)
    arg0[0x9ca] |= 1 << arg1;
#else
    arg0[0xA96] |= 1 << arg1;
#endif
}
