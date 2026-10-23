#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov009_0218a518 {
    unsigned char unknown_0_[0x2a];
    unsigned char unknown_2a_;
    unsigned char unknown_2b_;
    unsigned char unknown_2c_;
    unsigned char unknown_2d_;
    unsigned char unknown_2e_;
    unsigned char unknown_2f_;
    unsigned char unknown_30_;
    unsigned char unknown_31_;
};
extern "C" int func_ov009_0218a888(Struct_ov009_0218a518*, unsigned char*, int, int);

// USA: func_ov009_0218a518
extern "C" ARM int func_ov009_0218a518(Struct_ov009_0218a518* arg0, const unsigned char* arg1, const unsigned char* arg2, int arg3, int arg4) {
    int var0 = arg0->unknown_2a_;
    int var1 = arg0->unknown_2b_;
    int var2 = arg0->unknown_2c_;
    int var3 = arg0->unknown_2d_;
    int var4 = arg0->unknown_2e_;
    int var5 = arg0->unknown_31_;
    for (int var6 = 0; var6 < arg4; ++var6, ++arg2) {
        const unsigned char* var7 = arg1;
        const unsigned char* var8 = arg2;
        while (1) {
            unsigned char var9 = *var7;
            if (!var9) return 1;
            unsigned int var10 = *var8;
            int var11;
            int var12 = 1;
            int var13 = var12;
            const unsigned char* var14 = var7;
            if (var9 == var1) {
                while (1) {
                    if (*var14 == var2) { ++var14; break; }
                    ++var14;
                }
            } else var14 = var7 + 1;
            if (*var14 == var3) {
                var12 = var14[1] - 8;
                var13 = var14[3] - 8;
                if (var14[4] - 8 == 0) var13 *= 10;
            }
            int var15 = 1;
            if (var9 == var5) {
                if (var12 == 0 && var13 == 60) {
                    int var16 = var7[7];
                    while (1) {
                        if (!*var8 || *var8 == 0xff) return 0;
                        if (var16 == *var8) break;
                        ++var8;
                    }
                    var7 += 8;
                    ++var8;
                    continue;
                }
            } else if (var9 == var0) {
                if (var10 < 0x12 || var10 > 0x2b) var15 = 0;
            } else if (var9 == var1) {
                unsigned char var17[8] = {};
                int var18 = 0;
                const unsigned char* var19;
                unsigned char* var20 = var17;
                var19 = var7 + 1;
                var11 = 0;
                int var21;
                int var22;
                int var23;
                var23 = arg0->unknown_2c_;
                var22 = arg0->unknown_2f_;
                var21 = arg0->unknown_30_;
                int var24;
                while ((var24 = *var19, var24 != var23)) {
                    *var20 = var24;
                    if (var24 == var22) var11 = 2;
                    if (var24 == var21) var18 = 1;
                    ++var19;
                    ++var20;
                }
                var18 += var11;
                var11 = strlen((char*)var17);
                if (var18 == 0) var15 = func_ov009_0218a888(arg0, var17, var11, var10);
                else if (var18 == 1) {
                    unsigned int var25 = var17[var11 - 1];
                    var15 = var17[0] <= var10 && var10 <= var25;
                }
                else if (var18 == 2) var15 = !func_ov009_0218a888(arg0, var17 + 1, var11 - 1, var10);
                else if (var18 == 3) {
                    unsigned int var26 = (var17 + 1)[var11 - 2];
                    var15 = !((var17 + 1)[0] <= var10 && var10 <= var26);
                }
                var7 += var11 + 1;
            } else if (var9 != var10) var15 = 0;
            if (var15) {
                for (int var27 = 0; var27 < var12; ++var27, ++var8) {
                    if (var10 != *var8) { var15 = 0; break; }
                }
                if (!var15) break;
                while (var12 < var13) {
                    if (var10 != *var8) break;
                    ++var12;
                    ++var8;
                }
            } else if (!var15 && var12 != 0) break;
            ++var7;
            if (*var7 == var3) {
                while (1) {
                    if (*var7 == var4) break;
                    ++var7;
                }
                ++var7;
            }
        }
    }
    return 0;
}
