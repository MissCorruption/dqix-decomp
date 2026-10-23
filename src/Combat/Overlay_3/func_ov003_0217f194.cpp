#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void func_ov003_0216d7ec(char* arg0);

// USA: func_ov003_0217f194
extern "C" ARM void func_ov003_0217f194(char* arg0) {
	GameState::GetInstance();
	GetGameResources();
	char* var0 = *(char**)(arg0 + 0xc);
	if (var0 != 0) func_ov003_0216d7ec(var0);
}
