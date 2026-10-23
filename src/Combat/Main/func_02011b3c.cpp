#include <globaldefs.h>

// USA: func_02011b3c
extern "C" ARM void func_02011b3c(void* arg0, unsigned char arg1) {
    unsigned char* var0 = (unsigned char*)arg0;
#if defined(jpn)
    (var0 + 0x6000)[0x17c] |= arg1;
#else
    (var0 + 0x6000)[0x3dc] |= arg1;
#endif
}
