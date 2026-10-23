#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"

extern "C" int func_0202e09c(int obj);
extern "C" void func_ov000_0216d50c(void* work);
extern "C" void func_0202e0a4(int val);

// USA: func_ov017_021959ec
extern "C" ARM void func_ov017_021959ec(void*) {
	GameState* bs = GameState::GetInstance();
	void* val = func_020100bc(bs);
	if (val == 0) return;
	if (func_0202e09c((int)val) & 8) {
		func_ov000_0216d50c(val);
	} else {
		func_0202e0a4((int)val);
	}
}
