#include <globaldefs.h>

extern short data_020e8a24[8];

struct Struct_0207c258 {
    char unknown_0_[0xbd0];
    short* unknown_bd0_[8];
    unsigned char* unknown_bf0_[8];
    short unknown_c10_[8];
    unsigned char unknown_c20_[8];
    unsigned char unknown_c28_[8];
};

// USA: func_0207c258
extern "C" ARM void func_0207c258(struct Struct_0207c258* arg0) {
    int var0, var1;
    char* var2 = (char*)arg0;

    arg0->unknown_bd0_[0] = (short*)arg0;
    arg0->unknown_bd0_[1] = (short*)(var2 + 0x330);
    arg0->unknown_bd0_[2] = (short*)(var2 + 0x3c0);
    arg0->unknown_bd0_[3] = (short*)(var2 + 0x600);
    arg0->unknown_bd0_[4] = (short*)(var2 + 0x720);
    arg0->unknown_bd0_[5] = (short*)(var2 + 0x8d0);
    arg0->unknown_bd0_[6] = (short*)(var2 + 0x9c0);
    arg0->unknown_bd0_[7] = (short*)(var2 + 0xb10);
    arg0->unknown_bf0_[0] = (unsigned char*)(var2 + 0x220);
    arg0->unknown_bf0_[1] = (unsigned char*)(var2 + 0x390);
    arg0->unknown_bf0_[2] = (unsigned char*)(var2 + 0x540);
    arg0->unknown_bf0_[3] = (unsigned char*)(var2 + 0x6c0);
    arg0->unknown_bf0_[4] = (unsigned char*)(var2 + 0x840);
    arg0->unknown_bf0_[5] = (unsigned char*)(var2 + 0x970);
    arg0->unknown_bf0_[6] = (unsigned char*)(var2 + 0xaa0);
    arg0->unknown_bf0_[7] = (unsigned char*)(var2 + 0xb90);

    for (var0 = 0; var0 < 8; var0++) {
        arg0->unknown_c10_[var0] = data_020e8a24[var0];
        arg0->unknown_c20_[var0] = (unsigned char)var0;
    }

    for (var1 = 0; var1 < 8; var1++) {
        short* var3 = arg0->unknown_bd0_[var1];
        unsigned char* var4 = arg0->unknown_bf0_[var1];
        short var5 = arg0->unknown_c10_[var1];
        int var6;
        for (var6 = 0; var6 < var5; var6++) {
            var3[var6] = -1;
            var4[var6] = 0;
        }
        arg0->unknown_c28_[var1] = 0;
    }
}
