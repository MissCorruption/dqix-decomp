#include <globaldefs.h>

// USA: func_020494a0
extern "C" ARM int func_020494a0(unsigned char* arg0) {
    unsigned char* var0 = *(unsigned char**)(arg0 + 0x13c);
    unsigned char var1;
    if (var0 == 0) {
        return 0xff;
    }
    var1 = var0[0x4c];
    if (var1 == 0xff) {
        var1 = var0[0x4d];
    }
    return var1;
}
