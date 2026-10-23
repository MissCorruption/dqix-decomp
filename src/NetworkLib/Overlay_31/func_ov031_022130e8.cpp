#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" void* func_ov031_022133f8(int);
extern "C" void func_ov031_0221314c(int, int, int);

struct Struct_ov031_022130e8 {
	unsigned char unknown_0_[0x18];
	unsigned char unknown_18_[0xa];
	unsigned char unknown_22_;
};

// USA: func_ov031_022130e8
extern "C" ARM void func_ov031_022130e8(int arg0, int arg1, int arg2, int arg3, int arg4) {
	Struct_ov031_022130e8* var0 = (Struct_ov031_022130e8*)func_ov031_022133f8(1);
	if (arg3 != 0) {
		VectorizedInvertedMemcpy((void*)arg3, var0->unknown_18_, 0xa);
	} else {
		VectorizedMemset(var0->unknown_18_, 0, 0xa);
	}
	var0->unknown_22_ = arg4;
	func_ov031_0221314c(arg0, arg1, arg2);
}
