#include <globaldefs.h>

// USA: func_ov000_0215fff4
extern "C" ARM void* func_ov000_0215fff4(void* arg0, int arg1, int arg2) {
    unsigned char* var0 = (unsigned char*)arg0 + arg2;
    if (var0[0x18] <= arg1) return 0;
    void* var1 = *(void**)((char*)arg0 + arg2 * 4);
    int var2 = 0;
    while (var2 < arg1 && var1 != 0) {
        var1 = *(void**)((char*)var1 + 0x20);
        var2++;
    }
    return var1;
}
