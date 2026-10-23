#include <globaldefs.h>

// USA: func_ov000_0215fe2c
extern "C" ARM void* func_ov000_0215fe2c(void* arg0, int arg1) {
    if (*((unsigned char*)arg0 + 0x1f) <= arg1) return 0;
    void* var0 = *(void**)((char*)arg0 + 8);
    int var1 = 0;
    while (var1 < arg1 && var0 != 0) {
        var0 = *(void**)((char*)var0 + 4);
        var1++;
    }
    return var0;
}
