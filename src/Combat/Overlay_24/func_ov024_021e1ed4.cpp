#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_02087860;
struct Struct_02087e18;
struct Struct_02087e6c;
extern "C" int func_02087860(Struct_02087860* arg0, unsigned char arg1);
extern "C" int func_020878b4(void* arg0, int arg1);
extern "C" int func_02087e18(Struct_02087e18* arg0, unsigned char arg1);
extern "C" int func_02087e6c(Struct_02087e6c* arg0, int arg1);
extern "C" int func_0208776c(void* arg0, int arg1);
extern "C" int func_020877c0(void* arg0, int arg1);
void UpdateCombatantDefense(int random, int combatantId);
void UpdateCombatantAttack(int random, int combatantId);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov024_021e1ed4_3 {
	char unknown_0_[0x24];
	unsigned int unknown_24_0_ : 10;
	unsigned int unknown_25_2_ : 10;
	unsigned int unknown_26_4_ : 10;
	unsigned int unknown_27_6_ : 2;
};

struct Struct_ov024_021e1ed4 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021e1ed4_2 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; };

extern "C" int func_ov024_021e95d4(struct Struct_ov024_021e1ed4_2* arg0, int arg1, struct Struct_ov024_021e1ed4_3* arg2, int arg3, signed char arg4, unsigned char arg5, unsigned char arg6);
extern "C" int func_ov024_021e94c4(struct Struct_ov024_021e1ed4_2* arg0, int arg1, struct Struct_ov024_021e1ed4_3* arg2, int arg3, signed char arg4, unsigned char arg5, unsigned char arg6);

// USA: func_ov024_021e1ed4
extern "C" ARM void* func_ov024_021e1ed4(struct Struct_ov024_021e1ed4_2* arg0, int arg1, int arg2, struct Struct_ov024_021e1ed4_3* arg3) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	void* var1 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var1) return 0;
	int var2 = 0;
	if (func_02087860((Struct_02087860*)var0->currentStats_, 0)) {
		var2 = 1;
		int var3 = func_020878b4(var0->currentStats_, 1);
		UpdateCombatantDefense((int)arg0->unknown_10_, arg2);
		func_ov000_0215a88c(arg0->unknown_10_, var1, func_ov024_021e95d4(arg0, arg2, arg3, 0, var3, 1, 1));
	}
	if (func_02087e18((Struct_02087e18*)var0->currentStats_, 0)) {
		var2 = 1;
		int var4 = func_02087e6c((Struct_02087e6c*)var0->currentStats_, 1);
		int var5;
		switch (var4) {
			case 2: var5 = 0x1b0; break;
			case 0: var5 = 0x1af; break;
			default: var5 = 0x1b1; break;
		}
		func_ov000_0215a88c(arg0->unknown_10_, var1, var5);
	}
	if (func_0208776c(var0->currentStats_, 0)) {
		var2 = 1;
		int var6 = func_020877c0(var0->currentStats_, 1);
		UpdateCombatantAttack((int)arg0->unknown_10_, arg2);
		func_ov000_0215a88c(arg0->unknown_10_, var1, func_ov024_021e94c4(arg0, arg2, arg3, 0, var6, 1, 1));
	}
	if (!var2) {
		func_ov000_0215a88c(arg0->unknown_10_, var1, (unsigned short)arg3->unknown_25_2_);
	}
	struct Struct_ov024_021e1ed4* var7 = (struct Struct_ov024_021e1ed4*)((char*)arg0->unknown_c_ + 0x1c);
	func_ov000_0215cd44(arg0->unknown_10_, var1, var0, 0, 0, 0, var7->unknown_0_7_ != 0);
	return var1;
}
