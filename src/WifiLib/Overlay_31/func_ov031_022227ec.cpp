#include <globaldefs.h>
#include "NitroSDK/OverlayMD5.h"

// USA: func_ov031_022227ec
extern "C" THUMB void func_ov031_022227ec(unsigned int* arg0, const unsigned char* arg1, unsigned int arg2) {
    unsigned int var0 = 0;
    if (var0 < arg2) do {
        const unsigned char* var1 = arg1 + var0;
        *arg0++ = var1[0] | (var1[1] << 8) |
            (var1[2] << 16) | ((unsigned int)var1[3] << 24);
        var0 += 4;
    } while (var0 < arg2);
}
