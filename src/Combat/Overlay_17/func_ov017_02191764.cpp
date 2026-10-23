#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200ff58(GameState* arg0, int arg1);
extern "C" int func_020546a8(void* arg0);
extern "C" int func_020546bc(void* arg0);

#pragma optimize_for_size off
// USA: func_ov017_02191764
extern "C" ARM int func_ov017_02191764(int arg0, int arg1) {
	GameState* var0 = GameState::GetInstance();
	int var1 = 0;
	for (int var2 = 0; var2 < 4; var2++) {
		GameObject* var3 = func_0200ff58(var0, var2);
		if (!var3 || var2 == arg0) continue;
		if (arg1 != func_020546a8(var3)) continue;
		var1 |= 1 << func_020546bc(var3);
	}
	int var4 = 0;
	for (int var5 = 0; var5 < 4; ++var5) {
		if ((var1 & (1 << var5)) == 0) {
			var4 = var5;
			break;
		}
	}
	return var4;
}
