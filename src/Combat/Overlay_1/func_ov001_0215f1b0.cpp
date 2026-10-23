#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" int func_ov017_021d60f4(void*);

// USA: func_ov001_0215f1b0
extern "C" ARM int func_ov001_0215f1b0(void* arg0) {
	GameState::GetInstance();
	GameResources* var0 = GetGameResources();
	int var1 = func_ov017_021d60f4(arg0);
	int var2 = func_ov017_021d60f4((char*)arg0 + 0x8);
	if (var2 != 0) {
		SetFlags04(var0, var1);
	} else {
		ClearFlags04(var0, var1);
	}
	return 1;
}
