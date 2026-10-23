#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "Util/Random.h"
#include "std_library_functions.h"

extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov000_0215eb1c(int arg0, short* arg1, int arg2, int arg3);
struct Struct_ov024_021ed9dc;
extern "C" int func_ov024_021ed9dc(struct Struct_ov024_021ed9dc* arg0, int arg1);
extern "C" int func_ov024_021ed890(struct Random** arg0, int* arg1, short* arg2);

struct Struct_ov024_021f0a20 { int unknown_0_; };
struct Struct_ov024_021fee5c { short unknown_0_[8]; };
extern struct Struct_ov024_021fee5c data_ov024_021fee5c;

// USA: func_ov024_021f0a20
extern "C" ARM int func_ov024_021f0a20(struct Struct_ov024_021f0a20* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	int var0 = 0;
	struct Struct_ov024_021fee5c var1 = data_ov024_021fee5c;
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
	func_ov024_021ed890((struct Random**)arg0, arg3, arg4);
	return 1;
}
