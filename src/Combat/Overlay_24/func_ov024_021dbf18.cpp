#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_ov024_021dbf18 {
	unsigned int unknown_0_0_ : 10;
	unsigned int unknown_1_2_ : 10;
	unsigned int unknown_2_4_ : 10;
	unsigned int unknown_3_6_ : 2;
};

struct Struct_ov024_021dbf18_2 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021dbf18_3 { char unknown_0_[0x1c]; struct Struct_ov024_021dbf18_2 unknown_1c_; };
struct Struct_ov024_021dbf18_4 { char unknown_0_[0xc]; struct Struct_ov024_021dbf18_3* unknown_c_; void* unknown_10_; int unknown_14_; };
struct Struct_ov024_021dbf18_5 { char unknown_0_[0x20]; struct Struct_ov024_021dbf18 unknown_20_; struct Struct_ov024_021dbf18 unknown_24_; };
struct Struct_ov024_021dbf18_6 { char unknown_0_[0x3b]; unsigned char unknown_3b_0_ : 1; unsigned char unknown_3b_1_ : 7; };

extern "C" unsigned long long func_ov024_021e4b14(struct Struct_ov024_021dbf18_4* arg0, int arg1, int arg2, struct Struct_ov024_021dbf18_5* arg3, int arg4);
extern "C" int func_020882f8(unsigned char* arg0);
extern "C" void func_02088390(void* arg0);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);
extern "C" int func_ov000_02159f18(void* arg0, unsigned long long arg1, int arg2);
extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, unsigned long long arg4, int arg5);

// USA: func_ov024_021dbf18
extern "C" ARM void* func_ov024_021dbf18(struct Struct_ov024_021dbf18_4* arg0, int arg1, int arg2, struct Struct_ov024_021dbf18_5* arg3, int arg4, int arg5, unsigned char arg6) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	int var1 = 0;
	int var2 = 0;
	unsigned long long var3 = 0;
	if (arg6) {
		var3 = func_ov024_021e4b14(arg0, arg1, arg2, arg3, 1);
		if (func_020882f8((unsigned char*)var0->currentStats_)) {
			var1 = 0x40;
			func_02088390(var0->currentStats_);
			if (var3 == 0) {
				func_ov000_02159eac(arg0->unknown_10_, &var3, 0x10);
			}
			((struct Struct_ov024_021dbf18_6*)var0->currentStats_)->unknown_3b_0_ = 1;
			var2 = 1;
			arg0->unknown_14_++;
		}
	}
	if (func_ov000_02159f18(arg0->unknown_10_, var3, 0x19)) {
		if (!var2) {
			arg0->unknown_14_++;
			var2 = 1;
		}
		var1 = 0x173;
	}
	if (!var2) {
		var1 = func_ov024_021da644(arg2, arg3->unknown_24_.unknown_1_2_, arg3->unknown_24_.unknown_2_4_);
	}
	void* var4 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var4) return 0;
	func_ov000_0215a88c(arg0->unknown_10_, var4, var1);
	func_ov000_0215cd44(arg0->unknown_10_, var4, var0, 0, var3, arg0->unknown_c_->unknown_1c_.unknown_0_7_ != 0);
	return var4;
}
