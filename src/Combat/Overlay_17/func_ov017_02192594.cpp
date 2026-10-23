#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02053f7c_3;
extern "C" void func_02053f7c(Struct_02053f7c_3* arg0, unsigned short arg1, int arg2);

// USA: func_ov017_02192594
extern "C" ARM void func_ov017_02192594(unsigned char* arg0) {
	GameState* var0 = GameState::GetInstance();
	int var1;
	for (var1 = 0; var1 < 4; var1++) {
		GameObject* var2 = var0->GetPartyMemberByIndex(var1);
		if (var2) {
			func_02053f7c((struct Struct_02053f7c_3*)var2, 0, 1);
		}
	}
}
