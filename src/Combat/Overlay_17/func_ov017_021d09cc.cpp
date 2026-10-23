#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021d09cc {
	unsigned short unknown_0_;
	unsigned char unknown_2_;
	unsigned char unknown_3_;
	unsigned int unknown_4_;
	unsigned int unknown_8_;
};

struct Struct_ov017_021d09cc_2 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	Struct_ov017_021d09cc unknown_4_;
	unsigned char unknown_10_[4];
};

// USA: func_ov017_021d09cc
extern "C" ARM void func_ov017_021d09cc(int arg0, int arg1, int arg2, int arg3) {
	Struct_ov017_021d09cc_2 var0;
	void* var1 = func_0202ae24();
	Struct_ov017_021d09cc* var2 = &var0.unknown_4_;
	var0.unknown_0_ = 0x8b;
	var2->unknown_0_ = (unsigned short)arg0;
	var2->unknown_2_ = (unsigned char)arg1;
	var2->unknown_4_ = arg2;
	var2->unknown_8_ = arg3;
	func_0205e330(var1, &var0, 0);
}
