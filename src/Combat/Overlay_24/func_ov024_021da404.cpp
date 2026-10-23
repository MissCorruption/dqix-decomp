#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02053c6c(unsigned char* arg0);

struct Struct_ov024_021da404 { unsigned int unknown_0_; unsigned int unknown_4_0_ : 10; };

// USA: func_ov024_021da404
extern "C" ARM int func_ov024_021da404(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
	int var0 = (unsigned int)arg1 <= 3;
	if (!var0) {
		return arg5;
	}
	GameState* var1 = GameState::GetInstance();
	GameObject* var2 = func_0200ff1c(var1, arg1);
	if (!var2) {
		return arg5;
	}
	struct Struct_ov024_021da404* var3 = (struct Struct_ov024_021da404*)func_02053c6c((unsigned char*)var2);
	if (var3) {
		unsigned int var4 = var3->unknown_4_0_;
		int var5 = (int)((float)var4 * 0.25f);
		arg5 = var5 + arg5 / 2;
	}
	return arg5;
}
