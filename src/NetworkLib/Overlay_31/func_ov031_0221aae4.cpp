#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern signed char* data_ov031_0224a2dc;

// USA: func_ov031_0221aae4
extern "C" ARM int func_ov031_0221aae4(unsigned char* arg0, unsigned int arg1, char* arg2, unsigned int arg3) {
    unsigned int var0 = arg1 % 3 ? 4 : 0;
    unsigned int var1 = var0 + arg1 / 3 * 4;
    if (!arg2) return var1;
    if (arg3 < var1) return -1;
    int var2;
    unsigned char* var3 = arg0 + arg1;
    char* var4 = arg2;
    if (arg0 != var3) do {
        int var5 = var3 - arg0;
        int var6 = var5 * 8;
        var2 = var6 / 6 + (var6 % 6 != 0);
        if (var5 >= 3) var5 = 3;
        unsigned char var7[3];
        VectorizedMemset(var7, 0, 3);
        VectorizedInvertedMemcpy(arg0, var7, var5);
        var4[0] = data_ov031_0224a2dc[var7[0] >> 2];
        if (var2 < 2) var4[1] = '*';
        else var4[1] = data_ov031_0224a2dc[((var7[0] << 4) & 0x3f) | (var7[1] >> 4)];
        if (var2 < 3) var4[2] = '*';
        else var4[2] = data_ov031_0224a2dc[((var7[1] << 2) & 0x3f) | (var7[2] >> 6)];
        if (var2 < 4) var4[3] = '*';
        else var4[3] = data_ov031_0224a2dc[var7[2] & 0x3f];
        arg0 += var5;
        var4 += 4;
    } while (arg0 != var3);
    return var4 - arg2;
}
