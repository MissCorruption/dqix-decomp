#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_02048150;
extern "C" int func_02086ef0(Struct_02048150* arg0, int arg1);
extern "C" void* func_02010828(GameState* arg0);
extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);
extern "C" void func_ov000_0215a8d4(unsigned char* arg0, int arg1);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, unsigned long long arg4, int arg5);

struct Struct_ov024_021dc0b8_3 {
	unsigned int unknown_0_0_ : 10;
	unsigned int unknown_1_2_ : 10;
	unsigned int unknown_2_4_ : 10;
	unsigned int unknown_3_6_ : 2;
};

struct Struct_ov024_021dc0b8_4 {
	char unknown_0_[4];
	unsigned int unknown_4_0_ : 12;
	unsigned int unknown_5_4_ : 20;
	char unknown_8_[0x20 - 0x8];
	struct Struct_ov024_021dc0b8_3 unknown_20_;
	struct Struct_ov024_021dc0b8_3 unknown_24_;
	char unknown_28_[0x32 - 0x28];
	short unknown_32_;
};

struct Struct_ov024_021dc0b8 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021dc0b8_2 { char unknown_0_[0xc]; char* unknown_c_; void* unknown_10_; int unknown_14_; };

extern "C" unsigned long long func_ov024_021e4b14(struct Struct_ov024_021dc0b8_2* arg0, int arg1, int arg2, struct Struct_ov024_021dc0b8_4* arg3, int arg4);
extern "C" unsigned short func_ov024_021e9018(struct Struct_ov024_021dc0b8_2* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov024_021e8bf0(void* arg0, void* arg1, unsigned short* arg2);

// USA: func_ov024_021dc0b8
extern "C" ARM void* func_ov024_021dc0b8(struct Struct_ov024_021dc0b8_2* arg0, int arg1, int arg2, struct Struct_ov024_021dc0b8_4* arg3, int arg4, int arg5, unsigned char arg6) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	unsigned short var1 = 0;
	unsigned long long var2 = 0;
	int var3 = ((struct Struct_ov024_021dc0b8*)(arg0->unknown_c_ + 0x1c))->unknown_0_7_ != 0;
	int var4 = 0;
	if (arg6 != 0) {
		var2 = func_ov024_021e4b14(arg0, arg1, arg2, arg3, 1);
		if (var2 != 0) {
			var1 = func_ov024_021da644(arg2, arg3->unknown_20_.unknown_2_4_, arg3->unknown_24_.unknown_0_0_);
			void* var5 = func_02010828(GameState::GetInstance());
			if (var3 && func_02086ef0((Struct_02048150*)var5, arg1) && arg3->unknown_4_0_ == 0xa9) {
				func_ov000_0215a8d4((unsigned char*)arg0->unknown_10_, 5);
			}
			arg0->unknown_14_++;
			var4 = 1;
		}
	}
	if (!var4) {
		var1 = func_ov024_021e9018(arg0, arg2, arg3->unknown_32_, 0);
		if (var1 == 0) {
			var1 = func_ov024_021da644(arg2, arg3->unknown_24_.unknown_1_2_, arg3->unknown_24_.unknown_2_4_);
		}
	}
	if (arg3->unknown_4_0_ == 0x20f) var1 = 0;
	void* var6 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var6) return 0;
	func_ov024_021e8bf0(arg0, arg0->unknown_c_, &var1);
	func_ov000_0215a88c(arg0->unknown_10_, var6, var1);
	struct Struct_ov024_021dc0b8* var7 = (struct Struct_ov024_021dc0b8*)(arg0->unknown_c_ + 0x1c);
	func_ov000_0215cd44(arg0->unknown_10_, var6, var0, 0, var2, var7->unknown_0_7_ != 0);
	return var6;
}
