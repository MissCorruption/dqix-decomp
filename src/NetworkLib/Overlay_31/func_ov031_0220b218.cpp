#include <globaldefs.h>

extern "C" void func_ov031_0220b1d0(unsigned int* arg0, const void* arg1, unsigned int arg2);
extern "C" ARM unsigned int func_ov031_0220b148(unsigned int arg0, unsigned int* arg1);

#define ROL(x, n) (((x) << (n)) | ((x) >> (32 - (n))))

#define F1(b, c, d) ((d) ^ ((b) & ((c) ^ (d))))
#define F2(b, c, d) ((d) ^ ((b) ^ (c)))
#define F3(b, c, d) (((b) & ((c) | (d))) | ((c) & (d)))

#define R(f, k, a, b, c, d, e, x) \
    e += ROL(a, 5) + f(b, c, d) + (x) + k; \
    b = ROL(b, 30);

// USA: func_ov031_0220b218
extern "C" ARM void func_ov031_0220b218(unsigned int* arg0, const void* arg1) {
    unsigned int var0[16];
    unsigned int var1 = arg0[0];
    unsigned int var2 = arg0[1];
    unsigned int var3 = arg0[2];
    unsigned int var4 = arg0[3];
    unsigned int var5 = arg0[4];
    int var6;
    int var7;

    func_ov031_0220b1d0(var0, arg1, 0x40);

    var6 = 0;
    for (var7 = 0; var7 < 3; var7++) {
        R(F1, 0x5a827999, var1, var2, var3, var4, var5, var0[var6]);
        R(F1, 0x5a827999, var5, var1, var2, var3, var4, var0[var6 + 1]);
        R(F1, 0x5a827999, var4, var5, var1, var2, var3, var0[var6 + 2]);
        R(F1, 0x5a827999, var3, var4, var5, var1, var2, var0[var6 + 3]);
        R(F1, 0x5a827999, var2, var3, var4, var5, var1, var0[var6 + 4]);
        var6 += 5;
    }
    R(F1, 0x5a827999, var1, var2, var3, var4, var5, var0[15]);
    R(F1, 0x5a827999, var5, var1, var2, var3, var4, func_ov031_0220b148(0, var0));
    R(F1, 0x5a827999, var4, var5, var1, var2, var3, func_ov031_0220b148(1, var0));
    R(F1, 0x5a827999, var3, var4, var5, var1, var2, func_ov031_0220b148(2, var0));
    R(F1, 0x5a827999, var2, var3, var4, var5, var1, func_ov031_0220b148(3, var0));

    var6 = 4;
    for (var7 = 0; var7 < 4; var7++) {
        R(F2, 0x6ed9eba1, var1, var2, var3, var4, var5, func_ov031_0220b148(var6, var0));
        R(F2, 0x6ed9eba1, var5, var1, var2, var3, var4, func_ov031_0220b148(var6 + 1, var0));
        var6 = (var6 + 2) & 0xf;
        R(F2, 0x6ed9eba1, var4, var5, var1, var2, var3, func_ov031_0220b148(var6, var0));
        R(F2, 0x6ed9eba1, var3, var4, var5, var1, var2, func_ov031_0220b148(var6 + 1, var0));
        R(F2, 0x6ed9eba1, var2, var3, var4, var5, var1, func_ov031_0220b148(var6 + 2, var0));
        var6 += 3;
    }
    for (var7 = 0; var7 < 4; var7++) {
        R(F3, 0x8f1bbcdc, var1, var2, var3, var4, var5, func_ov031_0220b148(var6, var0));
        R(F3, 0x8f1bbcdc, var5, var1, var2, var3, var4, func_ov031_0220b148(var6 + 1, var0));
        R(F3, 0x8f1bbcdc, var4, var5, var1, var2, var3, func_ov031_0220b148(var6 + 2, var0));
        var6 = (var6 + 3) & 0xf;
        R(F3, 0x8f1bbcdc, var3, var4, var5, var1, var2, func_ov031_0220b148(var6, var0));
        R(F3, 0x8f1bbcdc, var2, var3, var4, var5, var1, func_ov031_0220b148(var6 + 1, var0));
        var6 += 2;
    }
    for (var7 = 0; var7 < 4; var7++) {
        R(F2, 0xca62c1d6, var1, var2, var3, var4, var5, func_ov031_0220b148(var6, var0));
        R(F2, 0xca62c1d6, var5, var1, var2, var3, var4, func_ov031_0220b148(var6 + 1, var0));
        R(F2, 0xca62c1d6, var4, var5, var1, var2, var3, func_ov031_0220b148(var6 + 2, var0));
        R(F2, 0xca62c1d6, var3, var4, var5, var1, var2, func_ov031_0220b148(var6 + 3, var0));
        var6 = (var6 + 4) & 0xf;
        R(F2, 0xca62c1d6, var2, var3, var4, var5, var1, func_ov031_0220b148(var6, var0));
        var6++;
    }

    arg0[0] += var1;
    arg0[1] += var2;
    arg0[2] += var3;
    arg0[3] += var4;
    arg0[4] += var5;
}
