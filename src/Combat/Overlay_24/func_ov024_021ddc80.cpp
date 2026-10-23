#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int func_0208824c(unsigned char* arg0);
extern "C" void func_0208826c(unsigned char* arg0);
struct Struct_ov024_021ddc80_4;
extern "C" int func_ov024_021e9464(struct Struct_ov024_021ddc80_4* arg0, int arg1, int arg2);
struct Struct_ov024_021da670_6;
extern "C" int func_ov024_021da998(struct Struct_ov024_021da670_6* arg0);
extern "C" int func_ov024_021eb4b0(int arg0, int arg1, int arg2);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);
struct Struct_ov024_021ddc80_5;
extern "C" void* func_ov024_021e8cfc(struct Struct_ov024_021ddc80_5* arg0, void* arg1, int arg2, int arg3);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov024_021e8bf0(void* arg0, void* arg1, unsigned short* arg2);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, unsigned long long arg4, int arg5);

struct Struct_ov024_021ddc80_6 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021ddc80 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; int unknown_14_; };
struct Struct_ov024_021ddc80_2 { int unknown_0_; unsigned int unknown_4_0_ : 12; unsigned int unknown_5_4_ : 20; };
struct Struct_ov024_021ddc80_3 { char unknown_0_[0x14]; int unknown_14_; };

// USA: func_ov024_021ddc80
extern "C" ARM void* func_ov024_021ddc80(struct Struct_ov024_021ddc80* arg0, int arg1, int arg2, struct Struct_ov024_021ddc80_2* arg3, int arg4, int arg5, unsigned char arg6) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	int var1 = 0;
	int var2 = func_0208824c((unsigned char*)var0->currentStats_);
	if (var2 != 0 && arg6 != 0) {
		var1 = 1;
	}
	unsigned short var3 = func_ov024_021e9464((struct Struct_ov024_021ddc80_4*)arg0, arg2, var1);
	if (arg3->unknown_4_0_ == 0x393) {
		var3 = 0;
	}
	int var4 = func_ov024_021da998((struct Struct_ov024_021da670_6*)var0);
	union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var5;
	var5.unknown_0_ = 0;
	var5.unknown_4_ = 0;
	if (var1) {
		if (func_ov024_021eb4b0((int)arg0, ((struct Struct_ov024_021ddc80_3*)var0->currentStats_)->unknown_14_, 8)) {
			func_ov000_02159eac(arg0->unknown_10_, &var5, 0x2b);
		}
		func_0208826c((unsigned char*)var0->currentStats_);
		func_ov000_02159eac(arg0->unknown_10_, &var5, 0x18);
		arg0->unknown_14_++;
		if (var4) {
			func_ov024_021e8cfc((struct Struct_ov024_021ddc80_5*)arg0, var0, 0, 0);
		}
	}
	void* var6 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var6) return 0;
	func_ov024_021e8bf0(arg0, arg0->unknown_c_, &var3);
	if (var3 != 0) {
		func_ov000_0215a88c(arg0->unknown_10_, var6, var3);
	}
	struct Struct_ov024_021ddc80_6* var7 = (struct Struct_ov024_021ddc80_6*)((char*)arg0->unknown_c_ + 0x1c);
	func_ov000_0215cd44(arg0->unknown_10_, var6, var0, 0, var5.unknown1_0_, var7->unknown_0_7_ != 0);
	return var6;
}
