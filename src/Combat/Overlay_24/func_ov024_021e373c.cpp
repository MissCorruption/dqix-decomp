#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_ov024_021da670_6;
extern "C" int func_ov024_021da998(struct Struct_ov024_021da670_6* arg0);
struct Struct_ov024_021dd028_5;
extern "C" int func_ov024_021dd260(struct Struct_ov024_021dd028_5* arg0);
extern "C" void func_02087704(void* arg0);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);
struct Struct_ov024_021e2bd0;
extern "C" void* func_ov024_021e8ca0(struct Struct_ov024_021e2bd0* arg0, int arg1);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, unsigned long long arg4, int arg5);

struct Struct_ov024_021e373c { char unknown_0_[0x10]; void* unknown_10_; };

// USA: func_ov024_021e373c
extern "C" ARM unsigned long long func_ov024_021e373c(struct Struct_ov024_021e373c* arg0, int arg1, int arg2, int arg3, int arg4) {
	if (arg4 <= 0) return 0;
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	if (!func_ov024_021da998((struct Struct_ov024_021da670_6*)var0) && !func_ov024_021dd260((struct Struct_ov024_021dd028_5*)var0)) return 0;
	func_02087704(var0->currentStats_);
	int var1 = 0;
	int var2 = ((unsigned char*)var0->currentStats_)[0x24];
	switch (var2) {
	case 0: var1 = 0x17f; break;
	case 1: var1 = 0x180; break;
	case 2: var1 = 0x181; break;
	case 3: var1 = 0x259; break;
	}
	union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var3;
	var3.unknown_0_ = 0;
	var3.unknown_4_ = 0;
	func_ov000_02159eac(arg0->unknown_10_, &var3, 0x1d);
	if (var2 == 3) {
		func_ov000_02159eac(arg0->unknown_10_, &var3, 8);
	}
	void* var4 = func_ov024_021e8ca0((struct Struct_ov024_021e2bd0*)arg0, var1);
	if (var4) {
		func_ov000_0215cd44(arg0->unknown_10_, var4, var0, 0, var3.unknown1_0_, 0);
	}
	return var3.unknown1_0_;
}
