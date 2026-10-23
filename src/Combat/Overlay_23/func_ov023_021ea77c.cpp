#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov023_021ea77c_2 { char unknown_0_[4]; unsigned short unknown_4_; };
struct Struct_ov023_021ea77c { char unknown_0_[0x130]; struct Struct_ov023_021ea77c_2* unknown_130_; };

extern "C" int func_020100a8(GameState* arg0);
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov023_021ea77c
extern "C" ARM int func_ov023_021ea77c(void *arg0) {
	GameState *var0 = GameState::GetInstance();
	int var1 = func_020100a8(var0);
	struct Struct_ov023_021ea77c *var2 = (struct Struct_ov023_021ea77c*)func_0200ff1c(var0, var1);
	int var3 = 0;
	if (var2) {
		int var4 = var2->unknown_130_->unknown_4_;
		var3 = var4 > 0;
	}
	if (var3) {
		func_ov017_021d6134(arg0, 1);
	} else {
		func_ov017_021d6134(arg0, 0);
	}
	return 1;
}
