#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);
extern "C" void func_020488ac(unsigned char* arg0, int arg1);
extern "C" int func_ov024_021eb08c(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov000_0215a908(void* arg0, int arg1);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov024_021e05e4 { char unknown_0_[0x18]; int unknown_18_; };
struct Struct_ov024_021e04e0 { char unknown_0_[0x138]; struct Struct_ov024_021e05e4* unknown_138_; };
extern "C" int func_ov024_021e05e4(struct Struct_ov024_021e04e0* arg0);

struct Struct_ov024_021e04e0_2 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021e04e0_3 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; int unknown_14_; };

// USA: func_ov024_021e04e0
extern "C" ARM void* func_ov024_021e04e0(struct Struct_ov024_021e04e0_3* arg0, short arg1, int arg2) {
	GameObject* var0 = func_ov000_021536f8((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	if (func_ov024_021e05e4((struct Struct_ov024_021e04e0*)var0)) {
		*(short*)((char*)var0->currentStats_ + 0x2e) = arg1;
		func_020488ac((unsigned char*)var0, 1);
		func_ov000_0215a908(arg0->unknown_10_, arg2);
		*(unsigned char*)((char*)var0 + 0x182) = 1;
		arg0->unknown_14_++;
	} else if (func_ov024_021eb08c(arg0, arg1, arg2, 0x12) != 0) {
		func_ov000_0215a908(arg0->unknown_10_, arg2);
		*(unsigned char*)((char*)var0 + 0x182) = 1;
		arg0->unknown_14_++;
	}
	void* var1 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var1) return 0;
	struct Struct_ov024_021e04e0_2* var2 = (struct Struct_ov024_021e04e0_2*)((char*)arg0->unknown_c_ + 0x1c);
	func_ov000_0215cd44(arg0->unknown_10_, var1, var0, 0, 0, 0, var2->unknown_0_7_ != 0);
	return var1;
}
