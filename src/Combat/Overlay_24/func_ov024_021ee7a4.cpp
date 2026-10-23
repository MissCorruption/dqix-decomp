#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "std_library_functions.h"

extern "C" int func_ov000_0215eb1c(int arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov024_021eda60(GameObject* arg0);
extern "C" float func_ov024_021db358(GameObject* arg0);

struct Struct_ov024_021ee7a4 { int unknown_0_; };
struct Struct_ov024_021fecac { short unknown_0_[8]; };
extern struct Struct_ov024_021fecac data_ov024_021fecac;

// USA: func_ov024_021ee7a4
extern "C" ARM int func_ov024_021ee7a4(struct Struct_ov024_021ee7a4* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	struct Struct_ov024_021fecac var0 = data_ov024_021fecac;
	int var1 = func_ov000_0215eb1c(arg0->unknown_0_, var0.unknown_0_, 8, 1);
	if (var1 <= 0) return 0;
	*arg3 = 0;
	for (int var2 = 0; var2 < var1; var2++) {
		GameObject* var3 = GetCombatantByID(arg0->unknown_0_, var0.unknown_0_[var2]);
		if (!var3) continue;
		if (func_ov024_021eda60(var3)) continue;
		if (func_ov024_021db358(var3) >= 0.5f) continue;
		arg4[*arg3] = var0.unknown_0_[var2];
		*arg3 = *arg3 + 1;
	}
	if (*arg3 <= 0) return 0;
	if (*arg3 * 3 < var1 * 2) return 0;
	*arg3 = var1;
	memcpy(arg4, var0.unknown_0_, 0x10);
	return 1;
}
