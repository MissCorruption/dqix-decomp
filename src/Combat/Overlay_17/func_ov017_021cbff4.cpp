#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021cbff4_14104 = 0x3508, Enum_ov017_021cbff4_22312 = 0x54c8 };
#else
enum { Enum_ov017_021cbff4_14104 = 0x3718, Enum_ov017_021cbff4_22312 = 0x5728 };
#endif

#include "GameState/GameState.h"

extern "C" void* func_ov017_021b8478(void* arg0);

struct Struct_ov017_021cbff4 {
	unsigned char unknown_0_[8];
	unsigned short unknown_8_;
};

struct Struct_ov017_021cbff4_2 {
	unsigned char unknown_0_[4];
	unsigned short unknown_4_;
	unsigned char unknown_6_;
};

// USA: func_ov017_021cbff4
extern "C" ARM void func_ov017_021cbff4(int arg0, Struct_ov017_021cbff4_2* arg1, int arg2, unsigned char* arg3) {
	unsigned char* var0 = *(unsigned char**)(arg3 + Enum_ov017_021cbff4_14104);
	if (!var0 || var0[3] == 0) return;
	Struct_ov017_021cbff4* var1 = (Struct_ov017_021cbff4*)func_ov017_021b8478(var0);
	if (!var1) return;
	if (var1->unknown_8_ != arg1->unknown_4_) return;
	unsigned char* var2 = (unsigned char*)GameState::GetInstance();
	var2[Enum_ov017_021cbff4_22312] = arg1->unknown_6_ != 0 ? 1 : 0;
}
