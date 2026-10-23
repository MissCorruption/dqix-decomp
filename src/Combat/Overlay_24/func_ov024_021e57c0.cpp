#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
// USA: func_ov024_021e57c0
extern "C" ARM void func_ov024_021e57c0(int* arg0, int arg1) {
	GameObject* var0 = GetCombatantByID(arg0[4], arg1);
	if (var0 != NULL) {
		*((char*)var0->currentStats_ + 0x21) = 1;
	}
}
