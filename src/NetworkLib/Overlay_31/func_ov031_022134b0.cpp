#include <globaldefs.h>

struct Struct_ov031_022134b0
{
	unsigned char unknown_0_[9];
	unsigned char unknown_9_;
};

struct Struct_ov031_0224e5c4_6
{
	unsigned char unknown_0_[0xc];
	Struct_ov031_022134b0* unknown_c_;
};

extern Struct_ov031_0224e5c4_6 data_ov031_0224e5c4;

// USA: func_ov031_022134b0
extern "C" ARM int func_ov031_022134b0(void) {
	Struct_ov031_022134b0* var0 = data_ov031_0224e5c4.unknown_c_;
	if (var0 != NULL) {
		return var0->unknown_9_;
	}
	return 0;
}
