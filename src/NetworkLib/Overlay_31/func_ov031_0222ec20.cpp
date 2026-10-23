#include <globaldefs.h>

extern "C" void func_ov031_022234d8(void* arg0, void* arg1);
extern "C" int func_ov031_02223478(void* arg0);
extern "C" int func_ov031_0223b61c(int arg0, int arg1, int arg2);
extern "C" void func_ov031_02234ea8(void* arg0);
extern "C" void func_ov031_02234f34();

extern "C" void LoadToMainObjStandardPalette(int, int, unsigned int);
extern "C" void LoadToMainBG3CharacterData(int, int, unsigned int);
extern "C" void LoadToMainBG2CharacterData(int, int, unsigned int);
extern "C" void LoadToMainBGStandardPalette(int, int, unsigned int);
extern "C" void LoadToMainBG3ScreenData(int, int, unsigned int);

struct Struct_ov031_02248fd3 { char unknown_0_[23]; };
struct Struct_ov031_02248fa8 { char unknown_0_[21]; };
struct Struct_ov031_02248fbd { char unknown_0_[22]; };
extern Struct_ov031_02248fd3 data_ov031_02248fd3;
extern Struct_ov031_02248fa8 data_ov031_02248fa8;
extern Struct_ov031_02248fbd data_ov031_02248fbd;

extern unsigned char data_ov031_0224bb0c[1];
extern unsigned char data_ov031_0224bb20[1];
extern unsigned char data_ov031_0224bb38[1];
extern unsigned char data_ov031_0224bb50[1];

struct Struct_ov031_0222ec20 { char unknown_0_[8]; int unknown_8_; int unknown_c_; int unknown_10_; void* unknown_14_; };
struct Struct_ov031_02290ca0_2 { char unknown_0_[8]; Struct_ov031_0222ec20* unknown_8_; };
extern Struct_ov031_02290ca0_2 data_ov031_02290ca0;

// USA: func_ov031_0222ec20
extern "C" ARM void func_ov031_0222ec20(void) {
	Struct_ov031_02248fd3 var0 = data_ov031_02248fd3;
	Struct_ov031_02248fa8 var1 = data_ov031_02248fa8;
	Struct_ov031_02248fbd var2 = data_ov031_02248fbd;

	volatile unsigned short* var3 = (volatile unsigned short*)0x400000c;
	*var3 = (*var3 & 0x43) | 0xe18;

	func_ov031_022234d8(data_ov031_0224bb0c, (void*)LoadToMainObjStandardPalette);
	func_ov031_022234d8(data_ov031_0224bb20, (void*)LoadToMainBG3CharacterData);
	func_ov031_022234d8(data_ov031_0224bb38, (void*)LoadToMainBG2CharacterData);
	func_ov031_022234d8(&var1, (void*)LoadToMainBGStandardPalette);
	func_ov031_022234d8(data_ov031_0224bb50, (void*)LoadToMainBG3ScreenData);

	int var4 = func_ov031_02223478(&var0);
	int var5 = func_ov031_0223b61c(var4, 0, 4);
	data_ov031_02290ca0.unknown_8_->unknown_8_ = var5;
	func_ov031_02234ea8((void*)data_ov031_02290ca0.unknown_8_->unknown_8_);
	func_ov031_02234f34();
	int var6 = func_ov031_02223478(&var1);
	int var7 = func_ov031_0223b61c(var6, 0, 4);
	data_ov031_02290ca0.unknown_8_->unknown_c_ = var7;
	int var8 = func_ov031_02223478(&var2);
	int var9 = func_ov031_0223b61c(var8, 0, 4);
	data_ov031_02290ca0.unknown_8_->unknown_10_ = var9;

	volatile unsigned short* var10 = (volatile unsigned short*)0x4001008;
	volatile unsigned short* var11 = (volatile unsigned short*)0x4000008;
	volatile unsigned short* var12 = (volatile unsigned short*)0x400000a;
	*var10 = (*var10 & ~3) | 3;
	*(var10 + 1) = (*(var10 + 1) & ~3) | 3;
	*var11 = (*var11 & ~3) | 3;
	*var12 = (*var12 & ~3) | 2;
	*(var12 + 1) = (*(var12 + 1) & ~3) | 3;
	*(var12 + 2) = (*(var12 + 2) & ~3) | 2;
}
