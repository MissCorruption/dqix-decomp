#include <globaldefs.h>

// USA: func_020119e8
extern "C" ARM void func_020119e8(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
#if defined(jpn)
    (var0 + 0x6000)[0x200] = 0;
#else
    (var0 + 0x6000)[0x480] = 0;
#endif
}
