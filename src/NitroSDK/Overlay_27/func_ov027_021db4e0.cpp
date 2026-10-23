#include <globaldefs.h>

struct Struct_ov027_021e33e0_3 {
	unsigned char unknown_0_[8];
	unsigned char* unknown_8_;
	unsigned char* unknown_c_;
};

extern Struct_ov027_021e33e0_3 data_ov027_021e33e0;

typedef void (*Type_ov027_021db4e0)(int, int);

// USA: func_ov027_021db4e0
extern "C" ARM void func_ov027_021db4e0(int arg0) {
	data_ov027_021e33e0.unknown_8_[0x50d] = 0;
	*(unsigned short*)(data_ov027_021e33e0.unknown_c_ + 0x1300 + 0x16) = 0;
	Type_ov027_021db4e0 var0 = *(Type_ov027_021db4e0*)(data_ov027_021e33e0.unknown_8_ + 0x51c);
	if (var0) var0(0x11, arg0);
}
