#include <globaldefs.h>

struct Struct_0204f914 {
    unsigned char unknown_0_[8];
    unsigned char* unknown_8_;
    unsigned char unknown_c_[0x9c];
    short unknown_a8_;
    short unknown_aa_;
};

static inline int inline_0204f914(short arg0) { return arg0 >> 1; }

// USA: func_0204f914
extern "C" ARM void func_0204f914(Struct_0204f914* arg0, unsigned char arg1, short arg2, short arg3, short arg4, short arg5) {
    if (arg4 < 0 || arg5 < 0) return;
    short var0 = arg0->unknown_aa_ * 8;
    short var1 = arg0->unknown_a8_ * 8;
    if (arg4 > var1) return;
    if (var0 < arg5) return;
    if (arg2 == arg4 || arg3 == arg5) return;
    unsigned char var2;
    unsigned char var3;
    var3 = arg1 & 15;
    var2 = var3 << 4;
    for (short var4 = arg3; var4 < arg5; ++var4) {
        short var5 = var4 & 7;
        short var6 = var5 * 4;
        int var7 = (short)(var4 >> 3) * arg0->unknown_a8_;
        for (short var8 = arg2; var8 < arg4; ++var8) {
            short var9 = var7 + (short)(var8 >> 3);
            short var10 = var8 & 7;
            short var11 = inline_0204f914(var10) + (short)(var9 * 32);
            var11 += var6;
            unsigned char& var12 = arg0->unknown_8_[var11];
            if (var8 & 1) {
                var12 &= 15;
                var12 |= var2;
            } else {
                var12 &= 0xf0;
                var12 |= var3;
            }
        }
    }
}
