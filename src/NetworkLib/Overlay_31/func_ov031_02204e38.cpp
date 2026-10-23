#include <globaldefs.h>
#include <NitroSDK/Memory.h>

extern "C" void func_ov031_0220057c(unsigned int arg0);
extern "C" void func_ov031_0220f0e4(int arg0);
extern "C" void func_ov031_02200524(int arg0);
extern "C" void func_ov031_02200298(void* arg0);
extern "C" void func_ov031_02200aa0(void);
extern "C" int func_ov031_02205018(void);
extern "C" void func_ov031_02206c08(void);
extern "C" void func_ov031_02205000(void);
extern "C" void func_ov031_02204f94(void);

struct Struct_ov031_02204e38 {
	int unknown_0_;
	char unknown_4_[0x14];
	void* (*unknown_18_)(int);
	void (*unknown_1c_)(void*);
	char unknown_20_[4];
	int unknown_24_;
	void* unknown_28_;
	int unknown_2c_;
	int unknown_30_;
	int unknown_34_;
};
extern Struct_ov031_02204e38* data_ov031_022496a4;

struct Struct_ov031_022496c4 {
	unsigned short unknown_0_;
	unsigned short unknown_2_;
	unsigned short unknown_4_;
	char unknown_6_[0x12];
};
extern Struct_ov031_022496c4 data_ov031_022496c4;
extern int data_ov031_0224c9d0;

struct Struct_ov031_02204e38_2 {
	int unknown_0_;
	void* (*unknown_4_)(int);
	void (*unknown_8_)(void*);
	void (*unknown_c_)(void);
	int (*unknown_10_)(void);
	int unknown_14_;
	int unknown_18_;
	void* unknown_1c_;
	int unknown_20_;
	int unknown_24_;
	int unknown_28_;
	int unknown_2c_;
};

struct Struct_ov031_0224e1c0_2 {
	int unknown_0_;
	int unknown_4_;
	int unknown_8_;
	int unknown_c_;
	Struct_ov031_02204e38_2 unknown_10_;
};
extern Struct_ov031_0224e1c0_2 data_ov031_0224e1c0;

enum Enum_ov031_02204e38 { Enum_ov031_02204e38_1 = 1 };

// USA: func_ov031_02204e38
extern "C" ARM void func_ov031_02204e38(void) {
	Struct_ov031_02204e38_2* var0 = &data_ov031_0224e1c0.unknown_10_;
	Struct_ov031_02204e38* var1 = data_ov031_022496a4;
	void* var2;
	int var3;
	int var4;
	Enum_ov031_02204e38 var5;

	VectorizedMemset(var0, 0, sizeof(Struct_ov031_02204e38_2));
	data_ov031_0224e1c0.unknown_10_.unknown_4_ = var1->unknown_18_;
	data_ov031_0224e1c0.unknown_10_.unknown_8_ = var1->unknown_1c_;
	data_ov031_0224e1c0.unknown_10_.unknown_10_ = func_ov031_02205018;
	data_ov031_0224e1c0.unknown_10_.unknown_14_ = 0;
	data_ov031_0224e1c0.unknown_10_.unknown_18_ = 0;
	data_ov031_0224e1c0.unknown_10_.unknown_2c_ = data_ov031_0224e1c0.unknown_0_;

	if (var1->unknown_24_ != 0) {
		var0->unknown_20_ = var1->unknown_24_;
	} else {
		var0->unknown_20_ = 0x4000;
	}
	var2 = var1->unknown_28_;
	if (var2 == NULL) {
		var2 = data_ov031_022496a4->unknown_18_(var0->unknown_20_);
	}
	var0->unknown_1c_ = var2;

	var3 = var1->unknown_30_ != 0 ? var1->unknown_30_ : 0x240;
	var4 = var1->unknown_34_ != 0 ? var1->unknown_34_ : 0x10c0;
	data_ov031_022496c4.unknown_2_ = var4;
	data_ov031_022496c4.unknown_4_ = var4 / 2;
	var0->unknown_24_ = var3 - 0x28;
	data_ov031_0224c9d0 = 0;

	var5 = Enum_ov031_02204e38_1;
	if (var1->unknown_0_ != 0) {
		var0->unknown_0_ = 0;
		var0->unknown_c_ = func_ov031_02205000;
		data_ov031_0224e1c0.unknown_8_ = var5;
		var0->unknown_28_ = data_ov031_0224e1c0.unknown_4_;
	} else {
		data_ov031_0224e1c0.unknown_8_ = 0;
		var0->unknown_0_ = var5;
		var0->unknown_c_ = func_ov031_02204f94;
	}

	func_ov031_0220057c(var1->unknown_2c_ != 0 ? var1->unknown_2c_ : 0xb);
	func_ov031_0220f0e4((int)func_ov031_02200aa0);
	func_ov031_02200524((int)func_ov031_02206c08);
	func_ov031_02200298(var0);
}
