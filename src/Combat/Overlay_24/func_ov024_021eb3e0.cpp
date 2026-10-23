#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" unsigned short func_0202053c(void* arg0);

struct Struct_ov024_021eb3e0 {
	char unknown_0_[0x3b];
	unsigned char unknown_3b_0_ : 4;
	unsigned char unknown_3b_4_ : 4;
};

// USA: func_ov024_021eb3e0
extern "C" ARM void func_ov024_021eb3e0(void* arg0, int arg1) {
	GameState* var0 = GameState::GetInstance();
	GameObject* var1 = func_0200ff1c(var0, arg1);
	if (var1 == NULL) {
		return;
	}
	struct Struct_ov024_021eb3e0* var2;
	unsigned short var3 = func_0202053c(var1);
	if (var3 >= 0x4b) {
		var2 = (struct Struct_ov024_021eb3e0*)var1->currentStats_;
		var2->unknown_3b_4_ = 0xa;
		return;
	}
	var3 = func_0202053c(var1);
	if (var3 >= 0x32) {
		var2 = (struct Struct_ov024_021eb3e0*)var1->currentStats_;
		var2->unknown_3b_4_ = 0x9;
		return;
	}
	var3 = func_0202053c(var1);
	if (var3 >= 0x19) {
		var2 = (struct Struct_ov024_021eb3e0*)var1->currentStats_;
		var2->unknown_3b_4_ = 0x8;
	} else {
		var2 = (struct Struct_ov024_021eb3e0*)var1->currentStats_;
		var2->unknown_3b_4_ = 0x7;
	}
}
