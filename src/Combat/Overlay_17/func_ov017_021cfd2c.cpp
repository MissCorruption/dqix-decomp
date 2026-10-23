#include <globaldefs.h>
#include "World/ZoneLifecycle.h"
#include "GameState/GameState.h"
#include "Grotto/Main/GrottoStruct.h"

struct Struct_ov017_021cfd2c {
	unsigned char unknown_0_[4];
	unsigned char unknown_4_;
};

extern "C" void* func_02012fe4(void);

// USA: func_ov017_021cfd2c
extern "C" ARM void func_ov017_021cfd2c(int arg0, Struct_ov017_021cfd2c* arg1) {
	GrottoStruct* var0 = GameState::GetInstance()->GetGrottoStruct();
	var0->unknown_0[4] = (arg1->unknown_4_ != 0) ? 1 : 0;
	func_0201bfd4(static_cast<Zone3D*>(func_02012fe4()));
}
