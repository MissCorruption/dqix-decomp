#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

struct Struct_ov031_022386d4_4 {
	unsigned char unknown_0_;
	unsigned char unknown_1_;
	unsigned char unknown_2_;
	unsigned char unknown_3_;
	unsigned short unknown_4_[11];
	unsigned short unknown_1a_;
	unsigned short unknown_1c_[27];
	unsigned short unknown_52_;
};

struct Struct_ov031_022386d4 {
	unsigned char unknown_0_0_ : 4;
	unsigned char unknown_0_4_ : 4;
	unsigned char unknown_1_;
	unsigned short unknown_2_[10];
};

struct Struct_ov031_022386d4_2 {
	unsigned short unknown_0_[7];
};

struct Struct_ov031_022386d4_3 {
	struct Struct_ov031_022386d4_2 unknown_0_;
	char unknown_e_[0x40 - 0xe];
	char unknown_40_[0x10000];
	char unknown_10040_[0x1b140 - 0x10040];
	void* unknown_1b140_;
};

extern struct Struct_ov031_022386d4_3* data_ov031_02290d14;

extern "C" void func_020c99c8(void* arg0);
extern "C" void* VectorizedInvertedMemcpy(void* src, void* dst, int n);
extern "C" int func_ov027_021dc680(void* arg0, struct Struct_ov031_022386d4* arg1, void* arg2, unsigned short arg3, int arg4);
extern "C" void func_020c9be0(void);
extern "C" int func_ov027_021dc8d4(int arg0, int arg1);
extern "C" void func_ov023_021d8a40(void* arg0);
extern "C" void func_ov031_02238de4(void);
extern "C" void func_ov031_02239108(unsigned short arg0);

// USA: func_ov031_022386d4
extern "C" ARM void func_ov031_022386d4(void* arg0, unsigned short arg1) {
	struct Struct_ov031_022386d4_4 var0;
	struct Struct_ov031_022386d4 var1;
	func_020c99c8(&var0);
	var1.unknown_0_0_ = var0.unknown_1_;
	var1.unknown_1_ = var0.unknown_1a_;
	VectorizedInvertedMemcpy(var0.unknown_4_, var1.unknown_2_, var0.unknown_1a_ * 2);
	var1.unknown_0_4_ = 0;
	struct Struct_ov031_022386d4_2 var2 = {0};
	data_ov031_02290d14->unknown_0_ = var2;
	data_ov031_02290d14->unknown_1b140_ = data_ov031_02290d14->unknown_10040_;
	if (func_ov027_021dc680(data_ov031_02290d14->unknown_1b140_, &var1, arg0, arg1, 2) != 0) {
		func_020c9be0();
	}
	func_ov027_021dc8d4(0x100, 1);
	func_ov023_021d8a40((void*)func_ov031_02238de4);
	func_ov031_02239108(1);
}
