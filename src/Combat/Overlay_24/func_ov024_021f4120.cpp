#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);

// USA: func_ov024_021f4120
extern "C" ARM int func_ov024_021f4120(int* arg0, short arg1, int arg2, int* arg3, short* arg4) {
	GameObject* var0 = func_ov000_021536f8(*arg0, arg1);
	if (!var0) return 0;
	unsigned short var1 = var0->currentStats_->primaryStats.charm;
	if (var1 >= 2) {
		return 0;
	} else {
		*arg3 = 1;
		*arg4 = arg1;
		return 1;
	}
}
