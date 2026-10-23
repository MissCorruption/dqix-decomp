#include <globaldefs.h>
#include "World/Object3D.h"
#include "Input/Input.h"

extern "C" void func_ov015_0218d50c(void* arg0);

struct Struct_ov015_0218e4f8 {
    char unknown_0_[0x24];
    char* unknown_24_;
    char unknown_28_[0x2c - 0x24 - 4];
    unsigned char unknown_2c_;
    char unknown_2d_[0x3a - 0x2c - 1];
    unsigned char unknown_3a_;
};

// USA: func_ov015_0218e4f8
extern "C" ARM void func_ov015_0218e4f8(struct Struct_ov015_0218e4f8* arg0) {
    unsigned char var0;
    unsigned char var1 = arg0->unknown_2c_;
    if (var1 != 0) {
        func_ov015_0218d50c(arg0);
    }
    var0 = arg0->unknown_3a_;
    char* var2;
    int var3 = 0;
    char* var4 = arg0->unknown_24_;
    var2 = var4 + 8;
    if (var0 != 0) {
        if (g_keyManager.TestKeysPressed(0x100)) var3 = 1;
    } else {
        var3 = 1;
    }
    if (!var3) return;
    ((Object3D*)var4)->AdvanceEffects();
    ((Object3D*)(var2 + 0x400))->AdvanceEffects();
    ((Object3D*)(var4 + 0x35c))->AdvanceEffects();
    ((Object3D*)(var4 + 0xac))->AdvanceEffects();
}
