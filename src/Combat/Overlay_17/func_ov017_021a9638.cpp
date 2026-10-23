#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020421a0();
extern "C" void func_0204359c(void* arg0, int arg1);
extern "C" void func_020439b0(int arg0, int arg1);

// USA: func_ov017_021a9638
extern "C" ARM void func_ov017_021a9638(void*) {
	GameState* var0 = GameState::GetInstance();
	int var1 = func_020421a0();
	unsigned int var2 = var0->GetTickCount();
	func_0204359c((void*)var1, var2);
	func_020439b0(var1, 0);
}
