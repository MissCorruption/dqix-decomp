#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);

static inline unsigned short inline_ov024_021dc540_2(GameObject* arg0) { ModifiableCombatStats* var0 = arg0->currentStats_; return var0->primaryStats.maxMP; }
static inline unsigned short inline_ov000_0215cd44_2(GameObject* arg0) { ModifiableCombatStats* var0 = arg0->currentStats_; return var0->primaryStats.currMP; }

// USA: func_ov024_021f3248
extern "C" ARM int func_ov024_021f3248(int* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	GameObject* var0 = func_ov000_021536f8(*arg0, arg1);
	if (!var0) return 0;
	float var1 = (float)inline_ov000_0215cd44_2(var0) / (float)inline_ov024_021dc540_2(var0);
	if (var1 > 0.1f) return 0;
	*arg3 = 1;
	*arg4 = (short)arg1;
	return 1;
}
