#include <globaldefs.h>

extern unsigned long long data_ov031_02249440[16] __attribute__((aligned(4)));

// USA: func_ov031_0223fba4
extern "C" ARM int func_ov031_0223fba4(char* arg0, unsigned long long arg1, int arg2) {
    int var0;
    int var1 = 0;
    if (arg1 >= 100000000000000000ULL) return var1 - 1;
    var0 = 0;
    int var2 = 0;
    do {
        unsigned long long var3 = data_ov031_02249440[var0];
        if (arg1 >= var3) {
            unsigned int var4 = arg1 / var3;
            unsigned long long var5 = var4 * var3;
            arg0[var1] = var4 + '0';
            arg1 -= var5;
            var2 = 1;
            var1++;
        } else {
            if (var2 || 17 - var0 <= arg2) {
                arg0[var1] = '0';
                var1++;
            }
        }
        var0++;
    } while (var0 < 16);
    arg0[var1] = arg1 + '0';
    return var1 + 1;
}
