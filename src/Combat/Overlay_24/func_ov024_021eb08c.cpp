#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);
extern "C" int func_02088dd8(unsigned char* arg0);
extern "C" void func_02088e48(unsigned char* arg0, unsigned char arg1);
extern "C" void func_020488ac(unsigned char* arg0, int arg1);
extern "C" int func_020100a8(GameState* arg0);
extern "C" int func_020ac4c0(void* arg0);
struct Struct_020a056c;
extern "C" void func_020a056c(struct Struct_020a056c* arg0, unsigned int arg1);
extern "C" int func_020ac494(void* arg0);

struct Struct_ov024_021eb08c { char unknown_0_[0x10]; struct Random* unknown_10_; };
struct Struct_ov024_021eb08c_2 {
	char unknown_0_[0x24];
	unsigned int unknown_24_0_ : 7;
	unsigned int unknown_24_7_ : 7;
	unsigned int unknown_25_6_ : 7;
	unsigned int unknown_26_5_ : 7;
	unsigned int : 4;
	unsigned char unknown_28_;
	unsigned char unknown_29_;
};

static inline int inline_ov024_021eb08c(int arg0) {
	return arg0 >= 0 && arg0 <= 3;
}

// USA: func_ov024_021eb08c
extern "C" ARM int func_ov024_021eb08c(struct Struct_ov024_021eb08c* arg0, int arg1, int arg2, unsigned int arg3) {
	struct Random* var0;
	GameObject* var1 = func_ov000_021536f8((int)arg0->unknown_10_, arg2);
	if (!var1) return 0;
	struct Struct_ov024_021eb08c_2* var2 = *(struct Struct_ov024_021eb08c_2**)((char*)var1 + 0x148);
	if (!var2) return 0;
	if (!inline_ov024_021eb08c(arg1)) return 0;
	var0 = arg0->unknown_10_;
	unsigned int var3 = NextRandomMax(var0, 100);
	if (!func_02088dd8((unsigned char*)var1->currentStats_)) return 0;
	int var4 = NextRandomBetween(var0, var2->unknown_28_, var2->unknown_29_);
	int var5 = 0;
	if (arg3 == var2->unknown_24_0_) {
		if (var3 < var2->unknown_24_7_) {
			func_02088e48((unsigned char*)var1->currentStats_, (unsigned char)var4);
			func_020488ac((unsigned char*)var1, 1);
			var5 = 1;
			*(short*)((char*)var1->currentStats_ + 0x2e) = arg1;
		}
	} else if (arg3 == var2->unknown_25_6_) {
		if (var3 < var2->unknown_26_5_) {
			func_02088e48((unsigned char*)var1->currentStats_, (unsigned char)var4);
			func_020488ac((unsigned char*)var1, 1);
			var5 = 1;
			*(short*)((char*)var1->currentStats_ + 0x2e) = arg1;
		}
	}
	if (var5 && arg1 == func_020100a8(GameState::GetInstance())) {
		char var6[0xb0];
		func_020ac4c0(var6);
		func_020a056c((struct Struct_020a056c*)var6, 1);
		func_020ac494(var6);
	}
	return var5;
}
