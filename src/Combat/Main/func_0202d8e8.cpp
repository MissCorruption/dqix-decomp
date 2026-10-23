#include <globaldefs.h>

extern char data_021015a0;

// USA: func_0202d8e8
extern "C" ARM int func_0202d8e8(void) {
    signed short var0;
    unsigned short var1;
    unsigned short var2;
    signed short var3;
    unsigned short var4;
    int var5;

    *(int*)(&data_021015a0 + 0x10) = 1;
    var0 = 0;
    var2 = 0;
    var3 = 0;
    var1 = *(unsigned short*)(&data_021015a0 + 0xc);

    for (var3 = 0; var3 < 0x10; var3++) {
        if (var1 & (1 << var3)) {
            var0 = var3 + 1;
            var2 = var2 + 1;
        }
    }

    if (var2 <= 1) {
        goto out;
    }

    var5 = *(int*)(&data_021015a0 + 0x20);
    var5 = var5 * 0x10DCD + 0x3039;
    var4 = (unsigned short)((var2 * (var5 & 0xff)) >> 8);
    *(int*)(&data_021015a0 + 0x20) = var5;

    for (var3 = 0; var3 < 0x10; var3++) {
        if (var1 & 1) {
            if (var4 == 0) {
                var0 = var3 + 1;
                goto out;
            }
            var4 = var4 - 1;
        }
        var1 >>= 1;
    }

    var0 = 0;

out:
    return (*(unsigned short*)(&data_021015a0 + 2) = var0);
}