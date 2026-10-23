#include <globaldefs.h>

struct Struct_ov031_022407e4;
extern "C" int func_ov031_022407e4(struct Struct_ov031_022407e4* arg0, unsigned int arg1);
extern "C" int func_ov031_02241480(void*, int, int, int, int);

struct Struct_ov031_02240820 { unsigned char unknown_0_[0xc]; int unknown_c_; unsigned char unknown_10_[8]; int unknown_18_; };
struct Struct_ov031_02240820_2 { unsigned char unknown_0_[0x30]; struct Struct_ov031_02240820* unknown_30_; };

// USA: func_ov031_02240820
extern "C" ARM int func_ov031_02240820(struct Struct_ov031_02240820_2* arg0, int arg1, int arg2, int arg3, int arg4) {
	struct Struct_ov031_02240820* var0 = arg0->unknown_30_;
	if (func_ov031_022407e4((struct Struct_ov031_022407e4*)var0, arg2)) {
		return -1003;
	}
	int var1 = var0->unknown_c_ - arg2;
	if (arg3 <= var1) var1 = arg3;
	return func_ov031_02241480(arg0, arg1, var0->unknown_18_ + arg2, var1, arg4);
}
