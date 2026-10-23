#include <globaldefs.h>

// USA: func_02011af0
extern "C" ARM void func_02011af0(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
#if defined(jpn)
    int var1 = ((var0 + 0x6000)[0x17c] & 0x10) != 0;
#else
    int var1 = ((var0 + 0x6000)[0x3dc] & 0x10) != 0;
#endif
#if defined(jpn)
    (var0 + 0x6000)[0x17c] = 0;
#else
    (var0 + 0x6000)[0x3dc] = 0;
#endif
    if (var1) {
#if defined(jpn)
        (var0 + 0x6000)[0x17c] |= 0x10;
#else
        (var0 + 0x6000)[0x3dc] |= 0x10;
#endif
    }
}
