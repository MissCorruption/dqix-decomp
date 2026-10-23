#include <globaldefs.h>

// USA: func_ov000_02182498
extern "C" ARM void func_ov000_02182498(void* arg0, int arg1) {
    unsigned char* var0 = (unsigned char*)arg0;
    if (arg1 != 0) {
        if (var0[0x6e8] != 0) {
            var0 = var0 + 0x600;
            if (*(short*)(var0 + 0xec) == 0) {
                *(short*)(var0 + 0xec) = *(short*)(var0 + 0xea) + 5;
            }
        }
    } else {
        var0[0x6e8] = 0;
        var0[0x6e9] = 0;
    }
}
