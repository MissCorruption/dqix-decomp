#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"
#include "Util/Random.h"

struct Struct_ov024_021e43e0 { char unknown_0_[0x10]; void* unknown_10_; };
struct Struct_ov024_021e43e0_2 {
	char unknown_0_[0x14];
	unsigned int unknown_14_0_ : 7;
	unsigned int unknown_14_7_ : 7;
	unsigned int unknown_15_6_ : 18;
	char unknown_18_[0x32 - 0x18];
	short unknown_32_;
};
struct Struct_ov024_021e43e0_3 {
	char unknown_0_[0x14];
	int unknown_14_;
	char unknown_18_[0x22 - 0x18];
	unsigned short unknown_22_0_ : 6;
	unsigned short unknown_22_6_ : 3;
	unsigned short unknown_23_1_ : 7;
	char unknown_24_[0x46 - 0x24];
	unsigned char unknown_46_;
};

extern "C" int func_02088840(unsigned char* arg0);
extern "C" int func_ov024_021e9198(struct Struct_ov024_021e43e0* arg0, int arg1, short arg2, int arg3);
extern "C" int func_ov024_021eb4b0(int arg0, int arg1, int arg2);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);
extern "C" void func_02088854(unsigned char* arg0);
struct Struct_ov024_021e2bd0;
extern "C" void* func_ov024_021e8ca0(struct Struct_ov024_021e2bd0* arg0, int arg1);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

static inline int inline_ov000_02169850(int arg0) {
	return arg0 >= 0 && arg0 <= 3;
}

// USA: func_ov024_021e43e0
extern "C" ARM unsigned long long func_ov024_021e43e0(struct Struct_ov024_021e43e0* arg0, int arg1, int arg2, struct Struct_ov024_021e43e0_2* arg3, int arg4) {
	if (arg4 <= 0) return 0;
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	int var1 = NextRandomMax((struct Random*)arg0->unknown_10_, 100);
	float var2;
	if (inline_ov000_02169850(arg1)) {
		var2 = arg3->unknown_14_7_;
	} else {
		var2 = arg3->unknown_14_0_;
	}
	struct Struct_ov024_021e43e0_3* var3 = (struct Struct_ov024_021e43e0_3*)var0->currentStats_;
	float var4 = var2 * (var3->unknown_46_ / 100.0f);
	int var5 = 0;
	union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var6;
	var6.unknown_0_ = 0;
	var6.unknown_4_ = 0;
	int var7 = arg3->unknown_32_;
	if (func_02088840((unsigned char*)var0->currentStats_) && var1 < var4) {
		var5 = func_ov024_021e9198(arg0, arg2, var7, 1);
		if (!var5) var5 = 0xf5;
		if (func_ov024_021eb4b0((int)arg0, ((struct Struct_ov024_021e43e0_3*)var0->currentStats_)->unknown_14_, 0x40)) {
			func_ov000_02159eac(arg0->unknown_10_, &var6, 0x2b);
		}
		func_02088854((unsigned char*)var0->currentStats_);
		((struct Struct_ov024_021e43e0_3*)var0->currentStats_)->unknown_22_6_ = (unsigned char)var7;
	}
	void* var8 = func_ov024_021e8ca0((struct Struct_ov024_021e2bd0*)arg0, var5);
	if (var8) {
		func_ov000_0215cd44(arg0->unknown_10_, var8, var0, 0, 0, 0, 0);
	}
	return 0;
}
