#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "Util/Random.h"

// USA: func_ov024_021d974c
extern "C" ARM int func_ov024_021d974c(struct Random** arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
	GameObject* var0 = GetCombatantByID((int)*arg0, (short)arg1);
	if (!var0) return arg5;
	unsigned short var1 = var0->currentStats_->primaryStats.maxMP;
	struct Random* var2 = *arg0;
	float var3 = NextRandomFloatBetween(var2, 0.2f, 0.5f);
	return (int)((float)var1 * var3);
}
