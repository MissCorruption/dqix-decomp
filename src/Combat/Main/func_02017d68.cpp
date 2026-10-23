#include <globaldefs.h>

// USA: func_02017d68
extern "C" ARM void func_02017d68(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
#if defined(jpn)
    *(unsigned char*)(var0 + 0x285d) = 1;
#else
    *(unsigned char*)(var0 + 0x281d) = 1;
#endif
#if defined(jpn)
    *(unsigned char*)(var0 + 0x285e) = 1;
#else
    *(unsigned char*)(var0 + 0x281e) = 1;
#endif
}
