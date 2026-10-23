#include <globaldefs.h>

#pragma opt_arithtransformation off

// USA: func_ov023_021f6c90
ARM int inline_ov023_021f6c90(void* arg0, unsigned int arg1, unsigned int arg2) {
    char* var0;
    int var1 = 0;
    while (var1 < 0x80) {
        int var2 = 1;
        var0 = (char*)arg0 + (arg1 << 4);
        unsigned int var3 = var1;
        unsigned short var4 = 0;
        while (var4 < arg2) {
            unsigned int var5 = *(unsigned int*)(var0 + (var3 >> 2) * 4 + 8);
            if (var5 & (1u << (var3 & 3))) {
                var2 = 0;
                break;
            }
            var3++;
            var4++;
        }
        if (var2) {
            return var1;
        }
        var1++;
    }
    return -1;
}
