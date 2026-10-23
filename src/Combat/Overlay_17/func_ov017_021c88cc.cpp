#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void* func_ov017_021b8468(void* arg0);
extern "C" void* func_ov017_021b8470(void* arg0);
struct Vector3i;

struct Struct_ov017_021c88cc {
	unsigned char unknown_0_[8];
	unsigned short unknown_8_;
};

struct Struct_ov017_021c88cc_2 {
	unsigned char unknown_0_[4];
	int unknown_4_[3];
	short unknown_10_;
	unsigned short unknown_12_;
};

// USA: func_ov017_021c88cc
extern "C" ARM void func_ov017_021c88cc(int arg0, Struct_ov017_021c88cc_2* arg1, GameState* arg2, unsigned char* arg3) {
#if defined(jpn)
 enum {Enum_ov017_021c88cc_1816=0x508};
#else
 enum {Enum_ov017_021c88cc_1816=0x718};
#endif
	unsigned char* var0 = arg3 + 0x3000;
	void* var1 = *(void**)(var0 + Enum_ov017_021c88cc_1816);
	Struct_ov017_021c88cc* var2 = (Struct_ov017_021c88cc*)func_ov017_021b8478(var1);
	if (!var2) return;
	if (!func_ov017_021b8468(var1)) return;
	if (!func_ov017_021b8470(var1)) return;
	if (var2->unknown_8_ != arg1->unknown_12_) return;
	GameObject* var3 = arg2->GetCombatantByIndex(arg1->unknown_10_);
	if (!var3) return;
	int* var4 = *(int**)((unsigned char*)var3 + 0x13c);
	if (!var4) return;
	*(Vector3i*)((int*)((unsigned char*)var4 + 0x10)) = *(Vector3i const*)arg1->unknown_4_;
}
