#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" unsigned char func_020100b0(GameState* arg0);
extern "C" void func_ov017_021d035c(unsigned char arg0, unsigned char arg1, unsigned char arg2);
extern "C" int func_ov001_02154c64(void* arg0);
extern "C" void func_ov001_021539d8(void* arg0);
extern "C" int func_ov001_02153948(unsigned short arg0);

struct Struct_ov001_02154de4 {
	unsigned char unknown_0_[0x4a];
	unsigned short unknown_4a_;
#if defined(jpn)
	unsigned char unknown_4c_[0x104 - 0x4c];
#else
	unsigned char unknown1_4c_[0x108 - 0x4c];
#endif
	unsigned char unknown_108_;
};

// USA: func_ov001_02154de4
extern "C" ARM int func_ov001_02154de4(struct Struct_ov001_02154de4* arg0) {
	if (func_0202b7d8((int*)func_0202ae18()) != 0) {
		GameState* var0 = GameState::GetInstance();
		unsigned char var1 = func_020100b0(var0);
		func_ov017_021d035c(1, var1 & 0xff, arg0->unknown_108_);
	}
	if (func_ov001_02154c64(arg0) != 0) {
		return 0x11;
	}
	func_ov001_021539d8(arg0);
	func_ov001_02153948(arg0->unknown_4a_);
	return 4;
}
