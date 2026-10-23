#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0203ca24 {
    char unknown_0_[0xc];
    int unknown_c_;
    char unknown_10_[0x5c - 0x10];
    int unknown_5c_;
    char unknown_60_[0x98 - 0x60];
    int unknown_98_;
};

// USA: func_0203cedc
extern "C" ARM void func_0203cedc(struct Struct_0203ca24* arg0, int arg1, int arg2) {
    GameState* var0;
    GameObject* var1;

    var0 = GameState::GetInstance();
    var1 = var0->GetUnknownGameObject();

    if (var1->obj3D_.position_.z >= arg0->unknown_c_) {
        return;
    }

    arg0->unknown_98_ = var1->obj3D_.position_.x;
    arg0->unknown_5c_ &= ~0x20;
    arg0->unknown_5c_ &= ~0x10;

    if (arg1 != 0) {
        if (arg2 == 0) {
            arg0->unknown_5c_ |= 0x10;
            return;
        }
    }

    if ((arg1 & arg2) != 0) {
        arg0->unknown_5c_ |= 0x20;
    }
}
