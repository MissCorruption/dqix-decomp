#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov017_021d0d9c { unsigned char unknown_0_[4]; int unknown_4_; };

// USA: func_ov017_021d0d9c
extern "C" ARM void func_ov017_021d0d9c(void* arg0, Struct_ov017_021d0d9c* arg1, GameState* arg2) {
	unsigned char* var0 = (unsigned char*)func_02010828(arg2);
	*(int*)(var0 + 0x2000 + 0xc94) = arg1->unknown_4_;
}
