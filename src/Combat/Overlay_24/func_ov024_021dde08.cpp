#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_02087f24;
struct Struct_02087f78;
extern "C" int func_02087f24(struct Struct_02087f24* arg0, int arg1);
extern "C" int func_02087f78(struct Struct_02087f78* arg0, int arg1);
extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov024_021e8bf0(void* arg0, void* arg1, unsigned short* arg2);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov024_021dde08_2 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};
struct Struct_ov024_021dde08_3 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021dde08_4 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; };
struct Struct_ov024_021dde08 {
    char unknown_0_[0x20];
    struct Struct_ov024_021dde08_2 unknown_20_;
    struct Struct_ov024_021dde08_2 unknown_24_;
    char unknown_28_[0x30 - 0x28];
    short unknown_30_;
};

// USA: func_ov024_021dde08
extern "C" ARM void* func_ov024_021dde08(struct Struct_ov024_021dde08_4* arg0, int arg1, int arg2, struct Struct_ov024_021dde08* arg3, int arg4, int arg5, unsigned char arg6) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	int var1 = 0;
	if (arg6 != 0) {
		int var2 = arg3->unknown_30_;
		if (var2 < -2) var2 = -2;
		if (var2 > 2) var2 = 2;
		int var3 = 0;
		if (var2 < 0) var3 = 1;
		if (func_02087f24((struct Struct_02087f24*)var0->currentStats_, (unsigned char)var3)) {
			func_02087f78((struct Struct_02087f78*)var0->currentStats_, (signed char)var2);
			var1 = 1;
		}
	}
	unsigned short var4 = 0;
	if (var1 != 0) {
		var4 = func_ov024_021da644(arg2, arg3->unknown_20_.unknown_2_4_, arg3->unknown_24_.unknown_0_0_);
	} else {
		var4 = func_ov024_021da644(arg2, arg3->unknown_24_.unknown_1_2_, arg3->unknown_24_.unknown_2_4_);
	}
	void* var5 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var5) return 0;
	func_ov024_021e8bf0(arg0, arg0->unknown_c_, &var4);
	func_ov000_0215a88c(arg0->unknown_10_, var5, var4);
	struct Struct_ov024_021dde08_3* var6 = (struct Struct_ov024_021dde08_3*)((char*)arg0->unknown_c_ + 0x1c);
	func_ov000_0215cd44(arg0->unknown_10_, var5, var0, 0, 0, 0, var6->unknown_0_7_ != 0);
	return var5;
}
