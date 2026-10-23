#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int func_ov024_021eae14(void* arg0, int arg1);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov024_021df1e8 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021df1e8_2 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; int unknown_14_; };

// USA: func_ov024_021df1e8
extern "C" ARM void* func_ov024_021df1e8(struct Struct_ov024_021df1e8_2* arg0, int arg1, int arg2) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	if (func_ov024_021eae14(arg0, arg2) > 0) {
		arg0->unknown_14_ = arg0->unknown_14_ + 1;
	}
	void* var1 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var1) return 0;
	struct Struct_ov024_021df1e8* var2 = (struct Struct_ov024_021df1e8*)((char*)arg0->unknown_c_ + 0x1c);
	func_ov000_0215cd44(arg0->unknown_10_, var1, var0, 0, 0, 0, var2->unknown_0_7_ != 0);
	return var1;
}
