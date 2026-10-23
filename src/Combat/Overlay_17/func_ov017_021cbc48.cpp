#include <globaldefs.h>

extern "C" void func_ov017_021cbdcc(void* arg0);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021cbc48 {
	unsigned short unknown_0_;
	unsigned short unknown_2_;
	int unknown_4_;
	unsigned char unknown_8_;
	signed char unknown_9_;
	unsigned char unknown_a_;
	unsigned char unknown_b_;
	unsigned char unknown_c_;
	short unknown_e_;
};

struct Struct_ov017_021cbc48_2 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	unsigned short unknown_4_;
	unsigned short unknown_6_;
	int unknown_8_;
	unsigned char unknown_c_;
	signed char unknown_d_;
	unsigned char unknown_e_;
	unsigned char unknown_f_;
	unsigned char unknown_10_;
	unsigned char unknown_11_;
	short unknown_12_;
};

// USA: func_ov017_021cbc48
extern "C" ARM void func_ov017_021cbc48(Struct_ov017_021cbc48* arg0) {
	func_ov017_021cbdcc(arg0);
	void* var0 = func_0202ae24();

	Struct_ov017_021cbc48_2 var1;
	var1.unknown_0_ = 0x64;
	var1.unknown_4_ = arg0->unknown_0_;
	var1.unknown_6_ = arg0->unknown_2_;
	var1.unknown_8_ = arg0->unknown_4_;
	var1.unknown_c_ = arg0->unknown_8_;
	var1.unknown_d_ = arg0->unknown_9_;
	var1.unknown_e_ = arg0->unknown_a_;
	var1.unknown_f_ = arg0->unknown_b_;
	var1.unknown_10_ = arg0->unknown_c_;
	var1.unknown_12_ = arg0->unknown_e_;
	func_0205e330(var0, &var1, 0);
}
