#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "Util/Random.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);
extern "C" int func_ov000_0215eb1c(int arg0, short* arg1, int arg2, int arg3);
extern "C" float func_ov024_021db358(GameObject* arg0);
extern "C" int func_ov024_021ed890(struct Random** arg0, int* arg1, short* arg2);

extern unsigned short data_ov024_021fee6c;

// USA: func_ov024_021f3b20
extern "C" ARM int func_ov024_021f3b20(int* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	GameObject* var0 = func_ov000_021536f8(*arg0, arg1);
	if (!var0) return 0;
	if (var0->currentStats_->primaryStats.currHP <= 1) return 0;

	short var1[8];
	short* var2 = var1;
	unsigned short* var3 = &data_ov024_021fee6c;
	int var4 = 8;
	do {
		short* var5 = var2++;
		*var5 = *var3++;
	} while (--var4);

	int var6 = func_ov000_0215eb1c(*arg0, var1, 8, 1);
	if (var6 <= 0) return 0;

	*arg3 = 0;
	for (int var7 = 0; var7 < var6; var7++) {
		if (arg1 == var1[var7]) continue;
		GameObject* var8 = GetCombatantByID(*arg0, var1[var7]);
		if (!var8) continue;
		if (func_ov024_021db358(var8) >= 1.0f) continue;
		int var9 = *arg3;
		*arg3 = var9 + 1;
		arg4[var9] = var1[var7];
	}
	if (*arg3 <= 0) return 0;

	func_ov024_021ed890((struct Random**)arg0, arg3, arg4);
	return 1;
}
