#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_02087a48;
struct Struct_02087a9c;
extern "C" int func_02087a48(struct Struct_02087a48* arg0, int arg1);
extern "C" int func_02087a9c(struct Struct_02087a9c* arg0, int arg1);
void UpdateCombatantCharm(int unused, int combatantId);
extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov024_021e8bf0(void* arg0, void* arg1, unsigned short* arg2);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov024_021e0380_2 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};
struct Struct_ov024_021e0380_3 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021e0380_4 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; };
struct Struct_ov024_021e0380 { char unknown_0_[0x24]; struct Struct_ov024_021e0380_2 unknown_24_; char unknown_28_[0x8]; short unknown_30_; };

// USA: func_ov024_021e0380
extern "C" ARM void* func_ov024_021e0380(struct Struct_ov024_021e0380_4* arg0, int arg1, int arg2, struct Struct_ov024_021e0380* arg3, int arg4, int arg5, unsigned char arg6) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	int var1 = 0;
	int var2 = 0;
	if (arg6 != 0) {
		int var3 = arg3->unknown_30_;
		if (var3 < -2) var3 = -2;
		if (var3 > 2) var3 = 2;
		int var4 = 0;
		if (var3 < 0) var4 = 1;
		if (func_02087a48((struct Struct_02087a48*)var0->currentStats_, (unsigned char)var4)) {
			var2 = func_02087a9c((struct Struct_02087a9c*)var0->currentStats_, (signed char)var3);
			UpdateCombatantCharm((int)arg0->unknown_10_, arg2);
			var1 = 1;
		}
	}
	unsigned short var5 = 0;
	if (var1) {
		if (arg3->unknown_30_ > 0 && var2 == 2) var5 = 0xf7;
	} else {
		var5 = func_ov024_021da644(arg2, arg3->unknown_24_.unknown_1_2_, arg3->unknown_24_.unknown_2_4_);
	}
	void* var6 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var6) return 0;
	func_ov024_021e8bf0(arg0, arg0->unknown_c_, &var5);
	func_ov000_0215a88c(arg0->unknown_10_, var6, var5);
	struct Struct_ov024_021e0380_3* var7 = (struct Struct_ov024_021e0380_3*)((char*)arg0->unknown_c_ + 0x1c);
	func_ov000_0215cd44(arg0->unknown_10_, var6, var0, 0, 0, 0, var7->unknown_0_7_ != 0);
	return var6;
}
