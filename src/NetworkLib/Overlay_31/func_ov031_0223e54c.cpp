#include <globaldefs.h>

struct Struct_ov031_0223e54c {
    signed char unknown_0_[3];
    unsigned char unknown_3_[4];
};
extern "C" int func_ov031_0223e38c(unsigned char*, const char*, int);
extern "C" int func_ov031_0223e3d4(unsigned char);

// USA: func_ov031_0223e54c
extern "C" ARM int func_ov031_0223e54c(signed char* arg0, const char* arg1, int arg2) {
    Struct_ov031_0223e54c var0;
    int var1;
    int var2;
    int var3;
    var3 = 0;
    var2 = func_ov031_0223e38c(var0.unknown_3_, arg1, 4);
    var1 = var3;
    while (var2 > 0 && var1 >= 0) {
        var0.unknown_0_[0] = 0;
        var0.unknown_0_[1] = 0;
        var0.unknown_0_[2] = 0;
        do {
            var1 = func_ov031_0223e3d4(var0.unknown_3_[0]);
            if (var1 < 0) break;
            var0.unknown_0_[0] = var1 << 2;
            var1 = func_ov031_0223e3d4(var0.unknown_3_[1]);
            if (var1 < 0) break;
            var0.unknown_0_[0] |= var1 >> 4;
            var0.unknown_0_[1] = var1 << 4;
            var1 = func_ov031_0223e3d4(var0.unknown_3_[2]);
            if (var1 < 0) break;
            var0.unknown_0_[1] |= var1 >> 2;
            var0.unknown_0_[2] = var1 << 6;
            var1 = func_ov031_0223e3d4(var0.unknown_3_[3]);
            if (var1 >= 0) var0.unknown_0_[2] |= var1;
        } while (0);
        int var4 = var2 - 1;
        int var5 = 0;
        if (var4 > 0) {
            signed char* var6 = var0.unknown_0_;
            do {
                *arg0++ = *var6++;
                ++var5;
            } while (var5 < var4);
        }
        arg1 += var2;
        var3 += var2 - 1;
        arg2 -= 4;
        if (arg2 <= 0) break;
        var2 = func_ov031_0223e38c(var0.unknown_3_, arg1, 4);
    }
    return var3;
}
