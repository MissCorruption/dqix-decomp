#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"

extern "C" int func_02089160(unsigned char* arg0);
extern "C" void func_02089174(unsigned char* arg0);
extern "C" int func_ov000_0215e958(int arg0);

struct Struct_ov024_021e5e80 { char unknown_0_[0x10]; int unknown_10_; };

// USA: func_ov024_021e5e80
extern "C" ARM void func_ov024_021e5e80(struct Struct_ov024_021e5e80* arg0, int arg1) {
	GameObject* var0 = GetCombatantByID(arg0->unknown_10_, arg1);
	if (!var0) return;
	if (!func_02089160((unsigned char*)var0->currentStats_)) return;
	if (!func_ov000_0215e958(arg0->unknown_10_)) return;
	func_02089174((unsigned char*)var0->currentStats_);
}
