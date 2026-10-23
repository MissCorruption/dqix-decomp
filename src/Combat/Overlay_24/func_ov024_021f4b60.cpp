#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "std_library_functions.h"

extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov024_021ede2c(int* arg0);
struct Struct_020885b4;
struct Struct_02088514;
extern "C" int func_020885b4(struct Struct_020885b4* arg0);
extern "C" int func_02088514(struct Struct_02088514* arg0);

struct Struct_ov024_021feb4c { short unknown_0_[4]; };
extern struct Struct_ov024_021feb4c data_ov024_021feb4c;

struct Struct_ov024_021f4b60 { char unknown_0_[0x4d]; unsigned char unknown_4d_; };

// USA: func_ov024_021f4b60
extern "C" ARM int func_ov024_021f4b60(int* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	struct Struct_ov024_021feb4c var0 = data_ov024_021feb4c;
	int var1 = func_ov000_0215e9fc(*arg0, var0.unknown_0_, 4, 1);
	if (var1 <= 0) return 0;
	if (!func_ov024_021ede2c(arg0)) return 0;

	*arg3 = 0;
	for (int var2 = 0; var2 < var1; var2++) {
		GameObject* var3 = GetCombatantByID(*arg0, var0.unknown_0_[var2]);
		if (!var3) continue;
		if (func_020885b4((struct Struct_020885b4*)var3->currentStats_)) continue;
		if (func_02088514((struct Struct_02088514*)var3->currentStats_)) continue;
		int var4 = ((Struct_ov024_021f4b60*)var3->currentStats_)->unknown_4d_;
		if (var4 <= 0) continue;
		int var5 = *arg3;
		*arg3 = var5 + 1;
		arg4[var5] = var0.unknown_0_[var2];
	}
	if (*arg3 <= 0) return 0;
	if (*arg3 * 3 < var1 * 2) return 0;

	*arg3 = var1;
	memcpy(arg4, &var0, 8);
	return 1;
}
