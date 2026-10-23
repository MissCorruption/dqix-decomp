#include <globaldefs.h>

struct Struct_ov015_0218f3c4 {
	char unknown_0_[0x1c];
	int unknown_1c_;
};

struct Struct_ov015_0218f3c4_2 {
	char unknown_0_[0x1c];
	unsigned char unknown_1c_;
	char unknown_1d_[0x24 - 0x1d];
	struct Struct_ov015_0218f3c4* unknown_24_;
};

// USA: func_ov015_0218f3c4
extern "C" ARM float func_ov015_0218f3c4(struct Struct_ov015_0218f3c4_2* arg0) {
	switch (arg0->unknown_1c_) {
	case 0:
	case 1:
		return (float)arg0->unknown_24_->unknown_1c_ / 4096.0f;
	default:
		return (float)arg0->unknown_24_->unknown_1c_ / 4096.0f;
	}
}
