#include <globaldefs.h>

// USA: func_0203986c
extern "C" ARM void func_0203986c(unsigned char* arg0, int arg1) {
#if defined(jpn)
    arg0[0x1bd] = arg1;
#else
    arg0[0x1c9] = arg1;
#endif
}
