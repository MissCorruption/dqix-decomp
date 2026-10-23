#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_ov017_021a278c(void* arg0, int arg1);
extern "C" void func_02076a8c(void* arg0);

// USA: func_ov017_021a23b0
extern "C" ARM void func_ov017_021a23b0(void* arg0, int arg1) {
	GameState::GetInstance();
	GameObject* var0 = func_ov017_021a278c(arg0, arg1);
	if (!var0) return;
	func_02076a8c(var0);
	((Object3D*)((unsigned char*)var0))->MakeHidden();
}
