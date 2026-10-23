#include <globaldefs.h>

struct Struct_ov017_021b1ffc { unsigned char unknown_0_[0x394]; int unknown_394_; };
struct Struct_ov004_021583a8_2 { unsigned char unknown_0_[0x24]; Struct_ov017_021b1ffc* unknown_24_; };

// USA: func_ov017_021b1ffc
extern "C" ARM int func_ov017_021b1ffc(Struct_ov004_021583a8_2* arg0) {
	Struct_ov017_021b1ffc* var0 = arg0->unknown_24_;
	if (var0) return var0->unknown_394_;
	return 0;
}
