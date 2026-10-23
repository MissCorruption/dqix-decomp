#include <globaldefs.h>

extern "C" int func_020c7e0c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov031_02205174(int arg0);

struct Struct_ov031_022051a8 { unsigned char unknown_0_[0xd]; signed char unknown_d_; };

// USA: func_ov031_022051a8
extern "C" ARM int func_ov031_022051a8(void* arg0, struct Struct_ov031_022051a8* arg1) {
	int var0 = (arg1 == NULL || (arg1->unknown_d_ & 1) != 0) ? 1 : 0;
	int var1 = func_020c7e0c(arg0, arg1, var0);
	if (var1 == 0) {
		func_ov031_02205174((int)arg1);
	}
	return (var1 != 0) ? 0 : -42;
}
