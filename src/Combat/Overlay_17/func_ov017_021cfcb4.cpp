#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Grotto/Main/GrottoStruct.h"

struct Struct_ov017_021cfcb4 {
	unsigned char unknown_0_[4];
	unsigned char unknown_4_;
};

// USA: func_ov017_021cfcb4
extern "C" ARM void func_ov017_021cfcb4(int arg0, Struct_ov017_021cfcb4* arg1) {
	GrottoStruct* var0 = GameState::GetInstance()->GetGrottoStruct();
	var0->unknown_0[3] = (arg1->unknown_4_ != 0) ? 1 : 0;
	if (arg1->unknown_4_ != 0) {
		var0->unknown_0[4] = 0;
	}
}
