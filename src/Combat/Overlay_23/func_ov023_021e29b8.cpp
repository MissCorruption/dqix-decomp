#include <globaldefs.h>

struct Struct_ov023_021e29b8 {
	char unknown_0_[2];
	unsigned char unknown_2_;
};

extern "C" struct Struct_ov023_021e29b8 *func_ov023_021e2418(void *arg0, int arg1);

// USA: func_ov023_021e29b8
extern "C" ARM void func_ov023_021e29b8(void *arg0, int arg1, unsigned char arg2) {
	struct Struct_ov023_021e29b8 *var0 = func_ov023_021e2418(arg0, arg1);
	if (var0 != NULL) {
		var0->unknown_2_ = arg2;
	}
}
