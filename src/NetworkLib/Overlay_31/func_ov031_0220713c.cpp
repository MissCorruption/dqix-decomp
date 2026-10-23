#include <globaldefs.h>

struct Struct_ov031_02207120_2 { unsigned char unknown_0_[0x7c]; Struct_ov031_02207120_2* unknown_7c_; };
struct Struct_ov031_02207120 { Struct_ov031_02207120_2* unknown_0_; };

// USA: func_ov031_0220713c
extern "C" ARM Struct_ov031_02207120_2** func_ov031_0220713c(Struct_ov031_02207120* arg0, Struct_ov031_02207120_2* arg1) {
	Struct_ov031_02207120_2* var0 = arg0->unknown_0_;
	Struct_ov031_02207120_2** var1 = (Struct_ov031_02207120_2**)arg0;
	if (var0 != NULL) {
		do {
			if (var0 == arg1) return var1;
			var1 = &var0->unknown_7c_;
			var0 = var0->unknown_7c_;
		} while (var0 != NULL);
	}
	return NULL;
}
