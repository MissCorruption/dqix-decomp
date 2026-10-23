#include <globaldefs.h>

struct Struct_ov016_0218e6a8 { char unknown_0_[0x20]; void* unknown_20_; void* unknown_24_; void* unknown_28_; };

// USA: func_ov016_0218ef2c
extern "C" ARM int func_ov016_0218ef2c(struct Struct_ov016_0218e6a8* arg0) {
	if (arg0->unknown_20_ == NULL) return 0;
	return arg0->unknown_28_ != NULL ? 0x80 : 0x100;
}
