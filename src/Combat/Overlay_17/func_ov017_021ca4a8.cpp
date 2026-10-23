#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" int func_020100a8(GameState* arg0);

struct Struct_ov017_021ca4a8 {
	char unknown_0_[4];
	unsigned short unknown_4_;
	unsigned short unknown_6_;
	unsigned short unknown_8_;
	unsigned short unknown_a_;
	int unknown_c_;
	int unknown_10_;
};

// USA: func_ov017_021ca4a8
extern "C" ARM void func_ov017_021ca4a8(int arg0, struct Struct_ov017_021ca4a8* arg1, GameState* arg2, unsigned char* arg3) {
#if defined(jpn)
 enum {Enum_ov017_021ca4a8_1816=0x508};
#else
 enum {Enum_ov017_021ca4a8_1816=0x718};
#endif
	void* var0 = *(void**)(arg3 + 0x3000 + Enum_ov017_021ca4a8_1816);
	unsigned char* var1 = (unsigned char*)func_ov017_021b8478(var0);
	if (var1 == NULL) {
		return;
	}
	if (*(signed char*)(var1 + 0x2a) == func_020100a8(arg2)) {
		return;
	}
	if (*(unsigned short*)(var1 + 8) != arg1->unknown_4_) {
		return;
	}
	int var2 = arg1->unknown_6_ - 0xc0;
	if (var2 < 0) {
		return;
	}
	if (var2 >= 8) {
		return;
	}
	unsigned char* var3 = var1 + 0x158 + var2 * 0xa4;
	*(unsigned short*)(var3 + 0) = arg1->unknown_8_;
	*(unsigned short*)(var3 + 2) = arg1->unknown_a_;
	*(int*)(var3 + 0x14) = arg1->unknown_c_;
	*(int*)(var3 + 0x18) = arg1->unknown_10_;
}
