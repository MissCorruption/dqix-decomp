#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02084a64(unsigned char* arg0, int arg1);
extern "C" void func_02083e28(unsigned char* arg0, int arg1);
extern "C" void func_02089494(char* arg0, char* arg1, char* arg2);
void ApplyCombatantBuffs(int world, int id);
extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov024_021de54c_2 {
	unsigned int unknown_0_0_ : 10;
	unsigned int unknown_1_2_ : 10;
	unsigned int unknown_2_4_ : 10;
	unsigned int unknown_3_6_ : 2;
};

struct Struct_ov024_021de54c_3 { char unknown_0_[0x1c]; unsigned char unknown_1c_0_ : 7; unsigned char unknown_1c_7_ : 1; };
struct Struct_ov024_021de54c_4 { char unknown_0_[0xc]; struct Struct_ov024_021de54c_3* unknown_c_; void* unknown_10_; int unknown_14_; };
struct Struct_ov024_021de54c_5 {
	char unknown_0_[4];
	unsigned int unknown_4_0_ : 12;
	unsigned int unknown_5_4_ : 20;
	char unknown_8_[0x18];
	struct Struct_ov024_021de54c_2 unknown_20_;
	struct Struct_ov024_021de54c_2 unknown_24_;
};
struct Struct_ov024_021de54c {
	char unknown_0_[0x130];
	char* unknown_130_;
	char* unknown_134_;
	char* unknown_138_;
#if defined(jpn)
	char unknown_13c_[8];
#else
	char unknown1_13c_[0x14];
#endif

	unsigned char* unknown_150_;
};

// USA: func_ov024_021de54c
extern "C" ARM void* func_ov024_021de54c(struct Struct_ov024_021de54c_4* arg0, int arg1, int arg2, struct Struct_ov024_021de54c_5* arg3) {
	struct Struct_ov024_021de54c* var0 = (struct Struct_ov024_021de54c*)func_0200ff1c(GameState::GetInstance(), arg2);
	if (!var0) return 0;
	unsigned short var1;
	if (func_02084a64(var0->unknown_150_, arg3->unknown_4_0_) > 0) {
		var1 = func_ov024_021da644(arg2, arg3->unknown_20_.unknown_2_4_, arg3->unknown_24_.unknown_0_0_);
		func_02083e28(var0->unknown_150_, 0);
		func_02089494(var0->unknown_138_, var0->unknown_130_, var0->unknown_134_);
		ApplyCombatantBuffs((int)arg0->unknown_10_, arg2);
		arg0->unknown_14_++;
	} else {
		var1 = func_ov024_021da644(arg2, arg3->unknown_24_.unknown_1_2_, arg3->unknown_24_.unknown_2_4_);
	}
	void* var2 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var2) return 0;
	func_ov000_0215a88c(arg0->unknown_10_, var2, var1);
	func_ov000_0215cd44(arg0->unknown_10_, var2, var0, 0, 0, 0, arg0->unknown_c_->unknown_1c_7_ != 0);
	return var2;
}
