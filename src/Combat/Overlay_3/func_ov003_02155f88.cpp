#include <globaldefs.h>
#include "GameState/GameState.h"


// USA: func_ov003_02155f88
extern "C" ARM int func_ov003_02155f88(void* arg0, int arg1) {
	GameObject* var0 = GameState::GetInstance()->GetPartyMemberByIndex(arg1);
	int var1 = 1;
	if (var0 != NULL) {
		int* var2 = *(int**)((char*)var0 + 0x130);
		var1 = (*var2 & 4) != 0;
	}
	return var1;
}
