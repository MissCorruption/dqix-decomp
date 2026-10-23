#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int func_020890c0(unsigned char* arg0);
extern "C" void func_020890d4(unsigned char* arg0);
extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov024_021e1580 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};
struct Struct_ov024_021e1580_2 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021e1580_3 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; char unknown_14_[0x6e - 0x14]; unsigned char unknown_6e_; };
struct Struct_ov024_021e1580_4 { unsigned int unknown_0_0_ : 12; unsigned int unknown_1_4_ : 20; };
struct Struct_ov024_021e1580_5 {
    char unknown_0_[4];
    struct Struct_ov024_021e1580_4 unknown_4_;
    char unknown_8_[0x20 - 8];
    struct Struct_ov024_021e1580 unknown_20_;
    struct Struct_ov024_021e1580 unknown_24_;
};

// USA: func_ov024_021e1580
extern "C" ARM void* func_ov024_021e1580(struct Struct_ov024_021e1580_3* arg0, int arg1, int arg2, struct Struct_ov024_021e1580_5* arg3, int arg4, int arg5, unsigned char arg6) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	int var1 = func_020890c0((unsigned char*)var0->currentStats_);
	unsigned short var2;
	if (var1 != 0 && arg6 != 0) {
		func_020890d4((unsigned char*)var0->currentStats_);
		var2 = func_ov024_021da644(arg2, arg3->unknown_20_.unknown_2_4_, arg3->unknown_24_.unknown_0_0_);
	} else {
		var2 = func_ov024_021da644(arg2, arg3->unknown_24_.unknown_1_2_, arg3->unknown_24_.unknown_2_4_);
	}
	void* var3 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var3) return 0;
	int var4 = arg3->unknown_4_.unknown_0_0_;
	if (var4 == 0x1fb || arg0->unknown_6e_ == 0) {
		func_ov000_0215a88c(arg0->unknown_10_, var3, var2);
		arg0->unknown_6e_ = 1;
	}
	struct Struct_ov024_021e1580_2* var5 = (struct Struct_ov024_021e1580_2*)((char*)arg0->unknown_c_ + 0x1c);
	func_ov000_0215cd44(arg0->unknown_10_, var3, var0, 0, 0, 0, var5->unknown_0_7_ != 0);
	return var3;
}
