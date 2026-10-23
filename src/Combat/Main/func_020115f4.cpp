#include <globaldefs.h>

// USA: func_020115f4
extern "C" ARM void func_020115f4(void* arg0, unsigned short arg1) {
    unsigned char* var0 = (unsigned char*)arg0;
#if defined(jpn)
    *(unsigned short*)(var0 + 0x6178) = arg1;
#else
    *(unsigned short*)(var0 + 0x63d8) = arg1;
#endif
}
