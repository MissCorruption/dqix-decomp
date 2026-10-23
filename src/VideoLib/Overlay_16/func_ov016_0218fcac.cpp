#include <globaldefs.h>

struct Struct_ov016_0219d1c0_2 {
	int unknown_0_;
	int unknown_4_;
	char unknown_8_[0xc - 0x8];
	int unknown_c_;
	int unknown_10_;
	char unknown_14_[0x20 - 0x14];
	int unknown_20_;
};

extern Struct_ov016_0219d1c0_2 data_ov016_0219d1c0;

// USA: func_ov016_0218fcac
extern "C" ARM void func_ov016_0218fcac(void* arg0, int arg1) {
	data_ov016_0219d1c0.unknown_10_ = (int)arg0;
	data_ov016_0219d1c0.unknown_c_ = arg1 & ~3;
	data_ov016_0219d1c0.unknown_4_ = 0;
	data_ov016_0219d1c0.unknown_0_ = 0;
	data_ov016_0219d1c0.unknown_20_ = 0;
}
