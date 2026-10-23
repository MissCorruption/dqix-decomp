#include <globaldefs.h>

// USA: func_ov000_021824d8
extern "C" ARM void func_ov000_021824d8(void* arg0) {
    char* var0 = (char*)arg0;
    if (*(short*)(var0 + 0x600 + 0xea) > 0) {
        *(short*)(var0 + 0x600 + 0xea) = *(short*)(var0 + 0x600 + 0xea) - 1;
    }
    if (*(short*)(var0 + 0x600 + 0xec) <= 0) {
        return;
    }
    *(short*)(var0 + 0x600 + 0xec) = *(short*)(var0 + 0x600 + 0xec) - 1;
    if (*(short*)(var0 + 0x600 + 0xec) == 0) {
        var0[0x6e8] = 0;
        var0[0x6e9] = 0;
    }
}
