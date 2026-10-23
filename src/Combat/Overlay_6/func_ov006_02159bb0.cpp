#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
enum { Enum_ov006_02159bb0_256 = 0xf8 };
#else
enum { Enum_ov006_02159bb0_256 = 0x100 };
#endif

struct Struct_ov006_02157a60 {
    char unknown_0_[Enum_ov006_02159bb0_256];
    char unknown_100_[0x4c];
};

extern "C" short func_ov023_021e29d0(void* arg0);

// USA: func_ov006_02159bb0
extern "C" ARM unsigned char func_ov006_02159bb0(Struct_ov006_02157a60* arg0) {
    int var0 = 0;
    int var1 = 0;
    int var2 = 0;
    int var3 = 0;
    short var4 = func_ov023_021e29d0(arg0->unknown_100_);
    if (var4 >= 0) {
        if (var4 == 0x41)
            var0 = 1;
        var1 = var4 == 0x42 ? 1 : 0;
        var2 = var4 == 0x13 ? 1 : 0;
        var3 = var4 == 0x26 ? 1 : 0;
    } else {
        if (g_keyManager.TestKeysPressed(4))
            var2 = 1;
        if (g_keyManager.TestKeysPressed(0x300))
            var3 = 1;
    }
    if (var2)
        return 1;
    if (var0)
        return 2;
    if (var1)
        return 3;
    if (var3)
        return 4;
    return 0;
}
