#include <globaldefs.h>

// USA: func_02088474
extern "C" ARM void func_02088474(void* arg0, int arg1, int arg2) {
    unsigned char* var0 = (unsigned char*)arg0;

    var0[0x21] = 0;

    unsigned int var1 = *(unsigned int*)(var0 + 0x18);
    var1 &= ~0x20;
    *(unsigned int*)(var0 + 0x18) = var1;

    var1 = *(unsigned int*)(var0 + 0x14);
    unsigned int var2 = (unsigned int)arg1 << 28;
    var1 &= ~0x80000;
    *(unsigned int*)(var0 + 0x14) = var1;

    unsigned int var3 = *(unsigned short*)(var0 + 0x22);
    var3 &= ~0x3c;
    *(unsigned short*)(var0 + 0x22) = (unsigned short)var3;

    var1 = *(unsigned int*)(var0 + 0x14);
    var1 &= ~0x800000;
    *(unsigned int*)(var0 + 0x14) = var1;

    var0[0x24] = 0;

    if (arg2 == 0x1fc || arg2 == 0x20f) {
        unsigned int var4 = *(unsigned int*)(var0 + 0x14);
        var4 &= ~0x1000000;
        *(unsigned int*)(var0 + 0x14) = var4;
        arg2 = 0;
        var0[0x24] = (unsigned char)arg2;
    }

    var1 = *(unsigned int*)(var0 + 0x14);
    var1 |= 0x80000;
    *(unsigned int*)(var0 + 0x14) = var1;

    var3 = *(unsigned short*)(var0 + 0x22);
    var3 &= ~0x3c;
    var3 |= var2 >> 26;
    *(unsigned short*)(var0 + 0x22) = (unsigned short)var3;
}
