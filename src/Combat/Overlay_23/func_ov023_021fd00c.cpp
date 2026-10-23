#include <globaldefs.h>

struct Struct_ov023_021fd00c { unsigned int unknown_0_, unknown_4_, unknown_8_; };

// USA: func_ov023_021fd00c
extern "C" ARM void func_ov023_021fd00c(void* arg0, struct Struct_ov023_021fd00c* arg1) {
	struct Struct_ov023_021fd00c* var0 = (struct Struct_ov023_021fd00c*)((char*)arg0 + 0x64);
	var0->unknown_0_ = arg1->unknown_0_;
	var0->unknown_4_ = arg1->unknown_4_;
	var0->unknown_8_ = arg1->unknown_8_;
}
