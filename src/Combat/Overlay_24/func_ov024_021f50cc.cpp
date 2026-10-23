#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);

struct Struct_ov024_021f50cc { int unknown_0_; };
extern unsigned short data_ov024_021feabc;

// USA: func_ov024_021f50cc
extern "C" ARM int func_ov024_021f50cc(struct Struct_ov024_021f50cc* arg0, int arg1, int arg2, int* arg3, void* arg4) {
	short var0[4];
	unsigned short* var1 = (unsigned short*)var0;
	unsigned short* var2 = &data_ov024_021feabc;
	int var3 = 4;
	do {
		unsigned short* var4 = var1++;
		*var4 = *var2++;
	} while (--var3);

	int var5 = func_ov000_0215e9fc(arg0->unknown_0_, var0, 4, 1);
	if (var5 <= 0) return 0;

	*arg3 = 0;
	for (int var6 = 0; var6 < var5; var6++) {
		GameObject* var7 = GetCombatantByID(arg0->unknown_0_, var0[var6]);
		if (var7 && var7->currentStats_->primaryStats.agility != 0 && var7->currentStats_->agilityBuff > -2) {
			((short*)arg4)[(*arg3)++] = var0[var6];
		}
	}
	if (*arg3 <= 0) return 0;
	if (*arg3 * 3 < var5 * 2) return 0;

	*arg3 = var5;
	memcpy(arg4, var0, 8);
	return 1;
}
