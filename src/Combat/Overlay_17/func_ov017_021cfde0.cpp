#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021cfde0 {
	unsigned short unknown_0_;
	unsigned short unknown_2_;
	unsigned short unknown_4_;
};

struct Struct_ov017_021cfde0_2 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	Struct_ov017_021cfde0 unknown_4_;
	unsigned char unknown_a_[10];
};

// USA: func_ov017_021cfde0
extern "C" ARM void func_ov017_021cfde0(unsigned short arg0, unsigned short arg1, unsigned short arg2) {
	Struct_ov017_021cfde0_2 var0;
	void* var1 = func_0202ae24();
	Struct_ov017_021cfde0* var2 = &var0.unknown_4_;
	var0.unknown_0_ = 0xa5;
	var2->unknown_0_ = arg0;
	var2->unknown_2_ = arg1;
	var2->unknown_4_ = arg2;
	func_0205e330(var1, &var0, 0);
}
