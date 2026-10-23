#include <globaldefs.h>

// USA: func_020493ec
extern "C" ARM int func_020493ec(unsigned char* arg0) {
    unsigned char* var0 = *(unsigned char**)(arg0 + 0x13c);
    return var0 != 0 ? var0[0x1e] : 0xff;
}
