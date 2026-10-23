#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_ov024_021ee2fc { void* unknown_0_; };

static inline int inline_ov024_021dc700(GameObject* arg0) { ModifiableCombatStats* var0 = arg0->currentStats_; return var0->primaryStats.maxHP; }
static inline int inline_ov000_0215cd44(GameObject* arg0) { ModifiableCombatStats* var0 = arg0->currentStats_; return var0->primaryStats.currHP; }

// USA: func_ov024_021ee2fc
extern "C" ARM int func_ov024_021ee2fc(struct Struct_ov024_021ee2fc* arg0, int arg1, int arg2, int* arg3) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_0_, arg1);
	if (!var0) return 0;
	if (inline_ov000_0215cd44(var0) * 3 <= inline_ov024_021dc700(var0)) {
		*arg3 = 0;
		return 1;
	}
	return 0;
}
