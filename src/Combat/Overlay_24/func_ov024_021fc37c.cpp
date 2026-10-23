#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

extern "C" int func_ov024_021fe698(void* arg0, int arg1);
extern "C" void func_ov024_021f9874(void* arg0, void* arg1, int arg2, int arg3);
struct Struct_ov024_021fc37c;
extern "C" int func_ov024_021fc498(struct Struct_ov024_021fc37c* arg0);

struct Struct_ov024_021fc37c_2 {
	char unknown_0_[4];
	unsigned int unknown_4_0_ : 12;
	unsigned int unknown_5_4_ : 20;
};

struct Struct_ov024_021fc37c_3 {
	char unknown_0_[6];
	unsigned char unknown_6_;
	char unknown_7_[1];
	GameObject* unknown_8_;
	int unknown_c_;
	char unknown_10_[0x64c - 0x10];
	struct Struct_ov024_021fc37c_2* unknown_64c_;
};

static inline unsigned short inline_ov000_0215cd44_2(GameObject* arg0) { return arg0->currentStats_->primaryStats.currMP; }
static inline unsigned short inline_ov024_021dc540_2(GameObject* arg0) { return arg0->currentStats_->primaryStats.maxMP; }

// USA: func_ov024_021fc37c
extern "C" ARM void func_ov024_021fc37c(struct Struct_ov024_021fc37c_3* arg0) {
	if (arg0->unknown_64c_->unknown_4_0_ != 0x202) return;
	GameObject* var0 = arg0->unknown_8_;
	unsigned short var1 = inline_ov024_021dc540_2(arg0->unknown_8_);
	float var2 = (float)inline_ov000_0215cd44_2(var0) / (float)var1;
	float var3 = 0.8f;
	int var4 = 0;
	if (arg0->unknown_6_ == 2) {
		var4 = 1;
	} else if (arg0->unknown_6_ == 0) {
		return;
	} else if (arg0->unknown_c_ >= 3) {
		var3 = 0.6f;
		var4 = 1;
	}
	if (func_ov024_021fc498((struct Struct_ov024_021fc37c*)var0) <= 2) {
		var3 = 0.8f;
		var4 = 1;
	}
	if (var2 >= var3) return;
	if (!var4) return;
	if (!func_ov024_021fe698(arg0, 0x12)) return;
	if (((unsigned char*)arg0->unknown_8_->currentStats_)[0x24] >= 3) return;
	char var5[0xc8];
	memset(var5, 0, 0xc8);
	*(float*)(var5 + 0xc4) = 1000.0f;
	func_ov024_021f9874(arg0, var5, 0, 0);
}
