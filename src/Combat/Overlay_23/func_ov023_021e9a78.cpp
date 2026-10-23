#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_ov017_021d6134(void* arg0, int arg1);

// USA: func_ov023_021e9a78
extern "C" ARM int func_ov023_021e9a78(void* arg0) {
	GameState* var0 = GameState::GetInstance();
	void* var1 = func_02010828(var0);
	int var2 = *(int*)((char*)var1 + 0xf68);
	func_ov017_021d6134(arg0, var2);
	return 1;
}
