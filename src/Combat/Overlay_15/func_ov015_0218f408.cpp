#include <globaldefs.h>

struct Struct_ov015_0218f408 {
	char unknown_0_[0x24];
	int unknown_24_;
};

struct Struct_ov015_0218f408_2 {
	char unknown_0_[0x1c];
	unsigned char unknown_1c_;
	char unknown_1d_[0x24 - 0x1d];
	struct Struct_ov015_0218f408* unknown_24_;
};

// USA: func_ov015_0218f408
extern "C" ARM float func_ov015_0218f408(struct Struct_ov015_0218f408_2* arg0) {
	switch (arg0->unknown_1c_) {
	case 0:
	case 1:
		return (float)arg0->unknown_24_->unknown_24_ / 4096.0f;
	default:
		return (float)arg0->unknown_24_->unknown_24_ / 4096.0f;
	}
}
