#include <globaldefs.h>

struct Struct_ov015_02190d7c { char unknown_0_[0x1a8]; int unknown_1a8_[32]; int unknown_228_; };

// USA: func_ov015_021931b4
extern "C" ARM void func_ov015_021931b4(struct Struct_ov015_02190d7c* arg0, int arg1) {
	arg0->unknown_1a8_[arg0->unknown_228_++] = arg1;
}
