#include <globaldefs.h>

extern "C" void* func_ov031_0223cf4c(int arg0, int arg1);

struct Struct_ov031_0223d858 {
	int unknown_0_;
	void* unknown_4_;
	void* unknown_8_;
	int unknown_c_;
};

// USA: func_ov031_0223d858
extern "C" ARM Struct_ov031_0223d858* func_ov031_0223d858(void) {
	Struct_ov031_0223d858* var0 = (Struct_ov031_0223d858*)func_ov031_0223cf4c(0x10, 0x4);
	var0->unknown_0_ = 0;
	var0->unknown_4_ = &var0->unknown_8_;
	var0->unknown_8_ = var0;
	var0->unknown_c_ = 0;
	return var0;
}
