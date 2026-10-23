#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);
extern "C" float func_ov024_021db358(GameObject* arg0);

// USA: func_ov024_021f4e84
extern "C" ARM int func_ov024_021f4e84(int* arg0, int arg1, int arg2, int* arg3, void* arg4) {
	GameObject* var0 = func_ov000_021536f8(*arg0, arg1);
	if (!var0) return 0;
	if (func_ov024_021db358(var0) >= 0.5f) return 0;
	*arg3 = 0;
	memset(arg4, -1, 0x10);
	return 1;
}
