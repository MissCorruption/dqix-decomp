#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_ov024_021fd088(void* arg0, float arg1, int arg2);
struct Struct_ov024_021fd1bc;
extern "C" void func_ov024_021fe6b4(struct Struct_ov024_021fd1bc* arg0, int arg1);

struct Struct_ov024_021fd2b4 { unsigned int unknown_0_0_ : 7; unsigned int unknown_0_7_ : 7; };
struct Struct_ov024_021fd2b4_2 { char unknown_0_[0x14]; struct Struct_ov024_021fd2b4 unknown_14_; char unknown_18_[0x1a]; short unknown_32_; };

struct Struct_ov024_021fd2b4_3 {
	char unknown_0_[0x64c];
	struct Struct_ov024_021fd2b4_2* unknown_64c_;
	char unknown_650_[0x668 - 0x64c - 4];
	GameObject* unknown_668_;
};

// USA: func_ov024_021fd2b4
extern "C" ARM void func_ov024_021fd2b4(struct Struct_ov024_021fd2b4_3* arg0) {
	struct ModifiableCombatStats* var0 = arg0->unknown_668_->currentStats_;
	if (var0->attackBuff <= -2) return;
	short var1;
	unsigned char var2 = *(unsigned char*)((char*)var0 + 0x4f);
	if (var2 == 0) return;
	struct Struct_ov024_021fd2b4_2* var3 = arg0->unknown_64c_;
	var1 = var3->unknown_32_;
	float var4 = (float)var3->unknown_14_.unknown_0_7_;
	float var5 = var4 * ((float)var2 / 100.0f);
	if (var5 > 100.0f) var5 = 100.0f;
	if (var1 >= 0) return;
	func_ov024_021fe6b4((struct Struct_ov024_021fd1bc*)arg0, 0xd);
	func_ov024_021fd088(arg0, var5, 0x11);
}
