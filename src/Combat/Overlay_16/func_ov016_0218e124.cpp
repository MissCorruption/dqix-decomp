#include <globaldefs.h>

struct Struct_ov016_0218b5c4_6 {
	unsigned short unknown_0_;
	char unknown_2_[0x18 - 2];
	Struct_ov016_0218b5c4_6* unknown_18_;
};

// USA: func_ov016_0218e124
extern "C" ARM void* func_ov016_0218e124(Struct_ov016_0218b5c4_6** arg0, int arg1) {
	Struct_ov016_0218b5c4_6* var0 = *arg0;
	while (var0) {
		if (var0->unknown_0_ == arg1) return var0;
		var0 = var0->unknown_18_;
	}
	return NULL;
}
