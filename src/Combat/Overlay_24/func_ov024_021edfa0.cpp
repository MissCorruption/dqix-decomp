#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int func_ov024_021edf00(int* arg0, int arg1, short* arg2);
extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
extern "C" void func_ov024_021ed8c0(void* arg0, int arg1, int arg2, int* arg3, short* arg4);

struct Struct_ov024_021df454_2;
extern "C" int func_ov024_021df6ec(struct Struct_ov024_021df454_2* arg0);

extern unsigned short data_ov024_021feb2c;

// USA: func_ov024_021edfa0
extern "C" ARM int func_ov024_021edfa0(int* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	GameObject* var0 = GetCombatantByID(*arg0, arg1);
	if (!var0) return 0;
	if (func_ov024_021df6ec((struct Struct_ov024_021df454_2*)var0)) return 0;

	short var1[4];
	short* var2 = var1;
	unsigned short* var3 = &data_ov024_021feb2c;
	int var4 = 4;
	do {
		short* var5 = var2++;
		*var5 = *var3++;
	} while (--var4);

	int var6 = func_ov024_021edf00(arg0, arg1, var1);
	if (var6 <= 0) {
		var6 = func_ov000_0215e9fc(*arg0, var1, 4, 1);
		if (var6 <= 0) return 0;
	}

	*arg3 = 0;
	for (int var7 = 0; var7 < var6; var7++) {
		GameObject* var8 = GetCombatantByID(*arg0, var1[var7]);
		if (!var8) continue;
		if (var0->currentStats_->primaryStats.attack * 2 <= var8->currentStats_->primaryStats.defense) continue;
		arg4[*arg3] = var1[var7];
		(*arg3)++;
	}
	if (*arg3 <= 0) return 0;

	func_ov024_021ed8c0(arg0, arg1, arg2, arg3, arg4);
	return arg4[0] >= 0;
}
