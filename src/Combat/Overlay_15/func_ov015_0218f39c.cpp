#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_0200fd90;

struct Struct_ov015_0218f39c {
	char unknown_0_[0x1c];
	unsigned char unknown_1c_;
	char unknown_1d_[0x24 - 0x1d];
	struct Struct_0200fd90* unknown_24_;
};

// USA: func_ov015_0218f39c
extern "C" ARM void* func_ov015_0218f39c(struct Struct_ov015_0218f39c* arg0, const char* arg1) {
	unsigned char var0 = arg0->unknown_1c_;
	switch (var0) {
	case 0:
	case 1:
		return ((Object3D*)arg0->unknown_24_)->GetLoadedAnimationRecord(arg1);
	default:
		return ((Object3D*)arg0->unknown_24_)->GetLoadedAnimationRecord(arg1);
	}
}
