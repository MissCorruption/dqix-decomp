#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" int _s32_div_f(int a, int b);

// USA: func_ov017_021920dc
#pragma optimize_for_size off
extern "C" ARM int func_ov017_021920dc(int arg0, int arg1) {
	GameState* var0 = GameState::GetInstance();
	int var1 = 0;
	int var2 = -1;
	int var3 = (arg1 >= 0 && arg1 <= 3);
	if (var3) {
		var2 = arg1;
	} else if (arg1 >= 0x13 && arg1 <= 0x67) {
		var2 = _s32_div_f(arg1 - 0x13, 0xc);
	}

	if (var2 >= 0) {
		GameObject* var4 = func_0200ff1c(var0, var2);
		if (var4 != NULL) {
			int var5 = func_02053c6c((unsigned char*)var4);
			GameObject* var6 = var0->GetCombatantByIndex(var2);
			if (var5 != 0 && *((unsigned char*)var5 + 0x56c) != 0) {
				goto setResult;
			}
			if (var6 != NULL && (*(unsigned int*)var6->currentStats_->unk1 & 0x8000000) != 0) {
				goto setResult;
			}
			goto done;
setResult:
			var1 = 1;
done:
			;
		}
	}
	return var1;
}
