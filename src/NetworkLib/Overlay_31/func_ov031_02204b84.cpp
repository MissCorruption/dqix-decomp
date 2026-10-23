#include <globaldefs.h>

extern "C" int func_ov031_02204b50(char* arg0, char** arg1);

// USA: func_ov031_02204b84
extern "C" ARM int func_ov031_02204b84(char* arg0, unsigned int* arg1) {
    unsigned int var0 = 0;
    char* var1 = arg0;
    int var2 = 0;
    do {
        char* var3;
        int var4 = func_ov031_02204b50(var1, &var3);
        if (var1 == var3)
            return 0;
        var1 = var3;
        if ((unsigned int)var4 > 0xff)
            goto fail;
        if (var2 != 3) {
            unsigned char var5 = *var1;
            var1 = var1 + 1;
            if (var5 != '.')
                goto fail;
        }
        if (var2 == 3) {
            if (*(unsigned char*)var1 != 0)
                goto fail;
        }
        goto accumulate;
fail:
        return 0;
accumulate:
        var2++;
        var0 = var4 | (var0 << 8);
    } while (var2 < 4);
    *arg1 = var0;
    return 1;
}
