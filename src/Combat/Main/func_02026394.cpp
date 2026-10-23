#include <globaldefs.h>

// USA: func_02026394
extern "C" ARM void func_02026394(unsigned char* arg0, unsigned int arg1) {
    if (arg1 < 4) {
#if defined(jpn)
        arg0[0x6B1] &= ~(1 << arg1);
#else
        arg0[0x75D] &= ~(1 << arg1);
#endif
    }
}
