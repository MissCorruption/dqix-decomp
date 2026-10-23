#include <globaldefs.h>

// USA: func_020119d8
extern "C" ARM void func_020119d8(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
#if defined(jpn)
    (var0 + 0x6000)[0x200] = 1;
#else
    (var0 + 0x6000)[0x480] = 1;
#endif
}
