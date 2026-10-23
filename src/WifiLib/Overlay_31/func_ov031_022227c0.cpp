#include <globaldefs.h>
#include "NitroSDK/OverlayMD5.h"

// USA: func_ov031_022227c0
extern "C" THUMB void func_ov031_022227c0(unsigned char* arg0, const unsigned int* arg1, unsigned int arg2) {
    unsigned int var0 = 0;
    if (var0 < arg2) do {
        unsigned char* var1 = arg0 + var0;
        var1[0] = *arg1;
        var1[1] = *arg1 >> 8;
        var1[2] = *arg1 >> 16;
        var1[3] = *arg1++ >> 24;
        var0 += 4;
    } while (var0 < arg2);
}
