#include <globaldefs.h>

// USA: func_0207c51c
extern "C" ARM int func_0207c51c(unsigned char* arg0, int arg1) {
    int var0;
    int var1;
    short* var2;
    signed char* var3;
    int var4;
    int var5;
    int var6;

    var0 = -1;
    for (var1 = 0; var1 < 8; var1++) {
        if (arg1 == *(arg0 + var1 + 0xc20)) {
            var0 = var1;
            break;
        }
    }
    if (var0 == -1) return 0;

    var2 = *(short**)(arg0 + var0 * 4 + 0xbd0);
    var3 = *(signed char**)(arg0 + var0 * 4 + 0xbf0);
    var4 = *(short*)(arg0 + var0 * 2 + 0xc10);

    var5 = 0;
    for (var6 = 0; var6 < var4; var6++) {
        if (var5 == var6) {
            if (var2[var6] < 0) var5 = var6;
            else var5 = var5 + 1;
        } else if (var5 != var6 && var2[var6] >= 0) {
            var2[var5] = var2[var6];
            var3[var5] = var3[var6];
            var2[var6] = -1;
            var3[var6] = 0;
            do {
                var5++;
            } while (var2[var5] >= 0);
        }
    }
    return 1;
}
