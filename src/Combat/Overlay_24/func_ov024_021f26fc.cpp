#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);
struct Struct_ov024_021f26fc;
extern "C" int func_ov024_021f273c(struct Struct_ov024_021f26fc* arg0);

struct Struct_ov024_021f26fc_2 { int unknown_0_; };

// USA: func_ov024_021f26fc
extern "C" ARM int func_ov024_021f26fc(struct Struct_ov024_021f26fc_2* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	GameObject* var0 = func_ov000_021536f8(arg0->unknown_0_, arg1);
	if (!var0) return 0;
	int var1;
	if (func_ov024_021f273c((struct Struct_ov024_021f26fc*)var0)) {
		var1 = 0;
	} else {
		var1 = 1;
		*arg4 = (short)arg1;
		*arg3 = var1;
	}
	return var1;
}
