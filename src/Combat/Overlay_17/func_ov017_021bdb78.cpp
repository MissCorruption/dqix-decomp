#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" int func_ov017_0218fcf8(int arg0, int arg1, int arg2);

// USA: func_ov017_021bdb78
extern "C" ARM void func_ov017_021bdb78(int arg0) {
	GameState* var0 = GameState::GetInstance();
	int var1 = ((int)GetGameResources());
	GameObject* var2 = var0->GetGameObjectByIndex(arg0);
	if (!var2) {
		return;
	}
	var2->obj3D_.unknown_9c_ = 0x40c8;
	func_ov017_0218fcf8(var1, 0, 0x40c8);
}
