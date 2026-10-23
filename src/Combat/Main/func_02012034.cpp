#include <globaldefs.h>

// USA: func_02012034
extern "C" ARM unsigned char func_02012034(void* arg0) {
#if defined(jpn)
    return ((unsigned char*)arg0 + 0x7000)[0xc9c];
#else
    return ((unsigned char*)arg0 + 0x7000)[0xf70];
#endif
}
