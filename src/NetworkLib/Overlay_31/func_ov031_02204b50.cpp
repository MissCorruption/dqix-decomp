#include <globaldefs.h>

// USA: func_ov031_02204b50
extern "C" ARM int func_ov031_02204b50(char* arg0, char** arg1) {
    *arg1 = arg0;
    unsigned int var0 = 0;
    unsigned int var1;
    do {
        var1 = ((unsigned char)*arg0 - 0x30) & 0xff;
        if (var1 > 9) break;
        var0 = var0 * 10 + var1;
        arg0++;
        *arg1 = arg0;
    } while (1);
    return var0;
}
