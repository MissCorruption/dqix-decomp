#include <globaldefs.h>

struct Struct_ov011_02186f08 { char unknown_0_[0xc]; unsigned char unknown_c_; char unknown_d_[3]; void* unknown_10_; char unknown_14_[0x1c - 0x14]; int unknown_1c_; };

// USA: func_ov023_021f79ec
extern "C" ARM void func_ov023_021f79ec(struct Struct_ov011_02186f08* arg0, void* arg1) {
	arg0->unknown_10_ = arg1;
	arg0->unknown_1c_ = 0;
	arg0->unknown_c_ |= 3;
}
