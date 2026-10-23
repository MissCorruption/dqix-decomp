#include <globaldefs.h>

// USA: func_020119cc
extern "C" ARM unsigned char func_020119cc(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
#if defined(jpn)
    return (var0 + 0x6000)[0x1ed];
#else
    return (var0 + 0x6000)[0x46d];
#endif
}
