#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov024_021ea500_2 { char unknown_0_[0x4]; unsigned int unknown_4_0_ : 12; };
struct Struct_ov024_021ea500 { unsigned int unknown_0_0_ : 1; unsigned int unknown_0_1_ : 1; };

// USA: func_ov024_021ea500
extern "C" ARM int func_ov024_021ea500(void* arg0, struct Struct_ov024_021ea500_2* arg1, int arg2) {
#if defined(jpn)
 enum {Enum_ov024_021ea500_336=0x144};
#else
 enum {Enum_ov024_021ea500_336=0x150};
#endif
	GameState* var0 = GameState::GetInstance();
	if (arg1->unknown_4_0_ == 1) {
		int var1 = (arg2 >= 0 && arg2 <= 3);
		if (var1) {
			GameObject* var2 = func_0200ff1c(var0, arg2);
			char* var3 = (char*)(*(int**)((char*)var2 + Enum_ov024_021ea500_336)) + 0x2f4;
			if (var3) {
				struct Struct_ov024_021ea500* var4 = (struct Struct_ov024_021ea500*)var3;
				if (var4->unknown_0_1_ || var4->unknown_0_0_) {
					return 1;
				}
			}
		}
	}
	return 0;
}
