#include <globaldefs.h>

struct Struct_ov015_0218bb3c_2 { char unknown_0_[8]; int unknown_8_; char unknown_c_[0xa2]; unsigned char unknown_ae_; };

// USA: func_ov015_0218bc9c
extern "C" ARM int func_ov015_0218bc9c(struct Struct_ov015_0218bb3c_2* arg0) {
	if (arg0->unknown_8_ & 0x10) return arg0->unknown_ae_;
	return -1;
}
