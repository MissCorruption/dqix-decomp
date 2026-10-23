#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "std_library_functions.h"

extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov000_0215eb1c(int arg0, short* arg1, int arg2, int arg3);
struct Struct_ov024_021ed9dc;
extern "C" int func_ov024_021ed9dc(struct Struct_ov024_021ed9dc* arg0, int arg1);

struct Struct_ov024_021f0d28 { int unknown_0_; };
struct Struct_ov024_021fee8c { short unknown_0_[8]; };
extern struct Struct_ov024_021fee8c data_ov024_021fee8c;

// USA: func_ov024_021f0d28
extern "C" ARM int func_ov024_021f0d28(struct Struct_ov024_021f0d28* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	int var0 = 0;
	struct Struct_ov024_021fee8c var1 = data_ov024_021fee8c;
	int var2 = func_ov000_0215e9fc(arg0->unknown_0_, var1.unknown_0_, 4, 1);
	if (var2 <= 0) return 0;

	for (int var3 = 0; var3 < var2; var3++) {
		if (func_ov024_021ed9dc((struct Struct_ov024_021ed9dc*)arg0, var1.unknown_0_[var3])) {
			var0 = 1;
			break;
		}
	}
	if (!var0) return 0;

	memset(&var1, -1, sizeof(var1));
	var2 = func_ov000_0215eb1c(arg0->unknown_0_, var1.unknown_0_, 8, 1);
	if (var2 <= 0) return 0;

	*arg3 = 0;
	for (int var4 = 0; var4 < var2; var4++) {
		GameObject* var5 = GetCombatantByID(arg0->unknown_0_, var1.unknown_0_[var4]);
		if (!var5) continue;
		if (var5->currentStats_->unknown_5a_2_ >= 2) continue;
		int var6 = *arg3;
		*arg3 = var6 + 1;
		arg4[var6] = var1.unknown_0_[var4];
	}

	if (*arg3 <= 0) return 0;
	*arg3 = var2;
	memcpy(arg4, &var1, sizeof(var1));
	return 1;
}
