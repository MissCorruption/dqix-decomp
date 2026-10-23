#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov017_02191fec(void* arg0, int arg1);
extern "C" void func_ov017_0218f80c(void* arg0, int arg1);

// USA: func_ov017_0218f79c
extern "C" ARM void func_ov017_0218f79c(void* arg0) {
	GameState* var0 = GameState::GetInstance();
	int var1;
	for (var1 = 0; var1 < 4; var1++) {
		if (var0->GetGameObjectByIndex(var1) != NULL) {
			int var2 = func_ov017_02191fec(arg0, var1) ? 1 : 0;
			if (var2) {
				func_ov017_0218f80c(arg0, var1);
			}
		}
	}
}
