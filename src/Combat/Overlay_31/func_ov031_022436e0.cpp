#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_ov031_02243b34(void*);

struct Struct_ov031_022436e0 {
	char unknown_0_[0x36];
	unsigned char unknown_36_;
};

// USA: func_ov031_022436e0
extern "C" ARM int func_ov031_022436e0(struct Struct_ov031_022436e0* arg0) {
	GameState::GetInstance();
	func_ov031_02243b34(arg0);
	return arg0->unknown_36_ != 0 ? 2 : 1;
}
