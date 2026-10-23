#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200ff94(GameState* arg0, int arg1);

// USA: func_ov003_02160b84
extern "C" ARM int func_ov003_02160b84(void*) {
	GameState* var0 = GameState::GetInstance();
	int var1 = 0;
	int var2;
	for (var2 = 0; var2 < 4; var2++) {
		if (func_0200ff94(var0, var2) != 0) var1++;
	}
	return var1 - *((unsigned char*)func_02010828(GameState::GetInstance()) + 0xf7c);
}
