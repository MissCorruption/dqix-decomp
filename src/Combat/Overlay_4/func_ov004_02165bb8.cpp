#include <globaldefs.h>

extern "C" int func_020421a0(void);

// USA: func_ov004_02165bb8
extern "C" ARM int func_ov004_02165bb8(void) {
#if defined(jpn)
    enum { regionalFieldOffset = 0x218 };
#else
    enum { regionalFieldOffset = 0x2c8 };
#endif
    *(int*)((char*)func_020421a0() + regionalFieldOffset) = 1;
    return 0;
}
