#include <globaldefs.h>

struct Struct_ov017_021b1fe8 { unsigned char unknown_0_[0x44]; unsigned char unknown_44_; };
struct Struct_ov004_021583a8 { unsigned char unknown_0_[0x24]; Struct_ov017_021b1fe8* unknown_24_; };

// USA: func_ov017_021b1fe8
extern "C" ARM unsigned char func_ov017_021b1fe8(Struct_ov004_021583a8* arg0) {
	Struct_ov017_021b1fe8* var0 = arg0->unknown_24_;
	if (var0) return var0->unknown_44_;
	return 0;
}
