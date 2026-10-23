#include <globaldefs.h>

struct Struct_ov017_021b2010 { unsigned char unknown_0_[0x398]; unsigned char unknown_398_; };
struct Struct_ov004_021583a8_3 { unsigned char unknown_0_[0x24]; Struct_ov017_021b2010* unknown_24_; };

// USA: func_ov017_021b2010
extern "C" ARM unsigned char func_ov017_021b2010(Struct_ov004_021583a8_3* arg0) {
	Struct_ov017_021b2010* var0 = arg0->unknown_24_;
	if (var0) return var0->unknown_398_;
	return 0;
}
