#include <globaldefs.h>
#include "Graphics/GlyphBitmapContext.h"
#include "std_library_functions.h"
#include "NitroSDK/Cache.h"

#if defined(jpn)
extern "C" int func_020429d4(void);

typedef unsigned char Type_02029088[4];
typedef Type_02029088 Type_01ff8b48_18[8];
typedef Type_02029088 Type_02029088_2[32];
typedef Type_02029088_2 Type_02029088_3[8];
#endif

// USA: func_02029088
extern "C" ARM void func_02029088() {
    if (glyphBitmapContext.unknown_0_ == NULL) return;
#if defined(jpn)
    unsigned char* var0 = reinterpret_cast<unsigned char*>(func_020429d4());
    unsigned char* var1 = static_cast<unsigned char*>(glyphBitmapContext.unknown_0_);
    unsigned char* var2;
    const unsigned char* var3;
    unsigned int var4;
    unsigned int var5;
    unsigned int var6;
    unsigned int var7;
    unsigned int var8;
    for (var5 = 0; var5 < 24; ++var5) {
        var4 = var5 * sizeof(Type_02029088_3);
        var2 = var0;
        var8 = var4;
        for (var6 = 0; var6 < 32; ++var6) {
            var3 = var1 + var4;
            for (var7 = 0; var7 < 8; ++var7) {
                memcpy(var2, var3, sizeof(Type_02029088));
                var2 += sizeof(Type_02029088);
                var3 += sizeof(Type_02029088_2);
            }
            var4 += sizeof(Type_02029088);
        }
        memcpy(var1 + var8, var0, sizeof(Type_02029088_3));
    }
#endif
    CleanInvalidateCacheRange(glyphBitmapContext.unknown_0_, 256 * 192 / 2);
}
