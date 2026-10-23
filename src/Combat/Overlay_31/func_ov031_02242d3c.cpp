#include <globaldefs.h>

// USA: func_ov031_02242d3c
extern "C" ARM int func_ov031_02242d3c(char* arg0, int arg1) {
    if (arg1 > 10) {
        return -1;
    }
    int var0 = 0;
    int var1 = 0;
    int var2 = 0;
    if (arg1 > 0) {
        do {
            char var3 = arg0[var0];
            if (var2 != 0 && (var3 == ' ' || var3 == 0)) {
                break;
            }
            if (var2 == 0 && var3 == ' ') {
                goto advance;
            }
            if (var3 < '0' || var3 > '9') {
                return -1;
            }
            var2 = 1;
            int var4 = var1;
            var1 = var1 * 10 + var3 - '0';
            if (var4 > var1) {
                return -1;
            }
advance:
            var0++;
        } while (var0 < arg1);
    }
    return var1;
}
