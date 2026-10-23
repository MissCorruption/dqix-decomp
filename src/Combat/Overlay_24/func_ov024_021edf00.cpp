#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);

struct Struct_ov024_021e05e4 { char unknown_0_[0x18]; int unknown_18_; };
struct Struct_ov024_021e04e0 { char unknown_0_[0x138]; struct Struct_ov024_021e05e4* unknown_138_; };
extern "C" int func_ov024_021e05e4(struct Struct_ov024_021e04e0* arg0);

struct Struct_02010088_2 { char unknown_0_[0x14]; int unknown_14_; };
struct Struct_02010088 { char unknown_0_[0x138]; struct Struct_02010088_2* unknown_138_; };
extern "C" int func_02010088(struct Struct_02010088* arg0);

// USA: func_ov024_021edf00
extern "C" ARM int func_ov024_021edf00(int* arg0, int arg1, short* arg2) {
	GameObject* var0 = (GameObject*)func_ov000_021536f8(*arg0, arg1);
	if (!var0) return 0;
	if (!func_ov024_021e05e4((struct Struct_ov024_021e04e0*)var0)) return 0;
	short var1 = *(short*)((char*)var0->currentStats_ + 0x2e);
	GameObject* var2 = GetCombatantByID(*arg0, var1);
	if (!var2) goto fail;
	if (!func_02010088((struct Struct_02010088*)var2)) {
		*arg2 = *(short*)((char*)var0->currentStats_ + 0x2e);
		return 1;
	}
fail:
	return 0;
}
