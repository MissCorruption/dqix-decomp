#include <globaldefs.h>

struct Struct_ov015_0218b6e4 { int unknown_0_; int unknown_4_; };
struct Struct_ov015_0218ba1c { void* unknown_0_; Struct_ov015_0218b6e4* unknown_4_; void* unknown_8_; int unknown_c_; };

// USA: func_ov015_0218ba1c
extern "C" ARM void func_ov015_0218ba1c(struct Struct_ov015_0218ba1c* arg0, struct Struct_ov015_0218b6e4* arg1) {
	int var0 = arg0->unknown_c_;
	arg0->unknown_c_ = var0 + 1;
	struct Struct_ov015_0218b6e4* var1 = &arg0->unknown_4_[var0];
	var1->unknown_0_ = arg1->unknown_0_;
	var1->unknown_4_ = arg1->unknown_4_;
}
