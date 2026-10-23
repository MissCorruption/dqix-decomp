#include <globaldefs.h>

struct Struct_ov016_0218b5c4_5 {
	char unknown_0_[0x18];
	Struct_ov016_0218b5c4_5* unknown_18_;
};

// USA: func_ov016_0218e14c
extern "C" ARM void* func_ov016_0218e14c(Struct_ov016_0218b5c4_5** arg0, int arg1) {
	Struct_ov016_0218b5c4_5* var0 = *arg0;
	while (arg1 > 0) {
		if (var0 == NULL) return NULL;
		var0 = var0->unknown_18_;
		arg1--;
	}
	return var0;
}
