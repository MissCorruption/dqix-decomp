#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_ov024_021de124;
extern "C" int func_ov024_021de25c(struct Struct_ov024_021de124* arg0);
extern "C" void func_020883fc(void* arg0);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);

struct Struct_ov024_021e4588 { char unknown_0_[0x10]; void* unknown_10_; };
struct Struct_ov024_021e4588_2 { char unknown_0_[0x3b]; unsigned char unknown_3b_; };

// USA: func_ov024_021e4588
extern "C" ARM unsigned long long func_ov024_021e4588(struct Struct_ov024_021e4588* arg0, int arg1, int arg2) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var1;
	var1.unknown_0_ = 0;
	var1.unknown_4_ = 0;
	if (func_ov024_021de25c((struct Struct_ov024_021de124*)var0)) {
		func_020883fc(var0->currentStats_);
		struct Struct_ov024_021e4588_2* var2 = (struct Struct_ov024_021e4588_2*)var0->currentStats_;
		var2->unknown_3b_ = (var2->unknown_3b_ & ~1) | 1;
		func_ov000_02159eac(arg0->unknown_10_, &var1, 0x19);
	}
	return var1.unknown1_0_;
}
