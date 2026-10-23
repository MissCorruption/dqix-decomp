#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int func_ov024_021eda60(GameObject* arg0);

struct Struct_ov024_021f0920 { void* unknown_0_; };

// USA: func_ov024_021f0920
extern "C" ARM int func_ov024_021f0920(struct Struct_ov024_021f0920* arg0, int arg1) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_0_, arg1);
	if (!var0) return 0;
	int var1 = func_ov024_021eda60(var0);
	int var2 = !var1;
	return var2;
}
