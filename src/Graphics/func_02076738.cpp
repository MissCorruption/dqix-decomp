#include "Graphics/OBJImage.h"
#include "NitroSDK/Graphics.h"
#include "std_library_functions.h"
#include <globaldefs.h>

// USA: func_02076738
extern "C" ARM int func_02076738(Struct_02075cdc *arg0, const unsigned char *arg1, int) {
    unsigned int var0;
    int var1;
    unsigned int var2;
    unsigned short var3;
    unsigned int var4;
    int var5;
    if (arg0->unknown_5e_ == 0) {
        var5 = (int) (DISPCNT & 0x300010);
    } else {
        var5 = (int) (DISPCNTSUB & 0x300010);
    }

    switch (var5) {
        case 0: return 0;
        case 0x10: var1 = 5; break;
        case 0x100010: var1 = 6; break;
        case 0x200010: var1 = 7; break;
        case 0x300010: var1 = 8; break;
        default: return 0;
    }

    unsigned short var6 = 0;
    unsigned int var7       = 0;
    memcpy(&var6, arg1, 2);
    memcpy(&var7, arg1 + 2, 2);
    arg1 += 4;

    var2 = 0;
    var3   = 0;
    while (var3 < var6) {
        unsigned short var8;
        unsigned short var9;
        unsigned int var10;
        memcpy(&var8, arg1, 2);
        memcpy(&var9, arg1 + 2, 2);
        memcpy(&var10, arg1 + 4, 4);
        arg1 += 8;

        var4    = 0;
        var0 = (1u << var1) - 1;

        while (var4 < var10) {
            unsigned short var11, var12, var13, var14;
            memcpy(&var11, arg1, 2);
            memcpy(&var12, arg1 + 2, 2);
            memcpy(&var13, arg1 + 4, 2);
            memcpy(&var14, arg1 + 6, 2);

            arg1 += 8;
            unsigned int var15 = (8 << var13) * (8 << var14);
            if (var7 == 3) var15 = var15 >> 1;
            arg1 += var15;
            var2 += (var15 + var0) & ~var0;
            var4++;
        }
        var3++;
    }
    return var2;
}
