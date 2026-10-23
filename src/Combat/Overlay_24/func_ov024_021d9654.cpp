#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

struct Struct_ov024_021d9654 { struct Random* unknown_0_; };

// USA: func_ov024_021d9654
extern "C" ARM int func_ov024_021d9654(struct Struct_ov024_021d9654* arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
	GameState* var0 = GameState::GetInstance();
	GameObject* var1 = var0->GetCombatantByIndex(arg1);
	if (!var1) return arg5;
	struct Random* var2 = arg0->unknown_0_;
	if (NextRandomMax(var2, 2) > 0) return 0;
	unsigned short var3 = var1->baseStats_->primaryStats.attack;
	float var4 = NextRandomFloatBetween(var2, 0.95f, 1.05f);
	return (int)((float)var3 * var4);
}
