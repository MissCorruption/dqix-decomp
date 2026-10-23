#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

extern "C" int func_ov024_021fe698(void* arg0, int arg1);
extern "C" void func_ov024_021f9874(void* arg0, void* arg1, int arg2, int arg3);

struct Struct_ov024_021fce14 {
	char unknown_0_[4];
	short unknown_4_;
	unsigned char unknown_6_;
	char unknown_7_;
	GameObject* unknown_8_;
	int unknown_c_;
};

// USA: func_ov024_021fce14
extern "C" ARM void func_ov024_021fce14(struct Struct_ov024_021fce14* arg0) {
	int var0 = 0;
	if (arg0->unknown_6_ == 2) var0 = 1;
	if (arg0->unknown_6_ == 0) return;
	if (arg0->unknown_c_ >= 3) var0 = 1;
	if (!var0) return;
	if (!func_ov024_021fe698(arg0, 0x12)) return;
	if (*(unsigned char*)((char*)arg0->unknown_8_->currentStats_ + 0x24) >= 1) return;
	char var1[0xc8];
	memset(var1, 0, 0xc8);
	*(float*)(var1 + 0xc4) = 1000.0f;
	func_ov024_021f9874(arg0, var1, 0, (unsigned char)arg0->unknown_4_);
}
