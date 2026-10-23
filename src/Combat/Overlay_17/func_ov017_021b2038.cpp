#include <globaldefs.h>

struct Struct_ov017_021b2038 { unsigned char unknown_0_[0x35]; unsigned char unknown_35_; };
struct Struct_ov004_021583a8_5 { unsigned char unknown_0_[0x24]; Struct_ov017_021b2038* unknown_24_; };

// USA: func_ov017_021b2038
extern "C" ARM unsigned char func_ov017_021b2038(Struct_ov004_021583a8_5* arg0) {
	Struct_ov017_021b2038* var0 = arg0->unknown_24_;
	if (var0) return var0->unknown_35_;
	return 0;
}
