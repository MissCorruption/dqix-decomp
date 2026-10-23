#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02088f68;
extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);
extern "C" void* func_ov000_02160130(void);
extern "C" void func_ov000_02161e30(void* arg0, int arg1, int arg2, int arg3);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215fd7c(void* arg0);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_02088f68(struct Struct_02088f68* arg0);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov024_021e0d00 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; };

struct Struct_ov024_021e0d00_2 {
	char unknown_0_[4];
	unsigned int unknown_4_0_ : 12;
	unsigned int : 20;
	char unknown_8_[0x24 - 0x8];
	unsigned int unknown_24_0_ : 10;
	unsigned int : 22;
};

struct Struct_ov024_021e0d00_3 {
	GameObject unknown_0_;
	char unknown_13c_[0x188 - 0x13c];
	unsigned short unknown_188_;
	unsigned short unknown_18a_;
};

struct Struct_ov024_021e0d00_4 {
	char unknown_0_[0xe];
	unsigned short unknown_e_;
	unsigned short unknown_10_;
	unsigned short unknown_12_;
	unsigned short unknown_14_;
	char unknown_16_[0x20 - 0x16];
	int unknown_20_;
};

// USA: func_ov024_021e0d00
extern "C" ARM void* func_ov024_021e0d00(struct Struct_ov024_021e0d00* arg0, int arg1, int arg2, struct Struct_ov024_021e0d00_2* arg3) {
	struct Struct_ov024_021e0d00_3* var0 = (struct Struct_ov024_021e0d00_3*)func_ov000_021536f8((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	if (arg1 == arg2) {
		int var1 = -1;
		if (arg3->unknown_4_0_ == 0x153) var1 = 0xb3;
		if (arg3->unknown_4_0_ == 0x31a) var1 = 0x4b;
		func_ov000_02161e30(func_ov000_02160130(), arg2, var1, 1);
		struct Struct_ov024_021e0d00_4* var2 = (struct Struct_ov024_021e0d00_4*)func_ov000_0215e958(arg0->unknown_10_);
		if (!var2) return 0;
		func_ov000_0215fd7c(var2);
		var2->unknown_20_ = 0;
		var2->unknown_e_ = var0->unknown_188_;
		var2->unknown_10_ = var0->unknown_18a_;
		var2->unknown_12_ = var0->unknown_188_;
		var2->unknown_14_ = var0->unknown_18a_;
		func_ov000_0215a88c(arg0->unknown_10_, var2, (unsigned short)arg3->unknown_24_0_);
		return var2;
	}
	var0->unknown_0_.currentStats_->primaryStats.currHP = 0;
	func_02088f68((struct Struct_02088f68*)var0->unknown_0_.currentStats_);
	void* var3 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var3) return 0;
	func_ov000_0215cd44(arg0->unknown_10_, var3, var0, 0, 0, 0, 0);
	return var3;
}
