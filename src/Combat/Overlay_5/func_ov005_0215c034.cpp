#if defined(jpn)
#define func_ov005_02158e04 func_ov005_0215a36c
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"


extern "C" void func_ov005_02158e04(void *arg0, unsigned int arg1);

// USA: func_ov005_0215c034
extern "C" ARM void func_ov005_0215c034(void *arg0) {
	unsigned int var0 = GameState::GetInstance()->GetTickCount();
	if (var0 == 0) var0 = 1;
	func_ov005_02158e04(arg0, var0);
}
