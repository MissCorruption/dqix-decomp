#include <globaldefs.h>

// USA: func_ov001_02158d8c
extern "C" ARM void* func_ov001_02158d8c(void** arg0) {
    unsigned int* var0 = (unsigned int*)arg0[0];
    int var1 = 0;
    while (var1 < (int)arg0[1]) {
        if (var0[0] == 0) {
            var0[0x12] = 0;
            return var0;
        }
        var1++;
        var0 += 0x13;
    }
    return NULL;
}
