#include <globaldefs.h>

// USA: func_020263c8
extern "C" ARM void func_020263c8(unsigned char* arg0, int arg1) {
#if defined(jpn)
    arg0[0x6cc] = arg1 != 0;
#else
    arg0[0x778] = arg1 != 0;
#endif
}
