#include <globaldefs.h>

extern "C" const unsigned int data_ov031_02247d10[256];   // Te4
extern "C" const unsigned int data_ov031_02248110[256];   // Td0
extern "C" const unsigned int data_ov031_02248510[256];   // Td1
extern "C" const unsigned int data_ov031_02246110[256];   // Td2
extern "C" const unsigned int data_ov031_02246510[256];   // Td3

#define Te4 data_ov031_02247d10
#define Td0 data_ov031_02248110
#define Td1 data_ov031_02248510
#define Td2 data_ov031_02246110
#define Td3 data_ov031_02246510

extern "C" int func_ov031_022212c4(unsigned int *rk, const unsigned char *cipherKey, int keyBits);

// USA: func_ov031_0222157c (rijndaelKeySetupDec)
extern "C" THUMB int func_ov031_0222157c(unsigned int *rk, const unsigned char *cipherKey, int keyBits) {
    int Nr, i, j;
    unsigned int temp;

    /* expand the cipher key: */
    Nr = func_ov031_022212c4(rk, cipherKey, keyBits);
    /* invert the order of the round keys: */
    for (i = 0, j = 4*Nr; i < j; i += 4, j -= 4) {
        temp = rk[i    ]; rk[i    ] = rk[j    ]; rk[j    ] = temp;
        temp = rk[i + 1]; rk[i + 1] = rk[j + 1]; rk[j + 1] = temp;
        temp = rk[i + 2]; rk[i + 2] = rk[j + 2]; rk[j + 2] = temp;
        temp = rk[i + 3]; rk[i + 3] = rk[j + 3]; rk[j + 3] = temp;
    }
    /* apply the inverse MixColumn transform to all round keys but the first and the last: */
    for (i = 1; i < Nr; i++) {
        rk += 4;
        rk[0] =
            Td0[Te4[(rk[0] >> 24)       ] & 0xff] ^
            Td1[Te4[(rk[0] >> 16) & 0xff] & 0xff] ^
            Td2[Te4[(rk[0] >>  8) & 0xff] & 0xff] ^
            Td3[Te4[(rk[0]      ) & 0xff] & 0xff];
        rk[1] =
            Td0[Te4[(rk[1] >> 24)       ] & 0xff] ^
            Td1[Te4[(rk[1] >> 16) & 0xff] & 0xff] ^
            Td2[Te4[(rk[1] >>  8) & 0xff] & 0xff] ^
            Td3[Te4[(rk[1]      ) & 0xff] & 0xff];
        rk[2] =
            Td0[Te4[(rk[2] >> 24)       ] & 0xff] ^
            Td1[Te4[(rk[2] >> 16) & 0xff] & 0xff] ^
            Td2[Te4[(rk[2] >>  8) & 0xff] & 0xff] ^
            Td3[Te4[(rk[2]      ) & 0xff] & 0xff];
        rk[3] =
            Td0[Te4[(rk[3] >> 24)       ] & 0xff] ^
            Td1[Te4[(rk[3] >> 16) & 0xff] & 0xff] ^
            Td2[Te4[(rk[3] >>  8) & 0xff] & 0xff] ^
            Td3[Te4[(rk[3]      ) & 0xff] & 0xff];
    }
    return Nr;
}
