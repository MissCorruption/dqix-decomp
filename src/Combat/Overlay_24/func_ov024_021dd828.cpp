#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int func_020883ac(unsigned char* arg0);
struct Struct_ov024_021dd828;
extern "C" int func_ov024_021e9320(struct Struct_ov024_021dd828* arg0, int arg1, int arg2);
extern "C" int func_ov024_021eb4b0(int arg0, int arg1, int arg2);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);
extern "C" void func_020883cc(unsigned char* arg0);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov024_021e8bf0(void* arg0, void* arg1, unsigned short* arg2);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, unsigned long long arg4, int arg5);

struct Struct_ov024_021dd828_2 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021dd828_3 { char unknown_0_[0x14]; int unknown_14_; };
struct Struct_ov024_021dd828_4 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; int unknown_14_; char unknown_18_[0x75 - 0x18]; unsigned char unknown_75_; };

// USA: func_ov024_021dd828
extern "C" ARM void* func_ov024_021dd828(struct Struct_ov024_021dd828_4* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, unsigned char arg6) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	int var1 = 0;
	if (func_020883ac((unsigned char*)var0->currentStats_) && arg6) {
		var1 = 1;
	} else {
		arg0->unknown_75_ = 0;
	}
	unsigned short var2 = func_ov024_021e9320((struct Struct_ov024_021dd828*)arg0, arg2, var1);
	union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var3;
	var3.unknown_0_ = 0;
	var3.unknown_4_ = 0;
	if (var1) {
		if (func_ov024_021eb4b0((int)arg0, ((struct Struct_ov024_021dd828_3*)var0->currentStats_)->unknown_14_, 0x20)) {
			func_ov000_02159eac(arg0->unknown_10_, &var3, 0x2b);
		}
		func_020883cc((unsigned char*)var0->currentStats_);
		func_ov000_02159eac(arg0->unknown_10_, &var3, 0x17);
		arg0->unknown_14_++;
	}
	void* var4 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var4) return 0;
	func_ov024_021e8bf0(arg0, arg0->unknown_c_, &var2);
	func_ov000_0215a88c(arg0->unknown_10_, var4, var2);
	struct Struct_ov024_021dd828_2* var5 = (struct Struct_ov024_021dd828_2*)((char*)arg0->unknown_c_ + 0x1c);
	func_ov000_0215cd44(arg0->unknown_10_, var4, var0, 0, var3.unknown1_0_, var5->unknown_0_7_ != 0);
	return var4;
}
