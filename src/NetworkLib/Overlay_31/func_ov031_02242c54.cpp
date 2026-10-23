#include <globaldefs.h>

// USA: func_ov031_02242c54
extern "C" ARM int func_ov031_02242c54(const signed char* arg0, int arg1) {
    if (arg1 > 8) return -1;
    if (arg1 == 8 && *arg0 > '7') return -1;
    int var0 = 0;
    int var1 = 0;
    int var2 = 0;
    if (arg1 > 0) do {
        int var3 = 0;
        int var4 = arg0[var0];
        if (var4 >= 'A' && var4 <= 'Z') var3 = 1;
        signed char var5 = var3 ? var4 + 32 : var4;
        if (var5 >= '0' && var5 <= '9') {
            var1 = var1 * 16 + var5 - '0';
            var2 = 1;
        } else if (var5 >= 'a' && var5 <= 'f') {
            var1 = var1 * 16 + var5 - 'a' + 10;
            var2 = 1;
        } else {
            if (var2 && (var5 == ' ' || var5 == 0)) break;
            if (var2 || var5 != ' ') return -1;
        }
        ++var0;
    } while (var0 < arg1);
    return var1;
}
