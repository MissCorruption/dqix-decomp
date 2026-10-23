#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov009_0218aa28 { int unknown_0_, unknown_4_, unknown_8_; };
struct Vector3i;
extern "C" void __clear(void* arg0, int arg1);

struct Struct_020a2be8 { char unknown_0_[0x68]; int unknown_68_; };

struct Struct_020a2be8_2 {
    char unknown_0_[0x10];
    struct Struct_ov009_0218aa28 unknown_10_;
    char unknown_1c_[0x21c - 0x1c];
    short unknown_21c_;
    char unknown_21e_[0x22c - 0x21e];
    struct Struct_ov009_0218aa28 unknown_22c_;
    char unknown_238_[0x245 - 0x238];
    unsigned char unknown_245_;
};

// USA: func_020a2be8
extern "C" ARM void func_020a2be8(struct Struct_020a2be8_2* arg0) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_ov009_0218aa28 var1;
    __clear(&var1, 0xc);
    GameObject* var2 = var0->GetGameObjectByIndex(arg0->unknown_21c_);
    if (var2 != 0) {
        *(Vector3i*)((int*)&var1) = *(Vector3i const*)(&var2->obj3D_.position_.x);
        int var3 = ((Object3D*)((struct Struct_020a2be8*)var2))->GetHeight();
        var1.unknown_4_ = var1.unknown_4_ + (var3 >> 1);
    }
    struct Struct_ov009_0218aa28 var4;
    Vector3fix_Subtract((const Vector3fix*)&arg0->unknown_10_, (const Vector3fix*)&var1, (Vector3fix*)&var4);
    *(Vector3i*)((int*)&arg0->unknown_22c_) = *(Vector3i const*)((int*)&var4);
    arg0->unknown_245_ |= 0x11;
}
