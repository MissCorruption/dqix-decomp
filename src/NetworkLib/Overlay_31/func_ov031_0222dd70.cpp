#include <globaldefs.h>

extern unsigned char* data_ov031_02290c98;
extern "C" void* VectorizedInvertedMemcpy(void* dst, void* src, int n);
extern "C" int func_02005a94(signed char* arg0);

// USA: func_ov031_0222dd70
extern "C" ARM int func_ov031_0222dd70(int arg0) {
    unsigned char var0 = data_ov031_02290c98[0x14];
    unsigned char* var1 = data_ov031_02290c98 + 8 + var0 * 3;
    unsigned char var2 = *var1;
    if (var2 != 0 && var2 != 0x20) return 1;

    char var3[4];
    VectorizedInvertedMemcpy(var1, var3, 3);
    var3[3] = 0;
    int var4 = 0;
    unsigned char* var5 = (unsigned char*)var3;
    do {
        if (*var5 != 0) break;
        var4++;
        *var5++ = 0x20;
    } while (var4 < 3);

    int var6 = func_02005a94((signed char*)var3);
    return var6 >= arg0 ? 1 : 0;
}
