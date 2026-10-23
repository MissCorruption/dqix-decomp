#include <globaldefs.h>

struct Struct_ov009_02188454 { unsigned int unknown_0_, unknown_4_, unknown_8_; };

// USA: func_ov023_021e60c4
extern "C" ARM void func_ov023_021e60c4(void* arg0, struct Struct_ov009_02188454* arg1) {
	struct Struct_ov009_02188454* var0 = (struct Struct_ov009_02188454*)((char*)arg0 + 0x50);
	var0->unknown_0_ = arg1->unknown_0_;
	var0->unknown_4_ = arg1->unknown_4_;
	var0->unknown_8_ = arg1->unknown_8_;
}
