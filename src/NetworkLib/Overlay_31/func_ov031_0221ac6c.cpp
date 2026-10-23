#include <globaldefs.h>

// USA: func_ov031_0221ac6c
extern "C" ARM int func_ov031_0221ac6c(const char* arg0, unsigned int arg1, char* arg2, unsigned int arg3) {
    if (arg1 & 3) return -1;
    int var0 = 0;
    unsigned int var1 = 0;
    if (arg1 > var1) {
        do {
            if (arg0[var1] != '*') var0 += 6;
            ++var1;
        } while (var1 < arg1);
    }
    int var2 = var0 / 8;
    if (arg2 == 0) return var2;
    if (arg3 < (unsigned int)var2) return -1;
    if (arg1 == 0) return 0;
    char* var3 = arg2;
    int var4;
    do {
        char var5[4];
        char* var6 = var5;
        int var7 = 0;
        do {
            int var8 = arg0[var7];
            if (var8 >= 'A' && var8 <= 'Z') *var6 = var8 - 'A';
            else if (var8 >= 'a' && var8 <= 'z') *var6 = var8 - 'G';
            else if (var8 >= '0' && var8 <= '9') *var6 = var8 + 4;
            else if (var8 == '.') *var6 = 62;
            else if (var8 == '-') *var6 = 63;
            else *var6 = 0;
            ++var7;
            ++var6;
        } while (var7 < 4);
        var3[0] = (var5[0] << 2) | (var5[1] >> 4);
        var4 = var3 + 1 - arg2;
        arg0 += 4;
        if (var4 >= var2) break;
        var3[1] = (var5[1] << 4) | (var5[2] >> 2);
        var4 = var3 + 2 - arg2;
        if (var4 >= var2) break;
        var3[2] = (var5[2] << 6) | var5[3];
        var3 += 3;
        var4 = var3 - arg2;
    } while (var4 < var2);
    return var4;
}
