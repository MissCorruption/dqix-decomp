#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int func_02088890(unsigned char* arg0);
struct Struct_ov024_021dced0_2;
extern "C" int func_ov024_021dd010(struct Struct_ov024_021dced0_2* arg0);
extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);
extern "C" void func_020888a4(unsigned char* arg0);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov024_021e8bf0(void* arg0, void* arg1, unsigned short* arg2);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov024_021dced0_3 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};
struct Struct_ov024_021dced0_4 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021dced0_5 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; char unknown_14_[0x75 - 0x14]; unsigned char unknown_75_; };
struct Struct_ov024_021dced0 { char unknown_0_[0x20]; struct Struct_ov024_021dced0_3 unknown_20_; struct Struct_ov024_021dced0_3 unknown_24_; };

// USA: func_ov024_021dced0
extern "C" ARM void* func_ov024_021dced0(struct Struct_ov024_021dced0_5* arg0, int arg1, int arg2, struct Struct_ov024_021dced0* arg3, int arg4, int arg5, unsigned char arg6) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	unsigned short var1 = 0;
	if (func_02088890((unsigned char*)var0->currentStats_) && arg6) {
		if (func_ov024_021dd010((struct Struct_ov024_021dced0_2*)var0)) {
			var1 = func_ov024_021da644(arg2, 0x19, 0x1a);
		} else {
			var1 = func_ov024_021da644(arg2, arg3->unknown_20_.unknown_2_4_, arg3->unknown_24_.unknown_0_0_);
		}
		func_020888a4((unsigned char*)var0->currentStats_);
	} else {
		var1 = func_ov024_021da644(arg2, arg3->unknown_24_.unknown_1_2_, arg3->unknown_24_.unknown_2_4_);
		arg0->unknown_75_ = 0;
	}
	void* var2 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var2) return 0;
	func_ov024_021e8bf0(arg0, arg0->unknown_c_, &var1);
	func_ov000_0215a88c(arg0->unknown_10_, var2, var1);
	struct Struct_ov024_021dced0_4* var3 = (struct Struct_ov024_021dced0_4*)((char*)arg0->unknown_c_ + 0x1c);
	func_ov000_0215cd44(arg0->unknown_10_, var2, var0, 0, 0, 0, var3->unknown_0_7_ != 0);
	return var2;
}
