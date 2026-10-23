#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);

struct Struct_ov024_021eda78_2;
extern "C" int func_ov024_021edca4(struct Struct_ov024_021eda78_2* arg0);

struct Struct_ov024_021eda78;
extern "C" int func_ov024_021edc80(struct Struct_ov024_021eda78* arg0);

// USA: func_ov024_021f26a8
extern "C" ARM int func_ov024_021f26a8(int* arg0, short arg1, int arg2, int* arg3, short* arg4) {
	GameObject* var0 = func_ov000_021536f8(*arg0, arg1);
	if (!var0) return 0;
	if (func_ov024_021edca4((struct Struct_ov024_021eda78_2*)var0)) return 0;
	if (func_ov024_021edc80((struct Struct_ov024_021eda78*)var0)) return 0;
	*arg4 = arg1;
	*arg3 = 1;
	return 1;
}
