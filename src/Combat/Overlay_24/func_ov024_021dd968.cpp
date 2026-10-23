#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_02087d24;
struct Struct_02087d78;
extern "C" int func_02087d24(struct Struct_02087d24* arg0, int arg1);
extern "C" int func_02087d78(struct Struct_02087d78* arg0, int arg1);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov024_021dd968 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021dd968_2 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; char unknown_14_[0x61]; unsigned char unknown_75_; };
struct Struct_ov024_021dd968_3 { char unknown_0_[0x30]; short unknown_30_; };

extern "C" int func_ov024_021e97f4(struct Struct_ov024_021dd968_2* arg0, int arg1, struct Struct_ov024_021dd968_3* arg2, unsigned char arg3, signed char arg4, unsigned char arg5, unsigned char arg6);
extern "C" void func_ov024_021e8bf0(void* arg0, void* arg1, unsigned short* arg2);

// USA: func_ov024_021dd968
extern "C" ARM void* func_ov024_021dd968(struct Struct_ov024_021dd968_2* arg0, int arg1, int arg2, struct Struct_ov024_021dd968_3* arg3, int arg4, int arg5, unsigned char arg6) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	unsigned char var1 = 0;
	int var2 = 0;
	int var3 = 0;
	int var4 = arg3->unknown_30_;
	if (var4 < -2) var4 = -2;
	if (var4 > 2) var4 = 2;
	if (var4 < 0) var3 = 1;
	if (func_02087d24((struct Struct_02087d24*)var0->currentStats_, (unsigned char)var3) && arg6 != 0) {
		var2 = func_02087d78((struct Struct_02087d78*)var0->currentStats_, (signed char)var4);
		var1 = 1;
	} else {
		arg0->unknown_75_ = 0;
	}
	void* var5 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var5) return 0;
	unsigned short var6 = func_ov024_021e97f4(arg0, arg2, arg3, var3, var2, var1, arg6);
	func_ov024_021e8bf0(arg0, arg0->unknown_c_, &var6);
	func_ov000_0215a88c(arg0->unknown_10_, var5, var6);
	struct Struct_ov024_021dd968* var7 = (struct Struct_ov024_021dd968*)((char*)arg0->unknown_c_ + 0x1c);
	func_ov000_0215cd44(arg0->unknown_10_, var5, var0, 0, 0, 0, var7->unknown_0_7_ != 0);
	return var5;
}
