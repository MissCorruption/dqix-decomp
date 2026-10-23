#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);
struct Struct_ov024_021e04e0;
extern "C" int func_ov024_021e05e4(struct Struct_ov024_021e04e0* arg0);
struct Struct_02010088;
extern "C" int func_02010088(struct Struct_02010088* arg0);
extern "C" int func_ov024_021edf00(int* arg0, int arg1, short* arg2);
extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
struct Struct_ov024_021da670_6;
extern "C" int func_ov024_021da998(struct Struct_ov024_021da670_6* arg0);
struct Struct_ov024_021dd028_5;
extern "C" int func_ov024_021dd260(struct Struct_ov024_021dd028_5* arg0);
extern "C" void func_ov024_021ed8c0(void* arg0, int arg1, int arg2, int* arg3, short* arg4);

struct Struct_ov024_021f2ab4 { char unknown_0_[0x2e]; short unknown_2e_; };

extern unsigned short data_ov024_021feb5c;

// USA: func_ov024_021f2ab4
extern "C" ARM int func_ov024_021f2ab4(int* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	GameObject* var0 = func_ov000_021536f8(*arg0, arg1);
	if (!var0) return 0;
	if (func_ov024_021e05e4((struct Struct_ov024_021e04e0*)var0)) {
		GameObject* var1 = GetCombatantByID(*arg0, ((struct Struct_ov024_021f2ab4*)var0->currentStats_)->unknown_2e_);
		if (var1 && !func_02010088((struct Struct_02010088*)var1)) {
			*arg3 = 1;
			arg4[0] = ((struct Struct_ov024_021f2ab4*)var0->currentStats_)->unknown_2e_;
			return 1;
		}
	}

	short var2[4];
	short* var3 = var2;
	unsigned short* var4 = &data_ov024_021feb5c;
	int var5 = 4;
	do {
		short* var6 = var3++;
		*var6 = *var4++;
	} while (--var5);

	int var7 = func_ov024_021edf00(arg0, arg1, var2);
	if (var7 <= 0) {
		var7 = func_ov000_0215e9fc(*arg0, var2, 4, 1);
		if (var7 <= 0) return 0;
	}

	*arg3 = 0;
	for (int var8 = 0; var8 < var7; var8++) {
		GameObject* var9 = GetCombatantByID(*arg0, var2[var8]);
		if (var9 && (func_ov024_021da998((struct Struct_ov024_021da670_6*)var9) || func_ov024_021dd260((struct Struct_ov024_021dd028_5*)var9))) {
			int var10 = *arg3;
			*arg3 = var10 + 1;
			arg4[var10] = var2[var8];
		}
	}
	if (*arg3 <= 0) return 0;

	func_ov024_021ed8c0(arg0, arg1, arg2, arg3, arg4);
	return 1;
}
