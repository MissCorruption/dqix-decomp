#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_02070b6c_3;
struct Struct_ov024_021e1cbc_4 { char unknown_0_[8]; void* unknown_8_; };
extern "C" Struct_ov024_021e1cbc_4* func_02070fd0(Struct_02070b6c_3* arg0, int arg1);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov024_021e1cbc_5 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};
struct Struct_ov024_021e1cbc_6 { char unknown_0_[0x20]; Struct_ov024_021e1cbc_5 unknown_20_; Struct_ov024_021e1cbc_5 unknown_24_; };

struct Struct_ov024_021e1cbc_7 { unsigned short unknown_0_; char unknown_2_[0x18 - 2]; };
struct Struct_ov024_021e1cbc_8 { unsigned char unknown_0_0_ : 4; unsigned char unknown_0_4_ : 2; unsigned char unknown_0_6_ : 2; };
struct Struct_ov024_021e1cbc_9 {
    char unknown_0_[0x81b1];
    Struct_ov024_021e1cbc_8 unknown_81b1_;
    char unknown_81b2_[2];
    Struct_ov024_021e1cbc_7 unknown_81b4_[4];
    char unknown_8214_[0x8e18 - 0x81b4 - 4 * 0x18];
    char* unknown_8e18_;
};

struct Struct_ov024_021e1cbc { char unknown_0_[0x1a]; unsigned short unknown_1a_; unsigned short unknown_1c_; };
struct Struct_ov024_021e1cbc_2 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021e1cbc_3 {
    char unknown_0_[4];
    Struct_ov024_021e1cbc* unknown_4_;
    char unknown_8_[4];
    void* unknown_c_;
    Struct_ov024_021e1cbc_9* unknown_10_;
    char unknown_14_[0x6e - 0x14];
    unsigned char unknown_6e_;
};

// USA: func_ov024_021e1cbc
extern "C" ARM void* func_ov024_021e1cbc(Struct_ov024_021e1cbc_3* arg0, int arg1, int arg2, Struct_ov024_021e1cbc_6* arg3) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	int var1 = 0;
	char* var2 = arg0->unknown_10_->unknown_8e18_;
	for (int var3 = 0; var3 < arg0->unknown_10_->unknown_81b1_.unknown_0_4_; var3++) {
		Struct_ov024_021e1cbc_4* var4 = func_02070fd0((Struct_02070b6c_3*)(var2 + 0x684), arg0->unknown_10_->unknown_81b4_[var3].unknown_0_);
		if (var4 && var4->unknown_8_) var1 = 1;
	}
	if (!var1) {
		arg0->unknown_4_->unknown_1c_ = 0x1f;
		arg0->unknown_4_->unknown_1a_ = 0x1f;
	} else {
		arg0->unknown_4_->unknown_1c_ = arg3->unknown_24_.unknown_0_0_;
		arg0->unknown_4_->unknown_1a_ = arg3->unknown_20_.unknown_2_4_;
	}
	arg0->unknown_6e_ = 1;
	void* var5 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var5) return 0;
	Struct_ov024_021e1cbc_2* var6 = (Struct_ov024_021e1cbc_2*)((char*)arg0->unknown_c_ + 0x1c);
	func_ov000_0215cd44(arg0->unknown_10_, var5, var0, 0, 0, 0, var6->unknown_0_7_ != 0);
	return var5;
}
