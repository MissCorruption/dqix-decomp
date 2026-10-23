#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
struct Struct_ov023_021f5228 { char unknown_0_[0x144]; char *unknown_150_; };
#else
struct Struct_ov023_021f5228 { char unknown_0_[0x150]; char *unknown_150_; };
#endif
extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" int func_020dd11c(unsigned int arg0, unsigned int arg1);

// USA: func_ov023_021f5228
extern "C" ARM int func_ov023_021f5228(int arg0) {
#if defined(jpn)
 enum {Enum_ov023_021f5228_2384=0x8b8};
#else
 enum {Enum_ov023_021f5228_2384=0x950};
#endif
	GameState *var0 = GameState::GetInstance();
	struct Struct_ov023_021f5228 *var1 = (struct Struct_ov023_021f5228*)func_0200ff1c(var0, arg0);
	if (!var1) return 0;
	int var2 = func_02053c6c((unsigned char*)var1);
	if (!var2) return 0;
	int var3 = *(int*)(var1->unknown_150_ + Enum_ov023_021f5228_2384);
	unsigned int var4 = var3 & 0xff;
	for (int var5 = 0; var5 < 5; var5++) {
		int var6 = func_020dd11c(var4, var5 & 0xff);
		unsigned char *var7 = (unsigned char*)(var2 + var6);
		if (var7[0x464] < 0x64) return 1;
	}
	return 0;
}
