#include <globaldefs.h>

struct Struct_ov031_0223d354 { unsigned char unknown_0_[0x32]; unsigned short unknown_32_; };
struct Struct_ov031_02290d40_3 { unsigned char unknown_0_[4]; struct Struct_ov031_0223d354* unknown_4_; };
extern struct Struct_ov031_02290d40_3 data_ov031_02290d40;

// USA: func_ov031_0223d354
extern "C" ARM int func_ov031_0223d354(int arg0) {
	int var0 = *(unsigned short*)0x27fffa8 & 0x8000;
	if (var0 >> 15) {
		return 0;
	}
	int var1 = data_ov031_02290d40.unknown_4_->unknown_32_;
	int var2 = arg0 & var1;
	return (arg0 == var2) ? 1 : 0;
}
