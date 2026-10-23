#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "std_library_functions.h"

extern "C" int func_ov000_0215eb1c(int arg0, unsigned short* arg1, int arg2, int arg3);

extern unsigned short data_ov024_021fedac;

// USA: func_ov024_021f6298
#pragma opt_common_subs off
extern "C" ARM int func_ov024_021f6298(int* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	unsigned short var0[8];
	unsigned short* var1 = var0;
	unsigned short* var2 = &data_ov024_021fedac;
	int var3 = 8;
	do {
		unsigned short* var4 = var1++;
		*var4 = *var2++;
	} while (--var3);

	int var5 = func_ov000_0215eb1c(*arg0, var0, 8, 1);
	if (var5 <= 0) return 0;

	*arg3 = 0;
	for (int var6 = 0; var6 < var5; var6++) {
		GameObject* var7 = GetCombatantByID(*arg0, *(short*)&var0[var6]);
		if (!var7) continue;
		if (var7->currentStats_->primaryStats.attack >= 0xffff) continue;
		if (var7->currentStats_->attackBuff >= 2) continue;
		int var8 = *arg3;
		*arg3 = var8 + 1;
		arg4[var8] = *(short*)&var0[var6];
	}
	if (*arg3 <= 0) return 0;

	*arg3 = var5;
	memcpy(arg4, var0, 0x10);
	return 1;
}
