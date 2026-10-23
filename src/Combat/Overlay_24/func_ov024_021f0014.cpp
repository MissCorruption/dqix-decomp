#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov024_021eda60(GameObject* arg0);

struct Struct_ov024_021f0014 { int unknown_0_; };
extern unsigned short data_ov024_021fea64;

// USA: func_ov024_021f0014
extern "C" ARM int func_ov024_021f0014(struct Struct_ov024_021f0014* arg0, int arg1, int arg2, int* arg3, void* arg4) {
	short var0[4];
	unsigned short* var1 = (unsigned short*)var0;
	unsigned short* var2 = &data_ov024_021fea64;
	int var3 = 4;
	do {
		unsigned short* var4 = var1++;
		*var4 = *var2++;
	} while (--var3);

	int var5 = func_ov000_0215e9fc(arg0->unknown_0_, var0, 4, 1);
	if (var5 <= 0) return 0;

	int var6 = 0;
	for (int var7 = 0; var7 < var5; var7++) {
		GameObject* var8 = GetCombatantByID(arg0->unknown_0_, var0[var7]);
		if (var8 && var8->currentStats_->primaryStats.agility != 0 && var8->currentStats_->agilityBuff > -2 && !func_ov024_021eda60(var8)) {
			int var9 = *((unsigned char*)var8->currentStats_ + 0x51);
			if (var9 > 0) var6++;
		}
	}
	if (var6 * 3 < var5 * 2) return 0;

	*arg3 = var5;
	memcpy(arg4, var0, 8);
	return 1;
}
