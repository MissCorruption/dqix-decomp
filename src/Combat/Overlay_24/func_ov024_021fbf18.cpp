#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

extern "C" int func_ov024_021fe698(void* arg0, int arg1);
extern "C" void func_ov024_021fdf04(void* arg0, int arg1);
extern "C" void func_ov024_021f9874(void* arg0, void* arg1, int arg2, int arg3);

struct Struct_ov024_021fbf18 {
	char unknown_0_[4];
	unsigned int unknown_4_0_ : 12;
	unsigned int unknown_5_4_ : 20;
};

struct Struct_ov024_021fbf18_2 {
	char unknown_0_[6];
	unsigned char unknown_6_;
	char unknown_7_[1];
	GameObject* unknown_8_;
	int unknown_c_;
	char unknown_10_[0x64c - 0x10];
	struct Struct_ov024_021fbf18* unknown_64c_;
};

// USA: func_ov024_021fbf18
extern "C" ARM void func_ov024_021fbf18(struct Struct_ov024_021fbf18_2* arg0) {
	unsigned int var0 = arg0->unknown_64c_->unknown_4_0_;
	if (var0 == 0x1fc || var0 == 0x20f) {
		int var1 = 0;
		if (arg0->unknown_6_ == 2) var1 = 1;
		if (arg0->unknown_6_ == 0) return;
		if (arg0->unknown_c_ >= 3) var1 = 1;
		if (!var1) return;
		if (!func_ov024_021fe698(arg0, 0x12)) return;
		if (((unsigned char*)arg0->unknown_8_->currentStats_)[0x24] >= 3) return;
		char var2[0xc8];
		memset(var2, 0, 0xc8);
		*(float*)(var2 + 0xc4) = 1000.0f;
		func_ov024_021f9874(arg0, var2, 0, 0);
	} else {
		if (func_ov024_021fe698(arg0, 1)) {
			func_ov024_021fdf04(arg0, 8);
		}
	}
}
