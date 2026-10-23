#include <globaldefs.h>

extern "C" void func_ov031_022234d8(void* arg0, void* arg1);
extern "C" int func_ov031_02223478(void* arg0);
extern "C" int func_ov031_0223b61c(int arg0, int arg1, int arg2);
extern "C" void func_ov031_0223cb68(int arg0, int arg1);

extern "C" void LoadToMainObjStandardPalette(int, int, unsigned int);
extern "C" void LoadToMainBG2CharacterData(int, int, unsigned int);
extern "C" void LoadToMainBGStandardPalette(int, int, unsigned int);
extern "C" void LoadToMainBG2ScreenData(int, int, unsigned int);

struct Struct_ov031_0224906c {
	unsigned char unknown_0_[22];
};

extern Struct_ov031_0224906c data_ov031_0224906c;
extern unsigned char data_ov031_0224bc94[1];
extern unsigned char data_ov031_0224bca8[1];
extern unsigned char data_ov031_0224bcc0[1];
extern unsigned char data_ov031_0224bcd8[1];

struct Struct_ov031_02290cc0_2 { void* unknown_0_; void* unknown_4_; };
extern Struct_ov031_02290cc0_2 data_ov031_02290cc0;

// USA: func_ov031_02232568
extern "C" ARM void func_ov031_02232568(void) {
	Struct_ov031_0224906c var0 = data_ov031_0224906c;

	func_ov031_022234d8(data_ov031_0224bc94, (void*)LoadToMainObjStandardPalette);
	func_ov031_022234d8(data_ov031_0224bca8, (void*)LoadToMainBG2CharacterData);
	func_ov031_022234d8(data_ov031_0224bcc0, (void*)LoadToMainBGStandardPalette);
	func_ov031_022234d8(data_ov031_0224bcd8, (void*)LoadToMainBG2ScreenData);

	int var1 = func_ov031_02223478(var0.unknown_0_);

	int var2 = func_ov031_0223b61c(var1, 0, 4);
	*(int*)data_ov031_02290cc0.unknown_4_ = var2;
	func_ov031_0223cb68(1, 0x10);

	unsigned short* var3 = (unsigned short*)0x4001008;
	unsigned short* var4 = (unsigned short*)0x400000a;
	var3[0] = (var3[0] & ~3) | 3;
	var3[1] = (var3[1] & ~3) | 3;
	var4[0] = (var4[0] & ~3) | 3;
	var4[1] = (var4[1] & ~3) | 3;
}
