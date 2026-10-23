#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int func_02088980(unsigned char* arg0);
extern "C" void func_02088994(unsigned char* arg0);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);
extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
struct Struct_ov024_021e093c { int unknown_0_; int unknown_4_; };
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, struct Struct_ov024_021e093c arg4, int arg5);

struct Struct_ov024_021e093c_2 {
	unsigned int unknown_0_0_ : 10;
	unsigned int unknown_1_2_ : 10;
	unsigned int unknown_2_4_ : 10;
	unsigned int unknown_3_6_ : 2;
};

struct Struct_ov024_021e093c_3 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021e093c_4 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; };
struct Struct_ov024_021e093c_5 { char unknown_0_[0x20]; struct Struct_ov024_021e093c_2 unknown_20_; struct Struct_ov024_021e093c_2 unknown_24_; };

// USA: func_ov024_021e093c
extern "C" ARM void* func_ov024_021e093c(struct Struct_ov024_021e093c_4* arg0, int arg1, int arg2, struct Struct_ov024_021e093c_5* arg3, int arg4, int arg5, unsigned char arg6) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	struct Struct_ov024_021e093c var1;
	var1.unknown_0_ = 0;
	var1.unknown_4_ = 0;
	int var2 = func_02088980((unsigned char*)var0->currentStats_);
	unsigned short var3;
	if (var2 != 0 && arg6 != 0) {
		func_02088994((unsigned char*)var0->currentStats_);
		func_ov000_02159eac(arg0->unknown_10_, &var1, 0x2c);
		var3 = func_ov024_021da644(arg2, arg3->unknown_20_.unknown_2_4_, arg3->unknown_24_.unknown_0_0_);
	} else {
		var3 = func_ov024_021da644(arg2, arg3->unknown_24_.unknown_1_2_, arg3->unknown_24_.unknown_2_4_);
	}
	void* var4 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var4) return 0;
	func_ov000_0215a88c(arg0->unknown_10_, var4, var3);
	struct Struct_ov024_021e093c_3* var5 = (struct Struct_ov024_021e093c_3*)((char*)arg0->unknown_c_ + 0x1c);
	func_ov000_0215cd44(arg0->unknown_10_, var4, var0, 0, var1, var5->unknown_0_7_ != 0);
	return var4;
}
