#include <globaldefs.h>
#include <std_library_functions.h>

extern "C" void* __clear(void*, int);
extern "C" int func_ov012_021859f4(void*, unsigned char*, int, int);

// USA: func_ov012_02185684
extern "C" ARM int func_ov012_02185684(void* arg0, unsigned char* arg1,
    unsigned char* arg2, int arg3, int arg4) {
    unsigned char* var0 = static_cast<unsigned char*>(arg0);
    unsigned int var1;
    unsigned int var2;
    unsigned int var3;
    unsigned int var4;
    unsigned int var5;
    unsigned int var6;
    int var7;
    var1 = var0[0x2a];
    var2 = var0[0x2b];
    var3 = var0[0x2c];
    var4 = var0[0x2d];
    var5 = var0[0x2e];
    var6 = var0[0x31];
    var7 = 0;
    while (var7 < arg4) {
        unsigned char* var8 = arg1;
        unsigned char* var9 = arg2;
        for (;;) {
            int var10 = *var8;
            if (var10 == 0) return 1;
            unsigned int var11;
            int var12;
            int var13 = 1;
            var11 = *var9;
            int var14 = var13;
            unsigned char* var15 = var8;
            if (var10 == var2) {
                for (;;) {
                    if (*var15 == var3) { ++var15; break; }
                    ++var15;
                }
            } else var15 = var8 + 1;
            if (*var15 == var4) {
                var13 = var15[1] - 8;
                var14 = var15[3] - 8;
                if (var15[4] - 8 == 0) var14 *= 10;
            }
            int var16 = 1;
            if (var10 == var6) {
                if (var13 == 0 && var14 == 60) {
                    unsigned int var17 = var8[7];
                    for (;;) {
                        unsigned int var18 = *var9;
                        if (var18 == 0 || var18 == 0xff) return 0;
                        if (var17 == var18) break;
                        ++var9;
                    }
                    var8 += 8;
                    ++var9;
                    continue;
                }
            } else if (var10 == var1) {
                if (var11 < 0x12 || var11 > 0x2b) var16 = 0;
            } else if (var10 == var2) {
                unsigned char var19[8];
                __clear(var19, sizeof(var19));
                int var20 = 0;
                unsigned char* var21;
                unsigned char* var22;
                var22 = var19;
                var21 = var8 + 1;
                var12 = var20;
                unsigned int var23;
                unsigned int var24;
                unsigned int var25;
                var25 = var0[0x2c];
                var24 = var0[0x2f];
                var23 = var0[0x30];
                while (*var21 != var25) {
                    unsigned int var26 = *var21;
                    *var22 = var26;
                    if (var26 == var24) var12 = 2;
                    if (var26 == var23) var20 = 1;
                    ++var21;
                    ++var22;
                }
                var20 += var12;
                var12 = strlen(reinterpret_cast<char*>(var19));
                if (var20 == 0)
                    var16 = func_ov012_021859f4(arg0, var19, var12, var11);
                else if (var20 == 1) {
                    unsigned int var27 = var19[0];
                    unsigned int var28 = var19[var12 - 1];
                    var16 = var27 <= var11 && var11 <= var28;
                }
                else if (var20 == 2)
                    var16 = !func_ov012_021859f4(arg0, var19 + 1, var12 - 1, var11);
                else if (var20 == 3) {
                    unsigned char* var29 = var19 + 1;
                    unsigned int var30 = var29[var12 - 2];
                    unsigned int var31 = var19[1];
                    var16 = !(var31 <= var11 && var11 <= var30);
                }
                var8 += var12 + 1;
            } else if (var10 != var11) var16 = 0;
            if (var16) {
                int var32 = 0;
                while (var32 < var13) {
                    if (var11 != *var9) { var16 = 0; break; }
                    ++var32;
                    ++var9;
                }
                if (!var16) break;
                while (var13 < var14) {
                    if (var11 != *var9) break;
                    ++var13;
                    ++var9;
                }
            } else if (var16 == 0 && var13 != 0) break;
            ++var8;
            if (*var8 == var4) {
                for (;;) {
                    if (*var8 != var5) ++var8;
                    else break;
                }
                ++var8;
            }
        }
        ++var7;
        ++arg2;
    }
    return 0;
}
