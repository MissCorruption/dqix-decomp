#include <globaldefs.h>

// USA: func_020115e8
extern "C" ARM unsigned short func_020115e8(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
#if defined(jpn)
    return *(unsigned short*)(var0 + 0x6178);
#else
    return *(unsigned short*)(var0 + 0x63d8);
#endif
}
