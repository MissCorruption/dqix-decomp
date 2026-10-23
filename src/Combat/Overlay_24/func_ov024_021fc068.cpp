#include <globaldefs.h>
#include "Resource/ActionDataTables.h"
#include "std_library_functions.h"

struct Struct_02010088;
extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" int func_020a35e0(unsigned char* arg0, unsigned char arg1);
extern "C" int func_02010088(struct Struct_02010088* arg0);
struct Struct_ov024_021f6a1c;
extern "C" void func_ov024_021f6a1c(struct Struct_ov024_021f6a1c* arg0, void* arg1);
extern "C" void func_ov024_021f9874(void* arg0, void* arg1, int arg2, int arg3);

struct Struct_ov024_021fc068_5 {
	unsigned short unknown_0_;
	char unknown_2_[0x14 - 0x2];
	unsigned int unknown_14_;
};

struct Struct_ov024_021fc068_6 {
	char unknown_0_[4];
	short unknown_4_;
	char unknown_6_[0x138 - 0x6];
	struct Struct_ov024_021fc068_5* unknown_138_;
};

struct Struct_ov024_021fc068_6* GetCombatantByID(int unused, int id);

struct Struct_ov024_021fc068_7 {
	char unknown_0_[4];
	unsigned int unknown_4_0_ : 12;
	unsigned int unknown_5_4_ : 20;
	unsigned int unknown_8_0_ : 8;
	unsigned int unknown_9_0_ : 2;
	unsigned int unknown_9_2_ : 22;
	char unknown_c_[0x10 - 0xc];
	unsigned int unknown_10_;
	unsigned int unknown_14_0_ : 28;
	unsigned int unknown_17_4_ : 4;
};

struct Struct_ov024_021fc068 {
	char unknown_0_[0x8e18];
	unsigned char* unknown_8e18_;
};

struct Struct_ov024_021fc068_2 {
	struct Struct_ov024_021fc068* unknown_0_;
	short unknown_4_;
	char unknown_6_[2];
	struct Struct_ov024_021fc068_6* unknown_8_;
	char unknown_c_[0x128 - 0xc];
	int unknown_128_;
	char unknown_12c_[0x64c - 0x12c];
	struct Struct_ov024_021fc068_7* unknown_64c_;
};

struct Struct_ov024_021fc068_3 {
	float unknown_0_;
	unsigned char unknown_4_;
	unsigned char unknown_5_;
	unsigned char unknown_6_;
	unsigned char unknown_7_;
	unsigned char unknown_8_;
	char unknown_9_[3];
};

struct Struct_ov024_021fc068_4 {
	char unknown_0_[0xc4];
	float unknown_c4_;
};

// USA: func_ov024_021fc068
extern "C" ARM void func_ov024_021fc068(struct Struct_ov024_021fc068_2* arg0) {
	struct Struct_ov024_021fc068_6* var0 = arg0->unknown_8_;
	func_02053c6c((unsigned char*)var0);
	func_020797dc();
	struct Struct_ov024_021fc068_7* var1 = arg0->unknown_64c_;
	if (var1->unknown_9_0_ == 1) return;
	GetCombatantByID((int)arg0->unknown_0_, (short)arg0->unknown_128_);
	float var2 = 50.0f;
	if (var1->unknown_4_0_ == 0x27) {
		var2 = 100.0f;
	} else if (var1->unknown_4_0_ == 0x26 || var1->unknown_4_0_ == 0x54) {
		var2 = 50.0f;
	}
	struct Struct_ov024_021fc068_4 var3;
	memset(&var3, 0, sizeof(var3));
	memset(&var3, 0, sizeof(var3));
	for (int var4 = 0; var4 < 4; var4++) {
		if (!func_020a35e0(arg0->unknown_0_->unknown_8e18_, var4)) continue;
		if (var1->unknown_17_4_ == 1 && var4 != arg0->unknown_4_) continue;
		struct Struct_ov024_021fc068_6* var5 = GetCombatantByID((int)arg0->unknown_0_, (short)var4);
		if (!var5) continue;
		if (!func_02010088((struct Struct_02010088*)var5)) continue;
		if ((var1->unknown_10_ & 0x400) && (var5->unknown_138_->unknown_14_ & 0x200)) continue;
		struct Struct_ov024_021fc068_3 var6;
		var6.unknown_0_ = (float)(var5->unknown_138_->unknown_0_ / 2);
		var6.unknown_5_ = 0;
		var6.unknown_6_ = var4;
		var6.unknown_7_ = (int)var2;
		var6.unknown_8_ = 5;
		func_ov024_021f6a1c((struct Struct_ov024_021f6a1c*)&var3, &var6);
		if (var1->unknown_17_4_ == 2 || var1->unknown_17_4_ == 1) {
			func_ov024_021f9874(arg0, &var3, 0, (unsigned char)var5->unknown_4_);
			memset(&var3, 0, sizeof(var3));
		}
	}
	if (var1->unknown_17_4_ == 4 || var1->unknown_17_4_ == 3) {
		GetCombatantByID((int)arg0->unknown_0_, 0);
		int var7 = (unsigned char)var0->unknown_4_;
		if (var1->unknown_17_4_ == 3) var7 = 0xff;
		func_ov024_021f9874(arg0, &var3, 0, var7);
	}
}
