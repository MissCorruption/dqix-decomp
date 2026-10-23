#include <globaldefs.h>

// USA: func_020493a4
extern "C" ARM int func_020493a4(unsigned char* arg0) {
    unsigned char* var0 = *(unsigned char**)(arg0 + 0x13c);
    return var0 != 0 ? var0[0x1c] : 0xff;
}
