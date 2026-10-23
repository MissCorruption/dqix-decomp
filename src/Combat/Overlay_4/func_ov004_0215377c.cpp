#include <globaldefs.h>

struct Struct_ov004_0215377c { unsigned int unknown_0_[3]; };

extern "C" void __clear(void* arg0, int arg1);

// USA: func_ov004_0215377c
extern "C" ARM void func_ov004_0215377c(Struct_ov004_0215377c* arg0) {
	Struct_ov004_0215377c var0;
	__clear(&var0, 0xc);
	*arg0 = var0;
}
