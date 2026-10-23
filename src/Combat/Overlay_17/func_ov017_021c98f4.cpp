#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02053f7c_3;
extern "C" void func_02053f7c(Struct_02053f7c_3* arg0, unsigned short arg1, int arg2);

// USA: func_ov017_021c98f4
extern "C" ARM void func_ov017_021c98f4(int arg0, int arg1) {
#if defined(jpn)
 enum {Enum_ov017_021c98f4_434=0x1a6};
#else
 enum {Enum_ov017_021c98f4_434=0x1b2};
#endif
	GameState* var0 = GameState::GetInstance();
	int var1;
	for (var1 = 0; var1 < 4; var1++) {
		GameObject* var2 = func_0200ff1c(var0, var1);
		if (!var2) {
			continue;
		}
		unsigned short var3 = *(unsigned short*)((char*)var2 + Enum_ov017_021c98f4_434);
		if (arg0 != var3) {
			continue;
		}
		func_02053f7c((struct Struct_02053f7c_3*)var2, 0, arg1);
	}
}
