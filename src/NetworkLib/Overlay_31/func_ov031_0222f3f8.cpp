#include <globaldefs.h>

struct Struct_ov031_02290ca0_6 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[7];
	unsigned char* unknown_8_;
};
extern struct Struct_ov031_02290ca0_6 data_ov031_02290ca0;
extern "C" char* func_ov031_02235c70(void);
extern "C" void func_ov031_02235c98(unsigned char);
extern "C" void func_ov031_0222f9ec(void);

// USA: func_ov031_0222f3f8
extern "C" ARM void func_ov031_0222f3f8(unsigned char arg0) {
	char* var0 = func_ov031_02235c70();
	if ((unsigned char)var0[0xf6] == arg0) return;
	data_ov031_02290ca0.unknown_8_[0x43] = arg0;
	func_ov031_02235c98(arg0);
	func_ov031_0222f9ec();
}
