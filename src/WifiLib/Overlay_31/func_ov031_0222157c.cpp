#include <globaldefs.h>

extern "C" const unsigned int data_ov031_02247d10[256];
extern "C" const unsigned int data_ov031_02248110[256];
extern "C" const unsigned int data_ov031_02248510[256];
extern "C" const unsigned int data_ov031_02246110[256];
extern "C" const unsigned int data_ov031_02246510[256];

#define Te4 data_ov031_02247d10
#define Td0 data_ov031_02248110
#define Td1 data_ov031_02248510
#define Td2 data_ov031_02246110
#define Td3 data_ov031_02246510

extern "C" int func_ov031_022212c4(unsigned int *arg0, const unsigned char *arg1, int arg2);

// USA: func_ov031_0222157c (rijndaelKeySetupDec)
extern "C" THUMB int func_ov031_0222157c(unsigned int *arg0, const unsigned char *arg1, int arg2) {
    int var0, var1, var2;
    unsigned int var3;

    var0 = func_ov031_022212c4(arg0, arg1, arg2);
    for (var1 = 0, var2 = 4*var0; var1 < var2; var1 += 4, var2 -= 4) {
        var3 = arg0[var1    ]; arg0[var1    ] = arg0[var2    ]; arg0[var2    ] = var3;
        var3 = arg0[var1 + 1]; arg0[var1 + 1] = arg0[var2 + 1]; arg0[var2 + 1] = var3;
        var3 = arg0[var1 + 2]; arg0[var1 + 2] = arg0[var2 + 2]; arg0[var2 + 2] = var3;
        var3 = arg0[var1 + 3]; arg0[var1 + 3] = arg0[var2 + 3]; arg0[var2 + 3] = var3;
    }
    for (var1 = 1; var1 < var0; var1++) {
        arg0 += 4;
        arg0[0] =
            Td0[Te4[(arg0[0] >> 24)       ] & 0xff] ^
            Td1[Te4[(arg0[0] >> 16) & 0xff] & 0xff] ^
            Td2[Te4[(arg0[0] >>  8) & 0xff] & 0xff] ^
            Td3[Te4[(arg0[0]      ) & 0xff] & 0xff];
        arg0[1] =
            Td0[Te4[(arg0[1] >> 24)       ] & 0xff] ^
            Td1[Te4[(arg0[1] >> 16) & 0xff] & 0xff] ^
            Td2[Te4[(arg0[1] >>  8) & 0xff] & 0xff] ^
            Td3[Te4[(arg0[1]      ) & 0xff] & 0xff];
        arg0[2] =
            Td0[Te4[(arg0[2] >> 24)       ] & 0xff] ^
            Td1[Te4[(arg0[2] >> 16) & 0xff] & 0xff] ^
            Td2[Te4[(arg0[2] >>  8) & 0xff] & 0xff] ^
            Td3[Te4[(arg0[2]      ) & 0xff] & 0xff];
        arg0[3] =
            Td0[Te4[(arg0[3] >> 24)       ] & 0xff] ^
            Td1[Te4[(arg0[3] >> 16) & 0xff] & 0xff] ^
            Td2[Te4[(arg0[3] >>  8) & 0xff] & 0xff] ^
            Td3[Te4[(arg0[3]      ) & 0xff] & 0xff];
    }
    return var0;
}
