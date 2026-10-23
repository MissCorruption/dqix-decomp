#include <globaldefs.h>

extern "C" void func_ov031_022227ec(unsigned int* arg0, const unsigned char* arg1, unsigned int arg2);
extern "C" void func_ov031_02222830(void* arg0, int arg1, unsigned int arg2);

#define S11 7
#define S12 12
#define S13 17
#define S14 22
#define S21 5
#define S22 9
#define S23 14
#define S24 20
#define S31 4
#define S32 11
#define S33 16
#define S34 23
#define S41 6
#define S42 10
#define S43 15
#define S44 21

#define F(x, y, z) (((x) & (y)) | ((~x) & (z)))
#define G(x, y, z) (((x) & (z)) | ((y) & (~z)))
#define H(x, y, z) ((x) ^ (y) ^ (z))
#define I(x, y, z) ((y) ^ ((x) | (~z)))

#define ROTATE_LEFT(x, n) (((x) << (n)) | ((x) >> (32 - (n))))

#define FF(a, b, c, d, x, s, ac) { \
    (a) += F((b), (c), (d)) + (x) + (unsigned int)(ac); \
    (a) = ROTATE_LEFT((a), (s)); \
    (a) += (b); \
}
#define GG(a, b, c, d, x, s, ac) { \
    (a) += G((b), (c), (d)) + (x) + (unsigned int)(ac); \
    (a) = ROTATE_LEFT((a), (s)); \
    (a) += (b); \
}
#define HH(a, b, c, d, x, s, ac) { \
    (a) += H((b), (c), (d)) + (x) + (unsigned int)(ac); \
    (a) = ROTATE_LEFT((a), (s)); \
    (a) += (b); \
}
#define II(a, b, c, d, x, s, ac) { \
    (a) += I((b), (c), (d)) + (x) + (unsigned int)(ac); \
    (a) = ROTATE_LEFT((a), (s)); \
    (a) += (b); \
}

