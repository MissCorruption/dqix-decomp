#include <globaldefs.h>
#include "GameState/GameState.h"


// USA: func_ov017_021a278c
extern "C" ARM GameObject* func_ov017_021a278c(void* arg0, int arg1) {
	if (arg1 <= 0) return NULL;
	GameState* var0 = GameState::GetInstance();
	for (int var1 = 0; var1 < 0x30; var1++) {
		GameObject* var2 = var0->GetMaybeFieldMonsterByIndex(var1 + 0x70);
		if (var2) {
			unsigned short var3 = *(unsigned short*)((char*)var2 + 0x100 + 0x6a);
			if (arg1 == var3) return var2;
		}
	}
	return NULL;
}
