#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"

struct Struct_0202df68;
extern "C" void func_0202e9a4(struct Struct_0202df68* arg0, int arg1);
extern "C" int func_ov017_021d60f4(void*);
extern "C" float func_ov017_021d6110(void*);

struct Struct_ov001_0215f968 { int unknown_0_; };

// USA: func_ov001_0215f968
extern "C" ARM int func_ov001_0215f968(Struct_ov001_0215f968* arg0) {
	GameState* var0 = GameState::GetInstance();
	struct Struct_0202df68* var1 = (struct Struct_0202df68*)func_020100bc(var0);
	if (arg0->unknown_0_ == 0) {
		int var2 = func_ov017_021d60f4(arg0);
		func_0202e9a4(var1, var2 << 0xc);
	} else if (arg0->unknown_0_ == 1) {
		float var3 = func_ov017_021d6110(arg0);
		int var4 = (int)(4096.0f * var3);
		func_0202e9a4(var1, var4);
	}
	return 1;
}
