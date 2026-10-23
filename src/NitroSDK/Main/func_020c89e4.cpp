#include <globaldefs.h>

#if defined(jpn)
#define func_020c89e4 func_020ca4b0
#endif

// USA: func_020c89e4
extern "C" ARM unsigned int func_020c89e4(void) {
    unsigned int var0;
    asm {
        mrc p15, 0, var0, c9, c1, 0
    }
    var0 = var0 & 0xfffff000;
    return var0;
}
