#include <globaldefs.h>

struct Struct_ov017_021b2024 { unsigned char unknown_0_[0x34]; unsigned char unknown_34_; };
struct Struct_ov004_021583a8_4 { unsigned char unknown_0_[0x24]; Struct_ov017_021b2024* unknown_24_; };

// USA: func_ov017_021b2024
extern "C" ARM unsigned char func_ov017_021b2024(Struct_ov004_021583a8_4* arg0) {
	Struct_ov017_021b2024* var0 = arg0->unknown_24_;
	if (var0) return var0->unknown_34_;
	return 0;
}
