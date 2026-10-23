#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_ov031_02243b34(void*);

struct Obj022436e0 {
	char pad[0x36];
	unsigned char field36;
};

// USA: func_ov031_022436e0
extern "C" ARM int func_ov031_022436e0(struct Obj022436e0* obj) {
	GameState::GetInstance();
	func_ov031_02243b34(obj);
	return obj->field36 != 0 ? 2 : 1;
}
