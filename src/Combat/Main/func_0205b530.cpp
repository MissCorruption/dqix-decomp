#include <globaldefs.h>
struct Struct_0205b1ac { int unknown_0_; short unknown_4_, unknown_6_, unknown_8_, unknown_a_; };
struct Struct_0205b530 { unsigned char* unknown_0_; Struct_0205b1ac* unknown_4_; unsigned char unknown_8_; };
extern "C" Struct_0205b1ac* func_0205b1ac(Struct_0205b1ac*, unsigned int, int, int);
// USA: func_0205b530
extern "C" ARM void func_0205b530(Struct_0205b530* arg0, unsigned char* arg1, short arg2, short arg3) {
    if (!arg1) return;
    unsigned char var0 = arg0->unknown_8_;
    unsigned char* var1 = arg0->unknown_0_;
    Struct_0205b1ac* var2 = arg0->unknown_4_;
    short var3;
    for (short var4 = 0; var4 < 8; arg1 += 4, arg3++, var4++) {
        var3 = arg2;
        for (short var5 = 0; var5 < 8; var3++, var5++) {
            Struct_0205b1ac* var6 = func_0205b1ac(var2, var0, var3, arg3);
            if (var6) {
                short var7 = var3 - var6->unknown_4_;
                short var8 = arg3 - var6->unknown_6_;
                short var9 = var6->unknown_8_ >> 3;
                unsigned char* var10 = var1 + var6->unknown_0_;
                short var11 = (short)(var7 & 7) >> 1;
                short var12 = var8 & 7;
                int var13;
                unsigned char* var14 = var10 + (((short)(var8 >> 3) * var9 + (var7 >> 3)) << 5);
                var13 = (var12 << 2) + var11;
                int var15 = arg1[var5 >> 1];
                unsigned char var16;
                if (var7 & 1) {
                    if (var5 & 1) var16 = var15 & 0xf0; else var16 = (var15 << 4) & 0xf0;
                    if (var16) { var14[var13] &= 15; var14[var13] |= var16; }
                } else {
                    if (var5 & 1) var16 = (var15 >> 4) & 15; else var16 = var15 & 15;
                    if (var16) { var14[var13] &= 0xf0; var14[var13] |= var16; }
                }
            }
        }
    }
}
