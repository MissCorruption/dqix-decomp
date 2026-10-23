#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_02087c30;
extern "C" int func_02087c30(Struct_02087c30* arg0, unsigned char arg1);
struct Struct_02087c84;
extern "C" int func_02087c84(struct Struct_02087c84* arg0, int arg1);
void UpdateCombatantMagicalMending(int unused, int combatantId);
struct Struct_ov024_021dee84_4;
extern "C" unsigned short func_ov024_021e9990(Struct_ov024_021dee84_4* arg0, int arg1, int arg2, unsigned char arg3, signed char arg4);
extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov024_021e8bf0(void* arg0, void* arg1, unsigned short* arg2);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov024_021dee84_5 {
	unsigned int unknown_0_0_ : 10;
	unsigned int unknown_1_2_ : 10;
	unsigned int unknown_2_4_ : 10;
	unsigned int unknown_3_6_ : 2;
};
struct Struct_ov024_021dee84 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021dee84_2 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; int unknown_14_; };
struct Struct_ov024_021dee84_3 { char unknown_0_[0x24]; struct Struct_ov024_021dee84_5 unknown_24_; char unknown_28_[0x8]; short unknown_30_; };

// USA: func_ov024_021dee84
extern "C" ARM void* func_ov024_021dee84(struct Struct_ov024_021dee84_2* arg0, int arg1, int arg2, struct Struct_ov024_021dee84_3* arg3, int arg4, int arg5, unsigned char arg6) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	int var1 = 0;
	int var2 = var1;
	int var3 = var1;
	if (arg6) {
		int var4 = arg3->unknown_30_;
		if (var4 < -2) var4 = -2;
		if (var4 > 2) var4 = 2;
		if (var4 < 0) var3 = 1;
		if (func_02087c30((struct Struct_02087c30*)var0->currentStats_, var3)) {
			var2 = func_02087c84((struct Struct_02087c84*)var0->currentStats_, (signed char)var4);
			UpdateCombatantMagicalMending((int)arg0->unknown_10_, arg2);
			arg0->unknown_14_++;
			var1 = 1;
		}
	}
	unsigned short var5 = 0;
	if (var1) {
		var5 = func_ov024_021e9990((struct Struct_ov024_021dee84_4*)arg0, arg2, (int)arg3, (unsigned char)var3, var2);
	} else {
		var5 = func_ov024_021da644(arg2, arg3->unknown_24_.unknown_1_2_, arg3->unknown_24_.unknown_2_4_);
	}
	void* var6 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var6) return 0;
	func_ov024_021e8bf0(arg0, arg0->unknown_c_, &var5);
	func_ov000_0215a88c(arg0->unknown_10_, var6, var5);
	struct Struct_ov024_021dee84* var7 = (struct Struct_ov024_021dee84*)((char*)arg0->unknown_c_ + 0x1c);
	func_ov000_0215cd44(arg0->unknown_10_, var6, var0, 0, 0, 0, var7->unknown_0_7_ != 0);
	return var6;
}
