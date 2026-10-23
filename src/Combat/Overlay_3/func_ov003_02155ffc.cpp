#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" unsigned short func_0202053c(void* arg0);

// USA: func_ov003_02155ffc
extern "C" ARM int func_ov003_02155ffc(void* arg0, int arg1) {
	GameObject* var0 = GameState::GetInstance()->GetPartyMemberByIndex(arg1);
	int var1 = 0;
	if (var0 != NULL) {
		var1 = (func_0202053c(var0) != 0x63);
	}
	return var1;
}
