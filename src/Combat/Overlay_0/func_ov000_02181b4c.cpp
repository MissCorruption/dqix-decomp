#include <globaldefs.h>

struct Struct_ov000_0215767c_9 {
    char unknown_0_[0xe];
    short unknown_e_[3];
    unsigned char unknown_14_[3];
    unsigned char unknown_17_;
    char unknown_18_[0x20 - 0x18];
    Struct_ov000_0215767c_9* unknown_20_;
};

struct Struct_ov000_02182b04 {
    char unknown_0_[0x14];
    Struct_ov000_0215767c_9* unknown_14_;
};

extern "C" int func_ov000_0215e9fc(void* arg0, short* arg1, int arg2, int arg3);

static inline int inline_ov000_02181b4c(int arg0)
{
    return arg0 >= 0 && arg0 <= 3;
}

// USA: func_ov000_02181b4c
extern "C" ARM int func_ov000_02181b4c(void* arg0, Struct_ov000_02182b04* arg1, int* arg2)
{
    int var0 = 0;
    Struct_ov000_0215767c_9* var1;
    for (var1 = arg1->unknown_14_; var1 != NULL; var1 = var1->unknown_20_) {
        int var2;
        for (var2 = 0; var2 < var1->unknown_17_; var2++) {
            if (var2 > 0) {
                unsigned char var3 = var1->unknown_14_[var2];
                if (var3 != 8 && var3 != 6 && var3 != 7)
                    break;
            }
            int var4 = var1->unknown_e_[var2];
            bool var5 = true;
            int* var6 = arg2;
            int var7;
            for (var7 = 0; var7 < var0; var7++, var6++) {
                if (*var6 == var4) {
                    var5 = false;
                    break;
                }
            }
            if (var5) {
                if (inline_ov000_02181b4c(var4)) {
                    short var8[4];
                    var0 = func_ov000_0215e9fc(arg0, var8, 4, 0);
                    var6 = arg2;
                    short* var9 = var8;
                    int var10;
                    for (var10 = 0; var10 < var0; var10++) {
                        *var6 = *var9;
                        var6++;
                        var9++;
                    }
                    return var0;
                }
                *var6 = var4;
                var0++;
            }
        }
    }
    return var0;
}
