#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_ov024_021ee33c { void* unknown_0_; };

// USA: func_ov024_021ee33c
extern "C" ARM int func_ov024_021ee33c(struct Struct_ov024_021ee33c* arg0, int arg1, int arg2, int* arg3) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_0_, arg1);
	if (!var0) return 0;
	unsigned short var1 = var0->currentStats_->primaryStats.currHP;
	unsigned short var2 = var0->currentStats_->primaryStats.maxHP;
	if ((var1 << 1) <= var2) {
		*arg3 = 0;
		return 1;
	}
	return 0;
}
