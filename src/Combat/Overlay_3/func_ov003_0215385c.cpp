#include <globaldefs.h>

// USA: func_ov003_0215385c
extern "C" ARM void func_ov003_0215385c(void* arg0) {
    unsigned char var0 = *((unsigned char*)arg0 + 0x5a);
    if (var0 == 0) {
        var0 = 0;
        *((unsigned char*)arg0 + 0x5a) = var0;
        *((unsigned char*)arg0 + 0x5b) = var0;
    }
}
