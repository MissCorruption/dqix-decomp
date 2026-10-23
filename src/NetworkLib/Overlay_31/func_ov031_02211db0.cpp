#include <globaldefs.h>

struct Struct_ov031_02211db0 {
	int unknown_0_;
	unsigned short unknown_4_;
	char unknown_6_[0xc - 0x6];
	unsigned char unknown_c_;
};

struct Struct_ov031_0224e5b4_5 {
	char unknown_0_[4];
	Struct_ov031_02211db0* unknown_4_;
};

extern Struct_ov031_0224e5b4_5 data_ov031_0224e5b4;
extern "C" void func_ov031_02211f24(void);

// USA: func_ov031_02211db0
extern "C" ARM int func_ov031_02211db0(void) {
	Struct_ov031_02211db0* var0 = data_ov031_0224e5b4.unknown_4_;
	if (var0 == NULL) return 0;
	if (var0->unknown_0_ != 0) {
		var0->unknown_4_ = 3;
		func_ov031_02211f24();
		var0 = data_ov031_0224e5b4.unknown_4_;
		return var0->unknown_c_ != 0;
	} else {
		return 0;
	}
}
