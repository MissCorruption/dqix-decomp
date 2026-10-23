#include <globaldefs.h>

extern "C" const unsigned int data_ov031_02248110[256];   // Td0
extern "C" const unsigned int data_ov031_02248510[256];   // Td1
extern "C" const unsigned int data_ov031_02246110[256];   // Td2
extern "C" const unsigned int data_ov031_02246510[256];   // Td3
extern "C" const unsigned int data_ov031_02246910[256];   // Td4

#define Td0 data_ov031_02248110
#define Td1 data_ov031_02248510
#define Td2 data_ov031_02246110
#define Td3 data_ov031_02246510
#define Td4 data_ov031_02246910

#define GETU32(p) \
    (((unsigned int)(p)[0] << 24) ^ ((unsigned int)(p)[1] << 16) ^ \
     ((unsigned int)(p)[2] << 8) ^ ((unsigned int)(p)[3]))

#define PUTU32(ct, st) { \
    (ct)[0] = (unsigned char)((st) >> 24); \
    (ct)[1] = (unsigned char)((st) >> 16); \
    (ct)[2] = (unsigned char)((st) >> 8);  \
    (ct)[3] = (unsigned char)(st); }

// USA: func_ov031_02221ac8
extern "C" THUMB void func_ov031_02221ac8(const unsigned int *arg0, int arg1,
                                           const unsigned char *arg2, unsigned char *arg3) {
    unsigned int var0, var1, var2, var3, var4, var5, var6, var7;
    int var8;

    var0 = GETU32(arg2     ) ^ arg0[0];
    var1 = GETU32(arg2 +  4) ^ arg0[1];
    var2 = GETU32(arg2 +  8) ^ arg0[2];
    var3 = GETU32(arg2 + 12) ^ arg0[3];

    var8 = arg1 >> 1;
    for (;;) {
        var4 =
            Td0[(var0 >> 24)       ] ^
            Td1[(var3 >> 16) & 0xff] ^
            Td2[(var2 >>  8) & 0xff] ^
            Td3[(var1      ) & 0xff] ^
            arg0[4];
        var5 =
            Td0[(var1 >> 24)       ] ^
            Td1[(var0 >> 16) & 0xff] ^
            Td2[(var3 >>  8) & 0xff] ^
            Td3[(var2      ) & 0xff] ^
            arg0[5];
        var6 =
            Td0[(var2 >> 24)       ] ^
            Td1[(var1 >> 16) & 0xff] ^
            Td2[(var0 >>  8) & 0xff] ^
            Td3[(var3      ) & 0xff] ^
            arg0[6];
        var7 =
            Td0[(var3 >> 24)       ] ^
            Td1[(var2 >> 16) & 0xff] ^
            Td2[(var1 >>  8) & 0xff] ^
            Td3[(var0      ) & 0xff] ^
            arg0[7];

        arg0 += 8;
        if (--var8 == 0) {
            break;
        }

        var0 =
            Td0[(var4 >> 24)       ] ^
            Td1[(var7 >> 16) & 0xff] ^
            Td2[(var6 >>  8) & 0xff] ^
            Td3[(var5      ) & 0xff] ^
            arg0[0];
        var1 =
            Td0[(var5 >> 24)       ] ^
            Td1[(var4 >> 16) & 0xff] ^
            Td2[(var7 >>  8) & 0xff] ^
            Td3[(var6      ) & 0xff] ^
            arg0[1];
        var2 =
            Td0[(var6 >> 24)       ] ^
            Td1[(var5 >> 16) & 0xff] ^
            Td2[(var4 >>  8) & 0xff] ^
            Td3[(var7      ) & 0xff] ^
            arg0[2];
        var3 =
            Td0[(var7 >> 24)       ] ^
            Td1[(var6 >> 16) & 0xff] ^
            Td2[(var5 >>  8) & 0xff] ^
            Td3[(var4      ) & 0xff] ^
            arg0[3];
    }

    var0 =
        (Td4[(var4 >> 24)       ] & 0xff000000) ^
        (Td4[(var7 >> 16) & 0xff] & 0x00ff0000) ^
        (Td4[(var6 >>  8) & 0xff] & 0x0000ff00) ^
        (Td4[(var5      ) & 0xff] & 0x000000ff) ^
        arg0[0];
    PUTU32(arg3, var0);

    var1 =
        (Td4[(var5 >> 24)       ] & 0xff000000) ^
        (Td4[(var4 >> 16) & 0xff] & 0x00ff0000) ^
        (Td4[(var7 >>  8) & 0xff] & 0x0000ff00) ^
        (Td4[(var6      ) & 0xff] & 0x000000ff) ^
        arg0[1];
    PUTU32(arg3 + 4, var1);

    var2 =
        (Td4[(var6 >> 24)       ] & 0xff000000) ^
        (Td4[(var5 >> 16) & 0xff] & 0x00ff0000) ^
        (Td4[(var4 >>  8) & 0xff] & 0x0000ff00) ^
        (Td4[(var7      ) & 0xff] & 0x000000ff) ^
        arg0[2];
    PUTU32(arg3 + 8, var2);

    var3 =
        (Td4[(var7 >> 24)       ] & 0xff000000) ^
        (Td4[(var6 >> 16) & 0xff] & 0x00ff0000) ^
        (Td4[(var5 >>  8) & 0xff] & 0x0000ff00) ^
        (Td4[(var4      ) & 0xff] & 0x000000ff) ^
        arg0[3];
    PUTU32(arg3 + 12, var3);
}
