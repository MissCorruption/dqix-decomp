#include <globaldefs.h>

extern "C" void func_ov027_021dca40(int arg0);

struct Struct_ov027_021e33e0_10 {
	unsigned char unknown_0_[0xc];
	char* unknown_c_;
};

extern Struct_ov027_021e33e0_10 data_ov027_021e33e0;

// USA: func_ov027_021dcc24
extern "C" ARM void func_ov027_021dcc24(int arg0) {
	*(int*)(data_ov027_021e33e0.unknown_c_ + 0x1000 + 0x320) = 1;
	func_ov027_021dca40(arg0);
}
