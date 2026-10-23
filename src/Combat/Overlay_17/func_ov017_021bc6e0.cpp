#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02012fe4(GameState* arg0);

struct Struct_02061c04_10 {
	unsigned short unknown_0_;
	unsigned short unknown_2_;
	unsigned short unknown_4_;
	short unknown_6_;
	unsigned char unknown_8_;
	unsigned short unknown_a_;
	signed char unknown_c_;
	unsigned char unknown_d_;
	float unknown_10_;
};
extern "C" void func_ov017_021cd6d8(Struct_02061c04_10* arg0);

// USA: func_ov017_021bc6e0
extern "C" ARM void func_ov017_021bc6e0(char* arg0, unsigned char arg1, int arg2) {
	GameState* var0 = GameState::GetInstance();
	void* var1 = func_02012fe4(var0);
	Struct_02061c04_10 var2;
	var2.unknown_0_ = 0;
	var2.unknown_c_ = -1;
	var2.unknown_2_ = 0;
	var2.unknown_4_ = 0;
	var2.unknown_6_ = 0;
	var2.unknown_8_ = 0;
	var2.unknown_a_ = 0;
	var2.unknown_10_ = 0.0f;
	if (!(arg2 & 0x800)) {
		var2.unknown_0_ = *(unsigned short*)var1;
	}
	var2.unknown_2_ = *(unsigned short*)(arg0 + 0x16);
	var2.unknown_4_ = *(unsigned short*)(arg0 + 0x18);
	var2.unknown_8_ = 0;
	var2.unknown_a_ = *(unsigned short*)(arg0 + 0x1c);
	var2.unknown_6_ = *(short*)(arg0 + 0x52);
	var2.unknown_10_ = var0->GetDayTimer();
	var2.unknown_c_ = arg1;
	func_ov017_021cd6d8(&var2);
}
