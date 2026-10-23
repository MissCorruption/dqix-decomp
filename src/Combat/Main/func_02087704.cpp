#include <globaldefs.h>

// USA: func_02087704
extern "C" ARM void func_02087704(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    var0[0x24] = var0[0x24] - 1;
    if (var0[0x24] == 3) {
        *(int*)(var0 + 0x14) &= ~0x1000000;
        var0[0x24] = 0;
        *(int*)(var0 + 0x14) |= 0x800000;
        var0[0x24] = 3;
    }
    if (var0[0x24] != 0) {
        return;
    }
    var0[0x24] = 0;
    *(int*)(var0 + 0x14) &= ~0x800000;
    var0[0x24] = 0;
}
