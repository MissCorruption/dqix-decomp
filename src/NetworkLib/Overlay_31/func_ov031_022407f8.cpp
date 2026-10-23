#include <globaldefs.h>

struct Struct_ov031_022407f8_2 { unsigned char unknown_0_[0xc]; int unknown_c_; unsigned char unknown_10_[8]; int unknown_18_; };
struct Struct_ov031_022407f8 { unsigned char unknown_0_[0x30]; struct Struct_ov031_022407f8_2* unknown_30_; };

extern "C" int func_ov031_02241480(void*, int, int, int, int);

// USA: func_ov031_022407f8
extern "C" ARM int func_ov031_022407f8(struct Struct_ov031_022407f8* arg0, int arg1, int arg2, int arg3) {
	struct Struct_ov031_022407f8_2* var0 = arg0->unknown_30_;
	return func_ov031_02241480(arg0, arg1, var0->unknown_18_ + arg2, var0->unknown_c_ - arg2, arg3);
}
