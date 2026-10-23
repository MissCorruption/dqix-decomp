#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_ov024_021da670_7;
extern "C" int func_ov024_021da9b0(struct Struct_ov024_021da670_7* arg0);
extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);
extern "C" void func_020882dc(void* arg0);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, unsigned long long arg4, int arg5);

struct Struct_ov024_021dd6f0 {
	unsigned int unknown_0_0_ : 10;
	unsigned int unknown_1_2_ : 10;
	unsigned int unknown_2_4_ : 10;
	unsigned int unknown_3_6_ : 2;
};

struct Struct_ov024_021dd6f0_2 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021dd6f0_3 { unsigned char unknown_0_0_ : 1; unsigned char unknown_0_1_ : 7; };
struct Struct_ov024_021dd6f0_4 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; int unknown_14_; };
struct Struct_ov024_021dd6f0_5 { char unknown_0_[0x20]; struct Struct_ov024_021dd6f0 unknown_20_; struct Struct_ov024_021dd6f0 unknown_24_; };

// USA: func_ov024_021dd6f0
extern "C" ARM void* func_ov024_021dd6f0(struct Struct_ov024_021dd6f0_4* arg0, int arg1, int arg2, struct Struct_ov024_021dd6f0_5* arg3, int arg4, int arg5, unsigned char arg6) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var1;
	var1.unknown_0_ = 0;
	var1.unknown_4_ = 0;
	unsigned short var2;
	if (func_ov024_021da9b0((struct Struct_ov024_021da670_7*)var0) && arg6 != 0) {
		var2 = func_ov024_021da644(arg2, arg3->unknown_20_.unknown_2_4_, arg3->unknown_24_.unknown_0_0_);
		func_020882dc((void*)var0->currentStats_);
		func_ov000_02159eac(arg0->unknown_10_, &var1, 0x1a);
		((struct Struct_ov024_021dd6f0_3*)((char*)var0->currentStats_ + 0x3b))->unknown_0_0_ = 1;
		arg0->unknown_14_++;
	} else {
		var2 = func_ov024_021da644(arg2, arg3->unknown_24_.unknown_1_2_, arg3->unknown_24_.unknown_2_4_);
	}
	void* var3 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var3) return 0;
	func_ov000_0215a88c(arg0->unknown_10_, var3, var2);
	struct Struct_ov024_021dd6f0_2* var4 = (struct Struct_ov024_021dd6f0_2*)((char*)arg0->unknown_c_ + 0x1c);
	func_ov000_0215cd44(arg0->unknown_10_, var3, var0, 0, var1.unknown1_0_, var4->unknown_0_7_ != 0);
	return var3;
}
