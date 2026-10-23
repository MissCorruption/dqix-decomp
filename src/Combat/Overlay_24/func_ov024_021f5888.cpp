#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);

static inline unsigned short inline_ov024_021dc700(GameObject* arg0) { ModifiableCombatStats* var0 = arg0->currentStats_; return var0->primaryStats.maxHP; }
static inline unsigned short inline_ov000_0215cd44(GameObject* arg0) { ModifiableCombatStats* var0 = arg0->currentStats_; return var0->primaryStats.currHP; }

// USA: func_ov024_021f5888
extern "C" ARM int func_ov024_021f5888(int* arg0, int arg1, int arg2, int* arg3, void* arg4) {
	GameObject* var0 = func_ov000_021536f8(*arg0, arg1);
	if (!var0) return 0;
	if (inline_ov000_0215cd44(var0) >= inline_ov024_021dc700(var0)) return 0;
	*arg3 = 0;
	memset(arg4, -1, 8);
	return 1;
}
