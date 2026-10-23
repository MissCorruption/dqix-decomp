#include <globaldefs.h>

struct Struct_ov031_0223d3d4 { unsigned char unknown_0_[0x36]; unsigned short unknown_36_; };
struct Struct_ov031_02290d40_5 { unsigned char unknown_0_[4]; struct Struct_ov031_0223d3d4* unknown_4_; };
extern struct Struct_ov031_02290d40_5 data_ov031_02290d40;

// USA: func_ov031_0223d3d4
extern "C" ARM int func_ov031_0223d3d4(int arg0) {
	int var0 = *(unsigned short*)0x27fffa8 & 0x8000;
	if (var0 >> 15) {
		return 0;
	}
	int var1 = data_ov031_02290d40.unknown_4_->unknown_36_;
	int var2 = arg0 & var1;
	return (arg0 == var2) ? 1 : 0;
}
