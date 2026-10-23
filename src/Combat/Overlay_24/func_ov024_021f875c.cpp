#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov000_02156b38(int arg0, int arg1, unsigned int arg2);
extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);

struct Struct_ov024_021f875c { unsigned short unknown_0_; unsigned short unknown_2_; short unknown_4_; };
struct Struct_ov024_021f875c_2 { char unknown_0_[0x8]; int unknown_8_; char unknown_c_[0x4]; int unknown_10_; char unknown_14_[0x4]; int unknown_18_; };
struct Struct_ov024_021f875c_3 { char unknown_0_[0xa]; unsigned short unknown_a_0_ : 12; unsigned short unknown_b_4_ : 1; };

// USA: func_ov024_021f875c
extern "C" ARM int func_ov024_021f875c(int* arg0, struct Struct_ov024_021f875c* arg1, struct Struct_ov024_021f875c_2* arg2, int arg3) {
	GameState* var0 = GameState::GetInstance();
	if (arg1->unknown_0_ & 0x400) {
		GameObject* var1 = func_0200fea4(var0, arg1->unknown_4_);
		if (var1 && *(void**)((char*)var1 + 0x144)) {
			struct Struct_ov024_021f875c_3* var2 = *(struct Struct_ov024_021f875c_3**)((char*)var1 + 0x144);
			if (var2->unknown_b_4_) {
				if (!(arg2->unknown_10_ & 0x1000000)) {
					return 0;
				}
			}
		}
	}
	unsigned int var3;
	if (arg3 == 1) {
		var3 = (unsigned int)arg2->unknown_18_ >> 27;
	} else {
		var3 = (unsigned int)(arg2->unknown_8_ << 5) >> 27;
	}
	return func_ov000_02156b38(*arg0, arg1->unknown_4_, var3);
}
