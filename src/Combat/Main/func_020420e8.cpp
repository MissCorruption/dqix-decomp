#include <globaldefs.h>
#include "Resource/MessageGlyphSlot.h"
#include "Graphics/GlyphMetrics.h"

extern int data_020e7a94[];
extern "C" int func_020424e4(int, int);
extern "C" Struct_020420e8* func_020425b4(int arg0, int arg1);
extern "C" int func_020425e4(int arg0, int arg1, int arg2);

#if defined(jpn)

// USA: func_020420e8
extern "C" ARM void func_02028ce4(const char* arg0, int* arg1, int* arg2) {
    if (arg0 == 0) return;
    int var0 = 10;
    int var1 = 11;
    int var2 = data_020ef74c.unknown_c_;

    if ((unsigned int)(var2 - 3) <= 1) {
    } else if ((unsigned int)(var2 - 5) <= 1) {
        var0 = 12;
        var1 = 13;
    }
    int var3;
    int var4 = 0;
    var3 = 0;
    int var5 = var1;
    unsigned char var6 = 0;
    const unsigned char* var7 = (const unsigned char*)arg0;
    while (*var7 != 0 && var6 < 25) {
        unsigned int var8 = *var7;
        if (var8 == 10) {

            if (var4 < var3) {
                var4 = var3;
                var3 = 0;
            }
            var5 += var1;
            var7++;
        } else if ((var8 >= 0x81 && var8 <= 0x9f) || (var8 >= 0xe0 && var8 <= 0xea)) {
            var3 += var0;
            var7 += 2;
            var6++;
        } else {
            var3 += var0;
            var7++;
            var6++;
        }
    }
    if (var4 < var3) var4 = var3;
    *arg1 = var4;
    *arg2 = var5;
}
#else

// USA: func_020420e8
extern "C" ARM int func_020420e8(char* arg0, int arg1) {
    if (arg0 == 0) return 0;
    int var0 = data_020e7a94[arg1] & 0xff;
    int var1 = 0xff;
    int var2 = var1;
    int var3;
    int var4 = 0;
    for (;;) {
        if (*arg0 == 0) break;
        int var5 = var0 + 1;
        int var6 = func_020424e4((int)arg0, arg1);
        if (var6 < 0) {
            var2 = var1;
            arg0++;
        } else {
            var3 = var6 & 0xff;
            Struct_020420e8* var7 = func_020425b4(var6, arg1);
            int var8 = func_020425e4(var2, var3, arg1);
            var2 = var3;
            var5 = (var7->unknown_4_ + 1) + var8;
            arg0 = arg0 + var7->unknown_5_0_;
        }
        var4 += var5;
    }
    return var4 - 1;
}
#endif
