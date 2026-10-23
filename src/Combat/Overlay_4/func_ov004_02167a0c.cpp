#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02086d88(unsigned char* arg0, int arg1);

// USA: func_ov004_02167a0c
extern "C" ARM int func_ov004_02167a0c(void* arg0, int arg1) {
	unsigned char* var0 = (unsigned char*)func_02010828(GameState::GetInstance());
	int var1;
	int var2;
	for (var1 = 0; var1 < arg1; var1++) {
		func_02086d88(var0, 0x5617);
	}
	var2 = *(int*)(var0 + 0xf74) + arg1;
	var2 = (short)var2;
	if (var2 > 0x1f4) {
		var2 = 0x1f4;
	}
	*(int*)(var0 + 0xf74) = var2;
	return 0;
}
