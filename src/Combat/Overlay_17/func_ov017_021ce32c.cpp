#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);
extern "C" int func_020546a8(void* arg0);
extern "C" int func_020546bc(void* arg0);
extern "C" int func_02039860(void* arg0);
extern "C" int func_02039874(void* arg0);
extern "C" GameObject* func_0200ff58(GameState* arg0, int arg1);

struct Struct_ov017_021ce32c {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	unsigned short unknown_4_;
	unsigned char unknown_6_;
	unsigned char unknown_7_;
	unsigned char unknown_8_;
	unsigned char unknown_9_;
	unsigned char unknown_a_;
	unsigned char unknown_b_[9];
};

// USA: func_ov017_021ce32c
extern "C" ARM void func_ov017_021ce32c(int arg0) {
#if defined(jpn)
 enum {Enum_ov017_021ce32c_722=0x2c6};
#else
 enum {Enum_ov017_021ce32c_722=0x2d2};
#endif
	void* var0 = func_0202ae24();
	GameObject* var1 = func_0200ff58(GameState::GetInstance(), arg0);
	if (var1 == NULL) {
		return;
	}
	Struct_ov017_021ce32c var2;
	var2.unknown_0_ = 0x26;
	var2.unknown_4_ = arg0;
	var2.unknown_6_ = func_020546a8(var1);
	var2.unknown_7_ = func_020546bc(var1);
	var2.unknown_8_ = func_02039860(var1);
	var2.unknown_9_ = func_02039874(var1);
	var2.unknown_a_ = *(unsigned char*)((char*)var1 + Enum_ov017_021ce32c_722);
	func_0205e330(var0, &var2, 0);
}
