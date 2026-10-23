#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" void func_ov024_021ea85c(void* arg0, int arg1, int arg2);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);
struct Struct_ov024_021e2bd0;
extern "C" void* func_ov024_021e8ca0(struct Struct_ov024_021e2bd0* arg0, int arg1);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, unsigned long long arg4, int arg5);

struct Struct_ov024_021e3cec { char unknown_0_[0x10]; void* unknown_10_; };

// USA: func_ov024_021e3cec
extern "C" ARM unsigned long long func_ov024_021e3cec(struct Struct_ov024_021e3cec* arg0, int arg1, int arg2) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	func_ov024_021ea85c(arg0, arg2, 1);
	union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var1;
	var1.unknown_0_ = 0;
	var1.unknown_4_ = 0;
	func_ov000_02159eac(arg0->unknown_10_, &var1, 0x28);
	void* var2 = func_ov024_021e8ca0((struct Struct_ov024_021e2bd0*)arg0, 0);
	if (var2) {
		func_ov000_0215cd44(arg0->unknown_10_, var2, var0, 0, var1.unknown1_0_, 0);
	}
	return 0;
}
