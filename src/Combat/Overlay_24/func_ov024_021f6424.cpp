#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "std_library_functions.h"

extern "C" int func_ov000_0215e9fc(int arg0, unsigned short* arg1, int arg2, int arg3);
extern "C" int func_ov024_021ede2c(int* arg0);
extern "C" int func_020882f8(unsigned char* arg0);

extern unsigned short data_ov024_021feb04;

// USA: func_ov024_021f6424
extern "C" ARM int func_ov024_021f6424(int* arg0, int arg1, int arg2, int* arg3, void* arg4) {
	unsigned short var0[4];
	unsigned short* var1 = var0;
	unsigned short* var2 = &data_ov024_021feb04;
	int var3 = 4;
	do {
		unsigned short* var4 = var1++;
		*var4 = *var2++;
	} while (--var3);

	int var5 = func_ov000_0215e9fc(*arg0, var0, 4, 1);
	if (var5 <= 0) return 0;
	if (!func_ov024_021ede2c(arg0)) return 0;

	int var6 = 0;
	for (int var7 = 0; var7 < var5; var7++) {
		GameObject* var8 = GetCombatantByID(*arg0, *(short*)&var0[var7]);
		if (var8 && !func_020882f8((unsigned char*)var8->currentStats_)) {
			var6 = 1;
			break;
		}
	}
	if (!var6) return 0;

	*arg3 = var5;
	memcpy(arg4, var0, 8);
	return 1;
}
