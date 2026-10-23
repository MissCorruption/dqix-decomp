#include <globaldefs.h>

struct Struct_0204cc68 {
    char unknown_0_[8];
    unsigned char* unknown_8_;
    char unknown_c_[0x9c];
    short unknown_a8_;
    short unknown_aa_;
};

// USA: func_0204cc68
extern "C" ARM void func_0204cc68(Struct_0204cc68* arg0, int arg1, short arg2, short arg3, short arg4, short arg5) {
    if (arg4 < 0 || arg5 < 0) {
        return;
    }
    short var0 = (short)(arg0->unknown_aa_ << 3);
    short var1 = (short)(arg0->unknown_a8_ << 3);
    if (arg4 > var1) {
        return;
    }
    if (var0 < arg5) {
        return;
    }
    if (arg2 == arg4 || arg3 == arg5) {
        return;
    }
    unsigned char var2 = (arg1 & 0xf) << 4;
    int var3 = arg1 & 0xf;
    for (short var4 = arg3; var4 < arg5; var4++) {
        short var5 = (short)(var4 & 7) << 2;
        int var6 = (short)(var4 >> 3) * arg0->unknown_a8_;
        for (short var7 = arg2; var7 < arg4; var7++) {
            short var8 = var6 + (short)(var7 >> 3);
            short var9 = (short)((short)(var8 << 5) + (short)((short)(var7 & 7) >> 1)) + var5;
            unsigned char* var10 = arg0->unknown_8_;
            if (var7 & 1) {
                var10[var9] &= 0xf;
                var10[var9] |= var2;
            } else {
                var10[var9] &= 0xf0;
                var10[var9] |= var3;
            }
        }
    }
}
