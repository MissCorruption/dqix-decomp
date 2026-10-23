#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02037d88_9;
struct Struct_02037d88_8;
extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);

#if defined(jpn)
#define ALPHA_COUNT 0x701e
#define ALPHA_IDS 0x7020
#else
#define ALPHA_COUNT (0x6000 + 0xe2e)
#define ALPHA_IDS (0x6e00 + 0x30)
#endif

// USA: func_ov023_021ed988
extern "C" ARM void func_ov023_021ed988(char *arg0, int arg1) {
	GameState *var0 = GameState::GetInstance();
	for (int var1 = 0; var1 < *(unsigned char*)(arg0 + ALPHA_COUNT); var1++) {
		unsigned short *var2 = (unsigned short*)(arg0 + var1 * 2 + ALPHA_IDS);
		GameObject *var3 = func_0200fea4(var0, *var2);
		if (arg1 > 0) {
			((Object3D*)((struct Struct_02037d88_9*)var3))->TransitionInheritedAlpha(0, arg1);
		} else {
			((Object3D*)((struct Struct_02037d88_8*)var3))->SetInheritedAlpha(0);
		}
	}
}
