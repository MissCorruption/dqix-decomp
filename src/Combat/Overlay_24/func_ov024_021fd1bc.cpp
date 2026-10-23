#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_021fa76c;
extern "C" int func_ov024_021fa76c(struct Struct_021fa76c* arg0);

struct Struct_02088418;
extern "C" int func_02088418(struct Struct_02088418* arg0, int arg1, int arg2);

struct Struct_ov024_021da670_8;
extern "C" int func_ov024_021da9c8(struct Struct_ov024_021da670_8* arg0);

struct Struct_ov024_021fd1bc;
extern "C" void func_ov024_021fe6b4(struct Struct_ov024_021fd1bc* arg0, int arg1);

extern "C" void func_ov024_021fd088(void* arg0, float arg1, int arg2);

struct Struct_ov024_021fd1bc_2 { unsigned int unknown_0_0_ : 7; unsigned int unknown_0_7_ : 7; };
struct Struct_ov024_021fd1bc_3 {
	char unknown_0_[4];
	unsigned int unknown_4_0_ : 12;
	char unknown_6_[0x14 - 8];
	struct Struct_ov024_021fd1bc_2 unknown_14_;
	char unknown_18_[0x30 - 0x18];
	short unknown_30_;
	short unknown_32_;
};

struct Struct_ov024_021fd1bc_4 {
	char unknown_0_[0xa];
	unsigned short : 11;
	unsigned short unknown_b_3_ : 1;
	unsigned short : 4;
};

struct Struct_ov024_021fd1bc_5 {
	char unknown_0_[0x64c];
	struct Struct_ov024_021fd1bc_3* unknown_64c_;
	char unknown_650_[0x668 - 0x64c - 4];
	GameObject* unknown_668_;
};

// USA: func_ov024_021fd1bc
extern "C" ARM void func_ov024_021fd1bc(struct Struct_ov024_021fd1bc_5* arg0) {
	GameObject* var0 = arg0->unknown_668_;
	if (!func_ov024_021fa76c((struct Struct_021fa76c*)var0)) return;
	struct Struct_ov024_021fd1bc_3* var1 = arg0->unknown_64c_;
	int var2 = var1->unknown_32_ & 0xff;
	unsigned short var3 = var1->unknown_4_0_;
	if (!func_02088418((struct Struct_02088418*)var0->currentStats_, var2, var3)) return;
	if (func_ov024_021da9c8((struct Struct_ov024_021da670_8*)var0)) return;
	var1 = arg0->unknown_64c_;
	if (var1->unknown_30_ == 2 && (var0->obj3D_.unknown_0_ & 0x400)) {
		struct Struct_ov024_021fd1bc_4* var4 = *(struct Struct_ov024_021fd1bc_4**)((char*)var0 + 0x144);
		if (var4 && var4->unknown_b_3_) return;
	}
	float var5 = (float)var1->unknown_14_.unknown_0_7_;
	unsigned char var6 = *(unsigned char*)((char*)var0->currentStats_ + 0x4c);
	float var7 = var5 * ((float)var6 / 100.0f);
	if (var7 > 100.0f) var7 = 100.0f;
	func_ov024_021fe6b4((struct Struct_ov024_021fd1bc*)arg0, 1);
	func_ov024_021fd088(arg0, var7, 8);
}
