#include <globaldefs.h>
#include "GameState/GameState.h"

struct Obj02053f7c;
extern "C" void func_02053f7c(Obj02053f7c* obj, unsigned short a, int b);

// USA: func_ov017_021c98f4
extern "C" ARM void func_ov017_021c98f4(int target, int flag) {
#if defined(jpn)
 enum {regionalOffset0=0x1a6};
#else
 enum {regionalOffset0=0x1b2};
#endif
	GameState* bs = GameState::GetInstance();
	int i;
	for (i = 0; i < 4; i++) {
		GameObject* c = func_0200ff1c(bs, i);
		if (!c) {
			continue;
		}
		unsigned short val = *(unsigned short*)((char*)c + regionalOffset0);
		if (target != val) {
			continue;
		}
		func_02053f7c((struct Obj02053f7c*)c, 0, flag);
	}
}
