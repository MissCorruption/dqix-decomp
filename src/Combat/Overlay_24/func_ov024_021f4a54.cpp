#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "std_library_functions.h"

extern "C" int func_ov000_0215e9fc(int arg0, unsigned short* arg1, int arg2, int arg3);
extern "C" int func_ov024_021ede2c(int* arg0);

struct Struct_020885b4;
extern "C" int func_020885b4(struct Struct_020885b4* arg0);
struct Struct_02088514;
extern "C" int func_02088514(struct Struct_02088514* arg0);

extern unsigned short data_ov024_021fea8c;

// USA: func_ov024_021f4a54
extern "C" ARM int func_ov024_021f4a54(int* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	short var0[4];
	short* var1 = var0;
	unsigned short* var2 = &data_ov024_021fea8c;
	int var3 = 4;
	do {
		short* var4 = var1++;
		*var4 = *var2++;
	} while (--var3);

	int var5 = func_ov000_0215e9fc(*arg0, (unsigned short*)var0, 4, 1);
	if (var5 <= 0) return 0;
	if (!func_ov024_021ede2c(arg0)) return 0;

	*arg3 = 0;
	for (int var6 = 0; var6 < var5; var6++) {
		GameObject* var7 = GetCombatantByID(*arg0, var0[var6]);
		if (var7 && !func_020885b4((struct Struct_020885b4*)var7->currentStats_) &&
		    !func_02088514((struct Struct_02088514*)var7->currentStats_)) {
			int var8 = *arg3;
			*arg3 = var8 + 1;
			arg4[var8] = var0[var6];
		}
	}
	if (*arg3 <= 0) return 0;

	*arg3 = var5;
	memcpy(arg4, var0, 8);
	return 1;
}
