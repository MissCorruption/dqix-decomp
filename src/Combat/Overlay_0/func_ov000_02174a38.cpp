#include <globaldefs.h>

// USA: func_ov000_02174a38
extern "C" ARM void func_ov000_02174a38(void* arg0, int arg1) {
    int var0 = *((unsigned char*)arg0 + 0x24);
    if (arg1) {
        var0 |= 0x4;
    } else {
        var0 &= ~0x4;
    }
    *((unsigned char*)arg0 + 0x24) = var0;
}
