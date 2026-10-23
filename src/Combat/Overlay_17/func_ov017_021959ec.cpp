#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"

extern "C" int func_0202e09c(int arg0);
extern "C" void func_ov000_0216d50c(void* arg0);
extern "C" void func_0202e0a4(int arg0);

// USA: func_ov017_021959ec
extern "C" ARM void func_ov017_021959ec(void*) {
	GameState* var0 = GameState::GetInstance();
	void* var1 = func_020100bc(var0);
	if (var1 == 0) return;
	if (func_0202e09c((int)var1) & 8) {
		func_ov000_0216d50c(var1);
	} else {
		func_0202e0a4((int)var1);
	}
}
