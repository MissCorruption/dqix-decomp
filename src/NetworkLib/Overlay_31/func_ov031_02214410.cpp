#include <globaldefs.h>

// USA: func_ov031_02214410
extern "C" ARM int func_ov031_02214410(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    int var1 = var0[0x22];
    if (var1 == 0) var1 = var0[0x15];
    unsigned int var2 = var0[0x16];
    if (var2 < 10) {
        int var3 = var0[0x14];
        if (var3 == 3) return (int)0xffff3864 - var1;
        switch (var3) {
            default: return (int)0xffff379c - var1;
            case 4: return -0xc800 - var1;
        }
    }
    if (var2 < 13) return (int)0xffff34e0 - var1;
    int var4 = *(int*)(var0 + 0x10);
    if (var4 == 0) return (int)0xffff3cb0 - var1;
    if (var4 == -1) return (int)0xffff347c - var1;
    if (var4 == -2) return (int)0xffff3418 - var1;
    if (var4 == -3) return (int)0xffff33b4 - var1;
    if (var4 == -4) return (int)0xffff30f8 - var1;
    if (var4 == -5) return (int)0xffff3094 - var1;
    if (var4 == -6) return (int)0xffff3030 - var1;
    return var4;
}
