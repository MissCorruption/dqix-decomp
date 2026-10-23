#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int func_ov024_021edf00(int* arg0, int arg1, short* arg2);
extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
extern "C" void func_ov024_021ed8c0(void* arg0, int arg1, int arg2, int* arg3, short* arg4);

extern unsigned short data_ov024_021feac4;

// USA: func_ov024_021efcd8
extern "C" ARM int func_ov024_021efcd8(int* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	short var0[4];
	short* var1 = var0;
	unsigned short* var2 = &data_ov024_021feac4;
	int var3 = 4;
	do {
		short* var4 = var1++;
		*var4 = *var2++;
	} while (--var3);

	int var5 = func_ov024_021edf00(arg0, arg1, var0);
	if (var5 <= 0) {
		var5 = func_ov000_0215e9fc(*arg0, var0, 4, 1);
		if (var5 <= 0) return 0;
	}

	*arg3 = 0;
	for (int var6 = 0; var6 < var5; var6++) {
		GameObject* var7 = GetCombatantByID(*arg0, var0[var6]);
		if (var7 && var7->currentStats_->primaryStats.agility != 0 && var7->currentStats_->agilityBuff > -2) {
			int var8 = *arg3;
			*arg3 = var8 + 1;
			arg4[var8] = var0[var6];
		}
	}
	if (*arg3 <= 0) return 0;

	func_ov024_021ed8c0(arg0, arg1, arg2, arg3, arg4);
	return 1;
}
