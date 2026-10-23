#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void* func_ov017_021b8470(void* arg0);
extern "C" int func_020100a8(GameState* arg0);

struct Struct_ov017_021c6784 {
	unsigned char unknown_0_[4];
	int unknown_4_;
	unsigned short unknown_8_;
	unsigned short unknown_a_;
	unsigned char unknown_c_;
	unsigned char unknown_d_;
	unsigned char unknown_e_;
};

struct Struct_ov017_021c6784_2 {
	unsigned char unknown_0_;
	unsigned char unknown_1_;
	unsigned short unknown_2_;
	int unknown_4_;
};

struct Struct_ov017_021c6784_3 {
	unsigned char unknown_0_[0x4c];
	Struct_ov017_021c6784_2 unknown_4c_[1];
};

// USA: func_ov017_021c6784
extern "C" ARM void func_ov017_021c6784(int arg0, Struct_ov017_021c6784* arg1, GameState* arg2, char* arg3) {
#if defined(jpn)
 enum {Enum_ov017_021c6784_1816=0x508};
#else
 enum {Enum_ov017_021c6784_1816=0x718};
#endif
	void* var0 = *(void**)(arg3 + 0x3000 + Enum_ov017_021c6784_1816);

	void* var1 = func_ov017_021b8478(var0);
	if (!var1) return;

	void* var2 = func_ov017_021b8470(var0);
	if (!var2) return;

	int var3 = func_020100a8(arg2);
	if (*((signed char*)var1 + 0x2a) == var3) return;
	if (*(unsigned short*)((char*)var1 + 0x8) != arg1->unknown_8_) return;

	Struct_ov017_021c6784_3* var4 = (Struct_ov017_021c6784_3*)((char*)var2 + 0x1b0 + 0x8000);
	Struct_ov017_021c6784_2* var5 = &var4->unknown_4c_[arg1->unknown_e_];
	var5->unknown_2_ = arg1->unknown_a_;
	var5->unknown_1_ = arg1->unknown_c_;
	var5->unknown_0_ = arg1->unknown_d_;
	var5->unknown_4_ = arg1->unknown_4_;
}
