#include <globaldefs.h>

struct Struct_ov031_02239bc0 { unsigned char unknown_0_[8]; int unknown_8_; };
struct Struct_ov031_02290d18_16 { unsigned char unknown_0_[4]; struct Struct_ov031_02239bc0* unknown_4_; };
extern struct Struct_ov031_02290d18_16 data_ov031_02290d18;

// USA: func_ov031_02239bc0
extern "C" ARM void func_ov031_02239bc0(int arg0) {
	data_ov031_02290d18.unknown_4_->unknown_8_ = arg0;
}
