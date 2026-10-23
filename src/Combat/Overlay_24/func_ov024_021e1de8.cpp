#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);
extern "C" int func_02088e04(unsigned char* arg0);
extern "C" void func_02088e48(unsigned char* arg0, unsigned char arg1);
extern "C" void func_020488ac(unsigned char* arg0, int arg1);
extern "C" void func_ov000_0215a908(void* arg0, int arg1);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov024_021e1de8 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021e1de8_2 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; };
struct Struct_ov024_021e1de8_3 { char unknown_0_[0x28]; unsigned char unknown_28_; unsigned char unknown_29_; };

// USA: func_ov024_021e1de8
extern "C" ARM void* func_ov024_021e1de8(struct Struct_ov024_021e1de8_2* arg0, short arg1, int arg2) {
	GameObject* var0 = func_ov000_021536f8((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	struct Struct_ov024_021e1de8_3* var1 = *(struct Struct_ov024_021e1de8_3**)((char*)var0 + 0x148);
	if (!var1) return 0;
	if (func_02088e04((unsigned char*)var0->currentStats_)) {
		int var2 = NextRandomBetween((struct Random*)arg0->unknown_10_, var1->unknown_28_, var1->unknown_29_);
		if (var2 > 0) {
			func_02088e48((unsigned char*)var0->currentStats_, (unsigned char)var2);
			func_020488ac((unsigned char*)var0, 1);
			*(short*)((char*)var0->currentStats_ + 0x2e) = arg1;
			func_ov000_0215a908(arg0->unknown_10_, arg2);
		}
	}
	void* var3 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var3) return 0;
	struct Struct_ov024_021e1de8* var4 = (struct Struct_ov024_021e1de8*)((char*)arg0->unknown_c_ + 0x1c);
	func_ov000_0215cd44(arg0->unknown_10_, var3, var0, 0, 0, 0, var4->unknown_0_7_ != 0);
	return var3;
}
