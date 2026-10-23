#include <globaldefs.h>

// USA: func_ov017_0218d4d0
extern "C" ARM void func_ov017_0218d4d0(void* arg0, int arg1) {
    unsigned char* var0 = (unsigned char*)arg0
#if defined(jpn)
        + 0x4111;
#else
        + 0x4331;
#endif
    *var0 &= ~(1 << arg1);
}
