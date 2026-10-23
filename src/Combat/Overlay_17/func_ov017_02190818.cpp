#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov017_02190818
extern "C" ARM int func_ov017_02190818(int arg0) {
	GameState* var0 = GameState::GetInstance();
	if (var0->GetPartyMemberByIndex(arg0) == NULL)
		goto zero;
	{
	GameObject* var1 = var0->GetGameObjectByIndex(arg0 * 0xc + 0x14);
	if (var1 == NULL)
		goto zero;
	{
	short var2 = var1->obj3D_.unknown_2_;
	if (var2 != 0x2347) {
		if (var2 != 0x2348) {
			if (var2 != 0x2349) {
				goto zero;
			}
		}
	}
	return 1;
	}
	}
zero:
	return 0;
}
