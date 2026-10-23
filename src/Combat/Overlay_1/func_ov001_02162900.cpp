#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" int LoadToMainBG3ScreenData(int arg0, int arg1, unsigned int arg2);
extern "C" int LoadToSubBG3ScreenData(int arg0, int arg1, unsigned int arg2);
extern "C" int LoadToMainBG3CharacterData(int arg0, int arg1, unsigned int arg2);
extern "C" int LoadToSubBG3CharacterData(int arg0, int arg1, unsigned int arg2);
extern "C" int func_ov017_021d60f4(void* arg0);

// USA: func_ov001_02162900
extern "C" ARM int func_ov001_02162900(void* arg0) {
	unsigned char var0[0x20];
	unsigned char var1[0x600];
	int var2 = func_ov017_021d60f4(arg0);
	VectorizedMemset(var0, 0, sizeof(var0));
	VectorizedMemset(var1, 0, sizeof(var1));
	if (var2 == 0) {
		LoadToMainBG3CharacterData((int)var0, 0, sizeof(var0));
		LoadToMainBG3ScreenData((int)var1, 0, sizeof(var1));
	} else {
		LoadToSubBG3CharacterData((int)var0, 0, sizeof(var0));
		LoadToSubBG3ScreenData((int)var1, 0, sizeof(var1));
	}
	return 1;
}
