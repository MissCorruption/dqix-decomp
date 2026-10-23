#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int func_ov024_021edf00(int* arg0, int arg1, short* arg2);
extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
extern "C" void func_ov024_021ed8c0(void* arg0, int arg1, int arg2, int* arg3, short* arg4);

struct Struct_020885b4;
extern "C" int func_020885b4(struct Struct_020885b4* arg0);
struct Struct_02088514;
extern "C" int func_02088514(struct Struct_02088514* arg0);
struct Struct_ov024_021da9b0 { char unknown_0_[0x14]; int unknown_14_; };
struct Struct_ov024_021da670_7 { char unknown_0_[0x138]; struct Struct_ov024_021da9b0* unknown_138_; };
extern "C" int func_ov024_021da9b0(struct Struct_ov024_021da670_7* arg0);

extern unsigned short data_ov024_021fec24;

// USA: func_ov024_021f1a0c
extern "C" ARM int func_ov024_021f1a0c(int* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	short var0[4];
	short* var1 = var0;
	unsigned short* var2 = &data_ov024_021fec24;
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
		if (!var7) continue;
		if (!func_020885b4((struct Struct_020885b4*)var7->currentStats_) &&
		    !func_02088514((struct Struct_02088514*)var7->currentStats_) &&
		    !func_ov024_021da9b0((struct Struct_ov024_021da670_7*)var7)) continue;
		int var8 = *arg3;
		*arg3 = var8 + 1;
		arg4[var8] = var0[var6];
	}
	if (*arg3 <= 0) return 0;

	func_ov024_021ed8c0(arg0, arg1, arg2, arg3, arg4);
	return 1;
}
