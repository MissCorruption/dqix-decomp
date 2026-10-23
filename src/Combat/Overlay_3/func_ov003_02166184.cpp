#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov003_02166184_1116 = 0x284 };
enum { Enum_ov003_02166184_1183 = 0x2c7 };
#else
enum { Enum_ov003_02166184_1116 = 0x45c };
enum { Enum_ov003_02166184_1183 = 0x49f };
#endif

extern "C" void func_ov003_02160c58(unsigned char* arg0, short* arg1, short* arg2);
extern "C" void* func_02010828(GameState*);
extern "C" void func_ov003_02166220(unsigned char* arg0);

// USA: func_ov003_02166184
extern "C" ARM void func_ov003_02166184(unsigned char* arg0) {
	short var0, var1;
	unsigned char* var2;
	int var3;
	int var4;
	int var5;
	func_ov003_02160c58(arg0, &var0, &var1);

	var2 = (unsigned char*)func_02010828(GameState::GetInstance()) + 0x2000;
	var3 = var2[0xc8c];
	var4 = (var3 + 3) / 4;

	var5 = *(int*)(arg0 + Enum_ov003_02166184_1116);
	if (var5 & 0x10) {
		arg0[Enum_ov003_02166184_1183] = (signed char)arg0[Enum_ov003_02166184_1183] + 1;
	} else if (var5 & 0x20) {
		arg0[Enum_ov003_02166184_1183] = (signed char)arg0[Enum_ov003_02166184_1183] - 1;
	}
	if (var4 <= (signed char)arg0[Enum_ov003_02166184_1183]) {
		arg0[Enum_ov003_02166184_1183] = 0;
	} else if ((signed char)arg0[Enum_ov003_02166184_1183] < 0) {
		arg0[Enum_ov003_02166184_1183] = var4 - 1;
	}

	func_ov003_02166220(arg0);
}
