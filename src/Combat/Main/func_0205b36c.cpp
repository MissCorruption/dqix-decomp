#include <globaldefs.h>
#if defined(jpn)
#include "Resource/FontGlyphTable.h"
#endif

struct Struct_0205b1ac { int unknown_0_; short unknown_4_, unknown_6_, unknown_8_, unknown_a_; };
struct Struct_0205b36c { const char* unknown_0_; signed char unknown_4_; unsigned char unknown_5_; short unknown_6_; };
struct Struct_0205b36c_2 { int unknown_0_; unsigned short unknown_4_; unsigned short unknown_6_; int unknown_8_; unsigned char* unknown_c_; };
struct Struct_0205b36c_3 { unsigned char* unknown_0_; Struct_0205b1ac* unknown_4_; unsigned char unknown_8_; };
extern "C" int func_02042638(int);
extern "C" Struct_0205b1ac* func_0205b1ac(Struct_0205b1ac*, unsigned int, int, int);

// USA: func_0205b36c
#if defined(jpn)
// JPN: func_0205c68c
extern "C" ARM void func_0205b36c(Struct_0205b36c_3* arg0, const unsigned char* arg1, short arg2, short arg3, unsigned char arg4, unsigned char arg5) {
    if (arg1 == NULL) return;
    Struct_0203bebc* var0 = func_020429bc(arg4);
    if (var0 == NULL) return;
    unsigned char var1 = 0;
    short var2 = 0;
    short var3 = var0->unknown_2_;
    short var4 = var0->unknown_3_;
    unsigned int var5 = arg0->unknown_8_;
    Struct_0205b1ac* var6 = arg0->unknown_4_;
    unsigned char var7 = arg5 << 4;
    unsigned char var8 = arg5 & 15;
    for (; var2 < var4; ++var2) {
        short var9 = arg3 + var2;
        for (short var10 = 0; var10 < var3; ++var10) {
            if (*arg1 & (1 << var1)) {
                short var11 = arg2 + var10;
                Struct_0205b1ac* var12 = func_0205b1ac(var6, var5, var11, var9);
                if (var12) {
                    unsigned char* var13 = arg0->unknown_0_ + var12->unknown_0_;
                    short var14 = var11 - var12->unknown_4_;
                    short var15 = var9 - var12->unknown_6_;
                    short var16 = var14 >> 3;
                    short var17 = var15 >> 3;
                    short var18 = var12->unknown_8_ >> 3;
                    short var19 = var17 * var18 + var16;
                    var13 += var19 << 5;
                    short var20 = var14 & 7;
                    short var21 = var15 & 7;
                    int var22 = (var21 << 2) + (var20 >> 1);
                    unsigned char* var23 = var13 + var22;
                    if (var11 & 1) {
                        *var23 &= 15;
                        *var23 |= var7;
                    } else {
                        *var23 &= 240;
                        *var23 |= var8;
                    }
                }
            }
            ++var1;
            if (var1 >= 8) { ++arg1; var1 = 0; }
        }
    }
}
#else
extern "C" ARM void func_0205b36c(Struct_0205b36c_3* arg0, Struct_0205b36c* arg1, short arg2, short arg3, unsigned char arg4, unsigned char arg5) {
    Struct_0205b36c_2* var24 = (Struct_0205b36c_2*)func_02042638(arg5);
    short var25 = arg1->unknown_6_;
    unsigned char var26 = arg4 << 4;
    unsigned char var27 = arg4 & 15;
    int var28 = var24->unknown_4_ >> 3;
    signed char var29 = 7 - (arg1->unknown_6_ & 7);
    unsigned int var30 = arg0->unknown_8_;
    Struct_0205b1ac* var31 = arg0->unknown_4_;
    for (int var32 = 0; var32 < 12; ++var32) {
        short var33 = arg3 + var32;
        signed char var34 = var29;
        unsigned char* var35 = var24->unknown_c_ + var28 * var32 + (var25 >> 3);
        for (int var36 = 0; var36 < arg1->unknown_4_; ++var36) {
            if (*var35 & (1 << var34)) {
                short var37 = arg2 + var36;
                Struct_0205b1ac* var38 = func_0205b1ac(var31, var30, var37, var33);
                if (var38) {
                    unsigned char* var39 = arg0->unknown_0_ + var38->unknown_0_;
                    short var40 = var37 - var38->unknown_4_;
                    short var41 = var33 - var38->unknown_6_;
                    short var42 = var40 >> 3;
                    short var43 = var41 >> 3;
                    short var44 = var38->unknown_8_ >> 3;
                    short var45 = var43 * var44 + var42;
                    var39 += var45 << 5;
                    short var46 = var40 & 7;
                    short var47 = var41 & 7;
                    int var48 = (var47 << 2) + (var46 >> 1);
                    unsigned char* var49 = var39 + var48;
                    if (var37 & 1) {
                        *var49 &= 15;
                        *var49 |= var26;
                    } else {
                        *var49 &= 240;
                        *var49 |= var27;
                    }
                }
            }
            --var34;
            if (var34 < 0) { var34 = 7; ++var35; }
        }
    }
}
#endif
