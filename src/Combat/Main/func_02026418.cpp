#include <globaldefs.h>

// USA: func_02026418
extern "C" ARM void func_02026418(unsigned char* arg0, unsigned char arg1) {
#if defined(jpn)
    arg0[0x6b8] = arg1;
#else
    arg0[0x764] = arg1;
#endif
}
