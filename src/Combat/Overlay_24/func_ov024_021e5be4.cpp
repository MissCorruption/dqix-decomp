#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov000_0215fd24(int arg0, int arg1);
extern "C" GameObject* func_0200ff58(GameState* arg0, int arg1);

struct Struct_ov024_021e5be4 { char unknown_0_[0x10]; void* unknown_10_; };
struct Struct_ov024_021e5be4_2 { char unknown_0_[0x32]; short unknown_32_; };

// USA: func_ov024_021e5be4
extern "C" ARM void func_ov024_021e5be4(struct Struct_ov024_021e5be4* arg0, int arg1, struct Struct_ov024_021e5be4_2* arg2, int arg3) {
	GameState* var0 = GameState::GetInstance();
	void* var1 = func_02010828(var0);
	if (func_ov000_0215fd24((int)arg0->unknown_10_, arg1)) {
		*(int*)((char*)var1 + 0xf6c) -= arg2->unknown_32_;
		return;
	}
	int var2;
	int* var3;
	int var4;
	if (func_0200ff58(var0, arg1) != 0) {
		var4 = 0;
		var2 = *(int*)((char*)arg0->unknown_10_ + 0x8000 + 0xe84);
		var3 = (int*)((char*)arg0->unknown_10_ + 0x284 + 0x8c00);
	} else {
		var3 = (int*)((char*)arg0->unknown_10_ + 0x284 + 0x8c00);
		var2 = var3[arg1];
		var4 = arg1;
	}
	var3[(short)var4] = var2 - arg2->unknown_32_;
}
