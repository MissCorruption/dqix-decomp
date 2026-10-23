#include <globaldefs.h>
#include "GameState/GameState.h"
struct Struct_020793c0_4 { unsigned int unknown_0_; };
struct Struct_020793c0 {
    Object3D unknown_0_;
    char unknown_ac_[0xc0-0xac];
    unsigned char unknown_c0_;
    char unknown_c1_[2];
    unsigned char unknown_c3_;
    char unknown_c4_[0x130-0xc4];
    Struct_020793c0_4* unknown_130_;
};
struct Struct_020793c0_2 { char unknown_0_[0x56c]; unsigned char unknown_56c_; };
extern "C" int func_02039860(void*);
extern "C" int func_020342ac(GameObject*);
extern "C" Struct_020793c0_2* func_02053c6c(unsigned char*);
extern "C" int func_02034340(void*);
struct Struct_020793c0_3 { int unknown_0_, unknown_4_, unknown_8_; };
extern "C" Struct_020793c0_3 func_02034104(GameObject*);
extern "C" int Vector3fix_Distance(const Vector3fix*, const Vector3fix*);
// USA: func_020793c0
extern "C" ARM short func_020793c0(Object3D* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    for (int var1 = 0; var1 < 4; ++var1) {
        GameObject* var2 = var0->GetPartyMemberByIndex(var1);
        if (!var2) {
            if (var1 == 0) return -1;
            continue;
        }
        if (func_02039860(var2) != -1) continue;
        if (!func_020342ac(var2)) continue;
        if (arg0->GetField06() != var2->obj3D_.GetField06()) continue;
        Struct_020793c0* var3 = (Struct_020793c0*)var2;
        if (var3->unknown_c0_ == 6) continue;
        if (var2->obj3D_.GetField06() != arg0->GetField06()) continue;
        if (func_02053c6c((unsigned char*)var2)->unknown_56c_ != 0) continue;
        if (var3->unknown_130_->unknown_0_ & 1) continue;
        if ((int)var3->unknown_c3_ > 0) continue;
        if (func_02034340(var2)) continue;
        Struct_020793c0_3 var4 = func_02034104(var2);
        if (Vector3fix_Distance((Vector3fix*)&var4, &arg0->position_) < arg1) return (short)var1;
    }
    return -1;
}
