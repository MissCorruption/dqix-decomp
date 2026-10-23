#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"
#include "Util/Random.h"

struct Struct_ov024_021e3594 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021e3594_2 { char unknown_0_[0x1c]; struct Struct_ov024_021e3594 unknown_1c_; };
struct Struct_ov024_021e3594_3 { char unknown_0_[0xc]; struct Struct_ov024_021e3594_2* unknown_c_; void* unknown_10_; };
struct Struct_ov024_021e3594_4 {
	char unknown_0_[4];
	unsigned int unknown_4_0_ : 12;
	unsigned int unknown_5_4_ : 20;
	char unknown_8_[0x32 - 8];
	short unknown_32_;
};
struct Struct_ov024_021e3594_5 { char unknown_0_[0x50]; unsigned char unknown_50_; };

struct Struct_02087860;
extern "C" int func_02087860(Struct_02087860* arg0, unsigned char arg1);
struct Struct_020878b4;
extern "C" int func_020878b4(struct Struct_020878b4* arg0, int arg1);
void UpdateCombatantDefense(int unused, int combatantId);
extern "C" int func_ov024_021e95d4(struct Struct_ov024_021e3594_3* arg0, int arg1, struct Struct_ov024_021e3594_4* arg2, unsigned char arg3, signed char arg4, unsigned char arg5, unsigned char arg6);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);
struct Struct_ov024_021e2bd0;
extern "C" void* func_ov024_021e8ca0(struct Struct_ov024_021e2bd0* arg0, int arg1);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

// USA: func_ov024_021e3594
extern "C" ARM unsigned long long func_ov024_021e3594(struct Struct_ov024_021e3594_3* arg0, int arg1, int arg2, struct Struct_ov024_021e3594_4* arg3, int arg4) {
	if (arg4 <= 0) return 0;
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	int var1 = NextRandomMax((struct Random*)arg0->unknown_10_, 100);
	int var2 = arg3->unknown_32_;
	if (var2 < -2) var2 = -2;
	if (var2 > 2) var2 = 2;
	int var3 = 0;
	if (var2 < 0) {
		if (arg3->unknown_4_0_ != 0xad) {
			unsigned char var4 = ((struct Struct_ov024_021e3594_5*)var0->currentStats_)->unknown_50_;
			if (var4 == 0) return 0;
			if (!arg0->unknown_c_->unknown_1c_.unknown_0_7_) {
				float var5 = var4;
				if (var1 >= var4) return 0;
			}
		}
		var3 = 1;
	}
	int var6 = 0;
	int var7 = 0;
	if (func_02087860((struct Struct_02087860*)var0->currentStats_, var3)) {
		var7 = func_020878b4((struct Struct_020878b4*)var0->currentStats_, (signed char)var2);
		UpdateCombatantDefense((int)arg0->unknown_10_, arg2);
		var6 = 1;
	}
	union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var8;
	var8.unknown_0_ = 0;
	var8.unknown_4_ = 0;
	if (var6) {
		int var9 = func_ov024_021e95d4(arg0, arg2, arg3, var3, var7, 1, 1);
		func_ov000_02159eac(arg0->unknown_10_, &var8, 0x1e);
		void* var10 = func_ov024_021e8ca0((struct Struct_ov024_021e2bd0*)arg0, var9);
		if (var10) {
			func_ov000_0215cd44(arg0->unknown_10_, var10, var0, 0, 0, 0, 0);
		}
	}
	return var8.unknown1_0_;
}
