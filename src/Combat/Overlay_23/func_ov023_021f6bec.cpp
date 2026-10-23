#include <globaldefs.h>

// USA: func_ov023_021f6bec
extern "C" ARM void func_ov023_021f6bec(void* arg0, int arg1, unsigned int arg2, unsigned int arg3) {
    if (arg2 >= 0x80) return;
    int* var0 = (int*)((char*)arg0 + 8 + (arg1 << 4));
    unsigned short var1 = 0;
    while (var1 < arg3) {
        int var2 = arg2 / 4;
        var0[var2] |= 1 << (arg2 & 3);
        arg2++;
        var1++;
    }
}
