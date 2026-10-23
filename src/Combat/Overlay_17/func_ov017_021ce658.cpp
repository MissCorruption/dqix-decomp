#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov017_021ce658 {
	char unknown_0_[4];
	signed char unknown_4_;
	signed char unknown_5_;
	unsigned char unknown_6_;
};

extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" void func_020e3b8c(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, unsigned char arg7);

// USA: func_ov017_021ce658
extern "C" ARM void func_ov017_021ce658(void* arg0, struct Struct_ov017_021ce658* arg1, GameState* arg2, char* arg3) {
#if defined(jpn)
 enum {Enum_ov017_021ce658_2384=0x8b8};
#else
 enum {Enum_ov017_021ce658_2384=0x950};
#endif
	signed char var0 = arg1->unknown_4_;
	GameObject* var1 = func_0200ff1c(arg2, var0);
	if (var1 == NULL) return;

	char* var2 = (char*)func_02053c6c((unsigned char*)var1);
	if (var2 == 0) return;

	int var3 = *(int*)(var2 + Enum_ov017_021ce658_2384);
	signed char var4 = arg1->unknown_5_;
	unsigned short var5 = *(unsigned short*)(var2 + (var3 << 1) + 0x100 + 0x6c);
	if (var4 < 0) return;

	if (var4 == 0) {
		func_020e3b8c(arg3, var0, var5, var3, 0, 0, 0, arg1->unknown_6_);
	} else {
		func_020e3b8c(arg3, var0, var4, var3, 0, 0, 0, arg1->unknown_6_);
	}
}
