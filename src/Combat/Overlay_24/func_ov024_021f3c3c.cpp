#include <globaldefs.h>
#include "Util/Random.h"
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);
extern "C" int func_ov000_0215eb1c(int arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov024_021ed890(struct Random** arg0, int* arg1, short* arg2);

struct Struct_ov024_021f3c3c { int unknown_0_; };
struct Struct_ov024_021feeac { short unknown_0_[8]; };
extern struct Struct_ov024_021feeac data_ov024_021feeac;

static inline unsigned short inline_ov024_021f3c3c(GameObject* arg0) { return arg0->currentStats_->primaryStats.maxMP; }

// USA: func_ov024_021f3c3c
extern "C" ARM int func_ov024_021f3c3c(struct Struct_ov024_021f3c3c* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	GameObject* var0 = func_ov000_021536f8(arg0->unknown_0_, arg1);
	if (!var0) return 0;
	if (var0->currentStats_->primaryStats.currMP == 0) return 0;
	struct Struct_ov024_021feeac var1 = data_ov024_021feeac;
	int var2 = func_ov000_0215eb1c(arg0->unknown_0_, var1.unknown_0_, 8, 1);
	if (var2 <= 0) return 0;
	*arg3 = 0;
	for (int var3 = 0; var3 < var2; var3++) {
		if (arg1 == var1.unknown_0_[var3]) continue;
		GameObject* var4 = GetCombatantByID(arg0->unknown_0_, var1.unknown_0_[var3]);
		if (!var4) continue;
		unsigned short var5 = inline_ov024_021f3c3c(var4);
		if ((float)var4->currentStats_->primaryStats.currMP / (float)var5 >= 1.0f) continue;
		arg4[(*arg3)++] = var1.unknown_0_[var3];
	}
	if (*arg3 <= 0) return 0;
	func_ov024_021ed890((struct Random**)arg0, arg3, arg4);
	return 1;
}
