#include <globaldefs.h>

struct Struct_ov015_0218b5c8 {
	int unknown_0_;
	int unknown_4_;
	unsigned short unknown_8_;
	unsigned char unknown_a_;
	unsigned char unknown_b_;
};

struct Struct_ov015_0218b9d4 {
	Struct_ov015_0218b5c8* unknown_0_;
	int unknown_4_;
	int unknown_8_;
};

// USA: func_ov015_0218b9d4
extern "C" ARM void func_ov015_0218b9d4(struct Struct_ov015_0218b9d4* arg0, struct Struct_ov015_0218b5c8* arg1) {
	int var0 = arg0->unknown_8_;
	Struct_ov015_0218b5c8* var1;
	arg0->unknown_8_ = var0 + 1;
	var1 = arg0->unknown_0_ + var0;
	var1->unknown_0_ = arg1->unknown_0_;
	var1->unknown_4_ = arg1->unknown_4_;
	var1->unknown_8_ = arg1->unknown_8_;
	var1->unknown_a_ = arg1->unknown_a_;
	var1->unknown_b_ = arg1->unknown_b_;
}
