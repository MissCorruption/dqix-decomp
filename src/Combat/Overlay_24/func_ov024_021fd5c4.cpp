#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_021fa76c;
extern "C" int func_ov024_021fa76c(struct Struct_021fa76c* arg0);
extern "C" int func_020883ac(unsigned char* arg0);
struct Struct_ov024_021de124;
extern "C" int func_ov024_021de25c(struct Struct_ov024_021de124* arg0);
extern "C" void func_ov024_021fd088(void* arg0, float arg1, int arg2);
struct Struct_ov024_021fd1bc;
extern "C" void func_ov024_021fe6b4(struct Struct_ov024_021fd1bc* arg0, int arg1);

struct Struct_ov024_021fd5c4 { unsigned int unknown_0_0_ : 7; unsigned int unknown_0_7_ : 7; };
struct Struct_ov024_021fd5c4_2 { char unknown_0_[0x14]; struct Struct_ov024_021fd5c4 unknown_14_; };

struct Struct_ov024_021fd5c4_3 {
	char unknown_0_[0x64c];
	struct Struct_ov024_021fd5c4_2* unknown_64c_;
	char unknown_650_[0x668 - 0x64c - 4];
	GameObject* unknown_668_;
};

// USA: func_ov024_021fd5c4
extern "C" ARM void func_ov024_021fd5c4(struct Struct_ov024_021fd5c4_3* arg0) {
	GameObject* var0 = arg0->unknown_668_;
	if (!func_ov024_021fa76c((struct Struct_021fa76c*)var0)) return;
	if (!func_020883ac((unsigned char*)var0->currentStats_)) return;
	if (func_ov024_021de25c((struct Struct_ov024_021de124*)var0)) return;
	float var1 = (float)arg0->unknown_64c_->unknown_14_.unknown_0_7_;
	unsigned char var2 = *(unsigned char*)((char*)var0->currentStats_ + 0x4a);
	float var3 = var1 * ((float)var2 / 100.0f);
	if (var3 > 100.0f) var3 = 100.0f;
	func_ov024_021fe6b4((struct Struct_ov024_021fd1bc*)arg0, 1);
	func_ov024_021fd088(arg0, var3, 7);
}
