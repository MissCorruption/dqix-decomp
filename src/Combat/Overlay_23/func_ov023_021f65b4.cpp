#include <globaldefs.h>

struct Struct_ov023_021f65b4 { char unknown_0_[0x5c]; unsigned short unknown_5c_; unsigned short unknown_5e_; };

extern "C" struct Struct_ov023_021f65b4* func_ov023_021f6524(void* arg0, void* arg1);

// USA: func_ov023_021f65b4
extern "C" ARM void func_ov023_021f65b4(void* arg0, void* arg1, short arg2, short arg3) {
	struct Struct_ov023_021f65b4* var0 = func_ov023_021f6524(arg0, arg1);
	if (var0 != 0) {
		var0->unknown_5c_ = arg2;
		var0->unknown_5e_ = arg3;
	}
}
