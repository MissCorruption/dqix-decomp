#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_ov024_021fd088(void* arg0, float arg1, int arg2);
extern "C" void func_ov024_021fd104(void* arg0, int arg1);
struct Struct_ov024_021fd1bc;
extern "C" void func_ov024_021fe6b4(struct Struct_ov024_021fd1bc* arg0, int arg1);

struct Struct_ov024_021fd504 { unsigned int unknown_0_0_ : 7; unsigned int unknown_0_7_ : 7; };
struct Struct_ov024_021fd504_2 { char unknown_0_[0x14]; struct Struct_ov024_021fd504 unknown_14_; char unknown_18_[0x1a]; short unknown_32_; };

struct Struct_ov024_021fd504_3 {
	char unknown_0_[0x64c];
	struct Struct_ov024_021fd504_2* unknown_64c_;
	char unknown_650_[0x661 - 0x64c - 4];
	unsigned char unknown_661_;
	char unknown_662_[0x668 - 0x661 - 1];
	GameObject* unknown_668_;
};

// USA: func_ov024_021fd504
extern "C" ARM void func_ov024_021fd504(struct Struct_ov024_021fd504_3* arg0) {
	struct ModifiableCombatStats* var0 = arg0->unknown_668_->currentStats_;
	if (var0->defenseBuff <= -2) return;
	unsigned char var1 = *(unsigned char*)((char*)var0 + 0x50);
	if (var1 == 0) return;
	if (arg0->unknown_661_) {
		struct Struct_ov024_021fd504_2* var2 = arg0->unknown_64c_;
		float var3 = (float)var2->unknown_14_.unknown_0_7_;
		float var4 = var3 * ((float)var1 / 100.0f);
		if (var4 > 100.0f) var4 = 100.0f;
		if (var2->unknown_32_ >= 0) return;
		func_ov024_021fe6b4((struct Struct_ov024_021fd1bc*)arg0, 0xd);
		func_ov024_021fd088(arg0, var4, 0x12);
	} else {
		func_ov024_021fd104(arg0, 0x12);
	}
}
