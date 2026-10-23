#include <globaldefs.h>

struct Struct_ov031_02222ddc {
	unsigned char unknown_0_[0xc];
	int unknown_c_;
	unsigned char unknown_10_[9];
	unsigned char unknown_19_;
};

struct Struct_ov031_02250ba8 {
	Struct_ov031_02222ddc *unknown_0_;
};

extern Struct_ov031_02250ba8 data_ov031_02250ba8;

extern "C" void func_ov031_0222318c(void*);
extern "C" int func_ov031_0223e2b8(int, void*);

// USA: func_ov031_02222ddc
extern "C" ARM int func_ov031_02222ddc(void) {
	Struct_ov031_02222ddc *var0 = data_ov031_02250ba8.unknown_0_;
	var0->unknown_19_ = 1;
	Struct_ov031_02222ddc *var1 = data_ov031_02250ba8.unknown_0_;
	return func_ov031_0223e2b8(var1->unknown_c_, (void*)func_ov031_0222318c);
}
