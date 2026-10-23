#include <globaldefs.h>

struct Struct_0204e038 {
    char unknown_0_[8];
    unsigned char* unknown_8_;
    char unknown_c_[0xa8 - 0xc];
    short unknown_a8_;
    short unknown_aa_;
};

// USA: func_0204e038
extern "C" ARM void func_0204e038(Struct_0204e038* arg0, unsigned char* arg1, short arg2, short arg3, short arg4, short arg5, unsigned char arg6, unsigned char arg7) {
    short var0;
    short var1;
    unsigned char var2;
    short var3;
    short var4;
    if (arg1 == NULL) {
        return;
    }
    short var5 = arg0->unknown_a8_;
    short var6 = arg0->unknown_aa_;
    var2 = 0;
    for (var3 = 0; var3 < arg5; var3++) {
        short var7 = arg3 + var3;
        short var8 = (var7 & 7) << 2;
        var1 = var7 >> 3;
        bool var9 = var1 >= 0 && var1 < var6;
        var1 *= arg0->unknown_a8_;
        for (var4 = 0; var4 < arg4; var4++) {
            if (var9 && (*arg1 & (1 << var2))) {
                int var10 = (short)(arg2 + var4);
                int var11 = var10 & 7;
                var0 = var10 >> 3;
                bool var12 = var0 >= 0 && var0 < var5;
                bool var13 = var12 | var9;
                if (var13) {
                    short var14 = var8 + (var0 + var1) * 32 + (var11 >> 1);
                    unsigned char* var15 = arg0->unknown_8_;
                    if (var10 & 1) {
                        var15[var14] &= 0x0f;
                        var15[var14] |= arg6;
                    } else {
                        var15[var14] &= 0xf0;
                        var15[var14] |= arg7;
                    }
                }
            }
            var2++;
            if (var2 >= 8) {
                var2 = 0;
                arg1++;
            }
        }
    }
}
