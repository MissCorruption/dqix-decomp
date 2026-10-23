#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

float CalculatePhysicalDamage(int attack, int defense, struct Random* random);

struct Struct_ov024_021d8ad8 {
    struct Random* unknown_0_;

    struct Random* inline_ov024_021d8ad8() { return unknown_0_; }
};

static inline unsigned short inline_ov024_021d8ad8_2(GameObject* arg0) {
    return arg0->currentStats_->primaryStats.attack;
}

static inline unsigned short inline_ov024_021d8ad8_3(GameObject* arg0) {
    return arg0->currentStats_->primaryStats.defense;
}

// USA: func_ov024_021d8ad8
extern "C" ARM int func_ov024_021d8ad8(struct Struct_ov024_021d8ad8* arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetCombatantByIndex(arg1);
    GameObject* var2 = var0->GetCombatantByIndex(arg2);
    if (var1 == NULL || var2 == NULL) {
        return arg5;
    }
    struct Random* var3 = arg0->inline_ov024_021d8ad8();
    unsigned short var4 = inline_ov024_021d8ad8_3(var2);
    unsigned short var5 = inline_ov024_021d8ad8_2(var1);
    return (int)CalculatePhysicalDamage((int)(var5 * 0.75f), (int)(float)var4, var3);
}
