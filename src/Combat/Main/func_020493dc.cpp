#include <globaldefs.h>

// USA: func_020493dc
extern "C" ARM void func_020493dc(unsigned char* arg0, unsigned char arg1) {
    unsigned char* var0 = *(unsigned char**)(arg0 + 0x13c);
    if (var0 != 0) {
        var0[0x1e] = arg1;
    }
}
