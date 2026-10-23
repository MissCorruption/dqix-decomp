#include <globaldefs.h>

extern "C" void* func_ov023_021db4e4(void*, void*, int, int);

struct Struct_ov023_021db544 { char unknown_0_[0x8]; short unknown_8_; short unknown_a_; };

// USA: func_ov023_021db544
extern "C" ARM void* func_ov023_021db544(void* arg0, void* arg1, int arg2, int arg3) {
	struct Struct_ov023_021db544* var0 = (struct Struct_ov023_021db544*)func_ov023_021db4e4(arg0, arg1, arg2, arg3);
	if (var0 != 0) {
		var0->unknown_8_ = (short)arg2;
		var0->unknown_a_ = (short)arg3;
	}
	return var0;
}
