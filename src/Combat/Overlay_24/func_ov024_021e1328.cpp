#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov024_021e1328 {
	unsigned int unknown_0_0_ : 10;
	unsigned int unknown_1_2_ : 10;
	unsigned int unknown_2_4_ : 10;
	unsigned int unknown_3_6_ : 2;
};

struct Struct_ov024_021e1328_2 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021e1328_3 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; };
struct Struct_ov024_021e1328_4 { char unknown_0_[0x20]; struct Struct_ov024_021e1328 unknown_20_; struct Struct_ov024_021e1328 unknown_24_; };

// USA: func_ov024_021e1328
extern "C" ARM void* func_ov024_021e1328(struct Struct_ov024_021e1328_3* arg0, int arg1, int arg2, struct Struct_ov024_021e1328_4* arg3) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	unsigned short var1 = func_ov024_021da644(arg2, arg3->unknown_20_.unknown_2_4_, arg3->unknown_24_.unknown_0_0_);
	void* var2 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var2) return 0;
	func_ov000_0215a88c(arg0->unknown_10_, var2, var1);
	struct Struct_ov024_021e1328_2* var3 = (struct Struct_ov024_021e1328_2*)((char*)arg0->unknown_c_ + 0x1c);
	func_ov000_0215cd44(arg0->unknown_10_, var2, var0, 0, 0, 0, var3->unknown_0_7_ != 0);
	return var2;
}
