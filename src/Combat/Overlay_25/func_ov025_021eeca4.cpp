#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Vector.h"

struct Struct_02033834;
extern "C" void func_02033874(struct Struct_02033834* arg0, int arg1);

struct Struct_ov025_021eeca4 {
    char unknown_0_[8];
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    short unknown_c_;
};

// USA: func_ov025_021eeca4
extern "C" ARM int func_ov025_021eeca4(struct Struct_ov025_021eeca4* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned int var1 = var0->GetEffectiveDeltaTime();
    GameObject* var2 = var0->GetCombatantByIndex(arg0->unknown_8_);
    if (arg0->unknown_a_ <= var1) {
        func_02033874((struct Struct_02033834*)var2, arg0->unknown_c_);
        return 1;
    }
    fix32_t var3 = var2->obj3D_.rotation_.y;
    float var4 = fix32SignedAngleDistance(var3, arg0->unknown_c_);
    float var5 = (float)var1 / (float)arg0->unknown_a_;
    func_02033874((struct Struct_02033834*)var2, fix32ReduceAngle0To2Pi(var3 + (int)(var4 * var5)));
    arg0->unknown_a_ -= var1;
    return 0;
}
