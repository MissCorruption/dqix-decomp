#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "Graphics/Vector.h"

extern "C" void func_0202e874(unsigned char* arg0, short arg1);
extern "C" float func_ov017_021d6110(void*);

// USA: func_ov001_0215e0dc
extern "C" ARM int func_ov001_0215e0dc(void* arg0) {
	unsigned char* var0 = (unsigned char*)func_020100bc(GameState::GetInstance());
	int var1 = (int)(4096.0f * func_ov017_021d6110(arg0));
	fix32_t var2 = fix32ReduceAngle0To2Pi(FIX32_MULTIPLY(var1, 0x47));
	func_0202e874(var0, var2);
	return 1;
}
