#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "Graphics/Vector.h"

extern "C" void func_0202e874(unsigned char* obj, short val);
extern "C" float func_ov017_021d6110(void*);

// USA: func_ov001_0215e0dc
extern "C" ARM int func_ov001_0215e0dc(void* self) {
	unsigned char* obj = (unsigned char*)func_020100bc(GameState::GetInstance());
	int degrees = (int)(4096.0f * func_ov017_021d6110(self));
	fix32_t angle = fix32ReduceAngle0To2Pi(FIX32_MULTIPLY(degrees, 0x47));
	func_0202e874(obj, angle);
	return 1;
}
