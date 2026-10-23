#include <globaldefs.h>

// USA: func_ov017_0218b664
extern "C" ARM void func_ov017_0218b664(char *arg0) {
    arg0 += 0x4000;
#if defined(jpn)
    arg0 -= 0x2b0;
#endif
    arg0[0x444] = 0;
    arg0[0x445] = 0;
    arg0[0x447] = -1;
    arg0[0x448] = 0;
    arg0[0x449] = 0;
}
