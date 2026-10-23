#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);

// USA: func_ov024_021f5300
extern "C" ARM int func_ov024_021f5300(int* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	GameObject* var0 = func_ov000_021536f8(*arg0, arg1);
	if (!var0) return 0;
	if (((unsigned char*)var0->currentStats_)[0x24] >= 3) return 0;
	*arg3 = 1;
	*arg4 = (short)arg1;
	return 1;
}
