#include <globaldefs.h>

extern "C" void* func_ov031_0220510c(int arg0);

struct Struct_ov031_02205134 {
	void* unknown_0_;
	void* unknown_4_;
	int unknown_8_;
	signed char unknown_c_;
	unsigned char unknown_d_;
};

// USA: func_ov031_02205134
extern "C" ARM void* func_ov031_02205134(void* arg0, void* arg1, int arg2) {
	Struct_ov031_02205134* var0 = (Struct_ov031_02205134*)func_ov031_0220510c(arg2);
	if (var0 == NULL) return var0;
	var0->unknown_0_ = arg0;
	var0->unknown_4_ = arg1;
	var0->unknown_8_ = 0;
	var0->unknown_c_ = *((signed char*)arg1 + 0x73);
	var0->unknown_d_ = (unsigned char)arg2;
	return var0;
}
