#include <globaldefs.h>

struct Struct_ov023_021f8cd4 { unsigned int unknown_0_, unknown_4_, unknown_8_; };

// USA: func_ov023_021f8cd4
extern "C" ARM void func_ov023_021f8cd4(void* arg0, struct Struct_ov023_021f8cd4* arg1) {
	struct Struct_ov023_021f8cd4* var0 = (struct Struct_ov023_021f8cd4*)((char*)arg0 + 0x24);
	var0->unknown_0_ = arg1->unknown_0_;
	var0->unknown_4_ = arg1->unknown_4_;
	var0->unknown_8_ = arg1->unknown_8_;
}
