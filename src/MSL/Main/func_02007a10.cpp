#include <globaldefs.h>

extern "C" ARM double func_0200aae4(double arg0, int arg1);
extern "C" ARM double func_02008f5c(double arg0);

extern const int data_020e6c74[];
extern const double data_020e6c84[];

static const double
zero   = 0.0,
one    = 1.0,
two24  = 1.67772160000000000000e+07,
twon24 = 5.96046447753906250000e-08;

// USA: func_02007a10
extern "C" ARM int func_02007a10(double* arg0, double* arg1, int arg2, int arg3, int arg4, const int* arg5) {
    int var0, var1, var2, var3, var4, var5, var6, var7[20], var8, var9, var10, var11, var12, var13;
    double var14, var15, var16[20], var17[20], var18[20];

    var4 = data_020e6c74[arg4];
    var3 = var4;

    var1 = arg3 - 1;
    var2 = (arg2 - 3) / 24; if (var2 < 0) var2 = 0;
    var12 = arg2 - 24 * (var2 + 1);

    var9 = var2 - var1; var11 = var1 + var4;
    for (var8 = 0; var8 <= var11; var8++, var9++) var16[var8] = (var9 < 0) ? zero : (double)arg5[var9];

    for (var8 = 0; var8 <= var4; var8++) {
        for (var9 = 0, var15 = 0.0; var9 <= var1; var9++) var15 += arg0[var9] * var16[var1 + var8 - var9];
        var18[var8] = var15;
    }

    var0 = var4;
recompute:
    for (var8 = 0, var9 = var0, var14 = var18[var0]; var9 > 0; var8++, var9--) {
        var15    = (double)((int)(twon24 * var14));
        var7[var8] = (int)(var14 - two24 * var15);
        var14     = var18[var9 - 1] + var15;
    }

    var14  = func_0200aae4(var14, var12);
    var14 -= 8.0 * func_02008f5c(var14 * 0.125);
    var6  = (int)var14;
    var14 -= (double)var6;
    var13 = 0;
    if (var12 > 0) {
        var8  = (var7[var0 - 1] >> (24 - var12)); var6 += var8;
        var7[var0 - 1] -= var8 << (24 - var12);
        var13 = var7[var0 - 1] >> (23 - var12);
    }
    else if (var12 == 0) var13 = var7[var0 - 1] >> 23;
    else if (var14 >= 0.5) var13 = 2;

    if (var13 > 0) {
        var6 += 1; var5 = 0;
        for (var8 = 0; var8 < var0; var8++) {
            var9 = var7[var8];
            if (var5 == 0) {
                if (var9 != 0) {
                    var5 = 1; var7[var8] = 0x1000000 - var9;
                }
            } else var7[var8] = 0xffffff - var9;
        }
        if (var12 > 0) {
            switch (var12) {
            case 1:
                var7[var0 - 1] &= 0x7fffff; break;
            case 2:
                var7[var0 - 1] &= 0x3fffff; break;
            }
        }
        if (var13 == 2) {
            var14 = one - var14;
            if (var5 != 0) var14 -= func_0200aae4(one, var12);
        }
    }

    if (var14 == zero) {
        var9 = 0;
        for (var8 = var0 - 1; var8 >= var4; var8--) var9 |= var7[var8];
        if (var9 == 0) {
            for (var10 = 1; var7[var4 - var10] == 0; var10++);

            for (var8 = var0 + 1; var8 <= var0 + var10; var8++) {
                var16[var1 + var8] = (double)arg5[var2 + var8];
                for (var9 = 0, var15 = 0.0; var9 <= var1; var9++) var15 += arg0[var9] * var16[var1 + var8 - var9];
                var18[var8] = var15;
            }
            var0 += var10;
            goto recompute;
        }
    }

    if (var14 == 0.0) {
        var0 -= 1; var12 -= 24;
        while (var7[var0] == 0) { var0--; var12 -= 24; }
    } else {
        var14 = func_0200aae4(var14, -var12);
        if (var14 >= two24) {
            var15 = (double)((int)(twon24 * var14));
            var7[var0] = (int)(var14 - two24 * var15);
            var0 += 1; var12 += 24;
            var7[var0] = (int)var15;
        } else var7[var0] = (int)var14;
    }

    var15 = func_0200aae4(one, var12);
    for (var8 = var0; var8 >= 0; var8--) {
        var18[var8] = var15 * (double)var7[var8]; var15 *= twon24;
    }

    for (var8 = var0; var8 >= 0; var8--) {
        for (var15 = 0.0, var10 = 0; var10 <= var3 && var10 <= var0 - var8; var10++) var15 += data_020e6c84[var10] * var18[var8 + var10];
        var17[var0 - var8] = var15;
    }

    switch (arg4) {
    case 0:
        var15 = 0.0;
        for (var8 = var0; var8 >= 0; var8--) var15 += var17[var8];
        arg1[0] = (var13 == 0) ? var15 : -var15;
        break;
    case 1:
    case 2:
        var15 = 0.0;
        for (var8 = var0; var8 >= 0; var8--) var15 += var17[var8];
        arg1[0] = (var13 == 0) ? var15 : -var15;
        var15 = var17[0] - var15;
        for (var8 = 1; var8 <= var0; var8++) var15 += var17[var8];
        arg1[1] = (var13 == 0) ? var15 : -var15;
        break;
    case 3:
        for (var8 = var0; var8 > 0; var8--) {
            var15      = var17[var8 - 1] + var17[var8];
            var17[var8]  += var17[var8 - 1] - var15;
            var17[var8 - 1] = var15;
        }
        for (var8 = var0; var8 > 1; var8--) {
            var15      = var17[var8 - 1] + var17[var8];
            var17[var8]  += var17[var8 - 1] - var15;
            var17[var8 - 1] = var15;
        }
        for (var15 = 0.0, var8 = var0; var8 >= 2; var8--) var15 += var17[var8];
        if (var13 == 0) {
            arg1[0] = var17[0]; arg1[1] = var17[1]; arg1[2] = var15;
        } else {
            arg1[0] = -var17[0]; arg1[1] = -var17[1]; arg1[2] = -var15;
        }
    }
    return var6 & 7;
}
