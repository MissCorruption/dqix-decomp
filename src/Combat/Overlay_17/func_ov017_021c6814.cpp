#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae24(void);
extern "C" int func_020100a8(GameState* arg0);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021c6814 {
	unsigned char unknown_0_;
	unsigned char unknown_1_;
	unsigned char unknown_2_;
	unsigned char unknown_3_;
	signed char unknown_4_;
	unsigned char unknown_5_;
	unsigned short unknown_6_;
	unsigned short unknown_8_;
};

struct Struct_ov017_021c6814_2 {
	unsigned short unknown_0_;
	unsigned short unknown_2_;
	unsigned short unknown_4_;
	unsigned short unknown_6_;
	signed char unknown_8_;
	unsigned char unknown_9_;
	unsigned char unknown_a_;
	unsigned char unknown_b_;
	unsigned char unknown_c_;
	unsigned char unknown_d_0_:1;
	unsigned char unknown_d_1_:1;
	unsigned char unknown_d_2_:6;
	signed char unknown_e_;
	unsigned char unknown_f_;
};

struct Struct_ov017_021c6814_3 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	Struct_ov017_021c6814_2 unknown_4_;
};

// USA: func_ov017_021c6814
extern "C" ARM void func_ov017_021c6814(unsigned short arg0, unsigned short arg1, Struct_ov017_021c6814* arg2, unsigned char arg3, signed char arg4, unsigned char arg5) {
	void* var0 = func_0202ae24();
	Struct_ov017_021c6814_3 var1;
	Struct_ov017_021c6814_2* var2 = &var1.unknown_4_;
	GameState* var3 = GameState::GetInstance();

	var1.unknown_0_ = 0x42;
	var2->unknown_0_ = arg0;
	var2->unknown_2_ = arg1;
	var2->unknown_9_ = arg2->unknown_0_;
	var2->unknown_a_ = arg2->unknown_1_;
	var2->unknown_b_ = arg2->unknown_2_;
	var2->unknown_c_ = arg2->unknown_3_;
	var2->unknown_4_ = arg2->unknown_6_;
	var2->unknown_8_ = arg2->unknown_4_;
	var2->unknown_6_ = arg2->unknown_8_;
	var2->unknown_d_0_ = arg3;

	var2->unknown_d_2_ = func_020100a8(var3);
	var2->unknown_e_ = arg4;
	var2->unknown_d_1_ = arg5;

	func_0205e330(var0, &var1, 0);
}
