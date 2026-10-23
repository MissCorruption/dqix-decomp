#include <globaldefs.h>

struct Struct_ov031_02222f44_2;
extern "C" void func_ov031_0223bd28(Struct_ov031_02222f44_2*, int, unsigned int*, unsigned int*);

struct Struct_ov031_02224248 {
	unsigned char unknown_0_[0xfc];
	Struct_ov031_02222f44_2* unknown_fc_;
	unsigned char unknown_100_[0x11d - 0x100];
	unsigned char unknown_11d_;
};
extern Struct_ov031_02224248* data_ov031_02250bfc;

extern "C" void func_ov031_02224ca4(int arg0, int arg1, int arg2);
extern "C" void func_ov031_0222506c(void);
extern "C" void func_ov031_0223e2b8(void* arg0, int arg1);
extern "C" void func_ov031_022242d4(void);

// USA: func_ov031_02224248
extern "C" ARM void func_ov031_02224248(void* arg0) {
	unsigned int var0, var1;
	func_ov031_0223bd28(data_ov031_02250bfc->unknown_fc_, 0, &var0, &var1);
	int var2 = (int)var1 - 0xc;
	var1 = (unsigned int)var2;
	if (var2 > 0xaa) {
		func_ov031_02224ca4(data_ov031_02250bfc->unknown_11d_, 4, var2);
		return;
	}
	func_ov031_02224ca4(data_ov031_02250bfc->unknown_11d_, 4, 0xaa);
	func_ov031_0222506c();
	func_ov031_0223e2b8(arg0, (int)func_ov031_022242d4);
}
