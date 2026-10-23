#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov017_021b6d60(int arg0, void* arg1);
extern "C" void func_02086778(void* arg0, void* arg1, int arg2, int arg3);

// USA: func_ov017_021b6c2c
extern "C" ARM int func_ov017_021b6c2c(int arg0, int arg1) {
	char var0[0x23c];
	if (func_ov017_021b6d60(arg0, var0) == 0) {
		return -1;
	}
	GameState* var1 = GameState::GetInstance();
	void* var2 = func_02010828(var1);
	func_02086778(var2, var0, 0, arg1);
	int var3 = var0[0];
	var3 = (var3 << 26) >> 26;
	return var3;
}
