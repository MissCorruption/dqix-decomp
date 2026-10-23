#include <globaldefs.h>

// USA: func_ov031_02242f84
extern "C" ARM int func_ov031_02242f84(const signed char* arg0, int arg1, const signed char* arg2, int arg3) {
    if (arg1 < arg3) return -1;
    int var0 = 0;
    int var1;
    const signed char* var2;
    signed char var3;
    int var4 = arg1 - arg3 + 1;
    if (var4 > 0) {
        var3 = arg2[0];
        do {
            if (var3 == arg0[var0]) {
                var1 = 1;
                var2 = arg0;
                var2 += var0;
                if (arg3 > 1) do {
                    if (var2[var1] != arg2[var1]) break;
                    ++var1;
                } while (var1 < arg3);
                if (var1 == arg3) return 0;
            }
            ++var0;
        } while (var0 < var4);
    }
    return -1;
}
