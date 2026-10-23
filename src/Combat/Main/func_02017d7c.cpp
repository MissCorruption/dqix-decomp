#include <globaldefs.h>

// USA: func_02017d7c
extern "C" ARM void func_02017d7c(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
#if defined(jpn)
    *(unsigned char*)(var0 + 0x285d) = 0;
#else
    *(unsigned char*)(var0 + 0x281d) = 0;
#endif
#if defined(jpn)
    *(unsigned char*)(var0 + 0x285e) = 0;
#else
    *(unsigned char*)(var0 + 0x281e) = 0;
#endif
}
