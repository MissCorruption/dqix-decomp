#include <globaldefs.h>

// USA: func_020095b0
extern "C" ARM int func_020095b0(unsigned char *arg0, int arg1) {
    unsigned char *var0 = arg0 + 5 + arg1;
    unsigned char var1 = *var0;
    if (var1 > 5) return 1;
    if (var1 < 5) return -1;
    unsigned char var2 = arg0[4];
    unsigned char *var3 = var0 + 1;
    unsigned char *var4 = arg0 + 5 + var2;
    if (var3 < var4) {
        do {
            if (*var3 != 0) return 1;
            var3++;
        } while (var3 < var4);
    }
    arg1 -= 1;
    arg0 += arg1;
    return (arg0[5] & 1) ? 1 : -1;
}
