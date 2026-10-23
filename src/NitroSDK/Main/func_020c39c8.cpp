#include <globaldefs.h>

#if defined(jpn)
#define func_020c39c8 func_020c5494
#endif

// USA: func_020c39c8
extern "C" ARM int func_020c39c8(volatile unsigned short* arg0) {
    unsigned short var0 = *arg0 & 0xc000;
    if (var0 == 0) {
        return 0;
    }
    if (var0 == 0x4000) {
        return *arg0 & 0x1f;
    }
    if (var0 == 0x8000) {
        return -(*arg0 & 0x1f);
    }
    return 0;
}
