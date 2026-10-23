// USA: func_ov031_0223fc7c
#include <globaldefs.h>
extern "C" ARM int func_ov031_0223fc7c(unsigned char* arg0, unsigned int arg1, int arg2) {
    int var0 = 0;
    if (arg2 > 8) return -1;
    int var1 = 1;
    if (arg2 >= 1) {
        do {
            unsigned int var2 = (arg1 >> ((arg2 - var1) * 4)) & 0xf;
            if (var2 < 10)
                arg0[var0++] = var2 + 0x30;
            else
                arg0[var0++] = var2 + 0x57;
            var1++;
        } while (var1 <= arg2);
    }
    return var0;
}
