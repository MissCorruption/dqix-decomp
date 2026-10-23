#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" GameObject* func_ov017_021a278c(void* arg0, int arg1);

// USA: func_ov017_021c5a1c
extern "C" ARM int func_ov017_021c5a1c(int arg0) {
	if (arg0 < 0x8000)
		goto skip;
	if (arg0 <= 0x8004)
		return 1;
skip:
	if (arg0 < 1)
		return 0;
	if (arg0 > 0x7fff)
		return 0;
	GameState::GetInstance();
	void* var0 = GetGameResources();
	if (var0 == NULL)
		return 0;
	return func_ov017_021a278c(var0, arg0) != NULL;
}