// USA: func_ov031_02221f78
extern "C" THUMB void func_ov031_02221f78(unsigned int* arg0, const unsigned char* arg1) {
    unsigned int var0 = arg0[0], var1 = arg0[1], var2 = arg0[2], var3 = arg0[3], var4[16];

    func_ov031_022227ec(var4, arg1, 64);

    FF(var0, var1, var2, var3, var4[0], S11, 0xd76aa478);
    FF(var3, var0, var1, var2, var4[1], S12, 0xe8c7b756);
    FF(var2, var3, var0, var1, var4[2], S13, 0x242070db);
    FF(var1, var2, var3, var0, var4[3], S14, 0xc1bdceee);
    FF(var0, var1, var2, var3, var4[4], S11, 0xf57c0faf);
    FF(var3, var0, var1, var2, var4[5], S12, 0x4787c62a);
    FF(var2, var3, var0, var1, var4[6], S13, 0xa8304613);
    FF(var1, var2, var3, var0, var4[7], S14, 0xfd469501);
    FF(var0, var1, var2, var3, var4[8], S11, 0x698098d8);
    FF(var3, var0, var1, var2, var4[9], S12, 0x8b44f7af);
    FF(var2, var3, var0, var1, var4[10], S13, 0xffff5bb1);
    FF(var1, var2, var3, var0, var4[11], S14, 0x895cd7be);
    FF(var0, var1, var2, var3, var4[12], S11, 0x6b901122);
    FF(var3, var0, var1, var2, var4[13], S12, 0xfd987193);
    FF(var2, var3, var0, var1, var4[14], S13, 0xa679438e);
    FF(var1, var2, var3, var0, var4[15], S14, 0x49b40821);

    GG(var0, var1, var2, var3, var4[1], S21, 0xf61e2562);
    GG(var3, var0, var1, var2, var4[6], S22, 0xc040b340);
    GG(var2, var3, var0, var1, var4[11], S23, 0x265e5a51);
    GG(var1, var2, var3, var0, var4[0], S24, 0xe9b6c7aa);
    GG(var0, var1, var2, var3, var4[5], S21, 0xd62f105d);
    GG(var3, var0, var1, var2, var4[10], S22, 0x2441453);
    GG(var2, var3, var0, var1, var4[15], S23, 0xd8a1e681);
    GG(var1, var2, var3, var0, var4[4], S24, 0xe7d3fbc8);
    GG(var0, var1, var2, var3, var4[9], S21, 0x21e1cde6);
    GG(var3, var0, var1, var2, var4[14], S22, 0xc33707d6);
    GG(var2, var3, var0, var1, var4[3], S23, 0xf4d50d87);
    GG(var1, var2, var3, var0, var4[8], S24, 0x455a14ed);
    GG(var0, var1, var2, var3, var4[13], S21, 0xa9e3e905);
    GG(var3, var0, var1, var2, var4[2], S22, 0xfcefa3f8);
    GG(var2, var3, var0, var1, var4[7], S23, 0x676f02d9);
    GG(var1, var2, var3, var0, var4[12], S24, 0x8d2a4c8a);

    HH(var0, var1, var2, var3, var4[5], S31, 0xfffa3942);
    HH(var3, var0, var1, var2, var4[8], S32, 0x8771f681);
    HH(var2, var3, var0, var1, var4[11], S33, 0x6d9d6122);
    HH(var1, var2, var3, var0, var4[14], S34, 0xfde5380c);
    HH(var0, var1, var2, var3, var4[1], S31, 0xa4beea44);
    HH(var3, var0, var1, var2, var4[4], S32, 0x4bdecfa9);
    HH(var2, var3, var0, var1, var4[7], S33, 0xf6bb4b60);
    HH(var1, var2, var3, var0, var4[10], S34, 0xbebfbc70);
    HH(var0, var1, var2, var3, var4[13], S31, 0x289b7ec6);
    HH(var3, var0, var1, var2, var4[0], S32, 0xeaa127fa);
    HH(var2, var3, var0, var1, var4[3], S33, 0xd4ef3085);
    HH(var1, var2, var3, var0, var4[6], S34, 0x4881d05);
    HH(var0, var1, var2, var3, var4[9], S31, 0xd9d4d039);
    HH(var3, var0, var1, var2, var4[12], S32, 0xe6db99e5);
    HH(var2, var3, var0, var1, var4[15], S33, 0x1fa27cf8);
    HH(var1, var2, var3, var0, var4[2], S34, 0xc4ac5665);

    II(var0, var1, var2, var3, var4[0], S41, 0xf4292244);
    II(var3, var0, var1, var2, var4[7], S42, 0x432aff97);
    II(var2, var3, var0, var1, var4[14], S43, 0xab9423a7);
    II(var1, var2, var3, var0, var4[5], S44, 0xfc93a039);
    II(var0, var1, var2, var3, var4[12], S41, 0x655b59c3);
    II(var3, var0, var1, var2, var4[3], S42, 0x8f0ccc92);
    II(var2, var3, var0, var1, var4[10], S43, 0xffeff47d);
    II(var1, var2, var3, var0, var4[1], S44, 0x85845dd1);
    II(var0, var1, var2, var3, var4[8], S41, 0x6fa87e4f);
    II(var3, var0, var1, var2, var4[15], S42, 0xfe2ce6e0);
    II(var2, var3, var0, var1, var4[6], S43, 0xa3014314);
    II(var1, var2, var3, var0, var4[13], S44, 0x4e0811a1);
    II(var0, var1, var2, var3, var4[4], S41, 0xf7537e82);
    II(var3, var0, var1, var2, var4[11], S42, 0xbd3af235);
    II(var2, var3, var0, var1, var4[2], S43, 0x2ad7d2bb);
    II(var1, var2, var3, var0, var4[9], S44, 0xeb86d391);

    arg0[0] += var0;
    arg0[1] += var1;
    arg0[2] += var2;
    arg0[3] += var3;

    func_ov031_02222830(var4, 0, sizeof(var4));
}
