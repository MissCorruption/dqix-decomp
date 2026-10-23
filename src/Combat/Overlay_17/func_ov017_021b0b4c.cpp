#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "Resource/Brightness.h"

extern "C" void func_ov017_0218f5a4(void* arg0, int arg1, int arg2, int arg3, int arg4);

// USA: func_ov017_021b0b4c
extern "C" ARM int func_ov017_021b0b4c(void*) {
	GameState* var0 = GameState::GetInstance();
	GameResources* var1 = GetGameResources();

	int var2;
	for (var2 = 0; var2 < 4; var2++) {
		GameObject* var3 = var0->GetGameObjectByIndex(var2);
		if (var3) {
			func_ov017_0218f5a4(var1, var2, 0, 0, 0);
		}
	}

	return TestFlags00((GameResources*)var1, 0x10) == 0 ? 1 : 0;
}
