#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02053c6c(unsigned char* arg0);
struct Struct_02061c04_22;
extern "C" void func_0208386c(struct Struct_02061c04_22* arg0, int arg1);

struct Struct_ov017_021d0164 { unsigned char unknown_0_[4]; int unknown_4_; signed char unknown_8_; };

// USA: func_ov017_021d0164
extern "C" ARM void func_ov017_021d0164(int arg0, Struct_ov017_021d0164* arg1, GameState* arg2) {
	GameObject* var0 = func_0200ff1c(arg2, arg1->unknown_4_);
	if (var0 == NULL) return;
	int var1 = func_02053c6c((unsigned char*)var0);
	if (var1 == 0) return;
	func_0208386c((struct Struct_02061c04_22*)var1, arg1->unknown_8_);
}
