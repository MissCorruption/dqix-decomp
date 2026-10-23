#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov024_021dfe9c { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; int unknown_14_; };
struct Struct_ov024_021dfe9c_2 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };

// USA: func_ov024_021dfe9c
extern "C" ARM void* func_ov024_021dfe9c(struct Struct_ov024_021dfe9c* arg0, int arg1, int arg2) {
	GameObject* var0 = func_ov000_021536f8((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	void* var1 = *(void**)((char*)var0 + 0x148);
	if (!var1) return 0;
	*(unsigned char*)((char*)var0 + 0x17e) = 1;
	arg0->unknown_14_ += 1;
	void* var2 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var2) return 0;
	struct Struct_ov024_021dfe9c_2* var3 = (struct Struct_ov024_021dfe9c_2*)((char*)arg0->unknown_c_ + 0x1c);
	func_ov000_0215cd44(arg0->unknown_10_, var2, var0, 0, 0, 0, var3->unknown_0_7_ != 0);
	return var2;
}
