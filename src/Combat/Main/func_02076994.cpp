#include <globaldefs.h>

extern "C" int LoadToMainObjVRAM(int, int, unsigned int);
extern "C" int LoadToSubObjVRAM(int, int, unsigned int);

struct Struct_02076994 {
    char unknown_0_[0x50];
    int unknown_50_;
    char unknown_54_[0xa];
    unsigned char unknown_5e_;
    char unknown_5f_[1];
};

// USA: func_02076994
extern "C" ARM void func_02076994(struct Struct_02076994* arg0, char* arg1, char* arg2, unsigned int arg3, unsigned int arg4) {
    unsigned int var0 = arg4;
    unsigned int var1 = arg3 >> 3;
    unsigned int var2 = 4;
    unsigned int var3 = 0x20;
    if (arg0->unknown_50_ == 1) {
        var2 = 8;
        var3 = 0x40;
    }
    unsigned int var4 = var1 * var2;
    unsigned int var5 = var1 * var3;
    unsigned int var6 = 0;
    unsigned int var7;
    unsigned int var8;
    unsigned int var9;
    unsigned int var10, var11;
    char* var12 = arg2;

    for (var11 = 0; var11 < (var0 >> 3); var11++) {
        var7 = var6;
        for (var8 = 0; var8 < var1; var8++) {
            var9 = var7;
            for (var10 = 0; var10 < 8; var10++) {
                if (arg0->unknown_5e_ == 0) {
                    LoadToMainObjVRAM((int)(arg1 + var9), (int)var12, var2);
                } else {
                    LoadToSubObjVRAM((int)(arg1 + var9), (int)var12, var2);
                }
                var12 += var2;
                var9 += var4;
            }
            var7 += var2;
        }
        var6 += var5;
    }
}
