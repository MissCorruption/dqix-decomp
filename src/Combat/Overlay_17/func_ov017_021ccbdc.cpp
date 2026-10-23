#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02053c6c(unsigned char* arg0);

// USA: func_ov017_021ccbdc
extern "C" ARM void func_ov017_021ccbdc(int arg0, unsigned char* arg1, GameState* arg2) {
	unsigned char* var0 = arg1 + 4;
	unsigned short var1 = *(unsigned short*)(var0 + 0xc);
	GameObject* var2 = func_0200ff1c(arg2, var1);
	if (!var2) return;
	unsigned char* var3 = (unsigned char*)func_02053c6c((unsigned char*)var2);
	if (!var3) return;
	unsigned char var4 = var0[0xe];
	unsigned char var5 = 0;
	while (var5 < 3) {
		unsigned int var6 = *(unsigned int*)(var0 + var5 * 4);
		unsigned char* var7 = var3 + (var5 + var4) * 4;
		var5++;
		*(unsigned int*)(var7 + 0x138) = var6;
	}
}
