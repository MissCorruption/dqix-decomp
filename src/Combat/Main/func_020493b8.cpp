#include <globaldefs.h>

// USA: func_020493b8
extern "C" ARM void func_020493b8(unsigned char* arg0, unsigned char arg1) {
    unsigned char* var0 = *(unsigned char**)(arg0 + 0x13c);
    if (var0 != 0) {
        var0[0x1d] = arg1;
    }
}
