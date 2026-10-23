#include <globaldefs.h>

struct Struct_ov031_0223a274 { unsigned char unknown_0_[0x4c]; int unknown_4c_; };
struct Struct_ov031_02290d18_24 { unsigned char unknown_0_[4]; struct Struct_ov031_0223a274* unknown_4_; };
extern struct Struct_ov031_02290d18_24 data_ov031_02290d18;

// USA: func_ov031_0223a274
extern "C" ARM void func_ov031_0223a274(int arg0) {
	data_ov031_02290d18.unknown_4_->unknown_4c_ = arg0;
}
