#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021ccb58 {
	unsigned char unknown_0_;
	char unknown_1_[3];
	unsigned int unknown_4_[3];
	unsigned short unknown_10_;
	unsigned char unknown_12_;
};

// USA: func_ov017_021ccb58
extern "C" ARM void func_ov017_021ccb58(int arg0, int arg1) {
	GameState* var0 = GameState::GetInstance();
	GameObject* var1 = func_0200ff1c(var0, arg0);
	if (!var1) return;
	unsigned char* var2 = (unsigned char*)func_02053c6c((unsigned char*)var1);
	if (!var2) return;

	void* var3 = func_0202ae24();
	Struct_ov017_021ccb58 var4;
	var4.unknown_0_ = 0xd;
	var4.unknown_10_ = (unsigned short)arg0;
	var4.unknown_12_ = (unsigned char)arg1;
	unsigned char var5 = 0;
	while (var5 < 3) {
		unsigned int var6 = *(unsigned int*)(var2 + (var5 + arg1) * 4 + 0x138);
		var4.unknown_4_[var5] = var6;
		var5++;
	}
	func_0205e330(var3, &var4, 0);
}
