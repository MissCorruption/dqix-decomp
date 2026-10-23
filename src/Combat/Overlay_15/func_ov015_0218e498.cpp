#include <globaldefs.h>
#include "World/Object3D.h"
#include "Input/Input.h"

struct Struct_ov015_0218e498 {
    unsigned char unknown_0_[0x24];
    unsigned char* unknown_24_;
    unsigned char unknown_28_[0x2c - 0x24 - 4];
    unsigned char unknown_2c_;
    unsigned char unknown_2d_[0x3a - 0x2c - 1];
    unsigned char unknown_3a_;
};

extern "C" void func_ov015_0218cc24(struct Struct_ov015_0218e498* arg0);

// USA: func_ov015_0218e498
extern "C" ARM void func_ov015_0218e498(struct Struct_ov015_0218e498* arg0) {
    if (arg0->unknown_2c_ != 0) {
        func_ov015_0218cc24(arg0);
    }

    unsigned char var0 = arg0->unknown_3a_;
    unsigned char* var1 = arg0->unknown_24_;
    int var2 = 0;
    if (var0 != 0) {
        if (g_keyManager.TestKeysPressed(0x100) != 0) {
            var2 = 1;
        }
    } else {
        var2 = 1;
    }
    if (var2) {
        ((Object3D*)var1)->AdvanceEffects();
    }
}
