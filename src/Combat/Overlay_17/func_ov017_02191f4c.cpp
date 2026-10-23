#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" void func_ov017_021bdb78(int arg0);
extern "C" void func_ov017_02191e5c(int arg0, int arg1, short arg2, unsigned char arg3, unsigned short arg4);

extern "C" void func_ov017_0218f80c(int arg0, int arg1);

// USA: func_ov017_02191f4c
extern "C" ARM void func_ov017_02191f4c(int arg0, int arg1) {
#if defined(jpn)
 enum {Enum_ov017_02191f4c_396=0x180};
#else
 enum {Enum_ov017_02191f4c_396=0x18c};
#endif
	GameState* var0 = GameState::GetInstance();
	GameObject* var1 = var0->GetCombatantByIndex(arg1);
	if (!var1) return;
	GameObject* var2 = func_0200ff1c(var0, arg1);
	if (var2 != NULL && (*(int*)((char*)var2 + Enum_ov017_02191f4c_396) & 0x40)) {
		func_ov017_021bdb78(arg1);
		return;
	}
	func_ov017_02191e5c(arg0, arg1, 0x1000, 0, 0);
	int var3 = (arg1 >= 0 && arg1 <= 3);
	if (var3) {
		func_ov017_0218f80c(arg0, arg1);
	}
}
