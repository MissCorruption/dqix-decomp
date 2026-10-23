#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02088540(unsigned char* arg0);
struct Struct_02088514;
extern "C" int func_02088514(struct Struct_02088514* arg0);
extern "C" void func_ov024_021fd088(void* arg0, float arg1, int arg2);
struct Struct_ov024_021fd1bc;
extern "C" void func_ov024_021fe6b4(struct Struct_ov024_021fd1bc* arg0, int arg1);

struct Struct_ov024_021fd358 { unsigned int unknown_0_0_ : 7; unsigned int unknown_0_7_ : 7; };
struct Struct_ov024_021fd358_2 { char unknown_0_[0x14]; struct Struct_ov024_021fd358 unknown_14_; };

struct Struct_ov024_021fd358_3 {
	char unknown_0_[0x64c];
	struct Struct_ov024_021fd358_2* unknown_64c_;
	char unknown_650_[0x668 - 0x64c - 4];
	GameObject* unknown_668_;
};

// USA: func_ov024_021fd358
extern "C" ARM void func_ov024_021fd358(struct Struct_ov024_021fd358_3* arg0) {
	GameObject* var0 = arg0->unknown_668_;
	if (!func_02088540((unsigned char*)var0->currentStats_)) return;
	if (func_02088514((struct Struct_02088514*)var0->currentStats_)) return;
	float var1 = (float)arg0->unknown_64c_->unknown_14_.unknown_0_7_;
	unsigned char var2 = *(unsigned char*)((char*)var0->currentStats_ + 0x4d);
	float var3 = var1 * ((float)var2 / 100.0f);
	if (var3 > 100.0f) var3 = 100.0f;
	func_ov024_021fe6b4((struct Struct_ov024_021fd1bc*)arg0, 1);
	func_ov024_021fd088(arg0, var3, 2);
}
