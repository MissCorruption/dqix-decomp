#if defined(jpn)
enum { Enum_ov017_02191bdc_14092 = 0x34fc, Enum_ov017_02191bdc_156 = 0x1ec, Enum_ov017_02191bdc_17408 = 0x4000 };
#else
enum { Enum_ov017_02191bdc_14092 = 0x370c, Enum_ov017_02191bdc_156 = 0x9c, Enum_ov017_02191bdc_17408 = 0x4400 };
#endif

#include <globaldefs.h>
#include "Combat/CombatantRecovery.h"
#include "GameState/GameState.h"

extern "C" void* func_0200fd0c(GameState* arg0);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);

extern "C" void func_ov017_021c9e00(int arg0, int arg1, int arg2, int arg3);

// USA: func_ov017_02191bdc
extern "C" ARM void func_ov017_02191bdc(unsigned char* arg0, int arg1) {
	GameState* var0 = GameState::GetInstance();
	GameObject* var1 = var0->GetUnknownGameObject();
	if (!var1) return;
	if (*(short*)((char*)var1 + 0xac) != 0) return;
	if (var1->obj3D_.GetFlag(0x8000000) != 0) return;
	if (arg1 == 0) {
		unsigned char* var2 = (unsigned char*)func_0200fd0c(var0);
		unsigned char* var3 = *(unsigned char**)(arg0 + Enum_ov017_02191bdc_14092);
		if (var3[2] != 0) return;
		if (var2[2] != 0) return;
	}
	unsigned char* var4 = arg0 + Enum_ov017_02191bdc_156 + Enum_ov017_02191bdc_17408;
	for (int var5 = 0; var5 < 4; var4 += 4, var5++) {
		if (var4[0] == 0) continue;
		GameObject* var6 = func_0200ff1c(var0, var5);
		if (var6 != NULL) {
			func_02053fe4(var6, *(short*)(var4 + 2), 1);
			func_ov017_021c9e00(var5, 1, 0, 1);
		}
		var4[0] = 0;
		*(short*)(var4 + 2) = 0;
	}
}
