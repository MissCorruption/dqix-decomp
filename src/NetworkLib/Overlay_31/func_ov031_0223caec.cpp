#include <globaldefs.h>

struct Struct_ov031_0223caec { char unknown_0_[0x67c]; unsigned char unknown_67c_; unsigned char unknown_67d_; };
extern struct Struct_ov031_0223caec* data_ov031_02290d38;

// USA: func_ov031_0223caec
extern "C" ARM void func_ov031_0223caec(void* arg0) {
	struct Struct_ov031_0223caec* var0 = data_ov031_02290d38;
	if (arg0 == (char*)var0 + 0x610) {
		var0->unknown_67c_ = 1;
	} else {
		var0->unknown_67d_ = 1;
	}
}
