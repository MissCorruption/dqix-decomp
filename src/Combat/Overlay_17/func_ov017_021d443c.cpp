#include <globaldefs.h>
#include "GameState/GameState.h"


struct Struct_02039d84;
extern "C" void func_02039d84(struct Struct_02039d84* arg0);

// USA: func_ov017_021d443c
extern "C" ARM void func_ov017_021d443c(int arg0, signed char* arg1, GameState* arg2) {
	int var0 = arg0;
	signed char var1 = arg1[4];
	if (var1 != -1) {
		var0 = var1;
	}
	GameObject* var2 = arg2->GetPartyMemberByIndex(var0);
	if (var2) {
		func_02039d84((struct Struct_02039d84*)var2);
	}
}
