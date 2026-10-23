#include <globaldefs.h>

// USA: func_02042b1c
extern "C" ARM void func_02042b1c(unsigned char* arg0) {
#if defined(jpn)
    *(unsigned char**)(arg0 + 0x1c44) = arg0 + 0x7e4;
#else
    *(unsigned char**)(arg0 + 0x1e20) = arg0 + 0x914;
#endif
}
