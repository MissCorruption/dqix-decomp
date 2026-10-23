#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov024_021fea1c { int unknown_0_[2]; };

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);
extern "C" void* func_ov000_02160130(void);
extern "C" int func_ov000_0215fb54(int arg0, int arg1, struct Struct_ov024_021fea1c* arg2);
extern "C" void* func_ov000_02162d88(void* arg0, int arg1);

struct Struct_ov024_021f45c8 {
	unsigned char unknown_0_;
	unsigned char unknown_1_0_ : 4;
	unsigned char unknown_1_4_ : 2;
	unsigned char unknown_1_6_ : 2;
	char unknown_2_[2];
	unsigned short unknown_4_;
	char unknown_6_[8];
	unsigned char unknown_e_0_ : 4;
	unsigned char unknown_e_4_ : 4;
	char unknown_f_[0x18 - 0xf];
};
struct Struct_ov024_021f45c8_2 { int unknown_0_; };
struct Struct_ov024_021f45c8_3 { unsigned char unknown_0_; unsigned char unknown_1_0_ : 4; unsigned char unknown_1_4_ : 2; unsigned char unknown_1_6_ : 2; };
struct Struct_ov024_021f45c8_4 {
	char unknown_0_[4];
	unsigned int unknown_4_0_ : 12;
	unsigned int unknown_5_4_ : 20;
	char unknown_8_[0x18 - 8];
	unsigned int unknown_18_0_ : 5;
	unsigned int unknown_18_5_ : 7;
	unsigned int unknown_19_4_ : 20;
};
extern struct Struct_ov024_021fea1c data_ov024_021fea1c[];

// USA: func_ov024_021f45c8
extern "C" ARM int func_ov024_021f45c8(struct Struct_ov024_021f45c8_2* arg0, int arg1, struct Struct_ov024_021f45c8_4* arg2, int* arg3, short* arg4) {
	GameObject* var0;
	void* var1;
	int var2;
	int var3;
	var0 = func_ov000_021536f8(arg0->unknown_0_, arg1);
	if (!var0) return 0;
	var1 = func_ov000_02160130();
	if (!var1) return 0;
	struct Struct_ov024_021f45c8* var4 = (struct Struct_ov024_021f45c8*)((char*)arg0->unknown_0_ + 0x81b0);
	if (!var4) return 0;
	if (arg2->unknown_18_5_ == 0xc) {
		struct Struct_ov024_021fea1c var5;
		var5.unknown_0_[1] = data_ov024_021fea1c[63].unknown_0_[1];
		var5.unknown_0_[0] = data_ov024_021fea1c[63].unknown_0_[0];
		var2 = func_ov000_0215fb54(arg0->unknown_0_, arg2->unknown_4_0_, &var5);
		for (var3 = 0; var3 < var2; var3++) {
			if (!func_ov000_02162d88(var1, var5.unknown_0_[var3])) return 0;
			if (((struct Struct_ov024_021f45c8_3*)var4)->unknown_1_4_ >= 3) {
				int var6 = 0;
				int var7;
				for (var7 = 0; var7 < var4->unknown_1_4_; var7++) {
					if (var4[var7].unknown_4_ == var5.unknown_0_[var3]) {
						var6 = 1;
						break;
					}
				}
				if (!var6) {
					for (var7 = 0; var7 < var4->unknown_1_4_; var7++) {
						if (var4[var7].unknown_e_4_ == 0) {
							var6 = 1;
							break;
						}
					}
					if (!var6) return 0;
				}
			}
		}
	}
	int var8 = 5;
	if (var0->obj3D_.unknown_2_ == 0x10a) var8 = 8;
	if (var8 <= var4->unknown_1_0_) return 0;
	*arg3 = 1;
	*arg4 = arg1;
	return 1;
}
