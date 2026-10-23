#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_ov024_021da670_7;
extern "C" int func_ov024_021da9b0(struct Struct_ov024_021da670_7* arg0);
extern "C" void func_020882dc(void* arg0);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);
struct Struct_ov024_021e2bd0;
extern "C" void* func_ov024_021e8ca0(struct Struct_ov024_021e2bd0* arg0, int arg1);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov024_021e32f4 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; };
struct Struct_ov024_021e32f4_2 { unsigned char unknown_0_0_ : 1; unsigned char unknown_0_1_ : 7; };

// USA: func_ov024_021e32f4
extern "C" ARM unsigned long long func_ov024_021e32f4(struct Struct_ov024_021e32f4* arg0, int arg1, int arg2) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var1;
	var1.unknown_0_ = 0;
	var1.unknown_4_ = 0;
	if (func_ov024_021da9b0((struct Struct_ov024_021da670_7*)var0)) {
		func_020882dc((void*)var0->currentStats_);
		func_ov000_02159eac(arg0->unknown_10_, &var1, 0x1a);
		((struct Struct_ov024_021e32f4_2*)((char*)var0->currentStats_ + 0x3b))->unknown_0_0_ = 1;
		void* var2 = func_ov024_021e8ca0((struct Struct_ov024_021e2bd0*)arg0, 0x1f9);
		if (var2) {
			func_ov000_0215cd44(arg0->unknown_10_, var2, var0, 0, 0, 0, 0);
		}
	}
	return var1.unknown1_0_;
}
