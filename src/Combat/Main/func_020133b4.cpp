#include <globaldefs.h>

// USA: func_020133b4
extern "C" ARM void func_020133b4(void* arg0, int arg1) {
    int var0 = ((signed char*)arg0)[4];
    if (arg1) {
        var0 |= 0x80;
    } else {
        var0 &= ~0x80;
    }
    ((unsigned char*)arg0)[4] = var0;
}
