#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void* func_ov017_021b8468(void* arg0);
extern "C" void* func_ov017_021b8470(void* arg0);
extern "C" int func_020100a8(GameState* arg0);

struct Struct_ov017_021c7ebc {
	unsigned char unknown_0_[8];
	unsigned short unknown_8_;
	unsigned char unknown_a_[0x20];
	signed char unknown_2a_;
};

struct Struct_ov017_021c7ebc_2 {
	unsigned char unknown_0_[4];
	unsigned short unknown_4_;
	unsigned short unknown_6_;
	unsigned int unknown_8_;
	unsigned int unknown_c_;
	unsigned char unknown_10_;
};

struct Struct_ov017_021c7ebc_3 {
	unsigned int unknown_0_0_:3, unknown_0_3_:3, unknown_0_6_:3, unknown_1_1_:3, unknown_1_4_:3, unknown_1_7_:3, unknown_2_2_:3, unknown_2_5_:3, unknown_3_0_:3, unknown_3_3_:3;
};

struct Struct_ov017_021c7ebc_4 {
	unsigned int unknown_0_0_:3, unknown_0_3_:3, unknown_0_6_:3, unknown_1_1_:3, unknown_1_4_:4;
};

struct Struct_ov017_021c7ebc_5 {
	unsigned char unknown_0_[15];
};

// USA: func_ov017_021c7ebc
extern "C" ARM void func_ov017_021c7ebc(int arg0, Struct_ov017_021c7ebc_2* arg1, GameState* arg2, unsigned char* arg3) {
	unsigned char* var0 = arg3 + 0x3000;
#if defined(jpn)
	void* var1 = *(void**)(var0 + 0x508);
#else
	void* var1 = *(void**)(var0 + 0x718);
#endif
	Struct_ov017_021c7ebc* var2 = (Struct_ov017_021c7ebc*)func_ov017_021b8478(var1);
	if (!var2) return;
	if (!func_ov017_021b8468(var1)) return;
	if (!func_ov017_021b8470(var1)) return;
	int var3 = func_020100a8(arg2);
	if (var2->unknown_2a_ == var3) return;
	if (var2->unknown_8_ != arg1->unknown_4_) return;
	GameObject* var4 = arg2->GetCombatantByIndex(arg1->unknown_6_);
	if (!var4) return;
	Struct_ov017_021c7ebc_3* var5 = (Struct_ov017_021c7ebc_3*)&arg1->unknown_8_;
	Struct_ov017_021c7ebc_4* var6 = (Struct_ov017_021c7ebc_4*)&arg1->unknown_c_;
	if (arg1->unknown_10_ == 1) {
#if defined(jpn)
		Struct_ov017_021c7ebc_5* var7 = (Struct_ov017_021c7ebc_5*)((unsigned char*)(var4->currentStats_) + 0x70);
#else
		Struct_ov017_021c7ebc_5* var7 = (Struct_ov017_021c7ebc_5*)((unsigned char*)var4->currentStats_ + 0x70);
#endif
		var7->unknown_0_[0] = var5->unknown_0_0_;
		var7->unknown_0_[1] = var5->unknown_0_3_;
		var7->unknown_0_[2] = var5->unknown_0_6_;
		var7->unknown_0_[3] = var5->unknown_1_1_;
		var7->unknown_0_[4] = var5->unknown_1_4_;
		var7->unknown_0_[5] = var5->unknown_1_7_;
		var7->unknown_0_[6] = var5->unknown_2_2_;
		var7->unknown_0_[7] = var5->unknown_2_5_;
		var7->unknown_0_[8] = var5->unknown_3_0_;
		var7->unknown_0_[9] = var5->unknown_3_3_;
		var7->unknown_0_[10] = var6->unknown_0_0_;
		var7->unknown_0_[11] = var6->unknown_0_3_;
		var7->unknown_0_[12] = var6->unknown_0_6_;
		var7->unknown_0_[13] = var6->unknown_1_1_;
		var7->unknown_0_[14] = var6->unknown_1_4_;
	} else {
#if defined(jpn)
		Struct_ov017_021c7ebc_5* var8 = (Struct_ov017_021c7ebc_5*)((unsigned char*)(var4->currentStats_) + 0x93);
#else
		Struct_ov017_021c7ebc_5* var8 = (Struct_ov017_021c7ebc_5*)((unsigned char*)var4->currentStats_ + 0x93);
#endif
		var8->unknown_0_[0] = var5->unknown_0_0_;
		var8->unknown_0_[1] = var5->unknown_0_3_;
		var8->unknown_0_[2] = var5->unknown_0_6_;
		var8->unknown_0_[3] = var5->unknown_1_1_;
		var8->unknown_0_[4] = var5->unknown_1_4_;
		var8->unknown_0_[5] = var5->unknown_1_7_;
		var8->unknown_0_[6] = var5->unknown_2_2_;
		var8->unknown_0_[7] = var5->unknown_2_5_;
		var8->unknown_0_[8] = var5->unknown_3_0_;
		var8->unknown_0_[9] = var5->unknown_3_3_;
		var8->unknown_0_[10] = var6->unknown_0_0_;
		var8->unknown_0_[11] = var6->unknown_0_3_;
		var8->unknown_0_[12] = var6->unknown_0_6_;
		var8->unknown_0_[13] = var6->unknown_1_1_;
		var8->unknown_0_[14] = var6->unknown_1_4_;
	}
}
