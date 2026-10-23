#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

extern "C" int func_ov000_0215e9fc(int arg0, unsigned short* arg1, int arg2, int arg3);
extern unsigned short data_ov024_021fe6c8;

// USA: func_ov024_021da47c
extern "C" ARM int func_ov024_021da47c(int* arg0, unsigned short arg1, int arg2, int arg3, int arg4, int arg5) {
	int var0 = (arg1 <= 3) ? 1 : 0;
	if (!var0) {
		return arg5;
	}

	GameState* var1 = GameState::GetInstance();

	int var2 = 0;
	unsigned short var3[4];
	unsigned short* var4 = &data_ov024_021fe6c8;
	unsigned short* var5 = var3;
	int var6 = 4;
	do {
		unsigned short* var7 = var5++;
		*var7 = *var4++;
	} while (--var6);

	int var8 = func_ov000_0215e9fc(*arg0, var3, 4, 1);
	for (int var9 = 0; var9 < var8; var9++) {
		GameObject* var10 = func_0200ff1c(var1, *(short*)&var3[var9]);
		if (var10) {
			var2 += var10->currentStats_->primaryStats.attack;
		}
	}

	float var11 = NextRandomFloatBetween(*(struct Random**)arg0, 0.95f, 1.5f);
	return (int)(var2 * var11);
}
