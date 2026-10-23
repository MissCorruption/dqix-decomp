#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_020ae074 : Object3D {
    short unknown_ac_, unknown_ae_;
    char unknown_b0_[0x150 - 0xb0];
    int unknown_150_;
    char unknown_154_[0x164 - 0x154];
    Vector3fix unknown_164_;
    int unknown_170_;
    Vector3fix unknown_174_;
    int unknown_180_;
};
struct Struct_02040774_2;
extern "C" void func_02032fdc(Struct_020ae074*, int, int);
extern "C" void func_0203db34(unsigned char*, int, int, int);
extern "C" void func_020ae20c(void*, Struct_02040774_2*, int*, int);

// USA: func_020ae074
extern "C" ARM void func_020ae074(Struct_020ae074* arg0) {
    GameState* var0 = GameState::GetInstance();
    Vector3fix var1 = arg0->position_;
    var1.y += arg0->unknown_150_;
    arg0->position_ = var1;
    func_02032fdc(arg0, 1, 0);
    GameObject* var2 = var0->GetGameObjectByIndex(0xcb);
    if (var2) {
        arg0->unknown_164_.y += arg0->unknown_150_;
        var2->obj3D_.position_ = arg0->unknown_164_;
        func_0203db34((unsigned char*)var2, 0, arg0->unknown_170_, 0);
        var2->obj3D_.Draw(true);
        arg0->unknown_164_.y -= arg0->unknown_150_;
        arg0->unknown_174_.y += arg0->unknown_150_;
        var2->obj3D_.position_ = arg0->unknown_174_;
        func_0203db34((unsigned char*)var2, 0, arg0->unknown_180_, 0);
        var2->obj3D_.Draw(true);
        arg0->unknown_174_.y -= arg0->unknown_150_;
    }
    GameObject* var3 = var0->GetGameObjectByIndex(0xcc);
    Vector3fix var4 = arg0->position_;
    func_020ae20c(arg0, (Struct_02040774_2*)var3, &var4.x, arg0->unknown_ae_);
    GameObject* var5 = var0->GetGameObjectByIndex(0xcd);
    func_020ae20c(arg0, (Struct_02040774_2*)var5, &arg0->unknown_164_.x, arg0->unknown_170_);
    func_020ae20c(arg0, (Struct_02040774_2*)var5, &arg0->unknown_174_.x, arg0->unknown_180_);
    var1 = arg0->position_;
    var1.y -= arg0->unknown_150_;
    arg0->position_ = var1;
}
