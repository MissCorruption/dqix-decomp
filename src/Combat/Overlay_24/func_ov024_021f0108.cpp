#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "Util/Random.h"

extern "C" int func_ov000_0215eb1c(int arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov024_021ed890(struct Random** arg0, int* arg1, short* arg2);

struct Struct_ov024_021fedcc { short unknown_0_[8]; };
extern struct Struct_ov024_021fedcc data_ov024_021fedcc;

// USA: func_ov024_021f0108
extern "C" ARM int func_ov024_021f0108(int* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	struct Struct_ov024_021fedcc var0 = data_ov024_021fedcc;

	int var1 = func_ov000_0215eb1c(*arg0, var0.unknown_0_, 8, 1);
	if (var1 <= 0) return 0;

	*arg3 = 0;
	for (int var2 = 0; var2 < var1; var2++) {
		GameObject* var3 = GetCombatantByID(*arg0, var0.unknown_0_[var2]);
		if (!var3) continue;
		if (var3->currentStats_->primaryStats.attack >= 65535) continue;
		if (var3->currentStats_->attackBuff >= 2) continue;
		int var4 = *arg3;
		*arg3 = var4 + 1;
		arg4[var4] = var0.unknown_0_[var2];
	}
	if (*arg3 > 0) {
		func_ov024_021ed890((struct Random**)arg0, arg3, arg4);
		return 1;
	}
	return 0;
}
