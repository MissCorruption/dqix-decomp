#include <globaldefs.h>

struct Struct_0205b1ac {
    int unknown_0_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    short unknown_a_;
};
struct Struct_0205b734 {
    unsigned char* unknown_0_;
    Struct_0205b1ac* unknown_4_;
    unsigned char unknown_8_;
};
extern "C" Struct_0205b1ac* func_0205b1ac(Struct_0205b1ac*, unsigned int, int, int);

// USA: func_0205b734
extern "C" ARM void func_0205b734(Struct_0205b734* arg0, short arg1, short arg2, short arg3, short arg4, unsigned char arg5) {
    unsigned char* var0 = arg0->unknown_0_;
    unsigned char var1;
    unsigned char var2;
    unsigned char var3;
    short var4;
    short var5;
    short var6;
    Struct_0205b1ac* var7;
    if (!var0 || !(var7 = arg0->unknown_4_)) return;
    var3 = arg5 & 15;
    var2 = var3 << 4;
    var1 = arg0->unknown_8_;
    short var8 = arg3 - arg1;
    short var9 = arg4 - arg2;
    for (var5 = 0; var5 < var9; var5++) {
        var4 = arg1;
        for (var6 = 0; var6 < var8; var4++, var6++) {
            Struct_0205b1ac* var10 = func_0205b1ac(var7, var1, var4, arg2);
            if (var10) {
                unsigned char* var11 = var0 + var10->unknown_0_;
                short var12 = var4 - var10->unknown_4_;
                short var13 = arg2 - var10->unknown_6_;
                var11 += (((short)(var13 >> 3) * (short)(var10->unknown_8_ >> 3) + (var12 >> 3)) << 5);
                short var14 = var13 & 7;
                short var15 = var12 & 7;
                int var16 = (var14 << 2) + (var15 >> 1);
                if (var12 & 1) {
                    var11[var16] &= 15;
                    var11[var16] |= var2;
                } else {
                    var11[var16] &= 0xf0;
                    var11[var16] |= var3;
                }
            }
        }
        arg2++;
    }
}
