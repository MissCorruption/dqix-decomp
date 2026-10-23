#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void __clear(void* arg0, int arg1);
extern "C" unsigned char func_02011494(char* arg0, void* arg1);
extern "C" void func_ov017_021d6134(void*, int);

#if defined(jpn)
struct Struct_ov023_021ea51c { char unknown_0_[0x144]; char* unknown_150_; };
#else
struct Struct_ov023_021ea51c { char unknown_0_[0x150]; char* unknown_150_; };
#endif

// USA: func_ov023_021ea51c
extern "C" ARM int func_ov023_021ea51c(void* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021ea51c_2384=0x8b8};
#else
 enum {Enum_ov023_021ea51c_2384=0x950};
#endif
	GameState* var0 = GameState::GetInstance();
	unsigned char var1[4];
	__clear(var1, 4);
	unsigned char var2 = func_02011494((char*)var0, var1);
	int var3 = 0;
	for (int var4 = 0; var4 < var2; var4++) {
		unsigned char var5 = var1[var4];
		struct Struct_ov023_021ea51c* var6 = (struct Struct_ov023_021ea51c*)func_0200ff1c(var0, var5);
		if (var6) {
			int var7 = *(int*)(var6->unknown_150_ + Enum_ov023_021ea51c_2384);
			if (var7 == 2 || var7 == 3 || var7 == 0xa) var3++;
		}
	}
	func_ov017_021d6134(arg0, var3);
	return 1;
}
