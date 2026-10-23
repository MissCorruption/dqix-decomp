#include <globaldefs.h>

extern "C" unsigned int func_ov031_022070bc(unsigned int arg0);

struct Struct_ov031_022054fc {
	unsigned short unknown_0_;
	unsigned char unknown_2_;
	unsigned char unknown_3_;
};
extern "C" ARM int func_ov031_022054fc(Struct_ov031_022054fc* arg0);

struct Struct_ov031_0220547c {
	char unknown_0_[0x2];
	unsigned short unknown_2_;
	char unknown_4_[0x2];
	unsigned short unknown_6_;
	unsigned short unknown_8_;
	unsigned short unknown_a_;
	unsigned short unknown_c_;
	char unknown_e_[0x2];
	Struct_ov031_022054fc unknown_10_;
	Struct_ov031_022054fc unknown_14_;
};

// USA: func_ov031_0220547c
extern "C" ARM int func_ov031_0220547c(Struct_ov031_0220547c* arg0) {
	int var0 = 0x80;
	if (arg0->unknown_2_ != 0) {
		var0 += 0x114;
		var0 += func_ov031_022070bc(arg0->unknown_2_);
		var0 += func_ov031_022070bc(arg0->unknown_8_);
		var0 += func_ov031_022054fc(&arg0->unknown_10_);
	}
	if (arg0->unknown_6_ != 0) {
		var0 += 0x110;
		var0 += func_ov031_022070bc(arg0->unknown_6_);
		var0 += func_ov031_022070bc(arg0->unknown_a_);
		var0 += func_ov031_022070bc(arg0->unknown_c_);
		var0 += func_ov031_022054fc(&arg0->unknown_14_);
	}
	return var0;
}
