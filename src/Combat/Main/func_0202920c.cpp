#include <globaldefs.h>
#include "Graphics/GlyphBitmapContext.h"

#if defined(jpn)
#define func_0202920c func_02028dc4
#endif

// USA: func_0202920c
extern "C" ARM void func_0202920c(int arg0, int arg1, int arg2, int arg3, int arg4) {
    if (glyphBitmapContext.unknown_0_ == 0) return;
    if (arg1 + arg3 < 0) return;
    if (arg2 + arg4 < 0) return;
    if (arg1 >= 0x100 || arg2 >= 0xc0) return;
    if (arg1 < 0) {
        arg3 = arg1 + arg3;
        arg1 = 0;
    }
    if (arg1 + arg3 >= 0x100) arg3 = 0xff - arg1;
    if (arg2 < 0) {
        arg4 = arg2 + arg4;
        arg2 = 0;
    }
    if (arg2 + arg4 >= 0xc0) arg4 = 0xbf - arg2;

    int var0;
    unsigned char var1;
    int var2;
    unsigned char* var3;
    int var4;
    unsigned char* var5;
    int var6;

    var2 = arg0 & 0xff;
    var1 = (var2 << 4) & 0xff;
    var3 = (unsigned char*)glyphBitmapContext.unknown_0_ + arg2 * 0x80 + arg1 / 2;

    for (var4 = 0; var4 < arg4; var4++) {
        var5 = var3;
        var0 = arg1;
        for (var6 = 0; var6 < arg3; var6++) {
            if (var0 & 1) {
                *var5 = (*var5 & 0xf) | var1;
                var5++;
            } else {
                *var5 = (*var5 & 0xf0) | var2;
            }
            var0++;
        }
        var3 += 0x80;
    }
}
