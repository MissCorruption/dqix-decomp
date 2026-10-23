#include <globaldefs.h>

extern "C" ARM void func_020c99ac(void* arg0);

// USA: func_ov027_021dc618
#pragma optimize_for_size off
extern "C" ARM unsigned int func_ov027_021dc618() {
    unsigned char var0[8];
    func_020c99ac(var0);
    unsigned char* var1 = var0;
    unsigned int var2;
    int var3;
    var3 = 0, var2 = 0;
    do {
        var2 += *var1++;
        var3++;
    } while (var3 < 6);
    unsigned int var4 = var2 + *(unsigned int*)0x27ffc3c;
    unsigned int var5 = var4 * 7;
    return var5 % 20;
}
