#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

int CallHelperIfCheckPasses_0218fcf8(int a, int b, int c);

// USA: func_ov017_021bdb78
ARM void SetFieldndDispatch_021bdb78_021bdb78(int id) {
	GameState* bs = GameState::GetInstance();
	int helper = ((int)GetGameResources());
	GameObject* combatant = bs->GetGameObjectByIndex(id);
	if (!combatant) {
		return;
	}
	combatant->obj3D_.unknown_9c_ = 0x40c8;
	CallHelperIfCheckPasses_0218fcf8(helper, 0, 0x40c8);
}
