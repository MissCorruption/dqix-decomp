#include <globaldefs.h>

extern "C" void func_ov031_0221ae00(void*);

struct Struct_ov031_0221c3f8_2 { unsigned long long unknown_0_; unsigned long long unknown_8_; int unknown_10_; };
struct Struct_ov031_0221c3f8 { unsigned long long unknown_0_; unsigned long long unknown_8_; int unknown_10_; };

// USA: func_ov031_0221c3f8
extern "C" ARM void func_ov031_0221c3f8(struct Struct_ov031_0221c3f8* arg0) {
	struct Struct_ov031_0221c3f8_2 var0;
	func_ov031_0221ae00(&var0);
	arg0->unknown_0_ = var0.unknown_0_;
	arg0->unknown_8_ = var0.unknown_8_;
	arg0->unknown_10_ = var0.unknown_0_ != 0;
}
