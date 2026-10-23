#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int func_02088540(unsigned char* arg0);
struct Struct_020885e0;
extern "C" int func_020885e0(struct Struct_020885e0* arg0);
struct Struct_ov024_021dbaf4_4;
extern "C" int func_ov024_021e939c(struct Struct_ov024_021dbaf4_4* arg0, int arg1, int arg2, int arg3);
extern "C" int func_ov024_021eb4b0(int arg0, int arg1, int arg2);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);
extern "C" void func_02088560(unsigned char* arg0);
struct Struct_02088624;
extern "C" void func_02088624(struct Struct_02088624* arg0);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov024_021e8bf0(void* arg0, void* arg1, unsigned short* arg2);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, unsigned long long arg4, int arg5);

struct Struct_ov024_021dbaf4_5 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021dbaf4 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; };
struct Struct_ov024_021dbaf4_2 { char unknown_0_[0x30]; short unknown_30_; };
struct Struct_ov024_021dbaf4_3 { char unknown_0_[0x14]; int unknown_14_; };

// USA: func_ov024_021dbaf4
extern "C" ARM void* func_ov024_021dbaf4(struct Struct_ov024_021dbaf4* arg0, int arg1, int arg2, struct Struct_ov024_021dbaf4_2* arg3, int arg4, int arg5, unsigned char arg6) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	int var1 = 0;
	int var2 = var1;
	if (arg3->unknown_30_ > 0) {
		if (func_02088540((unsigned char*)var0->currentStats_) && arg6) {
			var1 = 1;
			var2 = var1;
		}
	} else {
		if (func_020885e0((struct Struct_020885e0*)var0->currentStats_) && arg6) {
			var1 = 1;
		}
	}
	unsigned short var3 = func_ov024_021e939c((struct Struct_ov024_021dbaf4_4*)arg0, arg2, var2, var1);
	union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var4;
	var4.unknown_0_ = 0;
	var4.unknown_4_ = 0;
	if (var1) {
		if (func_ov024_021eb4b0((int)arg0, ((struct Struct_ov024_021dbaf4_3*)var0->currentStats_)->unknown_14_, 2)) {
			func_ov000_02159eac(arg0->unknown_10_, &var4, 0x2b);
		}
		if (var2) {
			func_02088560((unsigned char*)var0->currentStats_);
		} else {
			func_02088624((struct Struct_02088624*)var0->currentStats_);
		}
		func_ov000_02159eac(arg0->unknown_10_, &var4, 0xf);
	}
	void* var5 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var5) return 0;
	func_ov024_021e8bf0(arg0, arg0->unknown_c_, &var3);
	func_ov000_0215a88c(arg0->unknown_10_, var5, var3);
	struct Struct_ov024_021dbaf4_5* var6 = (struct Struct_ov024_021dbaf4_5*)((char*)arg0->unknown_c_ + 0x1c);
	func_ov000_0215cd44(arg0->unknown_10_, var5, var0, 0, var4.unknown1_0_, var6->unknown_0_7_ != 0);
	return var5;
}
