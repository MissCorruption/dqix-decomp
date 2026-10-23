#include <globaldefs.h>

struct Struct_ov015_0218f344 {
	char unknown_0_[0xc];
	int unknown_c_;
};

struct Struct_ov015_0218f344_2 {
	char unknown_0_[0x1c];
	unsigned char unknown_1c_;
	char unknown_1d_[0x24 - 0x1d];
	struct Struct_ov015_0218f344* unknown_24_;
};

// USA: func_ov015_0218f344
extern "C" ARM int func_ov015_0218f344(struct Struct_ov015_0218f344_2* arg0) {
	unsigned char var0 = arg0->unknown_1c_;
	switch (var0) {
	case 0:
	case 1:
		return arg0->unknown_24_->unknown_c_;
	default:
		return arg0->unknown_24_->unknown_c_;
	}
}
