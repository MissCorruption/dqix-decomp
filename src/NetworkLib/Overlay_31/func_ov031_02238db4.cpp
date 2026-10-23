#include <globaldefs.h>

extern "C" void func_ov027_021dcd20(void);

struct Struct_ov031_02238db4 { unsigned short unknown_0_; unsigned short unknown_2_; unsigned char unknown_4_[8]; unsigned short unknown_c_; };
struct Struct_ov031_02290d14 { struct Struct_ov031_02238db4* unknown_0_; };
extern struct Struct_ov031_02290d14 data_ov031_02290d14;

// USA: func_ov031_02238db4
extern "C" ARM void func_ov031_02238db4(void) {
	struct Struct_ov031_02238db4* var0 = data_ov031_02290d14.unknown_0_;
	if (var0->unknown_0_ == 4 && var0->unknown_2_ == var0->unknown_c_) {
		func_ov027_021dcd20();
	}
}
