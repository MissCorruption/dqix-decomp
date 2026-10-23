#include <globaldefs.h>

struct Struct_ov017_021b2060 { unsigned char unknown_0_[0x439]; unsigned char unknown_439_; };
struct Struct_ov004_0215883c_4 { unsigned char unknown_0_[0x24]; Struct_ov017_021b2060* unknown_24_; };

// USA: func_ov017_021b2060
extern "C" ARM unsigned char func_ov017_021b2060(Struct_ov004_0215883c_4* arg0) {
	Struct_ov017_021b2060* var0 = arg0->unknown_24_;
	if (var0) return var0->unknown_439_;
	return 0;
}
