#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov017_021cc320 { unsigned char unknown_0_[4]; unsigned char unknown_4_; };
struct Struct_020535f4 { char unknown_0_[0x184]; unsigned char unknown_184_; };
extern "C" void func_020535f4(struct Struct_020535f4* arg0);

// USA: func_ov017_021cc320
extern "C" ARM void func_ov017_021cc320(void* arg0, Struct_ov017_021cc320* arg1, GameState* arg2) {
	GameObject* var0 = func_0200ff1c(arg2, arg1->unknown_4_);
	if (var0 != 0) {
		func_020535f4((struct Struct_020535f4*)var0);
	}
}
