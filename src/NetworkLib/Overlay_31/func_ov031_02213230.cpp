#include <globaldefs.h>

struct Struct_ov031_02213230 { int (*unknown_0_)(int, void*); unsigned char unknown_4_[4]; unsigned char unknown_8_; };
extern "C" Struct_ov031_02213230* func_ov031_022133f8(int);

// USA: func_ov031_02213230
extern "C" ARM int func_ov031_02213230(int arg0, void* arg1) {
	Struct_ov031_02213230* var0 = func_ov031_022133f8(1);
	if (var0->unknown_8_ & arg0) return 0;
	var0->unknown_8_ |= arg0;
	return var0->unknown_0_(arg0, arg1);
}
