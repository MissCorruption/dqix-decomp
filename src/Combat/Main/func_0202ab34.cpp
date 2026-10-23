#include <globaldefs.h>
#include <std_library_functions.h>
#include <NitroSDK/Cache.h>
#include <NitroSDK/LoadToVRAM.h>
#include "Resource/FontGlyphTable.h"

extern unsigned char data_020fe9ac[32];

// USA: func_0202ab34
extern "C" ARM void func_0202ab34(void* arg0, int arg1, int arg2) {
    char var0[3] = {};
    memcpy(var0, arg0, 2);
    for (int var1 = 0; var1 < arg1; var1++) {
        unsigned char* var2 = (unsigned char*)func_02042a50(8, var0);
        if (var2 != NULL) {
            unsigned char* var3 = data_020fe9ac;
            memset(var3, 0, 32);
            int var4 = 0;
            short var5 = 0;
            while (var5 < 8) {
                for (short var6 = 0; var6 < 8; var6++) {
                    if (*var2 & (1 << var4)) {
                        if (var6 & 1) {
                            var3[var6 >> 1] = (var3[var6 >> 1] & 15) | 16;
                        } else {
                            var3[var6 >> 1] &= 240;
                            var3[var6 >> 1] |= 1;
                        }
                    }
                    var4++;
                    if (var4 >= 8) {
                        var4 = 0;
                        var2++;
                    }
                }
                var5++;
                var3 += 4;
            }
            CleanInvalidateCacheRange(data_020fe9ac, 32);
            LoadToMainBG1CharacterData(data_020fe9ac, arg2 << 5, 32);
            CleanCacheRange(data_020fe9ac, 32);
        }
        arg2 = (arg2 + 1) & 255;
        var0[1]++;
    }
}
