#include <globaldefs.h>

// USA: func_ov031_02242f14
extern "C" ARM int func_ov031_02242f14(const char* arg0, int arg1) {
    int var0 = 0;
    int var1 = 0;
    if (arg1-- != 0) {
        do {
            signed char var2 = *arg0;
            if (var2 != ' ' && var2 >= '0' && var2 <= '9') {
                var1 = var1 * 10 + var2;
                var1 -= '0';
                var0++;
                if (var0 > 9) return -1;
            }
            arg0++;
        } while (arg1-- != 0);
    }
    if (var0 == 0) var1 = -1;
    return var1;
}
