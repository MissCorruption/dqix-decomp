#include <globaldefs.h>
#include "Input/Input.h"

extern "C" int func_02075910(int arg0, void* arg1, int arg2, int arg3);
extern "C" int func_01ff85b8(void* arg0, int arg1);

struct Struct_020ab9c0 {
    int unknown_0_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    char unknown_6_[14];
};

// USA: func_020ab9c0
extern "C" ARM int func_020ab9c0(int arg0) {
    int var0 = arg0 ? 0x8010 : 0x10;
    if (g_keyManager.TestKeysHeld(0x2000)) {
        return 2;
    }

    struct Struct_020ab9c0 var1;
    if (!func_02075910(var0, &var1, 0x14, 0)) {
        return 1;
    }
    void* var2 = &var1;
    if (func_01ff85b8((char*)var2 + 4, 0x10) != var1.unknown_0_) {
        return 2;
    }
    if (var1.unknown_5_ == 0) {
        return 3;
    }
    return (var1.unknown_4_ == 1) ? 4 : 0;
}
