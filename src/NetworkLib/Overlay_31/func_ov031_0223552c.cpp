#include <globaldefs.h>

struct Struct_ov031_0223552c {
	unsigned char unknown_0_[0x12];
	unsigned short unknown_12_;
	unsigned char unknown_14_[0x19 - 0x14];
	unsigned char unknown_19_;
	unsigned char unknown_1a_[0x1b - 0x1a];
	unsigned char unknown_1b_;
	unsigned char unknown_1c_[0x1d - 0x1c];
	unsigned char unknown_1d_;
};
extern Struct_ov031_0223552c* data_ov031_02290cf4;
extern unsigned char data_ov031_022491f4[];

struct Struct_ov031_0223552c_2 { unsigned short unknown_0_; unsigned short unknown_2_; };
extern "C" int func_ov031_0223d69c(void*);
extern "C" ARM void func_ov031_02235744(int);

// USA: func_ov031_0223552c
extern "C" ARM void func_ov031_0223552c(void) {
	struct Struct_ov031_0223552c_2 var0;
	func_ov031_0223d69c(&var0);
	Struct_ov031_0223552c* var1 = data_ov031_02290cf4;
	unsigned int var2 = data_ov031_022491f4[var1->unknown_1b_];
	int var3 = var0.unknown_2_ - var1->unknown_12_;
	var3 -= var2 >> 1;
	if (var3 < 0) {
		var3 = 0;
	} else {
		int var4 = var1->unknown_19_ - var2;
		if (var3 >= var4) var3 = var4;
	}
	func_ov031_02235744(var3);
	data_ov031_02290cf4->unknown_1d_ = 3;
}
