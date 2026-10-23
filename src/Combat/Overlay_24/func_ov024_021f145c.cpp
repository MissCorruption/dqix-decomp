#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "Util/Random.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);
struct Struct_ov024_021f1330;
extern "C" int func_ov024_021f1440(struct Struct_ov024_021f1330* arg0);
extern "C" int func_ov024_021eda60(GameObject* arg0);
extern "C" int func_ov000_0215eb1c(int arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov024_021ed890(struct Random** arg0, int* arg1, short* arg2);

struct Struct_ov024_021fef4c { short unknown_0_[8]; };
extern struct Struct_ov024_021fef4c data_ov024_021fef4c;

struct Struct_ov024_021f145c {
	signed int unknown_0_0_ : 3;
	signed int unknown_0_3_ : 3;
	signed int unknown_0_6_ : 3;
	signed int unknown_1_1_ : 3;
	signed int unknown_1_4_ : 3;
	signed int unknown_1_7_ : 3;
	signed int unknown_2_2_ : 3;
	signed int unknown_2_5_ : 3;
};

// USA: func_ov024_021f145c
extern "C" ARM int func_ov024_021f145c(int* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	GameObject* var0 = func_ov000_021536f8(*arg0, arg1);
	if (!var0) return 0;
	if (!func_ov024_021f1440((struct Struct_ov024_021f1330*)var0)) return 0;

	struct Struct_ov024_021fef4c var1 = data_ov024_021fef4c;

	int var2 = func_ov000_0215eb1c(*arg0, var1.unknown_0_, 8, 1);
	if (var2 <= 0) return 0;

	*arg3 = 0;
	for (int var3 = 0; var3 < var2; var3++) {
		GameObject* var4 = GetCombatantByID(*arg0, var1.unknown_0_[var3]);
		if (!var4) continue;
		if (func_ov024_021eda60(var4)) continue;
		struct Struct_ov024_021f145c* var5 = (struct Struct_ov024_021f145c*)((char*)var4->currentStats_ + 0x58);
		if (var5->unknown_2_5_ >= 2) continue;
		int var6 = *arg3;
		*arg3 = var6 + 1;
		arg4[var6] = var1.unknown_0_[var3];
	}
	if (*arg3 > 0) {
		func_ov024_021ed890((struct Random**)arg0, arg3, arg4);
		return 1;
	}
	return 0;
}
