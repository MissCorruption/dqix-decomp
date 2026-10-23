#include <globaldefs.h>

// USA: func_ov002_0216574c
extern "C" ARM void func_ov002_0216574c(void* arg0, int arg1) {
    unsigned char* var0 = (unsigned char*)arg0;
    int var1 = var0[0xc5];
    if (arg1) {
        var1 |= 0x8;
    } else {
        var1 &= ~0x8;
    }
    var0[0xc5] = var1;
}
