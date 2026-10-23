#include <globaldefs.h>

extern "C" const unsigned int data_ov031_02246d10[256];   // Te0
extern "C" const unsigned int data_ov031_02247110[256];   // Te1
extern "C" const unsigned int data_ov031_02247510[256];   // Te2
extern "C" const unsigned int data_ov031_02247910[256];   // Te3
extern "C" const unsigned int data_ov031_02247d10[256];   // Te4

#define Te0 data_ov031_02246d10
#define Te1 data_ov031_02247110
#define Te2 data_ov031_02247510
#define Te3 data_ov031_02247910
#define Te4 data_ov031_02247d10

#define GETU32(p) \
    (((unsigned int)(p)[0] << 24) ^ ((unsigned int)(p)[1] << 16) ^ \
     ((unsigned int)(p)[2] << 8) ^ ((unsigned int)(p)[3]))

#define PUTU32(ct, st) { \
    (ct)[0] = (unsigned char)((st) >> 24); \
    (ct)[1] = (unsigned char)((st) >> 16); \
    (ct)[2] = (unsigned char)((st) >> 8);  \
    (ct)[3] = (unsigned char)(st); }

// USA: func_ov031_0222170c
extern "C" THUMB void func_ov031_0222170c(const unsigned int *arg0, int arg1,
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
            Te0[(var0 >> 24)       ] ^
            Te1[(var1 >> 16) & 0xff] ^
            Te2[(var2 >>  8) & 0xff] ^
            Te3[(var3      ) & 0xff] ^
            arg0[4];
        var5 =
            Te0[(var1 >> 24)       ] ^
            Te1[(var2 >> 16) & 0xff] ^
            Te2[(var3 >>  8) & 0xff] ^
            Te3[(var0      ) & 0xff] ^
            arg0[5];
        var6 =
            Te0[(var2 >> 24)       ] ^
            Te1[(var3 >> 16) & 0xff] ^
            Te2[(var0 >>  8) & 0xff] ^
            Te3[(var1      ) & 0xff] ^
            arg0[6];
        var7 =
            Te0[(var3 >> 24)       ] ^
            Te1[(var0 >> 16) & 0xff] ^
            Te2[(var1 >>  8) & 0xff] ^
            Te3[(var2      ) & 0xff] ^
            arg0[7];

        arg0 += 8;
        if (--var8 == 0) {
            break;
        }

        var0 =
            Te0[(var4 >> 24)       ] ^
            Te1[(var5 >> 16) & 0xff] ^
            Te2[(var6 >>  8) & 0xff] ^
            Te3[(var7      ) & 0xff] ^
            arg0[0];
        var1 =
            Te0[(var5 >> 24)       ] ^
            Te1[(var6 >> 16) & 0xff] ^
            Te2[(var7 >>  8) & 0xff] ^
            Te3[(var4      ) & 0xff] ^
            arg0[1];
        var2 =
            Te0[(var6 >> 24)       ] ^
            Te1[(var7 >> 16) & 0xff] ^
            Te2[(var4 >>  8) & 0xff] ^
            Te3[(var5      ) & 0xff] ^
            arg0[2];
        var3 =
            Te0[(var7 >> 24)       ] ^
            Te1[(var4 >> 16) & 0xff] ^
            Te2[(var5 >>  8) & 0xff] ^
            Te3[(var6      ) & 0xff] ^
            arg0[3];
    }

    var0 =
        (Te4[(var4 >> 24)       ] & 0xff000000) ^
        (Te4[(var5 >> 16) & 0xff] & 0x00ff0000) ^
        (Te4[(var6 >>  8) & 0xff] & 0x0000ff00) ^
        (Te4[(var7      ) & 0xff] & 0x000000ff) ^
        arg0[0];
    PUTU32(arg3, var0);

    var1 =
        (Te4[(var5 >> 24)       ] & 0xff000000) ^
        (Te4[(var6 >> 16) & 0xff] & 0x00ff0000) ^
        (Te4[(var7 >>  8) & 0xff] & 0x0000ff00) ^
        (Te4[(var4      ) & 0xff] & 0x000000ff) ^
        arg0[1];
    PUTU32(arg3 + 4, var1);

    var2 =
        (Te4[(var6 >> 24)       ] & 0xff000000) ^
        (Te4[(var7 >> 16) & 0xff] & 0x00ff0000) ^
        (Te4[(var4 >>  8) & 0xff] & 0x0000ff00) ^
        (Te4[(var5      ) & 0xff] & 0x000000ff) ^
        arg0[2];
    PUTU32(arg3 + 8, var2);

    var3 =
        (Te4[(var7 >> 24)       ] & 0xff000000) ^
        (Te4[(var4 >> 16) & 0xff] & 0x00ff0000) ^
        (Te4[(var5 >>  8) & 0xff] & 0x0000ff00) ^
        (Te4[(var6      ) & 0xff] & 0x000000ff) ^
        arg0[3];
    PUTU32(arg3 + 12, var3);
}
