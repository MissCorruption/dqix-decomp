#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void* func_ov017_021b8470(void* arg0);
extern "C" int func_020100a8(GameState* arg0);

struct Struct_ov017_021c840c {
	unsigned char unknown_0_[4];
	unsigned short unknown_4_;
	unsigned char unknown_6_;
	unsigned char unknown_7_;
	int unknown_8_;
};

struct Struct_ov017_021c840c_2 {
	unsigned char unknown_0_[5];
	unsigned char unknown_5_;
	unsigned char unknown_6_[2];
	unsigned short unknown_8_;
	unsigned char unknown_a_[0x20];
	signed char unknown_2a_;
};

// USA: func_ov017_021c840c
extern "C" ARM void func_ov017_021c840c(int arg0, Struct_ov017_021c840c* arg1, GameState* arg2, unsigned char* arg3) {
#if defined(jpn)
 enum {Enum_ov017_021c840c_1816=0x508};
#else
 enum {Enum_ov017_021c840c_1816=0x718};
#endif
	unsigned char* var0 = arg3 + 0x3000;
	void* var1 = *(void**)(var0 + Enum_ov017_021c840c_1816);
	Struct_ov017_021c840c_2* var2 = (Struct_ov017_021c840c_2*)func_ov017_021b8478(var1);
	if (!var2) return;
	void* var3 = func_ov017_021b8470(var1);
	if (!var3) return;
	int var4 = func_020100a8(arg2);
	if (var2->unknown_2a_ == var4) return;
	if (var2->unknown_8_ == arg1->unknown_4_) {
		*(int*)((unsigned char*)var3 + 0x8000 + 0xe20) = arg1->unknown_8_;
		var2->unknown_5_ = arg1->unknown_6_;
	}
}
