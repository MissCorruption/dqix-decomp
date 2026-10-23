#include <globaldefs.h>

// USA: func_0201075c
extern "C" ARM void func_0201075c(char* arg0, unsigned char arg1) {
#if defined(jpn)
    *(unsigned char*)(arg0 + 0x54c9) = arg1;
#else
    *(unsigned char*)(arg0 + 0x5729) = arg1;
#endif
}
