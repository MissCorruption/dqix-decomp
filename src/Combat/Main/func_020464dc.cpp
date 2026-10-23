#include <globaldefs.h>

// USA: func_020464dc
extern "C" ARM void func_020464dc(void* arg0, signed char arg1) {
#if defined(jpn)
    *((unsigned char*)arg0 + 0x1750) = arg1;
#else
    *((unsigned char*)arg0 + 0x1880) = arg1;
#endif
}
