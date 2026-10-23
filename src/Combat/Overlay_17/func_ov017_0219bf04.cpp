#include <globaldefs.h>
#include "Resource/GameResources.h"
#include "GameState/GameState.h"

extern "C" void* func_0200fd0c(GameState* arg0);
extern "C" void func_ov017_0219bcac(unsigned char arg0);
extern "C" int* func_020936f8(void);
extern "C" void func_02094030(int*, short, short, signed char);

// USA: func_ov017_0219bf04
extern "C" ARM void func_ov017_0219bf04(unsigned char arg0, int arg1) {
#if defined(jpn)
 enum {Enum_ov017_0219bf04_17408=0x4200, Enum_ov017_0219bf04_178=0x2};
#else
 enum {Enum_ov017_0219bf04_17408=0x4400, Enum_ov017_0219bf04_178=0xb2};
#endif
	GameState* var0 = GameState::GetInstance();
	GameResources* var1 = GetGameResources();
	func_ov017_0219bcac(arg0);
	char* var2 = (char*)func_0200fd0c(var0);
	var2[0x6e] = 1;
	var2[0xa] = 0;
	var2[0x67] = 1;
	if (arg1 == 0) {
		*(short*)((char*)var1 + Enum_ov017_0219bf04_17408 + Enum_ov017_0219bf04_178) = 0x4e23;
		return;
	}
	int* var3 = func_020936f8();
	func_02094030(var3, 0x4e23, -1, 0);
}
