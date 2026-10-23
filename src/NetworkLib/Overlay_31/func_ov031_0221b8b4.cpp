#include <globaldefs.h>

struct Struct_ov031_0224e6a0_4 {
	unsigned short unknown_0_;
	unsigned short unknown_2_;
	int unknown_4_;
};

extern Struct_ov031_0224e6a0_4 data_ov031_0224e6a0;

// USA: func_ov031_0221b8b4
extern "C" ARM unsigned int func_ov031_0221b8b4(int arg0, int arg1, int arg2) {
	data_ov031_0224e6a0.unknown_0_ = (unsigned char)arg1;
	data_ov031_0224e6a0.unknown_4_ = 1;
	if (arg2 != 0) {
		data_ov031_0224e6a0.unknown_0_ = 0xff;
	}
	return data_ov031_0224e6a0.unknown_0_;
}
