#include <globaldefs.h>
#include "World/Object3D.h"
#include "Input/Input.h"

struct Struct_ov015_0218e5c0 {
    char unknown_0_[0x24];
    void* unknown_24_;
    char unknown_28_[0x12];
    unsigned char unknown_3a_;
};

// USA: func_ov015_0218e5c0
extern "C" ARM void func_ov015_0218e5c0(struct Struct_ov015_0218e5c0* arg0) {
    int var0 = 0;
    if (arg0->unknown_3a_ != 0) {
        if (g_keyManager.TestKeysPressed(0x100) != 0) {
            var0 = 1;
        }
    } else {
        var0 = 1;
    }
    if (var0 == 0) {
        return;
    }
    ((Object3D*)arg0->unknown_24_)->AdvanceEffects();
}
