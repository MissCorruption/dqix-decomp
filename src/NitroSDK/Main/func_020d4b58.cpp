#include <globaldefs.h>

extern "C" ARM void func_020c99ac(void* arg0);

// USA: func_020d4b58
extern "C" ARM unsigned short func_020d4b58() {
    unsigned char var0[8];
    func_020c99ac(var0);
    unsigned char* var1 = var0;
    unsigned short var2;
    int var3;
    var3 = 0, var2 = 0;
    do {
        unsigned char var4 = *var1++;
        var3++;
        var2 = (unsigned short)(var2 + var4);
    } while (var3 < 6);
    unsigned short var5 = (unsigned short)(var2 + *(int*)0x27ffc3c);
    unsigned short var6 = (unsigned short)(var5 * 7);
    return (var6 % 20) + 200;
}
