#include <globaldefs.h>
#include "Graphics/GlyphMetrics.h"

extern "C" void func_020292ec(int arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_02029470(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);

// USA: func_02029384
extern "C" ARM int func_02029384(int arg0, int arg1, int arg2, int arg3) {
    int var0 = data_020ef74c.unknown_c_;

    if (var0 == 2) {
        return 0;
    }
    if (var0 == 4) {
        return 0;
    }

    *(volatile unsigned short*)0x4000060 = (*(volatile unsigned short*)0x4000060 & ~0x3000) | 0x4;
    *(volatile unsigned short*)0x4000340 = 0;
    *(volatile unsigned int*)0x40004a8 = 0x900000;

    func_02029470(0, 1, 3, 0x3b, 0x12, 0);

    func_020292ec(arg0 + 2, arg1 + 2, arg2 - 4, arg3 - 4, 0);

    func_02029470(0, 1, 3, 0, 0, 0);

    func_020292ec(arg0, arg1, arg2, arg3, 0x7fff);

    return 1;
}
