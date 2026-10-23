#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);
extern "C" float func_ov024_021db358(GameObject* arg0);
extern "C" int func_ov000_0215eb1c(int arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov024_021ed890(struct Random** arg0, int* arg1, short* arg2);

struct Struct_ov024_021f2754 { int unknown_0_; };
struct Struct_ov024_021feccc { short unknown_0_[8]; };
extern struct Struct_ov024_021feccc data_ov024_021feccc;

// USA: func_ov024_021f2754
extern "C" ARM int func_ov024_021f2754(struct Struct_ov024_021f2754* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	GameObject* var0 = func_ov000_021536f8(arg0->unknown_0_, arg1);
	if (!var0) return 0;
	if (func_ov024_021db358(var0) < 0.5f) return 0;
	struct Struct_ov024_021feccc var1 = data_ov024_021feccc;
	int var2 = func_ov000_0215eb1c(arg0->unknown_0_, var1.unknown_0_, 8, 1);
	if (var2 <= 0) return 0;
	*arg3 = 0;
	for (int var3 = 0; var3 < var2; var3++) {
		if (arg1 == var1.unknown_0_[var3]) continue;
		GameObject* var4 = GetCombatantByID(arg0->unknown_0_, var1.unknown_0_[var3]);
		if (!var4) continue;
		if (*(short*)((char*)var4->currentStats_ + 0x2c) >= 0) continue;
		int var5 = *arg3;
		*arg3 = var5 + 1;
		arg4[var5] = var1.unknown_0_[var3];
	}
	if (*arg3 <= 0) return 0;
	func_ov024_021ed890((struct Random**)arg0, arg3, arg4);
	return 1;
}
