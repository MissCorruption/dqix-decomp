#include <globaldefs.h>

// USA: func_02011600
extern "C" ARM void func_02011600(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
#if defined(jpn)
    *(unsigned short*)(var0 + 0x6178) = 0;
#else
    *(unsigned short*)(var0 + 0x63d8) = 0;
#endif
}
