#include <globaldefs.h>

struct Struct_ov017_021b204c { unsigned char unknown_0_[0x438]; unsigned char unknown_438_; };
struct Struct_ov004_0215883c_3 { unsigned char unknown_0_[0x24]; Struct_ov017_021b204c* unknown_24_; };

// USA: func_ov017_021b204c
extern "C" ARM unsigned char func_ov017_021b204c(Struct_ov004_0215883c_3* arg0) {
	Struct_ov017_021b204c* var0 = arg0->unknown_24_;
	if (var0) return var0->unknown_438_;
	return 0;
}
