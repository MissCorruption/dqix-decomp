#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_ov015_0218f364 {
	char unknown_0_[0x1c];
	unsigned char unknown_1c_;
	char unknown_1d_[0x24 - 0x1d];
	void* unknown_24_;
	char unknown_28_[0x44 - 0x28];
	int unknown_44_;
};

// USA: func_ov015_0218f364
extern "C" ARM void func_ov015_0218f364(struct Struct_ov015_0218f364* arg0, void* arg1) {
	unsigned char var0 = arg0->unknown_1c_;
	switch (var0) {
	case 0:
	case 1:
		((Object3D*)arg0->unknown_24_)->MaybeSetRegularAnimation((char const*)arg1, arg0->unknown_44_ | 8);
		return;
	default:
		((Object3D*)arg0->unknown_24_)->MaybeSetRegularAnimation((char const*)arg1, arg0->unknown_44_ | 8);
		return;
	}
}
